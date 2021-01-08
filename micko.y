%{
  #include <stdio.h>
  #include <stdlib.h>
  #include "defs.h"
  #include "symtab.h"
  #include "codegen.h"


  int yyparse(void);
  int yylex(void);
  int yyerror(char *s);
  void warning(char *s);
  


  extern int yylineno;
  char char_buffer[CHAR_BUFFER_LENGTH];
  int error_count = 0;
  int warning_count = 0;
  int var_num = 0;
  int fun_idx = -1;
  int fcall_idx = -1;
  int type = 0;
  unsigned global_type = 0;
  int when_cnt = 0;
  int when_arr[100];
  int return_cnt = 0;
    unsigned function_param_types = 0;
  unsigned function_param_counter = 0;
  int check_stop = 0;
  unsigned function_params[24] = {0};
  
  int out_lin = 0;
  int lab_num = -1;
  FILE *output;
%}

%union {
  int i;
  char *s;
}

%token <i> _TYPE
%token _IF
%token _ELSE
%token _RETURN
%token <s> _ID
%token <s> _INT_NUMBER
%token <s> _UINT_NUMBER
%token _LPAREN
%token _RPAREN
%token _COMMA
%token _LBRACKET
%token _RBRACKET
%token _ASSIGN
%token _SEMICOLON
%token _INCREMENT
%token _AND
%token _
%token <i> _AROP
%token <i> _RELOP
%token _OR
%token _FOR
%token _IN
%token _DDOT
%token _FINISH
%token _OTHERW
%token _CHECK
%token _WHEN
%token _FOLLOWS


%type <i> num_exp exp literal function_call argument rel_exp check otherwise when when_list arguments
%type <s> vars 
%type <i> variable if_part log_exp increment increment_statement pars


%nonassoc ONLY_IF
%nonassoc _ELSE

%%

program
  : global_list function_list
      {  
        if(lookup_symbol("main", FUN) == NO_INDEX)
          err("undefined reference to 'main'");
       }
  ;

global_list
  :
  | global_list global_var
  ;

global_var
  : _TYPE _ID _SEMICOLON
    {
      int idx = lookup_symbol($2, GVAR);
      if (idx != NO_INDEX) {
        err("redefinition of '%s'", $2);
      }
      else {
        insert_symbol($2, GVAR, $1, NO_ATR, NO_ATR);
        code("\n%s:\n\t\tWORD\t1", $2); 
      }
    }
    
function_list
  : function
  | function_list function
  ;

function
  : _TYPE _ID
      {
        fun_idx = lookup_symbol($2, FUN);
        if(fun_idx == NO_INDEX)
          fun_idx = insert_symbol($2, FUN, $1, NO_ATR, NO_ATR);
        else 
          err("redefinition of function '%s'", $2);

        code("\n%s:", $2);
        code("\n\t\tPUSH\t%%14");
        code("\n\t\tMOV \t%%15,%%14");
      }
    _LPAREN parameter _RPAREN body
      {
        if( (return_cnt == 0) && (get_type(fun_idx) != VOID) )
          warn("Function expects return  value");
        return_cnt = 0;
        clear_symbols(fun_idx + 1);
        var_num = 0;

        code("\n@%s_exit:", $2);
        code("\n\t\tMOV \t%%14,%%15");
        code("\n\t\tPOP \t%%14");
        code("\n\t\tRET");

      }
  ;

parameter
  : /* empty */
      { set_atr1(fun_idx, 0); }

  |pars
  ;


pars
  : _TYPE _ID
    {
      if($1 == VOID)
          err("parameter cannot be VOID");
      if(lookup_symbol($2, VAR|PAR)){
      insert_symbol($2, PAR, $1, 1, NO_ATR);
      set_atr1(fun_idx, get_atr1(fun_idx)+1);
      set_atr2(fun_idx, $1);
      $$ = 1;
      }
    }
  | pars _COMMA _TYPE _ID
    {
      if($3 == VOID)
          err("parameter cannot be VOID");
      insert_symbol($4, PAR, $3, ++$$, NO_ATR);
      set_atr1(fun_idx, get_atr1(fun_idx)+1);
      set_atr2(fun_idx, get_atr2(fun_idx)*10 + $3);
    }
  ;

body
  : _LBRACKET variable_list 
      {
        if(var_num)
          code("\n\t\tSUBS\t%%15,$%d,%%15", 4*var_num);
        code("\n@%s_body:", get_name(fun_idx));
      }
  statement_list _RBRACKET
  ;

body_finish
  :_LBRACKET variable_list statement_list  _RBRACKET
  |_LBRACKET variable_list statement_list _FINISH _SEMICOLON _RBRACKET
  ;

variable_list
  : /* empty */
  | variable_list variable
  ;


 vars
   : _ID{
        if(global_type != 3){
        if(lookup_symbol($1, VAR|PAR) == NO_INDEX){
        
        
           insert_symbol($1, VAR, global_type, ++var_num, NO_ATR);
        }
        else 
           err("redefinition of '%s'", $1);
        }else
          err("variable can't be type void");
    }

      | vars _COMMA _ID{
        if(lookup_symbol($3, VAR|PAR) == NO_INDEX)
           insert_symbol($3, VAR, global_type, ++var_num, NO_ATR);
        else 
           err("redefinition of '%s'", $3);
      }
   ;

type 
  : _TYPE { global_type = $1; }
  ;



variable
  : type vars _SEMICOLON
      {
        //print_symtab();
      }
  ;

statement_list
  : /* empty */
  | statement_list statement
  ;

statement
  : compound_statement
  | assignment_statement
  | if_statement
  | return_statement
  | increment_statement
  | for
  | check_statement
  ;


compound_statement
  : _LBRACKET statement_list _RBRACKET
  ;

assignment_statement
  : _ID _ASSIGN num_exp _SEMICOLON
      {
        int idx = lookup_symbol($1, VAR|PAR|GVAR);
        if(idx == NO_INDEX)
          err("invalid lvalue '%s' in assignment", $1);
        else
          if(get_type(idx) != get_type($3))
            err("incompatible types in assignment");
        gen_mov($3, idx);
      }
  ;

num_exp
  : exp
  | num_exp _AROP exp
      {
        if(get_type($1) != get_type($3))
          err("invalid operands arithmetic operation");
        int t1 = get_type($1);    
        code("\n\t\t%s\t", ar_instructions[$2 + (t1 - 1) * AROP_NUMBER]);
        print_symtab();
        gen_sym_name($1);
        code(",");
        gen_sym_name($3);
        code(",");
        free_if_reg($3);
        free_if_reg($1);
        $$ = take_reg();
        gen_sym_name($$);
        set_type($$, t1);
      }
  ;

exp
  : literal
  
  | _ID
      {
        $$ = lookup_symbol($1, VAR|PAR|GVAR);
        
        if($$ == NO_INDEX)
          err("'%s' undeclared", $1);
      }
  | increment
  | function_call
      {
        $$ = take_reg();
        gen_mov(FUN_REG, $$);

      }
  | _LPAREN num_exp _RPAREN
      { $$ = $2; }
  ;

literal
  : _INT_NUMBER
      { $$ = insert_literal($1, INT); }

  | _UINT_NUMBER
      { $$ = insert_literal($1, UINT); }
  ;





increment  
  : _ID _INCREMENT {
      $$ = lookup_symbol($1, VAR|PAR|GVAR);
      // if($$ == NO_INDEX)
      //   err("invalid increment");
    }
  ;

   increment_statement
   : increment _SEMICOLON
      {
        if($1 == NO_INDEX)
          err("invalid increment");
        else {
          // code("\n\t\t%s\t", ar_instructions[ADD + (get_type($1) - 1) * AROP_NUMBER]);
          // gen_sym_name($1);
          // code(",$1,");
          // gen_sym_name($1);
        }
      }
   ;

function_call
  : _ID 
      {
        fcall_idx = lookup_symbol($1, FUN);
        if(fcall_idx == NO_INDEX)
          err("'%s' is not a function", $1);
      }
    _LPAREN argument _RPAREN
      {
        if(get_atr2(fcall_idx) != function_param_types){
          err("wrong param types '%s'", get_name(fcall_idx));
        }
        // printf ("\n %d %d ", get_atr1(fcall_idx), function_param_counter);
        if(get_atr1(fcall_idx) != function_param_counter){
          err("wrong number of args to function '%s'", get_name(fcall_idx));
        }

        for(int i = function_param_counter - 1; i >= 0; i--){  
          free_if_reg(function_params[i]);
          code("\n\t\t\tPUSH\t");
          gen_sym_name(function_params[i]);
        }
        code("\n\t\t\tCALL\t%s", get_name(fcall_idx));
        if(function_param_counter > 0)
          code("\n\t\t\tADDS\t%%15,$%d,%%15", function_param_counter * 4);

        set_type(FUN_REG, get_type(fcall_idx));
        $$ = FUN_REG;
        // function_param_counter = 0;
        // function_param_types = 0;
      }
  ;

argument
  : /* empty */
    { $$ = 0; }
  |arguments

  ;

arguments
  : num_exp
    {
      function_params[function_param_counter] = $1;
      function_param_types = (function_param_types * 10) + get_type($1);
      function_param_counter++;
      // free_if_reg($1);
      // code("\n\t\t\tPUSH\t");
      // gen_sym_name($1);
      $$ = 1;
    }
  | arguments _COMMA num_exp
    {
      function_params[function_param_counter] = $3;
      function_param_types = (function_param_types * 10) + get_type($3);
      function_param_counter++;
      $$ = $$ + 1;

    }
  ;


if_statement
  : if_part %prec ONLY_IF
      { code("\n@exit%d:", $1); }
  | if_part _ELSE statement
      { code("\n@exit%d:", $1); }
  ;

if_part
  : _IF _LPAREN 
      {
        $<i>$ = ++lab_num;
        code("\n@if%d:", lab_num);
      }
  log_exp 
      {
        code("\n\t\t%s\t@false%d", opp_jumps[$4], $<i>3);
        code("\n@true%d:", $<i>3);
      }
  _RPAREN statement
      {
        code("\n\t\tJMP \t@exit%d", $<i>3);
        code("\n@false%d:", $<i>3);
        $$ = $<i>3;
      }
  ;

log_exp
  : rel_exp
  | log_exp _AND rel_exp
  | log_exp _OR rel_exp
  ;


rel_exp
  : num_exp _RELOP num_exp
      {
        if(get_type($1) != get_type($3))
          err("invalid operands relational operator");
        $$ = $2 + ((get_type($1) - 1) * RELOP_NUMBER);
        gen_cmp($1, $3);
        
      }
  ;

return_statement
  
  : _RETURN num_exp _SEMICOLON
      {
        if(get_type(fun_idx) != 3){
          if(get_type(fun_idx) != get_type($2))
            err("function type and return value dont match");
        }else
          err("void cant have return value");
        return_cnt++;
        gen_mov($2, FUN_REG);
        code("\n\t\tJMP \t@%s_exit", get_name(fun_idx));        
      }
  | _RETURN _SEMICOLON{
    if(get_type(fun_idx) != VOID)
      warn("Function expects return  value");
    return_cnt++;
  }
  ;


for
  : _FOR _TYPE _ID  {
      //print_symtab();
      int last = get_last_element() + 1;
      $<i>$ = last;
      
      //provjera da li postoji lok prom
      if(lookup_symbol($3, VAR|PAR) == NO_INDEX ){
        
        insert_symbol($3, VAR, $2, ++var_num, 0);
        
      }
      else
        err("variable is '%s' already declared", $3);
  }
    _IN _LPAREN literal  _DDOT literal  _RPAREN {
      //printf("%d %d %d", $2, get_type($6), get_type($8));
      int i = lookup_symbol($3, VAR|PAR);
      if($2 != get_type($7) || $2 != get_type($9))
        err("iterator must be same type as boundaries");

      if(atoi(get_name($7)) > atoi(get_name($9)))
        err(" start value must be smaller than top value");

      print_symtab();
      gen_mov($7,i);
      $<i>$ = ++lab_num;
      code("\n@for%d:", lab_num);

      if(get_type(i) == INT) {
        code("\n\t\tCMPS\t");
        gen_sym_name(i);
        code(",");
        gen_sym_name($9);
        code("\n\t\tJGES\t@exit%d", $<i>$ );
      }
      else {
        code("\n\t\tCMPU\t");
        gen_sym_name(i);
        code(",");
        gen_sym_name($9);
        code("\n\t\tJGEU\t@exit%d", $<i>$ );
      }
  }
    statement{
      int i = lookup_symbol($3, VAR|PAR);
      code("\n\t\t%s\t", ar_instructions[ADD + (get_type(i) - 1) * AROP_NUMBER]);
      gen_sym_name(i);
      code(",$1,");
      gen_sym_name(i);
      clear_symbols($<i>4);  
      print_symtab();
      //print_symtab();
      code("\n\t\tJMP \t@for%d", $<i>11);
      code("\n@exit%d:", $<i>11);

    }



  ;

/* constant 
  : _UINT_NUMBER{ $$ = $1;}
  | _INT_NUMBER { $$ = $1;}
  ; */

when
  : _WHEN literal{
      int i = 0;
      while (i < when_cnt) {
        if ($2 == when_arr[i]) { //ako takva konstanta vec postoji u nizu
          err("duplicated constant in when");
          break;
        }
        i++;
      }
      if (i == when_cnt) { //ako nije duplikat
      when_arr[when_cnt] = $2; //ubaci konstantu u niz
      when_cnt++;
      }
      


    } 
  _FOLLOWS body_finish{
      $$ = $2;
      
  }
  ;

otherwise 
  : _OTHERW _FOLLOWS body_finish{}
  ;


check_statement
  : _CHECK _LPAREN _ID{
      check_stop = 0;
      if(lookup_symbol($3, VAR|PAR) == NO_INDEX){
        err("no such variable found");
        check_stop ++;
        
      }
     } _RPAREN _LBRACKET check{
       int var_id = lookup_symbol($3, VAR|PAR);
      
      //provjera da li je istog tipa promjenjiva u check i parametar u when
      if(get_type(var_id) != get_type($7) && check_stop == 0)
        err("var '%s' is not the same type as parametar '%s'",$3, get_name($7));
     } _RBRACKET
  ;


when_list
  : when{$$ = $1;}
  | when_list when{$$ = $2;}
  ;

check
  : when_list { $$ = $1;}
  | when_list otherwise { $$ = $1;} 
  ;


%%

int yyerror(char *s) {
  fprintf(stderr, "\nline %d: ERROR: %s", yylineno, s);
  error_count++;
  return 0;
}

void warning(char *s) {
  fprintf(stderr, "\nline %d: WARNING: %s", yylineno, s);
  warning_count++;
}

int main() {
  int synerr;
  init_symtab();
  output = fopen("output.asm", "w+");


  synerr = yyparse();

  clear_symtab();
  fclose(output);
  
  if(warning_count)
    printf("\n%d warning(s).\n", warning_count);

  if(error_count) {
    printf("\n%d error(s).\n", error_count);
    // remove("output.asm");
  }

  if(synerr)
    return -1; //syntax error
  else
    return error_count; //semantic errors
}

