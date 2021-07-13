module.exports = grammar({
  name: 'awk',

  extras: $ => [$.comment, /[\s\t]/],

  word: $ => $.identifier,

  rules: {
    program: $ => repeat(choice($.rule, $.func_def)),

    rule: $ => seq($.pattern, optional($.block)),

    pattern: $ => choice($.exp, $.regex, $._primitive),

    statement: $ => 'todo_statement',

    block: $ => seq('{', repeat(choice($.statement, $.exp, $.regex, $._primitive)), '}'),

    exp: $ => choice($.identifier, $.binary_exp, $.unary_exp, $.func_call),

    binary_exp: $ => 'todo_binary_exp',

    unary_exp: $ => 'todo_unary_exp',

    regex: $ => 'todo_regex',

    _primitive: $ => choice($.number, $.string),

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

    func_call: $ => seq(field('func_name', $.identifier), '(', optional($.args), ')'),

    args: $ => seq(choice($.exp, $._primitive), repeat(seq(',', choice($.exp, $._primitive)))),

    comment: $ => seq('#', /.*/),
  },
});
