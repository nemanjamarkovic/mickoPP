/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "micko.y"

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
  int check_var = -1;
  int last_when = -1;
  int check_exit = -1;

  int out_lin = 0;
  int lab_num = -1;
  FILE *output;

#line 110 "micko.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_MICKO_TAB_H_INCLUDED
# define YY_YY_MICKO_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    _TYPE = 258,
    _IF = 259,
    _ELSE = 260,
    _RETURN = 261,
    _ID = 262,
    _INT_NUMBER = 263,
    _UINT_NUMBER = 264,
    _LPAREN = 265,
    _RPAREN = 266,
    _COMMA = 267,
    _LBRACKET = 268,
    _RBRACKET = 269,
    _ASSIGN = 270,
    _SEMICOLON = 271,
    _INCREMENT = 272,
    _AND = 273,
    _ = 274,
    _AROP = 275,
    _RELOP = 276,
    _OR = 277,
    _FOR = 278,
    _IN = 279,
    _DDOT = 280,
    _FINISH = 281,
    _OTHERW = 282,
    _CHECK = 283,
    _WHEN = 284,
    _FOLLOWS = 285,
    ONLY_IF = 286
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 41 "micko.y"

  int i;
  char *s;

#line 199 "micko.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MICKO_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   136

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  32
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  76
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  135

#define YYUNDEFTOK  2
#define YYMAXUTOK   286


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    87,    87,    95,    96,   100,   113,   114,   119,   118,
     148,   150,   155,   166,   178,   177,   192,   193,   198,   211,
     220,   226,   233,   234,   238,   239,   240,   241,   242,   243,
     244,   249,   253,   266,   267,   287,   289,   296,   297,   303,
     308,   311,   320,   328,   343,   342,   378,   379,   384,   394,
     406,   408,   414,   419,   413,   432,   433,   434,   439,   451,
     462,   471,   485,   471,   538,   550,   538,   562,   566,   571,
     574,   577,   581,   587,   587,   623,   623
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_TYPE", "_IF", "_ELSE", "_RETURN",
  "_ID", "_INT_NUMBER", "_UINT_NUMBER", "_LPAREN", "_RPAREN", "_COMMA",
  "_LBRACKET", "_RBRACKET", "_ASSIGN", "_SEMICOLON", "_INCREMENT", "_AND",
  "_", "_AROP", "_RELOP", "_OR", "_FOR", "_IN", "_DDOT", "_FINISH",
  "_OTHERW", "_CHECK", "_WHEN", "_FOLLOWS", "ONLY_IF", "$accept",
  "program", "global_list", "global_var", "function_list", "function",
  "$@1", "parameter", "pars", "body", "$@2", "variable_list", "vars",
  "type", "variable", "statement_list", "statement", "compound_statement",
  "assignment_statement", "num_exp", "exp", "literal", "increment",
  "increment_statement", "function_call", "$@3", "argument", "arguments",
  "if_statement", "if_part", "@4", "$@5", "log_exp", "rel_exp",
  "return_statement", "for", "@6", "@7", "check_statement", "@8", "$@9",
  "check", "when_list", "when", "$@10", "otherwise", "$@11", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286
};
# endif

#define YYPACT_NINF (-78)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-45)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -78,    19,    49,   -78,    22,   -78,    53,   -78,    42,    63,
     -78,   -78,    65,   -78,    73,    70,    67,    68,   -78,    66,
      78,   -78,   -78,    75,    80,   -78,   -78,   -78,    77,   -78,
      -2,   -78,     4,    76,    -1,    30,   -78,   -78,    82,    79,
     -78,   -78,   -78,    71,   -78,   -78,    83,   -78,   -78,   -78,
      84,   -78,   -78,     0,   -78,   -78,    59,   -78,    28,   -78,
     -78,   -78,   -78,    59,   -78,    18,    85,    86,   -78,    36,
     -78,    59,    87,     7,   -78,    59,    34,   -78,   -78,   -78,
     -78,    -7,    16,   -78,    59,   -78,   -78,   -78,    72,    89,
      59,    59,    59,    91,    74,    92,    93,    94,    95,    74,
     -78,   -78,    36,   -78,    59,    52,    61,   -78,    74,    81,
      52,   -78,    26,    69,    52,   -78,    96,    88,    90,   -78,
      97,    98,    99,   -78,   -78,   101,   -78,   -78,    36,    36,
     -78,    36,   -78,   -78,   -78
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     0,     1,     0,     4,     2,     6,     8,     0,
       7,     5,     0,     8,    10,     0,     0,    11,    12,     0,
       0,    16,     9,     0,    14,    13,    20,    22,     0,    17,
       0,    18,     0,     0,     0,     0,    22,    15,     0,     0,
      23,    24,    25,     0,    28,    26,    50,    27,    29,    30,
       0,    21,    52,    36,    40,    41,     0,    60,     0,    33,
      35,    37,    38,     0,    42,     0,     0,     0,    43,     0,
      19,     0,     0,     0,    59,     0,     0,    31,    61,    64,
      51,     0,    53,    55,    46,    39,    34,    32,     0,     0,
       0,     0,     0,     0,    48,     0,    47,     0,     0,    58,
      56,    57,     0,    45,     0,     0,     0,    54,    49,     0,
       0,    65,    67,    69,     0,    73,     0,     0,    71,    68,
       0,     0,     0,    66,    75,     0,    70,    62,     0,     0,
      72,     0,    74,    76,    63
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -78,   -78,   -78,   -78,   -78,   105,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   100,   -66,   -78,   -78,   -33,
      32,   -77,   -30,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -18,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,     2,   -78,   -78,   -78
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     5,     6,     7,    12,    16,    17,    22,
      27,    24,    32,    28,    29,    30,    40,    41,    42,    81,
      59,    60,    61,    44,    62,    72,    95,    96,    45,    46,
      71,    93,    82,    83,    47,    48,    88,   131,    49,    89,
     116,   111,   112,   113,   122,   119,   129
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      43,    58,    33,    80,    34,    35,    53,    54,    55,    56,
     -44,    36,    37,    75,    90,    57,    50,    64,    85,     3,
      51,    38,    33,    73,    34,    35,    39,    75,   109,     8,
      76,    36,    77,   115,    91,    43,   107,   121,    92,    43,
      33,    38,    34,    35,    74,    63,    39,    64,    75,    36,
      87,    94,     4,   117,    75,   110,     9,    99,    11,    38,
      54,    55,   132,   133,    39,   134,    53,    54,    55,    56,
      13,   108,    43,   100,   101,    14,    15,    18,    19,    21,
      20,    23,    25,    26,    31,    66,    52,    68,    69,    67,
     110,    70,    78,    79,    75,   120,    97,    84,    43,    43,
      98,    43,   102,   103,   105,   104,   114,    86,   106,   127,
     123,    10,     0,   126,   118,     0,   125,   130,   124,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   128,
       0,     0,     0,     0,     0,     0,    65
};

static const yytype_int16 yycheck[] =
{
      30,    34,     4,    69,     6,     7,     7,     8,     9,    10,
      10,    13,    14,    20,    21,    16,    12,    17,    11,     0,
      16,    23,     4,    56,     6,     7,    28,    20,   105,     7,
      63,    13,    14,   110,    18,    65,   102,   114,    22,    69,
       4,    23,     6,     7,    16,    15,    28,    17,    20,    13,
      16,    84,     3,    27,    20,    29,     3,    90,    16,    23,
       8,     9,   128,   129,    28,   131,     7,     8,     9,    10,
       7,   104,   102,    91,    92,    10,     3,     7,    11,    13,
      12,     3,     7,     3,     7,     3,    10,    16,     5,    10,
      29,     7,     7,     7,    20,    26,    24,    10,   128,   129,
      11,   131,    11,    11,    10,    12,    25,    75,    13,    11,
      14,     6,    -1,    16,   112,    -1,    26,    16,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    36
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    33,    34,     0,     3,    35,    36,    37,     7,     3,
      37,    16,    38,     7,    10,     3,    39,    40,     7,    11,
      12,    13,    41,     3,    43,     7,     3,    42,    45,    46,
      47,     7,    44,     4,     6,     7,    13,    14,    23,    28,
      48,    49,    50,    54,    55,    60,    61,    66,    67,    70,
      12,    16,    10,     7,     8,     9,    10,    16,    51,    52,
      53,    54,    56,    15,    17,    47,     3,    10,    16,     5,
       7,    62,    57,    51,    16,    20,    51,    14,     7,     7,
      48,    51,    64,    65,    10,    11,    52,    16,    68,    71,
      21,    18,    22,    63,    51,    58,    59,    24,    11,    51,
      65,    65,    11,    11,    12,    10,    13,    48,    51,    53,
      29,    73,    74,    75,    25,    53,    72,    27,    75,    77,
      26,    53,    76,    14,    30,    26,    16,    11,    30,    78,
      16,    69,    48,    48,    48
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    32,    33,    34,    34,    35,    36,    36,    38,    37,
      39,    39,    40,    40,    42,    41,    43,    43,    44,    44,
      45,    46,    47,    47,    48,    48,    48,    48,    48,    48,
      48,    49,    50,    51,    51,    52,    52,    52,    52,    52,
      53,    53,    54,    55,    57,    56,    58,    58,    59,    59,
      60,    60,    62,    63,    61,    64,    64,    64,    65,    66,
      66,    68,    69,    67,    71,    72,    70,    73,    73,    74,
      74,    74,    74,    76,    75,    78,    77
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,     2,     3,     1,     2,     0,     7,
       0,     1,     2,     4,     0,     5,     0,     2,     1,     3,
       1,     3,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     3,     4,     1,     3,     1,     1,     1,     1,     3,
       1,     1,     2,     2,     0,     5,     0,     1,     1,     3,
       1,     3,     0,     0,     7,     1,     3,     3,     3,     3,
       2,     0,     0,    12,     0,     0,     9,     1,     2,     1,
       3,     2,     4,     0,     5,     0,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 88 "micko.y"
      {  
        if(lookup_symbol("main", FUN) == NO_INDEX)
          err("undefined reference to 'main'");
       }
#line 1475 "micko.tab.c"
    break;

  case 5:
#line 101 "micko.y"
    {
      int idx = lookup_symbol((yyvsp[-1].s), GVAR);
      if (idx != NO_INDEX) {
        err("redefinition of '%s'", (yyvsp[-1].s));
      }
      else {
        insert_symbol((yyvsp[-1].s), GVAR, (yyvsp[-2].i), NO_ATR, NO_ATR);
        code("\n%s:\n\t\tWORD\t1", (yyvsp[-1].s)); 
      }
    }
#line 1490 "micko.tab.c"
    break;

  case 8:
#line 119 "micko.y"
      {
        fun_idx = lookup_symbol((yyvsp[0].s), FUN);
        if(fun_idx == NO_INDEX)
          fun_idx = insert_symbol((yyvsp[0].s), FUN, (yyvsp[-1].i), NO_ATR, NO_ATR);
        else 
          err("redefinition of function '%s'", (yyvsp[0].s));

        code("\n%s:", (yyvsp[0].s));
        code("\n\t\tPUSH\t%%14");
        code("\n\t\tMOV \t%%15,%%14");
      }
#line 1506 "micko.tab.c"
    break;

  case 9:
#line 131 "micko.y"
      {
        if( (return_cnt == 0) && (get_type(fun_idx) != VOID) )
          warn("Function expects return  value");
        return_cnt = 0;
        clear_symbols(fun_idx + 1);
        var_num = 0;

        code("\n@%s_exit:", (yyvsp[-5].s));
        code("\n\t\tMOV \t%%14,%%15");
        code("\n\t\tPOP \t%%14");
        code("\n\t\tRET");

      }
#line 1524 "micko.tab.c"
    break;

  case 10:
#line 148 "micko.y"
      { set_atr1(fun_idx, 0); }
#line 1530 "micko.tab.c"
    break;

  case 12:
#line 156 "micko.y"
    {
      if((yyvsp[-1].i) == VOID)
          err("parameter cannot be VOID");
      if(lookup_symbol((yyvsp[0].s), VAR|PAR)){
      insert_symbol((yyvsp[0].s), PAR, (yyvsp[-1].i), 1, NO_ATR);
      set_atr1(fun_idx, get_atr1(fun_idx)+1);
      set_atr2(fun_idx, (yyvsp[-1].i));
      (yyval.i) = 1;
      }
    }
#line 1545 "micko.tab.c"
    break;

  case 13:
#line 167 "micko.y"
    {
      if((yyvsp[-1].i) == VOID)
          err("parameter cannot be VOID");
      insert_symbol((yyvsp[0].s), PAR, (yyvsp[-1].i), ++(yyval.i), NO_ATR);
      set_atr1(fun_idx, get_atr1(fun_idx)+1);
      set_atr2(fun_idx, get_atr2(fun_idx)*10 + (yyvsp[-1].i));
    }
#line 1557 "micko.tab.c"
    break;

  case 14:
#line 178 "micko.y"
      {
        if(var_num)
          code("\n\t\tSUBS\t%%15,$%d,%%15", 4*var_num);
        code("\n@%s_body:", get_name(fun_idx));
      }
#line 1567 "micko.tab.c"
    break;

  case 18:
#line 198 "micko.y"
        {
        if(global_type != 3){
        if(lookup_symbol((yyvsp[0].s), VAR|PAR) == NO_INDEX){
        
        
           insert_symbol((yyvsp[0].s), VAR, global_type, ++var_num, NO_ATR);
        }
        else 
           err("redefinition of '%s'", (yyvsp[0].s));
        }else
          err("variable can't be type void");
    }
#line 1584 "micko.tab.c"
    break;

  case 19:
#line 211 "micko.y"
                       {
        if(lookup_symbol((yyvsp[0].s), VAR|PAR) == NO_INDEX)
           insert_symbol((yyvsp[0].s), VAR, global_type, ++var_num, NO_ATR);
        else 
           err("redefinition of '%s'", (yyvsp[0].s));
      }
#line 1595 "micko.tab.c"
    break;

  case 20:
#line 220 "micko.y"
          { global_type = (yyvsp[0].i); }
#line 1601 "micko.tab.c"
    break;

  case 21:
#line 227 "micko.y"
      {
        //print_symtab();
      }
#line 1609 "micko.tab.c"
    break;

  case 32:
#line 254 "micko.y"
      {
        int idx = lookup_symbol((yyvsp[-3].s), VAR|PAR|GVAR);
        if(idx == NO_INDEX)
          err("invalid lvalue '%s' in assignment", (yyvsp[-3].s));
        else
          if(get_type(idx) != get_type((yyvsp[-1].i)))
            err("incompatible types in assignment");
        gen_mov((yyvsp[-1].i), idx);
      }
#line 1623 "micko.tab.c"
    break;

  case 34:
#line 268 "micko.y"
      {
        if(get_type((yyvsp[-2].i)) != get_type((yyvsp[0].i)))
          err("invalid operands arithmetic operation");
        int t1 = get_type((yyvsp[-2].i));    
        code("\n\t\t%s\t", ar_instructions[(yyvsp[-1].i) + (t1 - 1) * AROP_NUMBER]);
        // print_symtab();
        gen_sym_name((yyvsp[-2].i));
        code(",");
        gen_sym_name((yyvsp[0].i));
        code(",");
        free_if_reg((yyvsp[0].i));
        free_if_reg((yyvsp[-2].i));
        (yyval.i) = take_reg();
        gen_sym_name((yyval.i));
        set_type((yyval.i), t1);
      }
#line 1644 "micko.tab.c"
    break;

  case 36:
#line 290 "micko.y"
      {
        (yyval.i) = lookup_symbol((yyvsp[0].s), VAR|PAR|GVAR);
        
        if((yyval.i) == NO_INDEX)
          err("'%s' undeclared", (yyvsp[0].s));
      }
#line 1655 "micko.tab.c"
    break;

  case 38:
#line 298 "micko.y"
      {
        (yyval.i) = take_reg();
        gen_mov(FUN_REG, (yyval.i));

      }
#line 1665 "micko.tab.c"
    break;

  case 39:
#line 304 "micko.y"
      { (yyval.i) = (yyvsp[-1].i); }
#line 1671 "micko.tab.c"
    break;

  case 40:
#line 309 "micko.y"
      { (yyval.i) = insert_literal((yyvsp[0].s), INT); }
#line 1677 "micko.tab.c"
    break;

  case 41:
#line 312 "micko.y"
      { (yyval.i) = insert_literal((yyvsp[0].s), UINT); }
#line 1683 "micko.tab.c"
    break;

  case 42:
#line 320 "micko.y"
                   {
      (yyval.i) = lookup_symbol((yyvsp[-1].s), VAR|PAR|GVAR);
      // if($$ == NO_INDEX)
      //   err("invalid increment");
    }
#line 1693 "micko.tab.c"
    break;

  case 43:
#line 329 "micko.y"
      {
        if((yyvsp[-1].i) == NO_INDEX)
          err("invalid increment");
        else {
          code("\n\t\t%s\t", ar_instructions[ADD + (get_type((yyvsp[-1].i)) - 1) * AROP_NUMBER]);
          gen_sym_name((yyvsp[-1].i));
          code(",$1,");
          gen_sym_name((yyvsp[-1].i));
        }
      }
#line 1708 "micko.tab.c"
    break;

  case 44:
#line 343 "micko.y"
      {
        fcall_idx = lookup_symbol((yyvsp[0].s), FUN);
        if(fcall_idx == NO_INDEX)
          err("'%s' is not a function", (yyvsp[0].s));
      }
#line 1718 "micko.tab.c"
    break;

  case 45:
#line 349 "micko.y"
      {
        // print_symtab();
        // printf("%d", function_param_types);
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
        (yyval.i) = FUN_REG;
        function_param_counter = 0;
        function_param_types = 0;
      }
#line 1748 "micko.tab.c"
    break;

  case 46:
#line 378 "micko.y"
    { (yyval.i) = 0; }
#line 1754 "micko.tab.c"
    break;

  case 48:
#line 385 "micko.y"
    {
      function_params[function_param_counter] = (yyvsp[0].i);
      function_param_types = (function_param_types * 10) + get_type((yyvsp[0].i));
      function_param_counter++;
      // free_if_reg($1);
      // code("\n\t\t\tPUSH\t");
      // gen_sym_name($1);
      (yyval.i) = 1;
    }
#line 1768 "micko.tab.c"
    break;

  case 49:
#line 395 "micko.y"
    {
      function_params[function_param_counter] = (yyvsp[0].i);
      function_param_types = (function_param_types * 10) + get_type((yyvsp[0].i));
      function_param_counter++;
      (yyval.i) = (yyval.i) + 1;

    }
#line 1780 "micko.tab.c"
    break;

  case 50:
#line 407 "micko.y"
      { code("\n@exit%d:", (yyvsp[0].i)); }
#line 1786 "micko.tab.c"
    break;

  case 51:
#line 409 "micko.y"
      { code("\n@exit%d:", (yyvsp[-2].i)); }
#line 1792 "micko.tab.c"
    break;

  case 52:
#line 414 "micko.y"
      {
        (yyval.i) = ++lab_num;
        code("\n@if%d:", lab_num);
      }
#line 1801 "micko.tab.c"
    break;

  case 53:
#line 419 "micko.y"
      {
        code("\n\t\t%s\t@false%d", opp_jumps[(yyvsp[0].i)], (yyvsp[-1].i));
        code("\n@true%d:", (yyvsp[-1].i));
      }
#line 1810 "micko.tab.c"
    break;

  case 54:
#line 424 "micko.y"
      {
        code("\n\t\tJMP \t@exit%d", (yyvsp[-4].i));
        code("\n@false%d:", (yyvsp[-4].i));
        (yyval.i) = (yyvsp[-4].i);
      }
#line 1820 "micko.tab.c"
    break;

  case 58:
#line 440 "micko.y"
      {
        if(get_type((yyvsp[-2].i)) != get_type((yyvsp[0].i)))
          err("invalid operands relational operator");
        (yyval.i) = (yyvsp[-1].i) + ((get_type((yyvsp[-2].i)) - 1) * RELOP_NUMBER);
        gen_cmp((yyvsp[-2].i), (yyvsp[0].i));
        
      }
#line 1832 "micko.tab.c"
    break;

  case 59:
#line 452 "micko.y"
      {
        if(get_type(fun_idx) != 3){
          if(get_type(fun_idx) != get_type((yyvsp[-1].i)))
            err("function type and return value dont match");
        }else
          err("void cant have return value");
        return_cnt++;
        gen_mov((yyvsp[-1].i), FUN_REG);
        code("\n\t\tJMP \t@%s_exit", get_name(fun_idx));        
      }
#line 1847 "micko.tab.c"
    break;

  case 60:
#line 462 "micko.y"
                      {
    if(get_type(fun_idx) != VOID)
      warn("Function expects return  value");
    return_cnt++;
  }
#line 1857 "micko.tab.c"
    break;

  case 61:
#line 471 "micko.y"
                    {
      //print_symtab();
      int last = get_last_element() + 1;
      (yyval.i) = last;
      
      //provjera da li postoji lok prom
      if(lookup_symbol((yyvsp[0].s), VAR|PAR) == NO_INDEX ){
        
        insert_symbol((yyvsp[0].s), VAR, (yyvsp[-1].i), ++var_num, 0);
        
      }
      else
        err("variable is '%s' already declared", (yyvsp[0].s));
  }
#line 1876 "micko.tab.c"
    break;

  case 62:
#line 485 "micko.y"
                                                {
      //printf("%d %d %d", $2, get_type($6), get_type($8));
      int i = lookup_symbol((yyvsp[-7].s), VAR|PAR);
      if((yyvsp[-8].i) != get_type((yyvsp[-3].i)) || (yyvsp[-8].i) != get_type((yyvsp[-1].i)))
        err("iterator must be same type as boundaries");

      if(atoi(get_name((yyvsp[-3].i))) > atoi(get_name((yyvsp[-1].i))))
        err(" start value must be smaller than top value");

      // print_symtab();
      gen_mov((yyvsp[-3].i),i);
      (yyval.i) = ++lab_num;
      code("\n@for%d:", lab_num);

      if(get_type(i) == INT) {
        code("\n\t\tCMPS\t");
        gen_sym_name(i);
        code(",");
        gen_sym_name((yyvsp[-1].i));
        code("\n\t\tJGES\t@exit%d", (yyval.i) );
      }
      else {
        code("\n\t\tCMPU\t");
        gen_sym_name(i);
        code(",");
        gen_sym_name((yyvsp[-1].i));
        code("\n\t\tJGEU\t@exit%d", (yyval.i) );
      }
  }
#line 1910 "micko.tab.c"
    break;

  case 63:
#line 514 "micko.y"
             {
      int i = lookup_symbol((yyvsp[-9].s), VAR|PAR);
      code("\n\t\t%s\t", ar_instructions[ADD + (get_type(i) - 1) * AROP_NUMBER]);
      gen_sym_name(i);
      code(",$1,");
      gen_sym_name(i);
      clear_symbols((yyvsp[-8].i));  
      // print_symtab();
      //print_symtab();
      code("\n\t\tJMP \t@for%d", (yyvsp[-1].i));
      code("\n@exit%d:", (yyvsp[-1].i));

    }
#line 1928 "micko.tab.c"
    break;

  case 64:
#line 538 "micko.y"
                      {
      check_stop = 0;
      if(lookup_symbol((yyvsp[0].s), VAR|PAR) == NO_INDEX){
        err("no such variable found");
        check_stop ++;
      }
      (yyval.i) = ++lab_num;
      code("\n@check%d:", lab_num);
      
      check_var = lookup_symbol((yyvsp[0].s), VAR|PAR);
      check_exit = lab_num;

     }
#line 1946 "micko.tab.c"
    break;

  case 65:
#line 550 "micko.y"
                              {
      code("\n@check_exit%d:", (yyvsp[-3].i));

       int var_id = lookup_symbol((yyvsp[-4].s), VAR|PAR);
      
      //provjera da li je istog tipa promjenjiva u check i parametar u when
      if(get_type(var_id) != get_type((yyvsp[0].i)) && check_stop == 0)
        err("var '%s' is not the same type as parametar '%s'",(yyvsp[-4].s), get_name((yyvsp[0].i)));
     }
#line 1960 "micko.tab.c"
    break;

  case 67:
#line 562 "micko.y"
              {
      code("\n@when_check%d:", last_when+1);
      code("\n@when%d:", last_when+1);
     (yyval.i) = (yyvsp[0].i);}
#line 1969 "micko.tab.c"
    break;

  case 68:
#line 566 "micko.y"
                        {
     (yyval.i) = (yyvsp[-1].i);}
#line 1976 "micko.tab.c"
    break;

  case 69:
#line 571 "micko.y"
         { 
      code("\n\t\tJMP \t@when%d", last_when+1);
      (yyval.i) = (yyvsp[0].i);}
#line 1984 "micko.tab.c"
    break;

  case 70:
#line 574 "micko.y"
                            {
    code("\n\t\tJMP \t@check_exit%d", check_exit);
     (yyval.i) = (yyvsp[-2].i);}
#line 1992 "micko.tab.c"
    break;

  case 71:
#line 577 "micko.y"
                   { 
      code("\n\t\tJMP \t@when%d", last_when+1);
      (yyval.i) = (yyvsp[0].i);
      }
#line 2001 "micko.tab.c"
    break;

  case 72:
#line 581 "micko.y"
                                      { 
      code("\n\t\tJMP \t@check_exit%d", check_exit);
      (yyval.i) = (yyvsp[-2].i);}
#line 2009 "micko.tab.c"
    break;

  case 73:
#line 587 "micko.y"
                 {
      int i = 0;
      while (i < when_cnt) {
        if ((yyvsp[0].i) == when_arr[i]) { //ako takva konstanta vec postoji u nizu
          err("duplicated constant in when");
          break;
        }
        i++;
      }
      if (i == when_cnt) { //ako nije duplikat
        when_arr[when_cnt] = (yyvsp[0].i); //ubaci konstantu u niz
        when_cnt++;
      }

      // ++last_when = ++lab_num;
      // last_when++;
      
      code("\n@when_check%d:", ++last_when);

      code("\n\t\tCMPS\t");
      gen_sym_name(check_var);
      code(",");
      gen_sym_name((yyvsp[0].i));
      code("\n\t\tJEQ\t\t@when%d", last_when);
      code("\n\t\tJMP \t@when_check%d", last_when+1);


      code("\n@when%d:", last_when);

    }
#line 2044 "micko.tab.c"
    break;

  case 74:
#line 617 "micko.y"
                     {
      (yyval.i) = (yyvsp[-3].i);
    }
#line 2052 "micko.tab.c"
    break;

  case 75:
#line 623 "micko.y"
                     {
      code("\n@when_check%d:", ++last_when);
      code("\n@otherwise%d:", last_when);
  }
#line 2061 "micko.tab.c"
    break;

  case 76:
#line 626 "micko.y"
               {
      code("\n@when%d:", last_when);
      code("\n\t\tJMP \t@check_exit%d", check_exit);
  }
#line 2070 "micko.tab.c"
    break;


#line 2074 "micko.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 631 "micko.y"


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

