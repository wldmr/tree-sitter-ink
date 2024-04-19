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
      $.todo_comment,
    ),

    text: _ => /[^\n\/#]+?/,

    tag: _ => /#[^\n#]+/,

    comment: _ => token(choice(
      /\/\/[^\n]*\n/,
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
