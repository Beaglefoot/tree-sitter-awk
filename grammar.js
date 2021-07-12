module.exports = grammar({
  name: 'awk',

  extras: $ => [$.comment, /[\s\t]/],

  word: $ => $.identifier,

  rules: {
    program: $ => repeat(choice($.rule, $.func_def)),

    rule: $ => seq($.pattern, optional($.block)),

    pattern: $ => choice($.exp, $.regex),

    statement: $ => 'todo_statement',

    block: $ => seq('{', repeat(choice($.statement, $.exp, $.regex)), '}'),

    exp: $ => choice($.identifier, $.number, $.string, $.binary_exp, $.unary_exp),

    binary_exp: $ => 'todo_binary_exp',

    unary_exp: $ => 'todo_unary_exp',

    regex: $ => 'todo_regex',

    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    number: $ => /\d+/,

    string: $ => seq('"', repeat(choice(/[^"\\]+/, $.escape_sequence)), '"'),

    // prettier-ignore
    escape_sequence: $ =>
      token.immediate(seq(
        '\\',
        choice(
          /[\\abfnrtv]/,
          /x[0-9a-fA-F]{1,2}/,
          /[0-7]{1,3}/
        )
      )),

    func_def: $ =>
      seq('function', field('name', $.identifier), '(', optional($.param_list), ')', $.block),

    param_list: $ => seq($.identifier, repeat(seq(',', $.identifier))),

    comment: $ => seq('#', /.*/),
  },
});
