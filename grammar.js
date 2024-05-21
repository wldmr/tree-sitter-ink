const mark = rule => token(prec(1, rule));

function binop($, p, ...operators) {
  return prec.left(p, seq($.expr, field('op', choice(...operators)), $.expr))
}

IDENTIFIER_REGEX  = /[a-zA-Z_][a-zA-Z0-9_]*/

PREC = {
  // For ink syntax contstructs that could be confused for text content
  ink: 1,
  // Otherwise it's just text.
  text: 0,
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
    [$.text, $.identifier],
    [$.text, $.alternatives],
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
        repeat1($.tag),
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

    // Text can sometimes conflict with Ink syntax.
    // In order to trigger GLR conflicts, we must take care to split text into the same tokens as the ink syntax.
    text: _ => prec.right(repeat1(
     choice(
      '(', ')',
      'not', '!', '-',
      '*', '/',
      '+',
      '==', '!=', '?', '<=', '>=', '<', '>',
      'and', '&&',
      'or', '||',
      '"',
      '.',
      ':', // colons separate conditions in conditional text, so we need to split text at them
      alias(IDENTIFIER_REGEX, 'word_or_ident'), // to trigger ambiguity with expressions; must come before the more general rules so that the conflict with identifiers actually triggers
      alias(/[^\s\{\}\[\]#\-$!?&~<>/*+|:=\(\)".]+/, 'word'),
      alias(/\\[\{\}\[\]$!&~\-|]/, '\char'),  // escaped special char
      alias(/[$!&~]/, '[$!&~]'), // repeat marks and separator can be text, if they're not in a position where a repeat mark is expected
      alias(/\/[^\/*]/, '/[^/*]'), // not yet a comment
      alias(/<[^->]/, '<[^->]'), // not a trevid or glue
      // alias(/\\\r?\n/, '\\n'),  // escaped newline
      // alias(/\[|\]/, '[]'),  // outside of choices, square brackets are just text
    ) 
    )),

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
    ),

    eval: $ => prec.right(seq('{', $.expr, '}')),

    conditional_text: $ => prec.right(seq(
      '{',
      field('condition', prec.dynamic(PREC.ink, $.expr)),
      ':',
      $._flow_to_divert,
      '|',
      optional($._flow_to_divert),
      '}',
    )),

    alternatives: $ => prec.right(seq(
      '{',
      optional(choice(
        '$', '&', '~', '!',
        prec.dynamic(PREC.text, $._flow_to_divert),  // start of a bare sequence: Hey {Mr. Fogg|you}.
      )),
      '|',
      repeat(choice('|', $._flow_to_divert)),
      '}'
    )),

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

    _choice_condition: $ => prec.right(field('condition', seq('{', $.expr, '}', ))),

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

    divert: $ => seq(
      $._divert_mark, field('target', choice($.identifier, $.qualified_name)),
    ),

    // Let's just accept any old characters for the path. We don't have to do anything with it …
    include: $ => seq(/INCLUDE\s/, alias(/[^\n]+/, $.path)),

    var: $ => seq(
      'VAR',
      field('name', $.identifier),
      '=',
      field('value', $.expr),
    ),

    expr: $ => choice(

      // terminals
      $.identifier,
      $.qualified_name,
      alias(/\d+(\.\d+)?/, $.number),
      alias(choice('false', 'true'), $.boolean),
      $.string,
      $.divert,

      // compound
      $.call,
      $.paren,
      $.unary,
      $.binary,

    ),

    call: $ => prec.left(11, seq(
      field('name', $.identifier),
      '(',
      field('args', optional($.args)),
      ')'
    )),
    args: $ => seq(
      $.expr,
      repeat(seq(",", $.expr))
    ),

    paren: $ => prec.right(10, seq('(', $.expr, ')')),
    unary: $ => prec.right(9, seq(field('op', choice('not', '!', '-')), $.expr)),
    binary: $ => choice(
      binop($, 8, '*', '/'),
      binop($, 7, '+', '-'),
      binop($, 6, '==', '!=', '?', '<=', '>=', '<', '>'),
      binop($, 5, 'and', '&&'),
      binop($, 4, 'or', '||'),
    ),

    identifier: _ => IDENTIFIER_REGEX,
    qualified_name: $ => seq($.identifier, token.immediate('.'), $.identifier),

    string: _ => token(seq(
      '"',
      prec.left(repeat(choice(
        /[^\\"]+/,
        alias('\\"', '\\"'),
        alias('\\', '\\\\'),
      ))),
      '"',
    )),

    comment: _ => /\/\/[^\n]*|\/\*(.|\r?\n)*?\*\//,

    todo_comment: _ => seq(
      mark('TODO'),
      ':',
      /[^\n]*/,
    ),

  },

});
