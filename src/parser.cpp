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
#line 1 "parser.y"

    #include <stdio.h>
    #include "type.h"
    #include "node.h"
    int yylex();
    extern Node* ROOT;
    int mistakeRecord[4096]={0};
    int mistake = 0;
    void yyerror(char const* s){
        fprintf(stderr, "%s\n", s);
    }

#line 83 "parser.cpp"

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
#ifndef YY_YY_PARSER_HPP_INCLUDED
# define YY_YY_PARSER_HPP_INCLUDED
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
    BREAK = 258,
    CONTINUE = 259,
    CHAR = 260,
    DOUBLE = 261,
    FLOAT = 262,
    INT = 263,
    BOOL = 264,
    CHAR_LIT = 265,
    INT_LIT = 266,
    FLOAT_LIT = 267,
    STRING_LIT = 268,
    BOOL_LIT = 269,
    ELSE = 270,
    IF = 271,
    RETURN = 272,
    WHILE = 273,
    IDENTIFIER = 274,
    RIGHT_SHIFT = 275,
    LEFT_SHIFT = 276,
    LESS_THAN = 277,
    LESS_THAN_OR_EQUAL_TO = 278,
    GREATER_THAN = 279,
    GREATER_THAN_OR_EQUAL_TO = 280,
    EQUAL_TO = 281,
    NOT_EQUAL_TO = 282,
    INCREMENT = 283,
    DECREMENT = 284,
    LOGICAL_AND = 285,
    LOGICAL_OR = 286,
    NOT = 287,
    ASSIGNMENT = 288,
    SEMICOLON = 289,
    COMMA = 290,
    COLON = 291,
    PLUS = 292,
    MINUS = 293,
    MULTIPLY = 294,
    DIVIDE = 295,
    QUESTION_MARK = 296,
    LEFT_PAREN = 297,
    RIGHT_PAREN = 298,
    LEFT_BRACKET = 299,
    RIGHT_BRACKET = 300,
    LEFT_BRACE = 301,
    RIGHT_BRACE = 302,
    CR = 303,
    LF = 304,
    LOWER_THAN_ELSE = 305,
    LOW_PRIORITY = 306
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "parser.y"
 
    struct Node* node;
    

#line 192 "parser.cpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_PARSER_HPP_INCLUDED  */



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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   960

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  18
/* YYNRULES -- Number of rules.  */
#define YYNRULES  102
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  187

#define YYUNDEFTOK  2
#define YYMAXUTOK   306


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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    67,    67,    74,    77,    82,    85,    92,    95,   100,
     103,   106,   109,   112,   119,   122,   125,   132,   144,   147,
     154,   164,   167,   170,   173,   183,   186,   193,   199,   202,
     208,   211,   214,   217,   220,   227,   230,   233,   236,   239,
     246,   249,   256,   263,   270,   281,   284,   290,   293,   300,
     307,   317,   320,   326,   330,   334,   338,   342,   346,   350,
     354,   358,   362,   366,   370,   374,   378,   382,   386,   390,
     394,   398,   402,   407,   411,   415,   419,   423,   427,   432,
     436,   440,   447,   454,   461,   468,   475,   482,   489,   496,
     503,   510,   517,   524,   531,   538,   545,   552,   559,   562,
     565,   571,   574
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BREAK", "CONTINUE", "CHAR", "DOUBLE",
  "FLOAT", "INT", "BOOL", "CHAR_LIT", "INT_LIT", "FLOAT_LIT", "STRING_LIT",
  "BOOL_LIT", "ELSE", "IF", "RETURN", "WHILE", "IDENTIFIER", "RIGHT_SHIFT",
  "LEFT_SHIFT", "LESS_THAN", "LESS_THAN_OR_EQUAL_TO", "GREATER_THAN",
  "GREATER_THAN_OR_EQUAL_TO", "EQUAL_TO", "NOT_EQUAL_TO", "INCREMENT",
  "DECREMENT", "LOGICAL_AND", "LOGICAL_OR", "NOT", "ASSIGNMENT",
  "SEMICOLON", "COMMA", "COLON", "PLUS", "MINUS", "MULTIPLY", "DIVIDE",
  "QUESTION_MARK", "LEFT_PAREN", "RIGHT_PAREN", "LEFT_BRACKET",
  "RIGHT_BRACKET", "LEFT_BRACE", "RIGHT_BRACE", "CR", "LF",
  "LOWER_THAN_ELSE", "LOW_PRIORITY", "$accept", "Program", "ExtDefList",
  "ExtDef", "ExtDecList", "Specifier", "FunDec", "CompSt", "VarDec",
  "ParameterList", "ParameterDec", "StList", "Stm", "DefList", "Def",
  "DecList", "Exp", "Args", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306
};
# endif

#define YYPACT_NINF (-107)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-46)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     105,  -107,  -107,  -107,  -107,  -107,     2,  -107,   105,    -6,
    -107,  -107,    40,   -18,    10,   -17,   -14,    98,     6,  -107,
     -25,    54,  -107,    11,  -107,   -12,  -107,    11,    34,    43,
      35,    38,  -107,  -107,    11,     9,   118,    54,    41,  -107,
    -107,  -107,  -107,   105,  -107,  -107,    52,    56,    57,    60,
     -20,    61,    63,  -107,  -107,  -107,  -107,  -107,    39,   584,
      75,   -21,   617,   617,   617,  -107,    51,   118,   666,  -107,
    -107,    11,  -107,  -107,  -107,  -107,  -107,  -107,    73,   617,
    -107,   691,   -35,   617,   196,   572,    64,   154,   716,  -107,
    -107,   210,   243,   257,   290,   304,   337,   351,   384,  -107,
    -107,   398,   431,   445,  -107,   478,   492,   525,   539,   617,
     115,  -107,   158,   741,  -107,  -107,  -107,   766,   104,  -107,
     791,    96,  -107,   640,  -107,   106,   114,   110,   114,   111,
     604,   112,   604,   113,   604,   121,   604,   123,   916,   129,
     916,   132,   891,   133,   866,   139,   841,   144,   154,   145,
     154,   146,    64,   147,    64,   816,   140,  -107,   158,   158,
    -107,   617,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,   617,
    -107,   134,  -107,  -107,   841,   158,  -107
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,    12,    10,    11,     9,    13,     0,     2,     4,     0,
       1,     3,     0,     0,     0,     7,     0,     0,     0,     5,
       0,     0,     6,     0,    17,     0,    15,     0,     0,    26,
       0,     0,    23,    20,     0,     0,     0,     0,    21,     8,
      16,    27,    14,     0,    24,    22,    51,     0,     0,    50,
       0,     0,     0,    79,    76,    77,    78,    80,     0,     0,
       0,    75,     0,     0,     0,    31,    19,     0,    44,    46,
      25,     0,    49,    48,    47,    43,    35,    36,     0,     0,
      32,    34,     0,     0,     0,     0,    70,    69,     0,    18,
      29,     0,     0,     0,     0,     0,     0,     0,     0,    99,
     100,     0,     0,     0,    30,     0,     0,     0,     0,     0,
       0,    52,     0,     0,    33,    41,    42,     0,     0,    72,
     102,     0,    74,     0,    68,     0,    66,     0,    67,     0,
      58,     0,    59,     0,    56,     0,    57,     0,    60,     0,
      61,     0,    54,     0,    55,     0,    53,     0,    62,     0,
      63,     0,    64,     0,    65,     0,     0,    39,     0,     0,
      96,     0,    71,    73,    94,    95,    87,    86,    84,    85,
      88,    89,    82,    83,    81,    90,    91,    92,    93,     0,
      97,    37,    40,   101,    98,     0,    38
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -107,  -107,   177,  -107,   125,    72,  -107,   172,    -8,   148,
    -107,   120,  -106,   151,  -107,   -26,   -59,    28
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     6,     7,     8,    13,     9,    14,    65,    46,    28,
      29,    66,    67,    36,    37,    47,    68,   121
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      81,    15,    10,    86,    87,    88,   157,    30,   115,    49,
      48,    20,   116,    12,    75,    15,    19,    31,    23,    41,
     113,    84,    33,    85,   117,   120,   123,    33,    38,    24,
      38,    40,   126,   128,   130,   132,   134,   136,   138,   140,
      78,    16,   142,   144,   146,   111,   148,   150,   152,   154,
     155,    32,   181,   182,   -45,    34,    21,   -45,   -45,     1,
       2,     3,     4,     5,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -21,   -21,    82,    42,    43,   186,
      44,    79,    17,    45,    18,    18,   -45,    71,   112,    27,
      72,    73,   -45,    35,    74,    76,   -45,    77,    89,    25,
     -45,   -45,   120,     1,     2,     3,     4,     5,   110,    35,
       1,     2,     3,     4,     5,    27,   156,    83,   -28,    50,
     184,    51,    52,   -28,   -28,   -28,   -28,   -28,    53,    54,
      55,    56,    57,   -28,    58,    59,    60,    61,   160,   162,
     164,    26,    99,   100,   165,   166,   167,   168,    39,   185,
      62,   105,   106,   107,   108,   169,    63,   170,   110,    50,
      64,    51,    52,   171,    21,   -28,   172,   173,    53,    54,
      55,    56,    57,   174,    58,    59,    60,    61,   175,   176,
     177,   178,    99,   100,   180,    11,    22,    90,    69,   183,
      62,    70,     0,   107,   108,     0,    63,   118,   110,     0,
      64,     0,     0,     0,    21,     0,    53,    54,    55,    56,
      57,   125,     0,     0,     0,    61,     0,     0,     0,     0,
      53,    54,    55,    56,    57,     0,     0,     0,    62,    61,
       0,     0,     0,     0,    63,     0,     0,     0,    64,   119,
       0,     0,    62,     0,   127,     0,     0,     0,    63,     0,
       0,     0,    64,    53,    54,    55,    56,    57,   129,     0,
       0,     0,    61,     0,     0,     0,     0,    53,    54,    55,
      56,    57,     0,     0,     0,    62,    61,     0,     0,     0,
       0,    63,     0,     0,     0,    64,     0,     0,     0,    62,
       0,   131,     0,     0,     0,    63,     0,     0,     0,    64,
      53,    54,    55,    56,    57,   133,     0,     0,     0,    61,
       0,     0,     0,     0,    53,    54,    55,    56,    57,     0,
       0,     0,    62,    61,     0,     0,     0,     0,    63,     0,
       0,     0,    64,     0,     0,     0,    62,     0,   135,     0,
       0,     0,    63,     0,     0,     0,    64,    53,    54,    55,
      56,    57,   137,     0,     0,     0,    61,     0,     0,     0,
       0,    53,    54,    55,    56,    57,     0,     0,     0,    62,
      61,     0,     0,     0,     0,    63,     0,     0,     0,    64,
       0,     0,     0,    62,     0,   139,     0,     0,     0,    63,
       0,     0,     0,    64,    53,    54,    55,    56,    57,   141,
       0,     0,     0,    61,     0,     0,     0,     0,    53,    54,
      55,    56,    57,     0,     0,     0,    62,    61,     0,     0,
       0,     0,    63,     0,     0,     0,    64,     0,     0,     0,
      62,     0,   143,     0,     0,     0,    63,     0,     0,     0,
      64,    53,    54,    55,    56,    57,   145,     0,     0,     0,
      61,     0,     0,     0,     0,    53,    54,    55,    56,    57,
       0,     0,     0,    62,    61,     0,     0,     0,     0,    63,
       0,     0,     0,    64,     0,     0,     0,    62,     0,   147,
       0,     0,     0,    63,     0,     0,     0,    64,    53,    54,
      55,    56,    57,   149,     0,     0,     0,    61,     0,     0,
       0,     0,    53,    54,    55,    56,    57,     0,     0,     0,
      62,    61,     0,     0,     0,     0,    63,     0,     0,     0,
      64,     0,     0,     0,    62,     0,   151,     0,     0,     0,
      63,     0,     0,     0,    64,    53,    54,    55,    56,    57,
     153,     0,     0,     0,    61,     0,     0,     0,     0,    53,
      54,    55,    56,    57,     0,     0,     0,    62,    61,     0,
       0,     0,     0,    63,     0,     0,     0,    64,     0,     0,
       0,    62,     0,     0,     0,     0,     0,    63,     0,     0,
       0,    64,    53,    54,    55,    56,    57,     0,     0,     0,
       0,    61,     0,     0,    53,    54,    55,    56,    57,     0,
       0,     0,     0,    61,    62,     0,     0,     0,     0,     0,
      63,     0,     0,     0,    64,     0,    62,   122,    80,     0,
       0,     0,    63,     0,    91,    92,    64,    53,    54,    55,
      56,    57,    99,   100,     0,     0,    61,     0,     0,     0,
       0,   105,   106,   107,   108,     0,     0,     0,   110,    62,
       0,     0,     0,     0,     0,    63,     0,     0,     0,    64,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,     0,   103,     0,     0,     0,   105,   106,   107,
     108,   109,     0,     0,   110,   163,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,     0,   103,
     104,     0,     0,   105,   106,   107,   108,   109,     0,     0,
     110,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,     0,   103,   114,     0,     0,   105,   106,
     107,   108,   109,     0,     0,   110,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,     0,   103,
       0,     0,     0,   105,   106,   107,   108,   109,     0,   124,
     110,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,     0,   103,     0,     0,     0,   105,   106,
     107,   108,   109,     0,   158,   110,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,     0,   103,
       0,     0,     0,   105,   106,   107,   108,   109,     0,   159,
     110,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,     0,   103,     0,   161,     0,   105,   106,
     107,   108,   109,     0,     0,   110,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,     0,   103,
       0,     0,   179,   105,   106,   107,   108,   109,     0,     0,
     110,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,     0,   103,     0,     0,     0,   105,   106,
     107,   108,   109,     0,     0,   110,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,     0,     0,     0,
       0,     0,     0,   105,   106,   107,   108,     0,     0,     0,
     110,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,     0,     0,     0,     0,     0,     0,     0,   105,   106,
     107,   108,     0,     0,     0,   110,    91,    92,    93,    94,
      95,    96,     0,     0,    99,   100,     0,     0,     0,     0,
       0,     0,     0,   105,   106,   107,   108,     0,     0,     0,
     110
};

static const yytype_int16 yycheck[] =
{
      59,     9,     0,    62,    63,    64,   112,     1,    43,    35,
       1,     1,    47,    19,    34,    23,    34,    11,    35,    27,
      79,    42,    47,    44,    83,    84,    85,    47,    19,    43,
      19,    43,    91,    92,    93,    94,    95,    96,    97,    98,
       1,     1,   101,   102,   103,    71,   105,   106,   107,   108,
     109,    45,   158,   159,     0,     1,    46,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    34,    35,     1,    43,    35,   185,
      45,    42,    42,    45,    44,    44,    32,    35,    15,    17,
      34,    34,    38,    21,    34,    34,    42,    34,    47,     1,
      46,    47,   161,     5,     6,     7,     8,     9,    44,    37,
       5,     6,     7,     8,     9,    43,     1,    42,     0,     1,
     179,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    34,    43,
      34,    43,    28,    29,    34,    34,    34,    34,    23,    15,
      32,    37,    38,    39,    40,    34,    38,    34,    44,     1,
      42,     3,     4,    34,    46,    47,    34,    34,    10,    11,
      12,    13,    14,    34,    16,    17,    18,    19,    34,    34,
      34,    34,    28,    29,    44,     8,    14,    67,    37,   161,
      32,    43,    -1,    39,    40,    -1,    38,     1,    44,    -1,
      42,    -1,    -1,    -1,    46,    -1,    10,    11,    12,    13,
      14,     1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    -1,    -1,    -1,    32,    19,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    42,    43,
      -1,    -1,    32,    -1,     1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    42,    10,    11,    12,    13,    14,     1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    -1,    -1,    -1,    32,    19,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    42,    -1,    -1,    -1,    32,
      -1,     1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    42,
      10,    11,    12,    13,    14,     1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    -1,
      -1,    -1,    32,    19,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    32,    -1,     1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    42,    10,    11,    12,
      13,    14,     1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    -1,    -1,    -1,    32,
      19,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    32,    -1,     1,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    42,    10,    11,    12,    13,    14,     1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    -1,    -1,    -1,    32,    19,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      32,    -1,     1,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      42,    10,    11,    12,    13,    14,     1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      -1,    -1,    -1,    32,    19,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    32,    -1,     1,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    42,    10,    11,
      12,    13,    14,     1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    -1,    -1,    -1,
      32,    19,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    32,    -1,     1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    42,    10,    11,    12,    13,    14,
       1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    -1,    -1,    -1,    32,    19,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    32,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    42,    10,    11,    12,    13,    14,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    10,    11,    12,    13,    14,    -1,
      -1,    -1,    -1,    19,    32,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    42,    -1,    32,    45,    34,    -1,
      -1,    -1,    38,    -1,    20,    21,    42,    10,    11,    12,
      13,    14,    28,    29,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    37,    38,    39,    40,    -1,    -1,    -1,    44,    32,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    42,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    33,    -1,    -1,    -1,    37,    38,    39,
      40,    41,    -1,    -1,    44,    45,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    33,
      34,    -1,    -1,    37,    38,    39,    40,    41,    -1,    -1,
      44,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    33,    34,    -1,    -1,    37,    38,
      39,    40,    41,    -1,    -1,    44,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    33,
      -1,    -1,    -1,    37,    38,    39,    40,    41,    -1,    43,
      44,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    33,    -1,    -1,    -1,    37,    38,
      39,    40,    41,    -1,    43,    44,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    33,
      -1,    -1,    -1,    37,    38,    39,    40,    41,    -1,    43,
      44,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    33,    -1,    35,    -1,    37,    38,
      39,    40,    41,    -1,    -1,    44,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    33,
      -1,    -1,    36,    37,    38,    39,    40,    41,    -1,    -1,
      44,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    33,    -1,    -1,    -1,    37,    38,
      39,    40,    41,    -1,    -1,    44,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    38,    39,    40,    -1,    -1,    -1,
      44,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,
      39,    40,    -1,    -1,    -1,    44,    20,    21,    22,    23,
      24,    25,    -1,    -1,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    38,    39,    40,    -1,    -1,    -1,
      44
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,     6,     7,     8,     9,    53,    54,    55,    57,
       0,    54,    19,    56,    58,    60,     1,    42,    44,    34,
       1,    46,    59,    35,    43,     1,    43,    57,    61,    62,
       1,    11,    45,    47,     1,    57,    65,    66,    19,    56,
      43,    60,    43,    35,    45,    45,    60,    67,     1,    67,
       1,     3,     4,    10,    11,    12,    13,    14,    16,    17,
      18,    19,    32,    38,    42,    59,    63,    64,    68,    65,
      61,    35,    34,    34,    34,    34,    34,    34,     1,    42,
      34,    68,     1,    42,    42,    44,    68,    68,    68,    47,
      63,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    33,    34,    37,    38,    39,    40,    41,
      44,    67,    15,    68,    34,    43,    47,    68,     1,    43,
      68,    69,    45,    68,    43,     1,    68,     1,    68,     1,
      68,     1,    68,     1,    68,     1,    68,     1,    68,     1,
      68,     1,    68,     1,    68,     1,    68,     1,    68,     1,
      68,     1,    68,     1,    68,    68,     1,    64,    43,    43,
      34,    35,    43,    45,    34,    34,    34,    34,    34,    34,
      34,    34,    34,    34,    34,    34,    34,    34,    34,    36,
      44,    64,    64,    69,    68,    15,    64
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    52,    53,    54,    54,    55,    55,    56,    56,    57,
      57,    57,    57,    57,    58,    58,    58,    58,    59,    59,
      59,    60,    60,    60,    60,    61,    61,    62,    63,    63,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    65,    65,    66,    66,    66,
      66,    67,    67,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    69,    69
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     3,     3,     1,     3,     1,
       1,     1,     1,     1,     4,     3,     4,     3,     4,     3,
       2,     1,     4,     3,     4,     3,     1,     2,     0,     2,
       2,     1,     2,     3,     2,     2,     2,     5,     7,     4,
       5,     3,     3,     2,     1,     0,     2,     3,     3,     3,
       2,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     4,     3,     4,     3,     1,     1,     1,     1,     1,
       1,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     5,     2,
       2,     3,     1
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


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yytype, yyvaluep, yylocationp);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
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
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
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
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
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
       'yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  *++yylsp = yylloc;

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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 67 "parser.y"
               {
        (yyval.node) = new Node("", "Program", 1, (yyvsp[0].node));
        ROOT = (yyval.node);
    }
#line 1768 "parser.cpp"
    break;

  case 3:
#line 74 "parser.y"
                      {
        (yyval.node) = new Node("", "ExtDefList", 2, (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 1776 "parser.cpp"
    break;

  case 4:
#line 77 "parser.y"
      {
        (yyval.node) = nullptr;
    }
#line 1784 "parser.cpp"
    break;

  case 5:
#line 82 "parser.y"
                                  {
        (yyval.node) = new Node("", "ExtDef", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 1792 "parser.cpp"
    break;

  case 6:
#line 85 "parser.y"
                             {
        (yyval.node) = new Node("", "ExtDef", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 1800 "parser.cpp"
    break;

  case 7:
#line 92 "parser.y"
           {
        (yyval.node) = new Node("", "ExtDecList", 1, (yyvsp[0].node));
    }
#line 1808 "parser.cpp"
    break;

  case 8:
#line 95 "parser.y"
                              {
        (yyval.node) = new Node("", "ExtDecList", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 1816 "parser.cpp"
    break;

  case 9:
#line 100 "parser.y"
        {
        (yyval.node) = new Node("", "Specifier", 1, (yyvsp[0].node));
    }
#line 1824 "parser.cpp"
    break;

  case 10:
#line 103 "parser.y"
             {
        (yyval.node) = new Node("", "Specifier", 1, (yyvsp[0].node));
    }
#line 1832 "parser.cpp"
    break;

  case 11:
#line 106 "parser.y"
            {
        (yyval.node) = new Node("", "Specifier", 1, (yyvsp[0].node));
    }
#line 1840 "parser.cpp"
    break;

  case 12:
#line 109 "parser.y"
           {
        (yyval.node) = new Node("", "Specifier", 1, (yyvsp[0].node));
    }
#line 1848 "parser.cpp"
    break;

  case 13:
#line 112 "parser.y"
           {
	(yyval.node) = new Node("", "Specifier", 1, (yyvsp[0].node));
    }
#line 1856 "parser.cpp"
    break;

  case 14:
#line 119 "parser.y"
                                                    {
        (yyval.node) = new Node("", "FunDec", 4, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 1864 "parser.cpp"
    break;

  case 15:
#line 122 "parser.y"
                                       {
        (yyval.node) = new Node("", "FunDec", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 1872 "parser.cpp"
    break;

  case 16:
#line 125 "parser.y"
                                             {
        if(mistakeRecord[(yylsp[-1]).first_line-1] == 0){
            mistakeRecord[(yylsp[-1]).first_line-1] = 1;
            mistake ++;
            printf("Error at Line %d : Syntax Error.\n", (yylsp[-1]).first_line);
        }
    }
#line 1884 "parser.cpp"
    break;

  case 17:
#line 132 "parser.y"
                                  {
        if(mistakeRecord[(yylsp[-1]).first_line-1] == 0){
            mistakeRecord[(yylsp[-1]).first_line-1] = 1;
            mistake ++;
            printf("Error at Line %d : Syntax Error.\n", (yylsp[-1]).first_line);
        }
    }
#line 1896 "parser.cpp"
    break;

  case 18:
#line 144 "parser.y"
                                         {
        (yyval.node) = new Node("", "CompSt", 4, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 1904 "parser.cpp"
    break;

  case 19:
#line 147 "parser.y"
                                                  {
        if(mistakeRecord[(yylsp[0]).first_line-1] == 0){
            mistakeRecord[(yylsp[0]).first_line-1] = 1;
            mistake ++;
            printf("Error at Line %d : Syntax Error.\n", (yylsp[0]).first_line);
        }
    }
#line 1916 "parser.cpp"
    break;

  case 20:
#line 154 "parser.y"
                        {
        if(mistakeRecord[(yylsp[-1]).first_line-1] == 0){
            mistakeRecord[(yylsp[-1]).first_line-1] = 1;
            mistake ++;
            printf("Error at Line %d : Syntax Error.\n", (yylsp[-1]).first_line);
        }
    }
#line 1928 "parser.cpp"
    break;

  case 21:
#line 164 "parser.y"
               {
        (yyval.node) = new Node("", "VarDec", 1, (yyvsp[0].node));
    }
#line 1936 "parser.cpp"
    break;

  case 22:
#line 167 "parser.y"
                                                    {
        (yyval.node) = new Node("", "VarDec", 4, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 1944 "parser.cpp"
    break;

  case 23:
#line 170 "parser.y"
                                            {
        (yyval.node) = new Node("", "VarDec", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 1952 "parser.cpp"
    break;

  case 24:
#line 173 "parser.y"
                                                  {
        if(mistakeRecord[(yylsp[-1]).first_line-1] == 0){
            mistakeRecord[(yylsp[-1]).first_line-1] = 1;
            mistake ++;
            printf("Error at Line %d : Syntax Error.\n", (yylsp[-1]).first_line);
        }
    }
#line 1964 "parser.cpp"
    break;

  case 25:
#line 183 "parser.y"
                                     {
        (yyval.node) = new Node("", "ParameterList", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 1972 "parser.cpp"
    break;

  case 26:
#line 186 "parser.y"
                   {
        (yyval.node) = new Node("", "ParameterList", 1, (yyvsp[0].node));
    }
#line 1980 "parser.cpp"
    break;

  case 27:
#line 193 "parser.y"
                     {
        (yyval.node) = new Node("", "ParameterDec", 2, (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 1988 "parser.cpp"
    break;

  case 28:
#line 199 "parser.y"
                      {
        (yyval.node) = nullptr;
    }
#line 1996 "parser.cpp"
    break;

  case 29:
#line 202 "parser.y"
                 {
        (yyval.node) = new Node("", "CompSt", 2, (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 2004 "parser.cpp"
    break;

  case 30:
#line 208 "parser.y"
                 {
        (yyval.node) = new Node("", "Stm", 2, (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 2012 "parser.cpp"
    break;

  case 31:
#line 211 "parser.y"
             {
        (yyval.node) = new Node("", "Stm", 1, (yyvsp[0].node));
    }
#line 2020 "parser.cpp"
    break;

  case 32:
#line 214 "parser.y"
                      {
        (yyval.node) = new Node("", "Stm", 2, (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 2028 "parser.cpp"
    break;

  case 33:
#line 217 "parser.y"
                          {
        (yyval.node) = new Node("", "Stm", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 2036 "parser.cpp"
    break;

  case 34:
#line 220 "parser.y"
                                   {
        if(mistakeRecord[(yylsp[0]).first_line-1] == 0){
            mistakeRecord[(yylsp[0]).first_line-1] = 1;
            mistake ++;
            printf("Error at Line %d : Syntax Error.\n", (yylsp[0]).first_line);
        }
    }
#line 2048 "parser.cpp"
    break;

  case 35:
#line 227 "parser.y"
                     {
        (yyval.node) = new Node("", "Stm", 2, (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 2056 "parser.cpp"
    break;

  case 36:
#line 230 "parser.y"
                        {
        (yyval.node) = new Node("", "Stm", 2, (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 2064 "parser.cpp"
    break;

  case 37:
#line 233 "parser.y"
                                                              {
        (yyval.node) = new Node("", "Stm", 5, (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 2072 "parser.cpp"
    break;

  case 38:
#line 236 "parser.y"
                                                 {
        (yyval.node) = new Node("", "Stm", 7, (yyvsp[-6].node), (yyvsp[-5].node), (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 2080 "parser.cpp"
    break;

  case 39:
#line 239 "parser.y"
                       {
        if(mistakeRecord[(yylsp[-2]).first_line-1] == 0){
            mistakeRecord[(yylsp[-2]).first_line-1] = 1;
            mistake ++;
            printf("Error at Line %d : Syntax Error.\n", (yylsp[-2]).first_line);
        }
    }
#line 2092 "parser.cpp"
    break;

  case 40:
#line 246 "parser.y"
                                          {
        (yyval.node) = new Node("", "Stm", 5, (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 2100 "parser.cpp"
    break;

  case 41:
#line 249 "parser.y"
                             {
        if(mistakeRecord[(yylsp[-1]).first_line-1] == 0){
            mistakeRecord[(yylsp[-1]).first_line-1] = 1;
            mistake ++;
            printf("Error at Line %d : Syntax Error.\n", (yylsp[-1]).first_line);
        }
    }
#line 2112 "parser.cpp"
    break;

  case 42:
#line 256 "parser.y"
                              {
        if(mistakeRecord[(yylsp[-1]).first_line-1] == 0){
            mistakeRecord[(yylsp[-1]).first_line-1] = 1;
            mistake ++;
            printf("Error at Line %d : Syntax Error.\n", (yylsp[-1]).first_line);
        }
    }
#line 2124 "parser.cpp"
    break;

  case 43:
#line 263 "parser.y"
                      {
        if(mistakeRecord[(yylsp[-1]).first_line-1] == 0){
            mistakeRecord[(yylsp[-1]).first_line-1] = 1;
            mistake ++;
            printf("Error at Line %d : Syntax Error.\n", (yylsp[-1]).first_line);
        }
    }
#line 2136 "parser.cpp"
    break;

  case 44:
#line 270 "parser.y"
                            {
        if(mistakeRecord[(yylsp[0]).first_line-1] == 0){
            mistakeRecord[(yylsp[0]).first_line-1] = 1;
            mistake ++;
            printf("Error at Line %d : Syntax Error.\n", (yylsp[0]).first_line);
        }
    }
#line 2148 "parser.cpp"
    break;

  case 45:
#line 281 "parser.y"
                      {
        (yyval.node) = nullptr;
    }
#line 2156 "parser.cpp"
    break;

  case 46:
#line 284 "parser.y"
                  {
        (yyval.node) = new Node("", "DefList", 2, (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 2164 "parser.cpp"
    break;

  case 47:
#line 290 "parser.y"
                               {
        (yyval.node) = new Node("", "Def", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 2172 "parser.cpp"
    break;

  case 48:
#line 293 "parser.y"
                               {
        if(mistakeRecord[(yylsp[-1]).first_line-1] == 0){
            mistakeRecord[(yylsp[-1]).first_line-1] = 1;
            mistake ++;
            printf("Error at Line %d : Syntax Error.\n", (yylsp[-1]).first_line);
        }
    }
#line 2184 "parser.cpp"
    break;

  case 49:
#line 300 "parser.y"
                             {
        if(mistakeRecord[(yylsp[-2]).first_line-1] == 0){
            mistakeRecord[(yylsp[-2]).first_line-1] = 1;
            mistake ++;
            printf("Error at Line %d : Syntax Error.\n", (yylsp[-2]).first_line);
        }
    }
#line 2196 "parser.cpp"
    break;

  case 50:
#line 307 "parser.y"
                        {
        if(mistakeRecord[(yylsp[0]).first_line-1] == 0){
            mistakeRecord[(yylsp[0]).first_line-1] = 1;
            mistake ++;
            printf("Error at Line %d : Syntax Error.\n", (yylsp[0]).first_line);
        }
    }
#line 2208 "parser.cpp"
    break;

  case 51:
#line 317 "parser.y"
           {
        (yyval.node) = new Node("", "DecList", 1, (yyvsp[0].node));
    }
#line 2216 "parser.cpp"
    break;

  case 52:
#line 320 "parser.y"
                           {
        (yyval.node) = new Node("", "DecList", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 2224 "parser.cpp"
    break;

  case 53:
#line 326 "parser.y"
                           {
		(yyval.node) = new Node("", "Exp", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node)->setValueType((yyvsp[0].node)->getValueType());
	}
#line 2233 "parser.cpp"
    break;

  case 54:
#line 330 "parser.y"
                          {
		(yyval.node) = new Node("", "Exp", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node)->setValueType((yyvsp[-2].node)->getValueType());
	}
#line 2242 "parser.cpp"
    break;

  case 55:
#line 334 "parser.y"
                         {
        (yyval.node) = new Node("", "Exp", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node)->setValueType((yyvsp[-2].node)->getValueType());
    }
#line 2251 "parser.cpp"
    break;

  case 56:
#line 338 "parser.y"
                           {
        (yyval.node) = new Node("", "Exp", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node)->setValueType((yyvsp[-2].node)->getValueType());
    }
#line 2260 "parser.cpp"
    break;

  case 57:
#line 342 "parser.y"
                                       {
        (yyval.node) = new Node("", "Exp", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node)->setValueType((yyvsp[-2].node)->getValueType());
    }
#line 2269 "parser.cpp"
    break;

  case 58:
#line 346 "parser.y"
                        {
        (yyval.node) = new Node("", "Exp", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node)->setValueType((yyvsp[-2].node)->getValueType());
    }
#line 2278 "parser.cpp"
    break;

  case 59:
#line 350 "parser.y"
                                    {
        (yyval.node) = new Node("", "Exp", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node)->setValueType((yyvsp[-2].node)->getValueType());
    }
#line 2287 "parser.cpp"
    break;

  case 60:
#line 354 "parser.y"
                       {
        (yyval.node) = new Node("", "Exp", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node)->setValueType((yyvsp[-2].node)->getValueType());
    }
#line 2296 "parser.cpp"
    break;

  case 61:
#line 358 "parser.y"
                           {
        (yyval.node) = new Node("", "Exp", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node)->setValueType((yyvsp[-2].node)->getValueType());
    }
#line 2305 "parser.cpp"
    break;

  case 62:
#line 362 "parser.y"
                   {
        (yyval.node) = new Node("", "Exp", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node)->setValueType((yyvsp[-2].node)->getValueType());
    }
#line 2314 "parser.cpp"
    break;

  case 63:
#line 366 "parser.y"
                    {
        (yyval.node) = new Node("", "Exp", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node)->setValueType((yyvsp[-2].node)->getValueType());
    }
#line 2323 "parser.cpp"
    break;

  case 64:
#line 370 "parser.y"
                       {
        (yyval.node) = new Node("", "Exp", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node)->setValueType((yyvsp[-2].node)->getValueType());
    }
#line 2332 "parser.cpp"
    break;

  case 65:
#line 374 "parser.y"
                     {
        (yyval.node) = new Node("", "Exp", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node)->setValueType((yyvsp[-2].node)->getValueType());
    }
#line 2341 "parser.cpp"
    break;

  case 66:
#line 378 "parser.y"
                          {
        (yyval.node) = new Node("", "Exp", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node)->setValueType((yyvsp[-2].node)->getValueType());
    }
#line 2350 "parser.cpp"
    break;

  case 67:
#line 382 "parser.y"
                         {
        (yyval.node) = new Node("", "Exp", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node)->setValueType((yyvsp[-2].node)->getValueType());
    }
#line 2359 "parser.cpp"
    break;

  case 68:
#line 386 "parser.y"
                                 {
        (yyval.node) = new Node("", "Exp", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node)->setValueType((yyvsp[-1].node)->getValueType());
    }
#line 2368 "parser.cpp"
    break;

  case 69:
#line 390 "parser.y"
                {
        (yyval.node) = new Node("", "Exp", 2, (yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node)->setValueType((yyvsp[0].node)->getValueType());
    }
#line 2377 "parser.cpp"
    break;

  case 70:
#line 394 "parser.y"
              {
        (yyval.node) = new Node("", "Exp", 2, (yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node)->setValueType(TYPE_BOOL);
    }
#line 2386 "parser.cpp"
    break;

  case 71:
#line 398 "parser.y"
                                             {
        (yyval.node) = new Node("", "Exp", 4, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node)->setValueType((yyvsp[-3].node)->getValueType());
    }
#line 2395 "parser.cpp"
    break;

  case 72:
#line 402 "parser.y"
                                        {
        (yyval.node) = new Node("", "Exp", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node)->setValueType((yyvsp[-2].node)->getValueType());
    }
#line 2404 "parser.cpp"
    break;

  case 73:
#line 407 "parser.y"
                                                {
        (yyval.node) = new Node("", "Exp", 4, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node)->setValueType((yyvsp[-3].node)->getValueType() - ARRAY);
    }
#line 2413 "parser.cpp"
    break;

  case 74:
#line 411 "parser.y"
                                            {
        (yyval.node) = new Node("", "Exp", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node)->setValueType((yyvsp[-2].node)->getValueType() + ARRAY);
    }
#line 2422 "parser.cpp"
    break;

  case 75:
#line 415 "parser.y"
                                   {
        (yyval.node) = new Node("", "Exp", 1, (yyvsp[0].node));
        (yyval.node)->setValueType((yyvsp[0].node)->getValueType());
    }
#line 2431 "parser.cpp"
    break;

  case 76:
#line 419 "parser.y"
              {
        (yyval.node) = new Node("", "Exp", 1, (yyvsp[0].node));
        (yyval.node)->setValueType(TYPE_INT);
    }
#line 2440 "parser.cpp"
    break;

  case 77:
#line 423 "parser.y"
                {
        (yyval.node) = new Node("", "Exp", 1, (yyvsp[0].node));
        (yyval.node)->setValueType(TYPE_FLOAT);
    }
#line 2449 "parser.cpp"
    break;

  case 78:
#line 427 "parser.y"
                 {
        (yyval.node) = new Node("", "Exp", 1, (yyvsp[0].node));
        (yyval.node)->setValueType(TYPE_STRING);
    }
#line 2458 "parser.cpp"
    break;

  case 79:
#line 432 "parser.y"
               {
        (yyval.node) = new Node("", "Exp", 1, (yyvsp[0].node));
        (yyval.node)->setValueType(TYPE_CHAR);
    }
#line 2467 "parser.cpp"
    break;

  case 80:
#line 436 "parser.y"
               {
    	(yyval.node) = new Node("", "Exp", 1, (yyvsp[0].node));
    	(yyval.node)->setValueType(TYPE_BOOL);
    }
#line 2476 "parser.cpp"
    break;

  case 81:
#line 440 "parser.y"
                                     {
        if(mistakeRecord[(yylsp[-1]).first_line-1] == 0){
            mistakeRecord[(yylsp[-1]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[-1]).first_line);
        }
    }
#line 2488 "parser.cpp"
    break;

  case 82:
#line 447 "parser.y"
                                       {
        if(mistakeRecord[(yylsp[-1]).first_line-1] == 0){
            mistakeRecord[(yylsp[-1]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[-1]).first_line);
        }
    }
#line 2500 "parser.cpp"
    break;

  case 83:
#line 454 "parser.y"
                                      {
        if(mistakeRecord[(yylsp[-1]).first_line-1] == 0){
            mistakeRecord[(yylsp[-1]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[-1]).first_line);
        }
    }
#line 2512 "parser.cpp"
    break;

  case 84:
#line 461 "parser.y"
                                        {
        if(mistakeRecord[(yylsp[-1]).first_line-1] == 0){
            mistakeRecord[(yylsp[-1]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[-1]).first_line);
        }
    }
#line 2524 "parser.cpp"
    break;

  case 85:
#line 468 "parser.y"
                                                    {
        if(mistakeRecord[(yylsp[-1]).first_line-1] == 0){
            mistakeRecord[(yylsp[-1]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[-1]).first_line);
        }
    }
#line 2536 "parser.cpp"
    break;

  case 86:
#line 475 "parser.y"
                                                 {
        if(mistakeRecord[(yylsp[-1]).first_line-1] == 0){
            mistakeRecord[(yylsp[-1]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[-1]).first_line);
        }
    }
#line 2548 "parser.cpp"
    break;

  case 87:
#line 482 "parser.y"
                                     {
        if(mistakeRecord[(yylsp[-1]).first_line-1] == 0){
            mistakeRecord[(yylsp[-1]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[-1]).first_line);
        }
    }
#line 2560 "parser.cpp"
    break;

  case 88:
#line 489 "parser.y"
                                    {
        if(mistakeRecord[(yylsp[-1]).first_line-1] == 0){
            mistakeRecord[(yylsp[-1]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[-1]).first_line);
        }
    }
#line 2572 "parser.cpp"
    break;

  case 89:
#line 496 "parser.y"
                                        {
        if(mistakeRecord[(yylsp[-1]).first_line-1] == 0){
            mistakeRecord[(yylsp[-1]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[-1]).first_line);
        }
    }
#line 2584 "parser.cpp"
    break;

  case 90:
#line 503 "parser.y"
                                {
        if(mistakeRecord[(yylsp[-1]).first_line-1] == 0){
            mistakeRecord[(yylsp[-1]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[-1]).first_line);
        }
    }
#line 2596 "parser.cpp"
    break;

  case 91:
#line 510 "parser.y"
                                 {
        if(mistakeRecord[(yylsp[-1]).first_line-1] == 0){
            mistakeRecord[(yylsp[-1]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[-1]).first_line);
        }
    }
#line 2608 "parser.cpp"
    break;

  case 92:
#line 517 "parser.y"
                                    {
        if(mistakeRecord[(yylsp[-1]).first_line-1] == 0){
            mistakeRecord[(yylsp[-1]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[-1]).first_line);
        }
    }
#line 2620 "parser.cpp"
    break;

  case 93:
#line 524 "parser.y"
                                  {
        if(mistakeRecord[(yylsp[-1]).first_line-1] == 0){
            mistakeRecord[(yylsp[-1]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[-1]).first_line);
        }
    }
#line 2632 "parser.cpp"
    break;

  case 94:
#line 531 "parser.y"
                                       {
        if(mistakeRecord[(yylsp[-1]).first_line-1] == 0){
            mistakeRecord[(yylsp[-1]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[-1]).first_line);
        }
    }
#line 2644 "parser.cpp"
    break;

  case 95:
#line 538 "parser.y"
                                      {
        if(mistakeRecord[(yylsp[-1]).first_line-1] == 0){
            mistakeRecord[(yylsp[-1]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[-1]).first_line);
        }
    }
#line 2656 "parser.cpp"
    break;

  case 96:
#line 545 "parser.y"
                                            {
        if(mistakeRecord[(yylsp[-1]).first_line-1] == 0){
            mistakeRecord[(yylsp[-1]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[-1]).first_line);
        }
    }
#line 2668 "parser.cpp"
    break;

  case 97:
#line 552 "parser.y"
                                          {
        if(mistakeRecord[(yylsp[-1]).first_line-1] == 0){
            mistakeRecord[(yylsp[-1]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: wrong expression between \"[\" and \"]\".\n", (yylsp[-1]).first_line);
        }
    }
#line 2680 "parser.cpp"
    break;

  case 98:
#line 559 "parser.y"
                                      {
        (yyval.node) = new Node("", "Exp", 5, (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 2688 "parser.cpp"
    break;

  case 99:
#line 562 "parser.y"
                    {
        (yyval.node) = new Node("", "Exp", 2, (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 2696 "parser.cpp"
    break;

  case 100:
#line 565 "parser.y"
                    {
        (yyval.node) = new Node("", "Exp", 2, (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 2704 "parser.cpp"
    break;

  case 101:
#line 571 "parser.y"
                   {
        (yyval.node) = new Node("", "Args", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 2712 "parser.cpp"
    break;

  case 102:
#line 574 "parser.y"
          {
        (yyval.node) = new Node("", "Args", 1, (yyvsp[0].node));
    }
#line 2720 "parser.cpp"
    break;


#line 2724 "parser.cpp"

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
  *++yylsp = yyloc;

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

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc);
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp, yylsp);
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
