let mark = rule => token(prec(1, rule));

// The Ink docs get very specific about which Unicode they allow.
// But just saying Letters and Numbers is so much simpler. This should be fine.
const IDENTIFIER_REGEX = /[\p{Letter}_][\p{Letter}\p{Number}_]*/
const NUMBER_REGEX = /\d+(\.\d+)?/

// All operators. In our quest to make text tokenize the same as expressions (to generate conflicts),
// we define all possible operators upfront, so we can guarantee they result in the same tokens.
const OP = {
  // function calls, list entries
  par_left: '(',
  par_right: ')',
  comma: ',',
  // unary operators
  not: 'not',
  exclam: '!',
  minus: '-',
  // binary operators
  percent: '%',
  mod: 'mod',
  slash: '/',
  asterisk: '*',
  plus: '+',
  caret: '^',
  hasnt: 'hasnt',
  exclamquestion: '!?',
  has: 'has',
  question: '?',
  neq: '!=',
  gt: '>',
  lt: '<',
  le: '<=',
  ge: '>=',
  eq: '==',
  or: 'or',
  and: 'and',
  dbl_amp: '&&',
  dbl_pipe: '||', // can't occurr in text
  // postfix operators
  dbl_plus: '++',
  dbl_minus: '--',
  // scope separator
  period: '.',
}

// This is how we build text and strings (which syntactically overlap): Strings and
// normal text are almost the same, except strings can’t contain (unescaped) double
// quotes. So we define the smallest common denominator here, and use it in both
// definitions.
const STRING_PARTS = [
  IDENTIFIER_REGEX,
  NUMBER_REGEX,
  /\\./,  // any single character can be escaped and thus becomes text
  '\\',
  // We now need to list ALL tokens that can occurr in an expression,
  // so that strings, expressions and text get tokenized the same:
  ...Object.values(OP)
    .filter(it => it != '||'),  // can't occur in text/strings
  'false', 'true',
  /[^|{}\p{Space}]/, // anything else that isn't *very* special
]

PREC = {
  // For ink syntax contstructs that could be confused for text content
  ink: 1,
  // Otherwise it's just text.
  text: 0,
}

let binop = ($, precedence, ...operators) => prec.left(precedence, seq(
  field('left', $.expr),
  // prevent single operator from being wrapped in a choice, otherwise tree-sitter will annoy us with a warning.
  field('op', operators.length == 1 ? operators[0] : choice(...operators)),
  field('right', $.expr))
);

// The whole exression syntax. We could inline it, but I like the modularity of having it separate.
const EXPR = {
  expr: $ => choice(
    // terminals
    $.identifier,
    $.qualified_name,
    $.number,
    $.boolean,
    $.string,
    $.divert,
    // compound
    $.call,
    $.paren,
    $.list_values,
    $.unary,
    $.postfix,
    $.binary,
  ),

  call: $ => prec.right(11, seq(
    field('name', choice($.identifier, $.qualified_name)),
    OP.par_left,
    field('args', optional($.args)),
    OP.par_right
  )),
  args: $ => sepBy1(OP.comma, $.expr),

  list_values: $ => seq(
    OP.par_left,
    optional(sepBy1(OP.comma,
      choice(
        $.identifier,
        $.qualified_name
      ),
    )),
    OP.par_right,
  ),

  // XXX: Don't put a precedence number on this! If you do, then GLR conflicts with text won't occur
  paren: $ => prec.right(seq(OP.par_left, $.expr, OP.par_right)),

  // BUG (sort of): This precedence leads to `{ not this | that }` being treated as an `eval` instead of an `alternative_text`.
  // However, we need that precedence (I think), to generate correct expressions.
  // I don't really s
  unary: $ => prec.left(14, seq(
    field('op', choice(
      OP.not,
      mark(OP.exclam),   // without the higher precedence, `* {!condition} choice` is a parse error
      OP.minus)),
    field('right', $.expr)
  )),

  postfix: $ => prec.left(13, seq(
    field('left', $.identifier),
    field('op', choice(OP.dbl_minus, OP.dbl_plus))
  )),

  binary: $ => choice(
    binop($, 8, OP.percent, OP.mod),
    binop($, 7, OP.slash),
    binop($, 6, OP.asterisk),
    binop($, 5, OP.minus),
    binop($, 4, OP.plus),
    binop($, 3, OP.caret, OP.hasnt, OP.exclamquestion, OP.has, OP.question),
    binop($, 2, OP.neq, OP.gt, OP.lt, OP.le, OP.ge, OP.eq),
    binop($, 1, OP.or, OP.and, OP.dbl_pipe, OP.dbl_amp),
  ),

  identifier: _ => IDENTIFIER_REGEX,

  qualified_name: $ => prec.right(seq(
    $.identifier, OP.period, $.identifier,
    optional(seq(OP.period, $.identifier)) // third level: -> knot.stitch.label
  )),

  number: _ => NUMBER_REGEX,

  boolean: _ => choice('false', 'true'),

  string: _ => seq('"', repeat(choice(...STRING_PARTS)), '"'),

  divert: $ => seq(
    $._divert_mark,
    field('target', $._divert_target),
  ),
}


/// Separate every two occurrences of `rule` by an occurrence of `sep`. `rule` has to occurr at least once.
function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)));
}

module.exports = grammar({
  name: 'ink',

  externals: $ => [
    // This token lives in the external scanner so that we can treat end-of-line and end-of-file uniformly.
    $._eol,

    // We have these explicit block markers so that blocks can actually start and end _before_
    // the marks that introduce them (by doing a lookahead in the external scanner).
    // This is so that a block can include any preceding comments,
    // and also so that a block doesn't include any unecessary intervening whitespace.
    // These block markers are zero width.
    //
    // We could probably get away with fewer block markers, but we _must_ at least distinguish
    // gather and choice blocks because gathers can't occurr in alternatives and if/switch blocks.
    // So it seems cleaner to just very specific right away.
    $._knot_block_start,
    $._knot_block_end,
    $._stitch_block_start,
    $._stitch_block_end,
    $._choice_block_start,
    $._choice_block_end,
    $._gather_block_start,
    $._gather_block_end,

    // The scanner state keeps track of how many marks still need to be emitted after a block start.
    // We have to emit these marks from the scanner itself, so that we can update the scanner state,
    // because state is only persisted if the scan function returns `true` (that is, if it found a token).
    $.choice_mark,
    $.gather_mark,

    $._error_sentinel,
  ],

  extras: $ => [
    // using $._space here prevents from whitespace being recognized as part of text for some godforsaken reason. So we use the explicit regex:
    /[ \t\r]+/, // this must be different from $._space, otherwise it's like we wrote $._space here.
    '\n',
    $.line_comment,
    $.block_comment,
  ],

  inline: $ => [
    $._single_line_content_item,
    $.expr,
  ],

  supertypes: $ => [
    $.expr,  // because we inlined it
    $._divert_target,
    $._comment,
    $._redirect,
    $._logic,
    $._code_stmt,
    $._param_value,
    $._global_keyword,
  ],

  precedences: $ => [
    [$.label, $._word],
  ],

  conflicts: $ => [
    [$._word, $.string],
    [$._word, $.identifier],
    [$._word, $.number],
    [$._word, $.paren],
    [$._word, $.list_values],
    [$._word, $.list_values, $.paren],
    [$.list_values, $.paren],
    [$._word, $.boolean],
    [$.tunnel],
    [$._redirect, $.tunnel],
    [$.tunnel, $.divert],
  ],


  rules: {
    ink: $ => seq(
      optional($._content_block),
      repeat($.stitch_block), // Evidently we can define orphan stitches. OK …
      repeat($.knot_block),
    ),

    _content_block: $ => repeat1($._content_item),

    knot_block: $ => prec.right(seq(
      $._knot_block_start,
      field('header', $.knot),
      optional($._content_block),
      repeat($.stitch_block),
      $._knot_block_end,
    )),

    stitch_block: $ => prec.right(seq(
      $._stitch_block_start,
      field('header', $.stitch),
      optional($._content_block),
      $._stitch_block_end,
    )),

    choice_block: $ => prec.right(seq(
      $._choice_block_start,
      field('header', $.choice),
      $._eol,
      repeat($._content_item),
      $._choice_block_end,
    )),

    _choice_block_in_conditional: $ => prec.right(seq(
      $._choice_block_start,
      field('header', $.choice),
      $._eol,
      repeat($._content_item_in_conditional),
      $._choice_block_end,
    )),

    gather_block: $ => prec.right(seq(
      $._gather_block_start,
      field('header', $.gather),
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
      $.divert,  // diverts are defined as part of expressions.
      $.tunnel,
      $.thread,
    ),

    _divert_target: $ => prec.right(choice($.identifier, $.qualified_name, $.call)),

    tunnel: $ => choice(
      seq($._tunnel_return, field('target', optional($._divert_target))),
      // one or more diverts with return
      // -> do_this ->
      seq(repeat1($.divert), $._divert_mark),
      // two or more diverts without return
      // -> do_this -> do_that
      seq($.divert, repeat1($.divert)),
    ),

    thread: $ => seq($._thread_mark, field('target', $._divert_target)),

    text: $ => prec.right(repeat1($._word)),

    _word: _ => choice(...STRING_PARTS, '"'), // as stated above: everything a string can be, plus `"`

    content: $ => prec.right(choice(
      seq(
        field('content', $._glue_logic_or_text),
        field('tag', repeat($.tag)),
        field('redirect', optional($._redirect)),
      ),
      seq(
        field('tag', repeat1($.tag)),
        field('redirect', optional($._redirect)),
      ),
      field('redirect', $._redirect),
    )),

    // Choice content can not start with logic blocks, so we make a special version.
    _choice_start: $ => prec.right(choice(
      seq(
        field('content', seq(choice($.glue, $.text), optional($._glue_logic_or_text))),
        field('tag', repeat($.tag)),
        field('redirect', optional($._redirect)),
      ),
      seq(
        field('tag', repeat1($.tag)),
        field('redirect', optional($._redirect)),
      ),
      field('redirect', $._redirect),
    )),
    // No need to treat it as anything other than normal $.content
    // Directly wrapping the above in an alias doesn't work.
    _choice_main_content: $ => alias($._choice_start, $.content),

    _glue_logic_or_text: $ => prec.right(repeat1(choice(
      $.glue,
      $._logic,
      $.text,
    ))),

    glue: _ => '<>',

    _logic: $ => choice(
      $.eval,
      $.alternatives,
      $.conditional_text,
      $.cond_block,
      $.multiline_alternatives,
    ),

    eval: $ => prec.right(seq('{', field('expr', $.expr), '}')),

    conditional_text: $ => prec.right(seq(
      '{',
      seq(field('condition', $.expr), ':'),
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
          field('mark', choice('$', '&', '~', mark('!'))),
          optional($.content),
        ),
        optional($.content),
      )),
      '|',
      repeat(choice('|', $.content)),
      '}'
    )),

    cond_block: $ => prec.right(seq(
      '{',
      choice($._eol, alias($._first_cond_arm, $.cond_arm)),
      repeat($.cond_arm),
      '}',
    )),

    _first_cond_arm: $ => seq(
      field('condition', $.expr), ':',
      $._eol_field,  // eol NOT optional in first arm
      optional($._then_block)
    ),

    cond_arm: $ => prec.right(seq($._if_line, optional($._then_block))),

    _if_line: $ => seq(
      field('mark', mark('-')),
      field('condition', choice($.expr, $.else)),
      ':',
      optional($._eol_field),
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

    tag: $ => prec.left(seq(
      field('mark', '#'),
      field('content', $._glue_logic_or_text)
    )),

    choice: $ => choice(
      field('marks', $.choice_marks),  // Completely empty choice == fallback choice. Generates a compiler warning ("please add a `->`"), but it is valid syntax.
      seq(
        field('marks', $.choice_marks),
        optional(seq(
          $._label_field,
          optional($._eol_field),
        )),
        repeat(seq(
          field('condition', $.condition),
          optional($._eol_field),
        )),
        $._choice_content,
      ),
    ),

    gather: $ => prec.right(seq(
      $.gather_marks,
      optional($._label_field),
      optional($._eol_field)
    )),

    _eol_field: $ => field('eol', alias($._eol, $.eol)),

    _content_field: $ => field('content', $._content_item),

    choice_marks: $ => prec.right(repeat1(prec(PREC.ink, $.choice_mark))),
    gather_marks: $ => prec.right(repeat1(prec(PREC.ink, $.gather_mark))),

    _label_field: $ => prec(PREC.ink, field('label', $.label)),
    label: $ => seq('(', field('name', $.identifier), ')'),

    condition: $ => alias($.eval, '_eval'),

    _choice_content: $ => prec.right(choice(
      field('main', $._choice_main_content),
      $._compound_choice_content,
      // empty fallback choice:
      $._divert_mark,
    )),

    _compound_choice_content: $ => prec.right(seq(
      field('main', optional($._choice_main_content)),
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

    code: $ => seq('~', $._code_stmt),

    _code_stmt: $ => choice(
      $.assignment,
      $.temp_def,
      $.expr,
      $.return,
    ),

    assignment: $ => seq(
      field('name', $.identifier),
      field('op', choice('=', '-=', '+=')),
      field('value', $.expr)
    ),

    temp_def: $ => seq(
      'temp', $._space,
      field('name', $.identifier),
      field('op', "="),
      field('value', $.expr)
    ),

    return: $ => seq('return', $.expr),

    params: $ => seq('(', optional(sepBy1(',', $.param)), ')'),

    param: $ => seq(
      field('ref', optional('ref')),
      field('value', $._param_value),
    ),
    _param_value: $ => choice($.identifier, $.divert),

    // Let's just accept any old characters for the path. We don't have to do anything with it …
    include: $ => seq(
      field('keyword', 'INCLUDE'),
      $._space,
      field('path', alias(/[^\n]+/, $.path))
    ),

    external: $ => seq(
      field('keyword', 'EXTERNAL'),
      $._space,
      field('name', $.identifier),
      field('params', $.params),
    ),

    global: $ => seq(
      field('keyword', $._global_keyword),
      $._space,
      field('name', $.identifier),
      field('op', '='),
      field('value', $.expr),
    ),
    _global_keyword: _ => choice('VAR', 'CONST'),

    list: $ => seq(
      field('keyword', 'LIST'),
      $._space,
      field('name', $.identifier),
      field('op', '='),
      field('values', $.list_value_defs),
    ),

    list_value_defs: $ => sepBy1(',', field('value', $.list_value_def)),

    list_value_def: $ => choice(
      field('name', $.identifier),
      seq(
        field('name', $.identifier),
        field('op', '='),
        field('value', alias($._list_def_number, $.number)),
      ),
      seq(
        field('lparen', '('),
        field('name', $.identifier),
        field('rparen', ')'),
      ),
      seq(
        field('lparen', '('),
        field('name', $.identifier),
        field('op', '='),
        field('value', alias($._list_def_number, $.number)),
        field('rparen', ')'),
      ),
      seq(
        field('lparen', '('),
        field('name', $.identifier),
        field('rparen', ')'),
        field('op', '='),
        field('value', alias($._list_def_number, $.number)),
      ),
    ),

    _list_def_number: _ => /\d+/,  // weird bug: Using the actual $.number regex (/\d+(\.\d+)?/) leads to the number containing the leading whitespace. I don't get it.

    ...EXPR,

    todo_comment: _ => seq(
      field('keyword', mark('TODO')),
      ':',
      field('text', /[^\n]*/),
    ),

    _space: _ => /[ \t]+/,
    // _space: _ => /\p{Space}+/, TODO: activate and write test

    line_comment: $ => seq(/\/\/[^\n]*/, $._eol),
    block_comment: $ => seq(
      '/*',
      repeat(seq(alias(/[^\n]/, 'block_comment_line', $._eol))),
      '*/'
    ),

    _comment: $ => choice($.line_comment, $.block_comment),
    _comments: $ => prec.right(repeat1($._comment)),

  },

});
