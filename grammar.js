module.exports = grammar({
  name: 'ink',

  extras: $ => [
    /\s/,
    $.comment,
  ],

  rules: {
    ink: $ => repeat1($._toplevel),

    _toplevel: $ => choice(
      $.text,
      $.tag,
      $.choice,
      $.knot,
      $.todo_comment,
    ),

    text: _ => /[^\n\/#*\[\]=]+?/,

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
      $.bracket_open,
      field('temporary', optional($.text)),
      $.bracket_close,
      field('final', optional($.text)),
    )),

    knot: $ => prec.right(seq(
      $.knot_mark,
      field('name', $.identifier),
      optional($.knot_mark),
      /\n/
    )),

    knot_mark: _ => /==+/,

    identifier: _ => prec(1, /[a-zA-z_][a-zA-Z0-9_]*/),

    symbol: _ => '*',

    bracket_open: _ => '[',
    bracket_close: _ => ']',

    comment: _ => token(choice(
      /\/\/[^\n]*/,
      /\/\*(.|\r?\n)+\*\//
    )),

    todo_keyword: _ => token(prec(1, 'TODO')),
  
    todo_comment: $ => seq(
      $.todo_keyword,
      ':',
      /[^\n]*/,
      /\n/,
    ),

  },

});
