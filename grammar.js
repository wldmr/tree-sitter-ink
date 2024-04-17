module.exports = grammar({
  name: 'ink',

  rules: {
    ink: $ => repeat($._toplevel),

    _toplevel: $ => choice(
      $.text, 
    ),

    text: _ => /[a-zA-Z0-9 .'":,!]+/,

  },

});
