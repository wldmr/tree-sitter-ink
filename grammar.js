let mark = rule => token(prec(1, rule));
let keyword = str => alias(RegExp(str + '\\s'), str);

// The Ink docs get very specific about which Unicode they allow.
// But just saying Letters and Numbers is so much simpler. This should be fine.
IDENTIFIER_REGEX  = /[\p{Letter}_][\p{Letter}\p{Number}_]*/

PREC = {
  // For ink syntax contstructs that could be confused for text content
  ink: 1,
  // Otherwise it's just text.
  text: 0,
}

/** Create an object with grammar rules corresponding to expressions.

Depending on value for `named`, create a tree of named nodes ($.expr,
$.identifier, etc), or anonymous nodes ($._anon_expr, $._anon_identifier).
(The extra `anon` is added because downstream tools may ignore the leading
underscore and then complain that there are name clashes)

The reason for this is that logic blocks (`{…}`) are ambiguous:
Sometimes they start with an expression (conditional blocks),
sometimes it's just text (alternatives).

To be able to trigger a GLR conflict for this distinction, we need both
cases to create the same tokenization, but depending on which parse wins,
we need different tokens in the parse tree (expressions are a full tree
of named nodes, but text is just one named node (made up of many anonymous ones))

This one is a doozy; maybe skip this part on a first read. It should become
clearer when you see how it is used. Still, I nearly lost my mind writing
this grammar, so be warned.
*/
function make_expr(named = true) {
  let rule = str => named ? str : '_anon_' + str;

  let binop = ($, precedence, ...operators) => prec.left(precedence, seq(
    field('left', $[rule('expr')]),
    field('op', choice(...operators)),
    field('right', $[rule('expr')]))
  );

  return {
    [rule('expr')]: $ => choice(

      // terminals
      $[rule('identifier')],
      $[rule('qualified_name')],
      $[rule('number')],
      $[rule('boolean')],
      $[rule('string')],
      $[rule('divert')],

      // compound
      $[rule('call')],
      $[rule('paren')],
      $[rule('list_values')],
      $[rule('unary')],
      $[rule('postfix')],
      $[rule('binary')],

    ),

    [rule('call')]: $ => prec.left(11, seq(
      field('name', choice($[rule('identifier')], $[rule('qualified_name')])),
      '(',
      field('args', optional($[rule('args')])),
      ')'
    )),
    [rule('args')]: $ => sepBy1(',', $[rule('expr')]),

    [rule('list_values')]: $ => seq(
      '(',
      optional(sepBy1(',',
        choice(
          $[rule('identifier')],
          $[rule('qualified_name')]
        ),
      )),
      ')',
    ),

    [rule('paren')]: $ => prec.left(15, seq('(', $[rule('expr')], ')')),
    [rule('unary')]: $ => prec.left(14, seq(
      field('op', choice('not', '!', '-')),
      field('right', $[rule('expr')])
    )),
    [rule('postfix')]: $ => prec.left(13, seq(
      field('left', $[rule('identifier')]),
      field('op', choice('--', '++'))
    )),
    [rule('binary')]: $ => choice(
      binop($, 8, '%', 'mod'),
      binop($, 7, '/'),
      binop($, 6, '*'),
      binop($, 5, '-',),
      binop($, 4, '+',),
      binop($, 3, '^', 'hasnt', '!?', 'has', '?'),
      binop($, 2, '!=', '>', '<', '<=', '>=', '=='),
      binop($, 1, 'or', 'and', '||', '&&'),
    ),

    [rule('identifier')]: _ => IDENTIFIER_REGEX,
    [rule('qualified_name')]: $ => seq(
      $[rule('identifier')], '.', $[rule('identifier')],
      optional(seq('.', $[rule('identifier')])) // third level: -> knot.stitch.label
    ),

    [rule('number')]: _ => /\d+(\.\d+)?/,
    [rule('boolean')]: _ => choice('false', 'true'),

    [rule('string')]: _ => token(seq(
      '"',
      prec.left(repeat(choice(
        /[^\\"|]+/, // strings are always interrupded by pipes '|'
        alias('\\"', '\\"'),
        alias('\\', '\\\\'),
      ))),
      '"',
    )),

    [rule('divert')]: $ => seq(
      $._divert_mark,
      field('target', choice($[rule('identifier')], $[rule('qualified_name')], $[rule('call')])),
    ),

  }
}


/*
Whitespace in text is significant (multiple pieces of text can be glued together
over multiple "paragraphs", choices, diverts, etc.).

However, in some places we don't count leading spaces as part of the content.
This chiefly happens at the beginning of paragraphs, choices, etc.
*/
function make_text(with_leading_whitespace = false) {
  let word_regex = with_leading_whitespace
    ? / *[^\s\{\}\[\]#\-<>/|\\]+ */
    :   /[^\s\{\}\[\]#\-<>/|\\]+ */;

  return _ => prec.right(repeat1(choice(
    '-', '<', '>', '/',  // individual divert, thread or comment characters
    '[', ']', // square brackets outside of choices are fine
    // escaped special chars:
    '\\[', '\\]',
    '\\{', '\\}',
    '\\|', '\\#',
    alias(token(prec(-1, word_regex)), 'word'),
  )));
}


/// Separate every two occurrences of `rule` by an occurrence of `sep`. `rule` has to occurr at least once.
function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)));
}

module.exports = grammar({
  name: 'ink',

  externals: $ => [
    $._eol,
    $._choice_block_start,
    $._choice_block_end,
    $._gather_block_start,
    $._gather_block_end,
    $.choice_mark,
    $.gather_mark,
    $._error_sentinel,
  ],

  extras: $ => [
    /[ \t\r]+/, // we count carriage return as a non-linebreak, because that's the correct way of interpreting it. ╭∩╮(ಠ_ಠ)╭∩╮
    /[\n\v\f]/,
    $.comment,
  ],

  inline: $ => [
    $.expr,
  ],

  supertypes: $ => [
    $.expr,
    $.boolean,
    $._toplevel_block,
    $._redirect,
    $._logic,
    $._code_stmt,
  ],

  precedences: $ => [
    [$.condition, $.eval],  // since they are syntactically the same, maybe we just treat a condition as an eval?
    [$._anon_expr, $._anon_list_values],  // How should `(<identifier>)` be interpreted? Doesn't really matter, but we have to choose one.
    [$._choice_content, $.content],
  ],

  conflicts: $ => [
    [$.identifier, $._anon_identifier],
    [$.number, $._anon_number],
    [$.boolean, $._anon_boolean],
    [$.string, $._anon_string],
    [$.list_values, $._anon_list_values],
    [$.tunnel],
    [$._redirect, $.tunnel],
  ],

  
  rules: {
    ink: $ => seq(
      optional($.content_block),
      repeat($.stitch_block), // Evidently we can define orphan stitches. OK …
      repeat($.knot_block),
    ),

    // not actually used in this grammar, only added for supertypes
    _toplevel_block: $ => choice(
      $.content_block,
      $.stitch_block,
      $.knot_block,
    ),

    content_block: $ => repeat1($._content_item),

    knot_block: $ => prec.right(seq(
      $.knot,
      optional($.content_block),
      repeat($.stitch_block),
    )),

    stitch_block: $ => prec.right(seq(
      $.stitch,
      optional($.content_block),
    )),

    choice_block: $ => prec.right(seq(
      $._choice_block_start,
      $.choice,
      $._eol,
      repeat($._content_item),
      $._choice_block_end,
    )),

    _choice_block_in_conditional: $ => prec.right(seq(
      $._choice_block_start,
      $.choice,
      $._eol,
      repeat($._content_item_in_conditional),
      $._choice_block_end,
    )),

    gather_block: $ => prec.right(seq(
      $._gather_block_start,
      $.gather,
      repeat($._content_item),
      $._gather_block_end,
    )),

    _content_item: $ => choice(
      $._single_line_content_item,
      // These handle line breaks on their own:
      $.choice_block,
      $.gather_block,
    ),

    _content_item_in_conditional: $ => choice(
      $._single_line_content_item,
      // These handle line breaks on their own:
      alias($._choice_block_in_conditional, $.choice_block),
      // Gathers are not allowed here, which is why we do all this _in_conditional business
      // and also why we have to distinguish between choice and gather blocks.
    ),

    _single_line_content_item: $ => choice(
      seq($.todo_comment, $._eol),
      seq(alias($.content, $.paragraph), $._eol),
      seq($.code, $._eol),
      seq($.include, $._eol),
      seq($.external, $._eol),
      seq($.global, $._eol),
      seq($.list, $._eol),
    ),

    _redirect: $ => choice(
      $.divert,  // diverts are defined as part of the `make_expr` function.
      $.tunnel,
      $.thread,
    ),

    tunnel: $ => choice(
      seq($._tunnel_return, field('target', optional(choice($.identifier, $.call)))),
      // one or more diverts with return
      // -> do_this ->
      seq(repeat1($.divert), $._divert_mark),
      // two or more diverts without return
      // -> do_this -> do_that
      seq($.divert, repeat1($.divert)),
    ),

    thread: $ => seq($._thread_mark, field('target', choice($.identifier, $.call))),

    text: make_text(with_leading_whitespace = false),
    _text_with_ws: make_text(with_leading_whitespace = true),

    content: $ => prec.right(choice(
      seq(
        $._glue_logic_or_text,
        repeat($.tag),
        optional($._redirect),
      ),
      seq(
        repeat1($.tag),
        optional($._redirect),
      ),
      $._redirect,
    )),

    // this "_fake" machinery exists so that we can generate conflicts between text or expressions
    // after an opening `{`. The fake versions must mirror the normal versions exactly,
    // except that the _first_ text element (if present) must lead to a conflict with expressions.
    _fake_content: $ => prec.right(choice(
      seq(
        $._fake_glue_logic_or_text,
        repeat($.tag),
        optional($._redirect),
      ),
      seq(
        repeat1($.tag),
        optional($._redirect),
      ),
      $._redirect,
    )),

    // First piece of content does not consume leading whitespace, but then the following pieces do.
    _glue_logic_or_text: $ => prec.right(seq(
      choice(
        $.glue,
        $._logic,
        $.text,
      ),
      repeat(choice(
        $.glue,
        $._logic,
        alias($._text_with_ws, $.text),
      )),
    )),

    _fake_glue_logic_or_text: $ => prec.right(seq(
      choice(
        $._logic,
        $.glue,
        alias($._maybe_expr_text, $.text),
      ),
      repeat(choice(
        $.glue,
        $._logic,
        alias($._text_with_ws, $.text),
      )),
    )),

    glue: _ => '<>',

    _logic: $ => choice(
      $.eval,
      $.alternatives,
      $.conditional_text,
      $.cond_block,
      $.multiline_alternatives,
    ),

    eval: $ => prec.right(seq('{', $.expr, '}')),

    conditional_text: $ => prec.right(seq(
      '{',
      prec.dynamic(PREC.ink, seq(field('condition', $.expr), ':')),
      $.content,
      optional(seq(
        '|',
        optional($.content)
      )),
      '}',
    )),

    alternatives: $ => prec.right(seq(
      '{',
      optional(choice(
        seq(
          // ! can conflict with expressions starting with negation; but in this position, the alternatives marker gets precedence.
          choice('$', '&', '~', mark('!')),
          optional($.content),
        ),
        optional(alias($._fake_content, $.content)),
      )),
      '|',
      repeat(choice('|', $.content)),
      '}'
    )),

    _maybe_expr_text: $ => prec.right(seq(
      prec.dynamic(PREC.text, $._anon_expr), optional(':'),  // the part causing the conflict with conditional text
      optional(alias($.text, 'textrest')),
    )),

    cond_block: $ => prec.right(seq(
      '{',
      choice($._eol, alias($._first_cond_arm, $.cond_arm)),
      repeat($.cond_arm),
      '}',
    )),
    
    _first_cond_arm: $ => seq(
      field('condition', $.expr), ':', $._eol,
      optional($._then_block)
    ),
    
    cond_arm: $ => prec.right(seq($._if_line, optional($._then_block))),

    _if_line: $ => seq(
      mark('-'),
      field('condition', choice($.expr, $.else)),
      ':',
      optional($._eol)
    ),

    _then_block: $ => prec.left(repeat1($._content_item_in_conditional)),

    else: _ => 'else',

    multiline_alternatives: $ => seq(
      '{',
      field('type', choice(
        'stopping',
        seq('shuffle', optional(choice('once', 'stopping'))),
        'cycle',
        'once',
      )),
      ':', $._eol,
      repeat($.alt_arm),
      '}',
    ),

    alt_arm: $ => seq(mark('-'), prec.left(repeat($._content_item_in_conditional))),

    tag: $ => prec.left(seq('#', $._glue_logic_or_text)),

    choice: $ => seq(
      $.choice_marks,
      optional(seq($._label_field, optional($._eol))),
      repeat(seq($._choice_condition, optional($._eol))),
      field('separator', optional('\\')),  // to separate conditions from content starting with logic (e.g. conditional text): https://github.com/inkle/ink/blob/master/Documentation/WritingWithInk.md#features-of-alternatives
      $._choice_content
    ),

    gather: $ => prec.right(seq(
      $.gather_marks,
      optional($._label_field),
      optional($._eol)
    )),

    _content_field: $ => field('content', $._content_item),

    choice_marks: $ => prec.right(repeat1(prec(PREC.ink, $.choice_mark))),
    gather_marks: $ => prec.right(repeat1(prec(PREC.ink, $.gather_mark))),

    _label_field: $ => prec(PREC.ink, field('label', $.label)),
    label: $ => seq('(', $.identifier, ')'),

    _choice_condition: $ => prec.right(PREC.ink, field('condition', $.condition)),
    condition: $ => seq('{', $.expr, '}', ),

    _choice_content: $ => prec.right(choice(
      field('main', $.content),
      $._compound_choice_content,
      // empty fallback choice:
      $._divert_mark,
    )),

    _compound_choice_content: $ => prec.right(seq(
      field('main', optional($.content)),
      field('choice_only', $.choice_only),
      field('when_chosen', optional($.content))
    )),

    choice_only: $ => seq(mark('['), optional($.content), mark(']')),

    knot: $ => prec.right(seq(
      field("start_mark", $._knot_mark),
      field('function', optional('function')),
      field('name', $.identifier),
      field('params', optional($.params)),
      field("end_mark", optional($._knot_mark)),
      $._eol,
    )),

    _knot_mark: _ => alias(mark(/==+/), '=='), // TODO: Be sure to document that we collapse all knot marks to this "literal" (to distinguish it from the comparison operator)
    _stitch_mark: _ => alias(mark('='), '='),
    _divert_mark: _ => alias(mark('->'), '->'),
    _tunnel_return: _ => alias(mark('->->'), '->->'),
    _thread_mark: _ => alias(mark('<-'), '<-'),

    stitch: $ => prec.right(seq(
      field('start_mark', $._stitch_mark),
      field('name', $.identifier),
      field('params', optional($.params)),
      $._eol,
    )),

    code: $ => seq('~', $._code_stmt, $._eol),
    
    _code_stmt: $ => choice(
      $.assignment,
      $.temp,
      $.expr,
      $.return,
    ),
    
    assignment: $ => seq(
      field('name', $.identifier),
      field('op', choice('=', '-=', '+=')),
      field('value', $.expr)
    ),
    
    temp: $ => seq(
      keyword('temp'),
      field('name', $.identifier),
      field('op', "="),
      field('value', $.expr)
    ),

    return: $ => seq('return', $.expr),

    params: $ => seq('(', optional(sepBy1(',', $.param)), ')'),

    param: $ => seq(
      field('ref', optional('ref')),
      choice($.identifier, $.divert)
    ),

    // Let's just accept any old characters for the path. We don't have to do anything with it …
    include: $ => seq(keyword('INCLUDE'), alias(/[^\n]+/, $.path)),

    external: $ => seq(
      keyword('EXTERNAL'),
      field('name', $.identifier),
      field('params', $.params),
    ),

    global: $ => seq(
      field('type', choice(keyword('VAR'), keyword('CONST'))),
      field('name', $.identifier),
      field('op', '='),
      field('value', $.expr),
    ),

    list: $ => seq(
      keyword('LIST'),
      field('name', $.identifier),
      field('op', '='),
      field('values', $.list_value_defs),
    ),

    list_value_defs: $ => sepBy1(',', $.list_value_def),

    list_value_def: $ => choice(
      field('name', $.identifier),
      seq(
        field('name', $.identifier),
        field('op', '='),
        field('value', $.number),
      ),
      seq(
        field('paren', '('),
        field('name', $.identifier),
        field('paren', ')'),
      ),
      seq(
        field('paren', '('),
        field('name', $.identifier),
        field('op', '='),
        field('value', $.number),
        field('paren', ')'),
      ),
      seq(
        field('paren', '('),
        field('name', $.identifier),
        field('paren', ')'),
        field('op', '='),
        field('value', $.number),
      ),
    ),

    // we create two sets of "expressions": One named for the actual expressions,
    ...make_expr(named = true),
    // and one anonymous, to be able to trigger the GLR conflict between text and the starting expression of conditional text.
    ...make_expr(named = false),

    comment: _ => token(choice(
      /\/\/[^\n]*/,
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      ),
    )),

    todo_comment: _ => seq(
      mark('TODO'),
      ':',
      field('text', /[^\n]*/),
    ),

  },

});
