declare interface IRules {
  program: ($: IRules) => any;
  rule: ($: IRules) => any;
  pattern: ($: IRules) => any;
  statement: ($: IRules) => any;
  statement_block: ($: IRules) => any;
}

declare interface IGrammar {
  name: string;
  extras?: ($: IRules) => any;
  inline?: ($: IRules) => any;
  conflicts?: ($: IRules) => any;
  externals?: ($: IRules) => any;
  word?: ($: IRules) => any;
  supertypes?: ($: IRules) => any;
  rules: IRules;
}

declare function grammar(g: IGrammar): any;

declare type TRule = (($: IRules) => any) | string | RegExp;

declare function seq(...rules: TRule[]): TRule;
declare function choice(...rules: TRule[]): TRule;
declare function repeat(rule: TRule): TRule;
declare function repeat1(rule: TRule): TRule;
declare function optional(rule: TRule): TRule;
declare function prec(num: number, rule: TRule): TRule;
prec.left = (num?: number, rule: TRule) => TRule;
prec.right = (num?: number, rule: TRule) => TRule;
prec.dyanmic = (num: number, rule: TRule) => TRule;
declare function token(rule: TRule): TRule;
token.immediate = (rule: TRule) => TRule;
declare function alias(rule: TRule, name: string): TRule;
declare function field(name: string, rule: TRule): TRule;
