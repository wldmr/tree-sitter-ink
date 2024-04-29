const _tp = n => (rule => token(prec(n, rule)));
TOKEN = {
  mark: _tp(20),
  condition_mark: _tp(30),
}

module.exports = grammar({
  name: 'ink',

  externals: $ => [
    $.text,
  ],

  extras: $ => [
    /[ \t]+/,
    $.comment,
  ],

  inline: $ => [
    $.expr,
    // $.flow,  // maybe?
  ],

  rules: {
    ink: $ => seq(
      repeat(seq(optional($._toplevel), /\n/)),
      optional($._toplevel), // last line might not have a newline
    ),

    _toplevel: $ => choice(
      $.todo_comment,
      alias($.line_comment, $.comment),
      repeat1($.tag),
      $.divert,
      $.paragraph,
      $.knot,
      $.stitch,
      $.choice,
      $.include,
    ),

    paragraph: $ => seq(
      alias($.flow, ''),
      optional($.divert),
      repeat($.tag),
      optional(alias($.line_comment, $.comment)),
    ),

    // TODO: I think flow means something else in Ink; I think the Ink parser calls this 'Content'. Maybe call it text_content?
    flow: $ => prec.right(repeat1(choice($.text, $.glue, $.alternatives))),

    glue: _ => TOKEN.mark('<>'),

    alternatives: $ => seq(
      '{',
      choice(
        token(prec(0, '')),  // Odd hack. Just matching '{' here would prevent the other cases from being recognized (the &,!,~ would just be part of the text).
        token(prec(1, '&')),
        token(prec(1, '!')),
        token(prec(1, '~')),
      ),
      repeat1(choice('|', seq($.flow, optional($.divert)))),
      '}',
    ),

    tag: _ => /#[^\n#]+/,

    choice: $ => seq(
      field('mark', $.symbol),
      repeat($.condition),
      optional('\\'),
      $._choice_content
    ),

    condition: $ => prec.right(seq(
      // There can apparently be linebreaks between conditions.
      optional(/\n/),
      TOKEN.condition_mark('{'),  // this precedence is so that a condition gets chosen over a flow starting with an alternative.
      $.expr,
      '}',
      optional(/\n/),
    )),

    _choice_content: $ => choice(
        seq(field('main', $.flow), optional($.divert)),
        seq($._compound_choice_content, optional($.divert)),
        // types of fallback choices:
        $.divert,
        $.divert_mark,
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
      optional(alias($.line_comment, $.comment))
    )),

    _knot_mark: _ => alias(TOKEN.mark(/==+/), "=="),
    divert_mark: _ => TOKEN.mark('->'),

    stitch: $ => prec.right(seq(
      '=',
      field('name', $.identifier),
      optional(alias($.line_comment, $.comment))
    )),

    divert: $ => seq(
      $.divert_mark, field('target', choice($.identifier, $.qualified_name)),
    ),

    // Let's just accept any old characters for the path. We don't have to do anything with it …
    include: $ => seq(TOKEN.mark('INCLUDE'), alias(/[^\n]+/, $.path)),

    expr: $ => choice(

      // terminals
      $.identifier,
      $.qualified_name,
      alias(/\d+(\.\d+)?/, $.number),

      // compound
      $.paren,
      $.unary,
      $.binary,
      
    ),

    // TODO: These precs and associativities are completely bogus
    paren: $ => prec.right(100, seq("(", $.expr, ")")),
    binary: $ => prec.right(10, seq($.expr, field('op', $._binary_operator), $.expr)),
    unary: $ => prec(20, seq(field('op', $._unary_operator), $.expr)),

    _unary_operator: _ => choice(
      'not', '!'
    ),

    _binary_operator: _ => choice(
      '*', '+', "-", "/",
      "==", ">=", "<=", ">", "<",
      "or", "||",
      "and", "&&",
    ),

    identifier: _ => /[a-zA-z_][a-zA-Z0-9_]*/,
    qualified_name: $ => seq($.identifier, token.immediate('.'), $.identifier),

    symbol: _ => choice('*', '+'),

    comment: _ => /\/\*(.|\r?\n)+\*\//,
    line_comment: _ => /\/\/[^\n]*/,

    todo_comment: _ => seq(
      TOKEN.mark('TODO'),
      ':',
      /[^\n]*/,
    ),

  },

});
