module.exports = grammar({
  name: 'awk',

  extras: $ => [$.comment, /[\s\t]/],

  externals: $ => [$.concatenating_space, $._if_else_separator],

  precedences: $ => [
    [
      $.grouping,
      $.field_ref,
      $.func_call,
      $.update_exp,
      'binary_exponent',
      'binary_times',
      'binary_plus',
      $.string_concat,
      $.unary_exp,
      $.piped_io_exp,
      'binary_relation',
      'binary_match',
      'binary_in',
      'binary_and',
      'binary_or',
      $.ternary_exp,
      $._exp_list,
      $.range_pattern,
      $._statement,
    ],
    [$.func_call, $._exp],
    [$.update_exp, $._exp],
    [$._statement_separated, $.if_statement],
    [$.else_clause, $._statement_separated],
    [$.print_statement, $.printf_statement, $.grouping, $.binary_exp],
    [$.for_in_statement, $._exp],
    [$._exp, $.string_concat],
  ],

  conflicts: $ => [],

  word: $ => $.identifier,

  rules: {
    program: $ => repeat(choice($.rule, $.func_def, $.directive)),

    rule: $ =>
      prec.right(choice(seq($.pattern, optional($.block)), seq(optional($.pattern), $.block))),

    pattern: $ => prec.right(choice($._exp, $.range_pattern, $._special_pattern)),

    range_pattern: $ => seq(field('start', $._exp), ',', field('stop', $._exp)),

    _special_pattern: $ => choice('BEGIN', 'END', 'BEGINFILE', 'ENDFILE'),

    directive: $ => seq(choice('@include', '@load', '@namespace'), $.string),

    _statement: $ =>
      prec.left(
        choice(
          seq($._statement_separated, $._statement),
          $._statement_separated,
          $._control_statement,
          $._io_statement,
          $._exp
        )
      ),

    _statement_separated: $ => prec.right(seq($._statement, choice(';', '\n'))),

    _control_statement: $ =>
      choice(
        $.if_statement,
        $.while_statement,
        $.do_while_statement,
        $.for_statement,
        $.for_in_statement,
        $.break_statement,
        $.continue_statement,
        $.delete_statement,
        $.exit_statement,
        $.return_statement,
        $.switch_statement
      ),

    if_statement: $ =>
      prec.right(
        seq(
          'if',
          field('condition', seq('(', $._exp, ')')),
          choice($.block, $._statement),
          optional(seq($._if_else_separator, $.else_clause))
        )
      ),

    else_clause: $ => seq('else', choice($.block, $._statement)),

    while_statement: $ =>
      prec.right(
        seq('while', field('condition', seq('(', $._exp, ')')), choice($.block, $._statement))
      ),

    do_while_statement: $ =>
      prec.right(
        seq('do', choice($.block, $._statement), 'while', field('condition', seq('(', $._exp, ')')))
      ),

    for_statement: $ =>
      prec.right(
        seq(
          'for',
          '(',
          field('initializer', optional($._exp)),
          ';',
          field('condition', optional($._exp)),
          ';',
          field('advancement', optional($._exp)),
          ')',
          choice($.block, $._statement)
        )
      ),

    for_in_statement: $ =>
      prec.right(
        seq(
          'for',
          '(',
          field('left', $.identifier),
          'in',
          field('right', $.identifier),
          ')',
          choice($.block, $._statement)
        )
      ),

    // TODO: Must be available in loops and switch statement only
    break_statement: $ => 'break',

    // TODO: Must be available in loops only
    continue_statement: $ => 'continue',

    delete_statement: $ => seq('delete', choice($.identifier, $.array_ref)),

    exit_statement: $ => seq('exit', optional($._exp)),

    return_statement: $ => seq('return', optional($._exp)),

    switch_statement: $ => seq('switch', '(', $._exp, ')', $.switch_body),

    switch_body: $ => seq('{', repeat(choice($.switch_case, $.switch_default)), '}'),

    switch_case: $ =>
      seq('case', field('value', choice($._primitive, $.regex)), ':', optional($._statement)),

    switch_default: $ => seq('default', ':', $._statement),

    _io_statement: $ =>
      choice(
        $.getline_statement,
        $.next_statement,
        $.nextfile_statement,
        $.print_statement,
        $.printf_statement,
        $.redirected_io_statement,
        $.piped_io_statement
      ),

    getline_statement: $ =>
      prec.right(
        seq('getline', optional($.identifier), optional(seq('<', field('filename', $._exp))))
      ),

    // TODO: Must not be available in BEGIN/END
    next_statement: $ => 'next',

    // TODO: Must not be available in BEGIN/END
    nextfile_statement: $ => 'nextfile',

    print_statement: $ => {
      const args = choice($._exp, $._exp_list);

      return prec.left(seq('print', optional(choice(args, seq('(', args, ')')))));
    },

    printf_statement: $ => {
      const args = choice($._exp, $._exp_list);

      return prec.left(seq('printf', choice(args, seq('(', args, ')'))));
    },

    redirected_io_statement: $ =>
      seq(
        choice($.print_statement, $.printf_statement),
        choice('>', '>>'),
        field('filename', $._exp)
      ),

    piped_io_statement: $ =>
      seq(
        choice($.print_statement, $.printf_statement),
        choice('|', '|&'),
        field('command', $._exp)
      ),

    block: $ => seq('{', optional(choice($.block, $._statement)), '}'),

    _exp: $ =>
      prec.left(
        choice(
          $.identifier,
          $.ternary_exp,
          $.binary_exp,
          $.unary_exp,
          $.update_exp,
          $.assignment_exp,
          $.field_ref,
          $.func_call,
          $._primitive,
          $.array_ref,
          $.regex,
          $.grouping,
          $.piped_io_exp,
          $.string_concat
        )
      ),

    ternary_exp: $ =>
      prec.right(
        seq(
          field('condition', $._exp),
          '?',
          field('consequence', $._exp),
          ':',
          field('alternative', $._exp)
        )
      ),

    binary_exp: $ =>
      choice(
        ...[
          ['^', 'binary_exponent'],
          ['**', 'binary_exponent'],
          ['*', 'binary_times'],
          ['/', 'binary_times'],
          ['%', 'binary_times'],
          ['+', 'binary_plus'],
          ['-', 'binary_plus'],
          ['<', 'binary_relation'],
          ['>', 'binary_relation'],
          ['<=', 'binary_relation'],
          ['>=', 'binary_relation'],
          ['==', 'binary_relation'],
          ['!=', 'binary_relation'],
          ['~', 'binary_match'],
          ['!~', 'binary_match'],
          ['in', 'binary_in'],
          ['&&', 'binary_and'],
          ['||', 'binary_or'],
        ].map(([op, precedence]) =>
          prec.left(
            precedence,
            seq(field('left', $._exp), field('operator', op), field('right', $._exp))
          )
        )
      ),

    unary_exp: $ =>
      choice(
        ...['!', '+', '-'].map(op =>
          prec.left(seq(field('operator', op), field('argument', $._exp)))
        )
      ),

    update_exp: $ => {
      const refs = choice($.identifier, $.field_ref, $.array_ref);

      return prec.left(
        choice(
          seq(field('argument', refs), field('operator', choice('++', '--'))),
          seq(field('operator', choice('++', '--')), field('argument', refs))
        )
      );
    },

    assignment_exp: $ =>
      prec.right(
        seq(
          field('left', choice($.identifier, $.array_ref, $.field_ref)),
          choice('=', '+=', '-=', '*=', '/=', '%=', '^='),
          field('right', $._exp)
        )
      ),

    piped_io_exp: $ =>
      prec.left(
        seq(
          field('command', $._exp),
          choice('|', '|&'),
          $.getline_statement,
          optional($.identifier)
        )
      ),

    string_concat: $ => {
      const applicable_exp = choice(
        $.identifier,
        $.ternary_exp,
        $.binary_exp,
        $.unary_exp,
        $.field_ref,
        $.func_call,
        $._primitive,
        $.array_ref,
        $.grouping,
        $.string_concat
      );

      return prec.left(
        seq(field('left', applicable_exp), $.concatenating_space, field('right', applicable_exp))
      );
    },

    field_ref: $ => seq('$', $._exp),

    array_ref: $ =>
      seq(choice($.identifier, $.array_ref), '[', field('index', choice($._exp, $._exp_list)), ']'),

    _exp_list: $ => seq(repeat1(seq($._exp, ',')), $._exp),

    regex: $ =>
      seq(
        '/',
        field('pattern', $.regex_pattern),
        token.immediate('/'),
        optional(field('flags', $.regex_flags))
      ),

    regex_pattern: $ => {
      const char = /[^/\\\[\n]/;
      const char_escaped = seq('\\', /./);
      const char_list = seq('[', repeat1(choice(char_escaped, /[^\]]/)), ']');

      return token.immediate(repeat(choice(char, char_escaped, char_list)));
    },

    regex_flags: $ => token.immediate(/[a-z]+/),

    grouping: $ => seq('(', $._exp, ')'),

    _primitive: $ => choice($.number, $.string),

    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    number: $ => /[\d.]+/,

    string: $ => seq('"', repeat(choice(/[^"\\]+/, $.escape_sequence)), '"'),

    escape_sequence: $ =>
      token.immediate(seq('\\', choice('"', /[\\abfnrtv]/, /x[0-9a-fA-F]{1,2}/, /[0-7]{1,3}/))),

    func_def: $ =>
      seq('function', field('name', $.identifier), '(', optional($.param_list), ')', $.block),

    param_list: $ => seq($.identifier, repeat(seq(',', $.identifier))),

    func_call: $ => seq(field('name', $.identifier), '(', optional($.args), ')'),

    args: $ => seq($._exp, repeat(seq(',', $._exp))),

    comment: $ => seq('#', /.*/),
  },
});
