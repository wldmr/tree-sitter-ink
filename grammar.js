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
      $.stitch,
      $.choice,
    ),

    paragraph: $ => seq(
      alias($.flow, ''),
      optional($.divert),
      repeat($.tag),
      optional(alias($.line_comment, $.comment)),
    ),

    flow: $ => repeat1(choice($.text, $.glue)),

    glue: _ => TOKEN.mark('<>'),

    tag: _ => /#[^\n#]+/,

    choice: $ => seq(
      field('mark', $.symbol),
      $._choice_content
    ),

    _choice_content: $ => seq(
      choice(
        field('main', $.flow),
        $._compound_choice_content
      ),
      optional($.divert)
    ),

    _compound_choice_content: $ => prec.right(seq(
      field('main', optional($.flow)),
      '[',
      field('temporary', optional($.flow)),
      ']',
      field('final', optional($.flow),
    ))),

    knot: $ => prec.right(seq(
      $.knot_mark,
      field('name', $.identifier),
      optional($.knot_mark),
      optional(alias($.line_comment, $.comment))
    )),

    knot_mark: _ => TOKEN.mark(/==+/),
    divert_mark: _ => TOKEN.mark('->'),

    stitch: $ => prec.right(seq(
      alias('=', $.stitch_mark),
      field('name', $.identifier),
      optional(alias($.line_comment, $.comment))
    )),

    divert: $ => seq(
      $.divert_mark, field('target', choice($.identifier, $.qualified_name)),
    ),

    identifier: _ => /[a-zA-z_][a-zA-Z0-9_]*/,
    qualified_name: $ => seq($.identifier, token.immediate('.'), $.identifier),

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
