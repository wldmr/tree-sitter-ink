const mark = rule => token(prec(1, rule));

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
$.identifier, etc), or anonymous nodes ($._expr, $._identifier).

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
  let rule = str => named ? str : '_' + str;

  let binop = ($, precedence, ...operators) => prec.left(precedence, seq(
    $[rule('expr')],
    field('op', choice(...operators)),
    $[rule('expr')])
  );

  return {
    [rule('expr')]: $ => choice(

      // terminals
      $[rule('identifier')],
      $[rule('qualified_name')],
      alias(/\d+(\.\d+)?/, $[rule('number')]),
      alias(choice('false', 'true'), $[rule('boolean')]),
      $[rule('string')],
      $[rule('divert')],

      // compound
      $[rule('call')],
      $[rule('paren')],
      $[rule('unary')],
      $[rule('binary')],

    ),

    [rule('call')]: $ => prec.left(11, seq(
      field('name', $[rule('identifier')]),
      '(',
      field('args', optional($[rule('args')])),
      ')'
    )),
    [rule('args')]: $ => seq(
      $[rule('expr')],
      repeat(seq(",", $[rule('expr')]))
    ),

    [rule('paren')]: $ => prec.left(10, seq('(', $[rule('expr')], ')')),
    [rule('unary')]: $ => prec.left(9, seq(field('op', choice('not', '!', '-')), $[rule('expr')])),
    [rule('binary')]: $ => choice(
      binop($, 8, '*', '/'),
      binop($, 7, '+', '-'),
      binop($, 6, '==', '!=', '?', '<=', '>=', '<', '>'),
      binop($, 5, 'and', '&&'),
      binop($, 4, 'or', '||'),
    ),

    [rule('identifier')]: _ => IDENTIFIER_REGEX,
    [rule('qualified_name')]: $ => seq($[rule('identifier')], token.immediate('.'), $[rule('identifier')]),

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
      $._divert_mark, field('target', choice($[rule('identifier')], $[rule('qualified_name')])),
    ),

  }
}

module.exports = grammar({
  name: 'ink',

  externals: $ => [
    $._eol,
    $._block_start,
    $._block_end,
    $._error_sentinel,
  ],

  extras: $ => [
    /\s+/,
    $.comment,
  ],

  inline: $ => [
    $.expr,
    // $.flow,  // maybe?
  ],

  precedences: $ => [
    [$._choice_condition, $.eval],  // since they are syntactically the same, maybe we just treat a condition as an eval?
  ],

  conflicts: $ => [
    [$.conditional_text, $._first_cond_arm, $._expr],
    [$.identifier, $._identifier],
    [$.string, $._string],
    [$._fake_flow],
  ],

  rules: {
    ink: $ => seq(
      optional($.content_block),
      repeat($.stitch_block), // Evidently we can define orphan stitches. OK …
      repeat($.knot_block),
    ),

    content_block: $ => prec.right(seq(
      $._block_start,
      repeat1(choice(
        $._content_item,
        $.content_block,
      )),
      $._block_end,
    )),

    knot_block: $ => prec.right(seq(
      $._block_start,
      choice(
        $.knot,
        $.function_declaration,
      ),
      optional($.content_block),
      repeat($.stitch_block),
      $._block_end,
    )),

    stitch_block: $ => prec.right(seq(
      $._block_start,
      $.stitch,
      optional($.content_block),
      $._block_end,
    )),

    _content_item: $ => seq(
      choice(
        $.todo_comment,
        repeat1($.tag),  // IDEA: Group standalone tags with following item?
        $.divert,
        $.paragraph,
        $.code,
        $.choice,
        $.gather,
        $.include,
        $.var,
      ),
      $._eol,
    ),

    _content_item_in_conditional: $ => seq(
      choice(
        $.todo_comment,
        repeat1($.tag),
        $.divert,
        $.paragraph,
        $.code,
        $.choice,
        // $.gather, // gathers are not allowed
        $.include,
        $.var,
      ),
      $._eol,
    ),

    text: _ => prec.right(repeat1(
     choice(
       '-',
       '>',
       '<',
       token(prec(-1, alias(/[^\s\{\}\[\]#\-<>/|]+/, 'word'))),
       alias(/\\[\{\}\[\]$!&~\-|]/, '\char'),  // escaped special char
       alias(/[$!&~]/, '[$!&~]'), // repeat marks and separator can be text, if they're not in a position where a repeat mark is expected
       alias(/\/[^\/*]/, '/[^/*]'), // not yet a comment
       alias(/<[^->]/, '<[^->]'), // not a trevid or glue
       // alias(/\\\r?\n/, '\\n'),  // escaped newline
       // alias(/\[|\]/, '[]'),  // outside of choices, square brackets are just text
    ))),

    paragraph: $ => seq(
      alias($.flow, '_flow'),
      optional($.divert),
      repeat($.tag),
    ),

    // TODO: I think flow means something else in Ink; I think the Ink parser calls this 'Content'. Maybe call it text_content?
    flow: $ => prec.right(repeat1(choice(
      $.glue,
      $._logic,
      $.text,
    ))),

    // pretty common pattern:
    _flow_to_divert: $ => prec.right(seq(
      $.flow,
      optional($.divert),
    )),

    glue: _ => '<>',

    _logic: $ => choice(
      $.eval,
      $.alternatives,
      $.conditional_text,
      $.cond_block,
    ),

    eval: $ => prec.right(seq('{', $.expr, '}')),

    conditional_text: $ => prec.right(seq(
      '{',
      prec.dynamic(PREC.ink, seq(field('condition', $.expr), ':')),
      $._flow_to_divert,
      '|',
      optional($._flow_to_divert),
      '}',
    )),

    alternatives: $ => prec.right(seq(
      '{',
      optional(choice(
        seq(
          // ! can conflict with expressions starting with negation; but in this position, the alternatives marker gets precedence.
          choice('$', '&', '~', mark('!')),
          optional($._flow_to_divert),
        ),
        seq(
          optional(alias($._fake_flow, $.flow)),
          optional($.divert),
        ),
      )),
      '|',
      repeat(choice('|', $._flow_to_divert)),
      '}'
    )),

    _fake_flow: $ => prec.right(seq(
      choice(
        alias(seq(
          prec.dynamic(PREC.text, $._expr), optional(':'),  // the part causing the conflict with conditional text
          optional(alias($.text, 'textrest')),
        ), $.text),
        $._logic,
        $.glue,
      ),
      prec.right(repeat(choice(
        $.glue,
        $._logic,
        $.text,
      ))),
    )),

    cond_block: $ => prec.right(seq(
      '{',
      choice($._eol, alias($._first_cond_arm, $.cond_arm)),
      repeat($.cond_arm),
      '}',
    )),

    _first_cond_arm: $ => seq(
      $.expr, ':', $._eol,
      optional($._then_block)
    ),
    
    cond_arm: $ => prec.right(seq($._if_line, optional($._then_block))),

    _if_line: $ => seq(mark('-'), choice($.expr, $.else), ':', optional($._eol)),

    _then_block: $ => prec.left(repeat1($._content_item_in_conditional)),

    else: _ => 'else',

    tag: _ => /#[^\n#]+/,

    choice: $ => seq(
      repeat1(prec(PREC.ink, choice('*', '+'))), // yes, this technically allows mixing * and + on the same 'choice', but it's simpler and probably leads to the structure the user intends.
      optional(seq($._label_field, optional($._eol))),
      repeat(seq($._choice_condition, optional($._eol))),
      optional('\\'),  // to separate conditions from content starting with logic (e.g. conditional text): https://github.com/inkle/ink/blob/master/Documentation/WritingWithInk.md#features-of-alternatives
      $._choice_content
    ),

    gather: $ => seq(
      repeat1(prec(PREC.ink, '-')),
      optional($._label_field),
      optional($.flow),
    ),

    _label_field: $ => prec(PREC.ink, field('label', seq('(', $.identifier, ')'))),

    _choice_condition: $ => prec.right(PREC.ink, field('condition', seq('{', $.expr, '}', ))),

    _choice_content: $ => choice(
      seq(field('main', $.flow), optional($.divert)),
      seq($._compound_choice_content, optional($.divert)),
      // types of fallback choices:
      $.divert,
      $._divert_mark,
    ),

    _compound_choice_content: $ => prec.right(seq(
      field('main', optional($.flow)),
      '[',
      field('temporary', optional($.flow)),
      ']',
      field('final', optional($.flow),
    ))),

    knot: $ => prec.right(seq(
      $._knot_mark,
      field('name', $.identifier),
      optional($._knot_mark),
      $._eol,
    )),

    _knot_mark: _ => alias(mark(/==+/), 'knot_mark'), // TODO: Be sure to document that we collapse all knot marks to this "literal" (to distinguish it from the comparison operator)
    _divert_mark: _ => mark('->'),

    stitch: $ => prec.right(seq(
      mark('='),
      field('name', $.identifier),
      $._eol,
    )),

    function_declaration: $ => prec.right(seq(
      $._knot_mark,
      'function',
      field('name', $.identifier),
      '(',
      field('params', optional($.params)),
      ')',
    )),

    code: $ => seq('~', $._code_stmt),
    _code_stmt: $ => choice(
      $.assignment,
      $.return,
    ),
    assignment: $ => seq(
      field('name', $.identifier),
      '=',
      field('value', $.expr)
    ),
    return: $ => seq('return', $.expr),

    _param: $ => choice($.identifier, $.divert),
    params: $ => seq(
      $._param,
      repeat(seq(",", $._param))
    ),

    // Let's just accept any old characters for the path. We don't have to do anything with it …
    include: $ => seq(/INCLUDE\s/, alias(/[^\n]+/, $.path)),

    var: $ => seq(
      'VAR',
      field('name', $.identifier),
      '=',
      field('value', $.expr),
    ),

    // we create two sets of "expressions": One named for the actual expressions,
    ...make_expr(named = true),
    // and one anonymous, to be able to trigger the GLR conflict between text and the starting expression of conditional text.
    ...make_expr(named = false),

    comment: _ => /\/\/[^\n]*|\/\*(.|\r?\n)*?\*\//,

    todo_comment: _ => seq(
      mark('TODO'),
      ':',
      /[^\n]*/,
    ),

  },

});
