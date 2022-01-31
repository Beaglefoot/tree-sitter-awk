declare interface IExternals {
  concatenating_space: ($: IExternals) => any;
  _if_else_separator: ($: IExternals) => any;
  _ambiguous_comment: ($: IExternals) => any;
  _no_space: ($: IExternals) => any;
}

declare interface IRules {
  program: ($: IRules & IExternals) => any;
  rule: ($: IRules & IExternals) => any;
  pattern: ($: IRules & IExternals) => any;
  range_pattern: ($: IRules & IExternals) => any;
  _special_pattern: ($: IRules & IExternals) => any;
  directive: ($: IRules & IExternals) => any;
  _statement: ($: IRules & IExternals) => any;
  _statement_separated: ($: IRules & IExternals) => any;
  _control_statement: ($: IRules & IExternals) => any;
  if_statement: ($: IRules & IExternals) => any;
  else_clause: ($: IRules & IExternals) => any;
  while_statement: ($: IRules & IExternals) => any;
  do_while_statement: ($: IRules & IExternals) => any;
  for_statement: ($: IRules & IExternals) => any;
  for_in_statement: ($: IRules & IExternals) => any;
  break_statement: ($: IRules & IExternals) => any;
  continue_statement: ($: IRules & IExternals) => any;
  delete_statement: ($: IRules & IExternals) => any;
  exit_statement: ($: IRules & IExternals) => any;
  return_statement: ($: IRules & IExternals) => any;
  switch_statement: ($: IRules & IExternals) => any;
  switch_body: ($: IRules & IExternals) => any;
  switch_case: ($: IRules & IExternals) => any;
  switch_default: ($: IRules & IExternals) => any;
  _io_statement: ($: IRules & IExternals) => any;
  _getline_exp: ($: IRules & IExternals) => any;
  getline_input: ($: IRules & IExternals) => any;
  getline_file: ($: IRules & IExternals) => any;
  next_statement: ($: IRules & IExternals) => any;
  nextfile_statement: ($: IRules & IExternals) => any;
  _print_args: ($: IRules & IExternals) => any;
  print_statement: ($: IRules & IExternals) => any;
  printf_statement: ($: IRules & IExternals) => any;
  redirected_io_statement: ($: IRules & IExternals) => any;
  piped_io_statement: ($: IRules & IExternals) => any;
  block: ($: IRules & IExternals) => any;
  _block_content: ($: IRules & IExternals) => any;
  _exp: ($: IRules & IExternals) => any;
  ternary_exp: ($: IRules & IExternals) => any;
  binary_exp: ($: IRules & IExternals) => any;
  unary_exp: ($: IRules & IExternals) => any;
  update_exp: ($: IRules & IExternals) => any;
  assignment_exp: ($: IRules & IExternals) => any;
  piped_io_exp: ($: IRules & IExternals) => any;
  string_concat: ($: IRules & IExternals) => any;
  field_ref: ($: IRules & IExternals) => any;
  array_ref: ($: IRules & IExternals) => any;
  exp_list: ($: IRules & IExternals) => any;
  regex: ($: IRules & IExternals) => any;
  regex_pattern: ($: IRules & IExternals) => any;
  regex_flags: ($: IRules & IExternals) => any;
  regex_constant: ($: IRules & IExternals) => any;
  grouping: ($: IRules & IExternals) => any;
  _primitive: ($: IRules & IExternals) => any;
  identifier: ($: IRules & IExternals) => any;
  namespace: ($: IRules & IExternals) => any;
  ns_qualified_name: ($: IRules & IExternals) => any;
  number: ($: IRules & IExternals) => any;
  string: ($: IRules & IExternals) => any;
  escape_sequence: ($: IRules & IExternals) => any;
  func_def: ($: IRules & IExternals) => any;
  param_list: ($: IRules & IExternals) => any;
  func_call: ($: IRules & IExternals) => any;
  indirect_func_call: ($: IRules & IExternals) => any;
  args: ($: IRules & IExternals) => any;
  comment: ($: IRules & IExternals) => any;
}


declare interface IGrammar {
  name: string;
  extras?: ($: IRules & IExternals) => any;
  inline?: ($: IRules & IExternals) => any;
  conflicts?: ($: IRules & IExternals) => any;
  externals?: ($: IExternals) => any;
  word?: ($: IRules & IExternals) => any;
  supertypes?: ($: IRules & IExternals) => any;
  precedences?: ($: IRules & IExternals) => any;
  rules: IRules;
}

declare function grammar(g: IGrammar): any;

declare type TRule = (($: IRules & IExternals) => any) | string | RegExp;

declare interface IPrecFunc {
  (rule: TRule): TRule;
  (val: number | string, rule: TRule): TRule;
}

declare interface ITokenFunc {
  (rule: TRule): TRule;
}

declare function seq(...rules: TRule[]): TRule;
declare function choice(...rules: TRule[]): TRule;
declare function repeat(rule: TRule): TRule;
declare function repeat1(rule: TRule): TRule;
declare function optional(rule: TRule): TRule;
declare function alias(rule: TRule, name: TRule): TRule;
declare function field(name: string, rule: TRule): TRule;
declare const prec: IPrecFunc & {
  left: IPrecFunc;
  right: IPrecFunc;
  dynamic: (val: number, rule: TRule) => TRule;
};
declare const token: ITokenFunc & { immediate: ITokenFunc }
