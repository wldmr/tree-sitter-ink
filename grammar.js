const _tp = n => (rule => token(prec(n, rule)));

module.exports = grammar({
  name: 'ink',

  extras: $ => [
    /\s+/,
  ],

  inline: $ => [
    $.expr,
  ],

  rules: {
    ink: $ => seq(
      repeat(seq($.flow, /\n/)),
    ),

    text: _ => /[^\n\{\}|]+/,

    // TODO: I think flow means something else in Ink; I think the Ink parser calls this 'Content'. Maybe call it text_content?
    flow: $ => prec.right(repeat1(choice(
      $.conditional_text,
      $.alternatives,
      $.text,  // this should be the match of last resort
    ))),

    alternatives: $ => seq(
      '{',
      repeat1(choice('|', $.flow)),
      '}',
    ),

    conditional_text: $ => seq(
      '{',
      field('condition', prec(50, $.expr)),
      ":",
      field('iftrue', $.flow),
      "|",
      field('else', $.flow),
      '}',
    ),

    expr: $ => choice(

      // terminals
      $.identifier,
      alias(/\d+(\.\d+)?/, $.number),

      // compound
      $.unary,
      $.binary,
      
    ),

    binary: $ => prec.right(10, seq($.expr, field('op', $._binary_operator), $.expr)),
    unary: $ => prec(20, seq(field('op', $._unary_operator), $.expr)),

    _unary_operator: _ => choice(
      'not', '!'
    ),

    _binary_operator: _ => choice(
      "==", ">", "<",
      "or", "||",
      "and", "&&",
    ),

    identifier: _ => /[a-zA-z_][a-zA-Z0-9_]*/,

  },

});
