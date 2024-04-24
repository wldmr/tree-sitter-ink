const _tp = n => (rule => token(prec(n, rule)));
TOKEN = {
  mark: _tp(20),
}

module.exports = grammar({
  name: 'ink',

  externals: $ => [
    $.text,
  ],

  extras: $ => [
    $._space,
    $.comment,
  ],

  rules: {
    ink: $ => seq(
      repeat(seq(
        optional($._toplevel),
        $._newline)),
      optional($._toplevel)  // last line might not have a newline
    ),

    _newline: _ => /\n/,
    _space: _ => TOKEN.mark(/[ \t]+/),

    _toplevel: $ => choice(
      $.todo_comment,
      alias($.line_comment, $.comment),
      repeat1($.tag),
      $.divert,
      $.paragraph,
      $.knot,
      $.choice,
    ),

    paragraph: $ => seq(
      repeat1(choice($.text, $.glue)), // repeat1 because there might be a block comment in between
      repeat($.divert),
      repeat($.tag),
      optional(alias($.line_comment, $.comment)),
    ),

    glue: _ => TOKEN.mark('<>'),

    tag: _ => /#[^\n#]+/,

    choice: $ => seq(
      field('mark', $.symbol),
      field('text', $.choice_text)),

    choice_text: $ => choice(
      field('main', $.text),
      $._compound_choice_text,
    ),

    _compound_choice_text: $ => prec.right(seq(
      field('main', optional($.text)),
      '[',
      field('temporary', optional($.text)),
      ']',
      field('final', optional($.text)),
    )),

    knot: $ => prec.right(seq(
      $.knot_mark,
      field('name', $.identifier),
      optional($.knot_mark),
      optional(alias($.line_comment, $.comment))
    )),

    knot_mark: _ => TOKEN.mark(/==+/),
    divert_mark: _ => TOKEN.mark('->'),

    divert: $ => seq(
      $.divert_mark, field('target', $.identifier),
    ),

    identifier: _ => /[a-zA-z_][a-zA-Z0-9_]*/,

    symbol: _ => '*',

    comment: _ => /\/\*(.|\r?\n)+\*\//,
    line_comment: _ => /\/\/[^\n]*/,

    todo_comment: _ => seq(
      TOKEN.mark('TODO'),
      ':',
      /[^\n]*/,
    ),

  },

});
