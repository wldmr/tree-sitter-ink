const mark = rule => token(prec(1, rule));
const text_token = rule => token(prec(0, rule));

function binop($, p, ...operators) {
  return prec.left(p, seq($.expr, field('op', choice(...operators)), $.expr))
}

IDENTIFIER_REGEX  = /[a-zA-z_][a-zA-Z0-9_]*/

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

  precedences: _ => [
    ['choice-condition', 'flow-logic'],
  ],

  conflicts: $ => [
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

    text: $ => prec.right(repeat1(
     choice(
      alias(IDENTIFIER_REGEX, 'looks_like_identifier'), // to trigger ambiguity with expressions
      alias(text_token(/[^\s\{\}\[\]#\-$!&~<>/*+|]+/), 'word'),
      alias(text_token(/\\[\{\}\[\]$!&~\-|]/), '\char'),  // escaped special char
      alias(text_token(/[$!&~|]/), '[$!&~|]'), // repeat marks and separator can be text, if they're not in a position where a repeat mark is expected
      alias(text_token(/\/[^\/*]/), '/[^/*]'), // not yet a comment
      alias(text_token(/-[^>]/), '-[^>]'), // not a divert
      alias(text_token(/<[^->]/), '<[^->]'), // not a trevid or glue
      text_token(':'), // colons separate conditions in conditional text, so we need to split text at them
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

    eval: $ => prec.right('flow-logic', seq('{', $.expr, '}')),

    alternatives: $ => prec.right('flow-logic', seq(
      '{',
      optional(choice(
        '$', '&', '~', '!',
        $._flow_to_divert  // bare sequence
      )),
      '|',
      repeat(choice('|', $._flow_to_divert)),
      '}'
    )),

    conditional_text: $ => prec.right('flow-logic', seq(
      '{',
      $.expr,
      ':',
      $._flow_to_divert,
      '|',
      optional($._flow_to_divert),
      '}',
    )),

    tag: _ => /#[^\n#]+/,

    choice: $ => seq(
      repeat1(choice('*', '+')), // yes, this technically allows mixing * and + on the same 'choice', but it's simpler and probably leads to the structure the user intends.
      optional(seq($._label_field, optional($._eol))),
      repeat(seq($._choice_condition, optional($._eol))),
      optional('\\'),
      $._choice_content
    ),

    gather: $ => seq(
      repeat1(mark('-')),
      optional($._label_field),
      optional($.flow),
    ),

    _label_field: $ => field('label', seq('(', $.identifier, ')')),

    _choice_condition: $ => prec.right('choice-condition', field('condition', seq('{', $.expr, '}', ))),

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

    expr: $ => prec.right(choice(

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

    )),

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

    paren: $ => prec(10, seq("(", $.expr, ")")),
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
