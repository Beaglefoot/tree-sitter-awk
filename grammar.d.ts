declare interface IRules {
  program: ($: IRules) => any;
  rule: ($: IRules) => any;
  pattern: ($: IRules) => any;
  _special_pattern: ($: IRules) => any;
  statement: ($: IRules) => any;
  _statement_separated: ($: IRules) => any;
  _control_statement: ($: IRules) => any;
  if_statement: ($: IRules) => any;
  else_clause: ($: IRules) => any;
  while_statement: ($: IRules) => any;
  do_while_statement: ($: IRules) => any;
  for_statement: ($: IRules) => any;
  for_in_statement: ($: IRules) => any;
  break_statement: ($: IRules) => any;
  continue_statement: ($: IRules) => any;
  delete_statement: ($: IRules) => any;
  exit_statement: ($: IRules) => any;
  switch_statement: ($: IRules) => any;
  switch_body: ($: IRules) => any;
  switch_case: ($: IRules) => any;
  switch_default: ($: IRules) => any;
  _io_statement: ($: IRules) => any;
  getline_statement: ($: IRules) => any;
  next_statement: ($: IRules) => any;
  nextfile_statement: ($: IRules) => any;
  print_statement: ($: IRules) => any;
  block: ($: IRules) => any;
  _exp: ($: IRules) => any;
  ternary_exp: ($: IRules) => any;
  binary_exp: ($: IRules) => any;
  unary_exp: ($: IRules) => any;
  update_exp: ($: IRules) => any;
  assignment_exp: ($: IRules) => any;
  field_ref: ($: IRules) => any;
  array_ref: ($: IRules) => any;
  regex: ($: IRules) => any;
  _primitive: ($: IRules) => any;
  identifier: ($: IRules) => any;
  number: ($: IRules) => any;
  string: ($: IRules) => any;
  escape_sequence: ($: IRules) => any;
  func_def: ($: IRules) => any;
  param_list: ($: IRules) => any;
  func_call: ($: IRules) => any;
  args: ($: IRules) => any;
  comment: ($: IRules) => any;
}


declare interface IGrammar {
  name: string;
  extras?: ($: IRules) => any;
  inline?: ($: IRules) => any;
  conflicts?: ($: IRules) => any;
  externals?: ($: IRules) => any;
  word?: ($: IRules) => any;
  supertypes?: ($: IRules) => any;
  precedences?: ($: IRules) => any;
  rules: IRules;
}

declare function grammar(g: IGrammar): any;

declare type TRule = (($: IRules) => any) | string | RegExp;

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
