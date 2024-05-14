const _tp = n => (rule => token(prec(n, rule)));

function binop($, p, ...operators) {
  return prec.left(p, seq($.expr, field('op', choice(...operators)), $.expr))
}

TOKEN = {
  text: _tp(-20),
  mark: _tp(0),
  alternatives_mark: _tp(40),
  conditional_text_mark: _tp(40),
  condition_mark: _tp(50),
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
      ),
      $._eol,
    ),

    text: _ => prec.right(repeat1(
     choice(
      alias(TOKEN.text(/[^\n\{\}\[\]#\-$!&~<>/*+|]+/), 'text'),
      alias(TOKEN.text(/\\[\{\}\[\]$!&~\-]/), '\char'),  // escaped special char
      // alias(TOKEN.text(/\\\n/), '\\n'),  // escaped newline
      alias(TOKEN.text(/[$!&~|]/), '[$!&~|]'), // repeat marks and separator can be text, if they're not in a position where a repeat mark is expected
      // TOKEN.text(/\[|\]/),  // outside of choices, square brackets are just text
      alias(TOKEN.text(/\/[^\/*]/), '/[^/*]'), // not yet a comment
      alias(TOKEN.text(/-[^>]/), '-[^>]'), // not a divert
      alias(TOKEN.text(/<[^->]/), '<[^->]'), // not a trevid or glue
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
      $.logic,
      $.text,
    ))),

    glue: _ => TOKEN.mark('<>'),

    logic: $ => seq(
      '{',
      field('prefix', optional(choice(
        alias('$', $.sequence_mark),
        alias('&', $.repeat_mark),
        alias('~', $.shuffle_mark),
        alias('!', $.once_only_mark),
        alias(/[^&~!$][^:]*:/, $.logic_condition),
        // field('condition', seq($.expr, ':')),
        //                    ^^^^^^^^^^^^^^^^
        // I'd love to parse conditions as expr + ':', but that fails because a sequence may start with anything;
        // If the first thing after the opening brace is a word, the parser sees an identifier and has a nervous breakdown.
      ))),
      repeat1(choice('|', seq($.flow, optional($.divert)))),
      '}',
    ),

    tag: _ => /#[^\n#]+/,

    choice: $ => seq(
      repeat1(choice('*', '+')), // yes, this technically allows mixing * and + on the same 'choice', but it's simpler and probably leads to the structure the user intends.
      optional($._label_field),
      repeat($._condition_field),
      optional('\\'),
      $._choice_content
    ),

    gather: $ => seq(
      repeat1('-'),
      optional($._label_field),
      optional($.flow),
    ),

    _label_field: $ => seq(
      '(', field('label', $.identifier), ')',
    ),

    _condition_field: $ => prec.right(seq(
      // There can apparently be linebreaks between conditions.
      optional(/\n/),
      TOKEN.condition_mark('{'),
      field('condition', $.expr),
      '}',
      optional(/\n/),
    )),

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

    _knot_mark: _ => alias(/==+/, 'knot_mark'), // TODO: Be sure to document that we collapse all knot marks to this "literal" (to distinguish it from the comparison operator)
    _divert_mark: _ => '->',

    stitch: $ => prec.right(seq(
      '=',
      field('name', $.identifier),
      $._eol,
      '\n'
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
      $.return,
    ),
    return: $ => seq(
      'return',
      $.expr,
    ),

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

    expr: $ => choice(

      // terminals
      $.identifier,
      $.qualified_name,
      alias(/\d+(\.\d+)?/, $.number),
      alias(choice('false', 'true'), $.boolean),

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
    _arg: $ => choice($.expr, $.divert),
    args: $ => seq(
      $._arg,
      repeat(seq(",", $._arg))
    ),

    paren: $ => prec(10, seq("(", $.expr, ")")),
    unary: $ => prec.right(9, seq(field('op', choice('not', '!', '-')), $.expr)),
    binary: $ => choice(
      binop($, 8, '*', '/'),
      binop($, 7, '+', '-'),
      binop($, 6, '==', '<=', '>=', '<', '>'),
      binop($, 5, 'and', '&&'),
      binop($, 4, 'or', '||'),
    ),

    identifier: _ => /[a-zA-z_][a-zA-Z0-9_]*/,
    qualified_name: $ => seq($.identifier, token.immediate('.'), $.identifier),

    comment: _ => /\/\/[^\n]*|\/\*(.|\r?\n)*?\*\//,

    todo_comment: _ => seq(
      TOKEN.mark('TODO'),
      ':',
      /[^\n]*/,
    ),

  },

});
