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
    int yylex(void);
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
    AUTO = 258,
    BREAK = 259,
    CASE = 260,
    CHAR = 261,
    DOUBLE = 262,
    FLOAT = 263,
    INT = 264,
    BOOL = 265,
    CHAR_LIT = 266,
    INT_LIT = 267,
    FLOAT_LIT = 268,
    STRING_LIT = 269,
    CONST = 270,
    CONTINUE = 271,
    DEFAULT = 272,
    DO = 273,
    ELSE = 274,
    ENUM = 275,
    EXTERN = 276,
    FOR = 277,
    GOTO = 278,
    IF = 279,
    LONG = 280,
    SHORT = 281,
    REGISTER = 282,
    RETURN = 283,
    SIGNED = 284,
    UNSIGNED = 285,
    SIZEOF = 286,
    STATIC = 287,
    STRUCT = 288,
    SWITCH = 289,
    TYPEDEF = 290,
    UNION = 291,
    VOID = 292,
    VOLATILE = 293,
    WHILE = 294,
    IDENTIFIER = 295,
    RIGHT_SHIFT = 296,
    LEFT_SHIFT = 297,
    LESS_THAN = 298,
    LESS_THAN_OR_EQUAL_TO = 299,
    GREATER_THAN = 300,
    GREATER_THAN_OR_EQUAL_TO = 301,
    EQUAL_TO = 302,
    NOT_EQUAL_TO = 303,
    INCREMENT = 304,
    DECREMENT = 305,
    LOGICAL_AND = 306,
    LOGICAL_OR = 307,
    NOT = 308,
    ASSIGNMENT = 309,
    SEMICOLON = 310,
    COMMA = 311,
    COLON = 312,
    PLUS = 313,
    MINUS = 314,
    MULTIPLY = 315,
    DIVIDE = 316,
    QUESTION_MARK = 317,
    LEFT_PAREN = 318,
    RIGHT_PAREN = 319,
    LEFT_BRACKET = 320,
    RIGHT_BRACKET = 321,
    LEFT_BRACE = 322,
    RIGHT_BRACE = 323,
    CR = 324,
    LF = 325,
    LOWER_THAN_ELSE = 326
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "parser.y"
 
    struct Node* node;
    

#line 212 "parser.cpp"

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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   809

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  18
/* YYNRULES -- Number of rules.  */
#define YYNRULES  100
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  184

#define YYUNDEFTOK  2
#define YYMAXUTOK   326


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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    82,    82,    89,    92,    97,   100,   106,   109,   112,
     115,   122,   125,   131,   134,   137,   144,   154,   157,   164,
     174,   177,   180,   183,   192,   195,   200,   206,   209,   215,
     218,   224,   227,   234,   241,   251,   254,   260,   263,   266,
     269,   272,   279,   282,   285,   288,   291,   298,   301,   308,
     315,   322,   332,   336,   340,   344,   348,   352,   356,   360,
     364,   368,   372,   376,   380,   384,   388,   392,   396,   400,
     404,   408,   413,   417,   421,   425,   429,   433,   438,   442,
     449,   456,   463,   470,   477,   484,   491,   498,   505,   512,
     519,   526,   533,   540,   547,   554,   561,   564,   567,   573,
     576
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AUTO", "BREAK", "CASE", "CHAR",
  "DOUBLE", "FLOAT", "INT", "BOOL", "CHAR_LIT", "INT_LIT", "FLOAT_LIT",
  "STRING_LIT", "CONST", "CONTINUE", "DEFAULT", "DO", "ELSE", "ENUM",
  "EXTERN", "FOR", "GOTO", "IF", "LONG", "SHORT", "REGISTER", "RETURN",
  "SIGNED", "UNSIGNED", "SIZEOF", "STATIC", "STRUCT", "SWITCH", "TYPEDEF",
  "UNION", "VOID", "VOLATILE", "WHILE", "IDENTIFIER", "RIGHT_SHIFT",
  "LEFT_SHIFT", "LESS_THAN", "LESS_THAN_OR_EQUAL_TO", "GREATER_THAN",
  "GREATER_THAN_OR_EQUAL_TO", "EQUAL_TO", "NOT_EQUAL_TO", "INCREMENT",
  "DECREMENT", "LOGICAL_AND", "LOGICAL_OR", "NOT", "ASSIGNMENT",
  "SEMICOLON", "COMMA", "COLON", "PLUS", "MINUS", "MULTIPLY", "DIVIDE",
  "QUESTION_MARK", "LEFT_PAREN", "RIGHT_PAREN", "LEFT_BRACKET",
  "RIGHT_BRACKET", "LEFT_BRACE", "RIGHT_BRACE", "CR", "LF",
  "LOWER_THAN_ELSE", "$accept", "Program", "ExtDefList", "ExtDef",
  "Specifier", "ExtDecList", "FunDec", "CompSt", "VarDec", "ParameterList",
  "ParameterDec", "DefList", "StList", "Def", "DecList", "Stm", "Exp",
  "Args", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326
};
# endif

#define YYPACT_NINF (-104)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-30)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       5,  -104,  -104,  -104,  -104,     2,  -104,     5,   -22,  -104,
    -104,    20,   -33,     0,   -28,   -25,    85,     6,  -104,   -24,
      50,  -104,    28,  -104,     9,  -104,    28,    13,   -16,    -6,
      16,  -104,  -104,    28,    15,   120,    50,    32,  -104,  -104,
    -104,  -104,     5,  -104,  -104,    25,    44,    47,    49,   -45,
      52,  -104,  -104,  -104,  -104,    55,     7,   449,     8,   -46,
     456,   456,   456,  -104,  -104,   120,   505,  -104,  -104,    28,
    -104,  -104,  -104,  -104,  -104,  -104,    86,   456,  -104,   530,
     -37,   456,   150,   440,    46,   416,   555,  -104,   184,   204,
     209,   218,   239,   272,   277,   292,  -104,  -104,   307,   345,
     360,  -104,   367,   375,   382,   435,   456,   113,  -104,   141,
     580,  -104,  -104,  -104,   605,    60,  -104,   630,    58,  -104,
     479,  -104,    68,   680,    70,   680,    75,   744,    80,   744,
      82,   744,    83,   744,    88,   744,    91,   744,    92,   730,
      95,   705,   101,   680,   103,   416,   111,   416,   112,    46,
     115,    46,   655,    76,  -104,   141,   141,  -104,   456,  -104,
    -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,
    -104,  -104,  -104,  -104,  -104,  -104,   456,  -104,   121,  -104,
    -104,   680,   141,  -104
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,    10,     8,     9,     7,     0,     2,     4,     0,     1,
       3,     0,     0,     0,    11,     0,     0,     0,     5,     0,
       0,     6,     0,    16,     0,    14,     0,     0,    25,     0,
       0,    22,    19,     0,     0,     0,     0,    20,    12,    15,
      26,    13,     0,    23,    21,    35,     0,     0,    34,     0,
       0,    78,    75,    76,    77,     0,     0,     0,     0,    74,
       0,     0,     0,    38,    18,     0,    51,    28,    24,     0,
      33,    32,    31,    50,    42,    43,     0,     0,    39,    41,
       0,     0,     0,     0,    69,    68,     0,    30,     0,     0,
       0,     0,     0,     0,     0,     0,    97,    98,     0,     0,
       0,    37,     0,     0,     0,     0,     0,     0,    36,     0,
       0,    40,    48,    49,     0,     0,    71,   100,     0,    73,
       0,    67,     0,    65,     0,    66,     0,    57,     0,    58,
       0,    55,     0,    56,     0,    59,     0,    60,     0,    53,
       0,    54,     0,    52,     0,    61,     0,    62,     0,    63,
       0,    64,     0,     0,    46,     0,     0,    94,     0,    70,
      72,    92,    93,    85,    84,    82,    83,    86,    87,    80,
      81,    79,    88,    89,    90,    91,     0,    95,    44,    47,
      99,    96,     0,    45
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -104,  -104,   161,  -104,    64,   149,  -104,   159,    90,   132,
    -104,   139,   117,  -104,    -4,  -103,   -57,    18
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     5,     6,     7,     8,    12,    13,    63,    45,    27,
      28,    35,    64,    36,    46,    65,    66,   118
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      79,    19,     9,    84,    85,    86,   154,    29,    76,    80,
      73,     1,     2,     3,     4,    30,    47,    82,    11,    83,
     110,    15,    18,    32,   114,   117,   120,   112,    22,   113,
      48,   123,   125,   127,   129,   131,   133,   135,   137,    23,
      42,   139,   141,   143,    32,   145,   147,   149,   151,   152,
     -27,    33,   178,   179,   -27,    37,     1,     2,     3,     4,
      43,   -27,   -27,   -27,   -27,   108,   -27,    20,    37,   -27,
      77,    81,    31,    39,   -27,   -20,   -20,    41,   -27,   183,
      26,    69,    44,    16,    34,    17,    24,    88,    89,   -27,
     -27,     1,     2,     3,     4,    96,    97,    17,    14,    70,
      34,   117,    71,   -27,    72,   109,    26,    74,   106,   -27,
      75,   107,    14,   -27,   153,   157,    40,   -27,   -27,   181,
     -29,    49,   159,   161,    50,   162,   -29,   -29,   -29,   -29,
     163,    51,    52,    53,    54,   164,    55,   165,   166,   -29,
     182,   177,    49,   167,    56,    50,   168,   169,    57,    25,
     170,   115,    51,    52,    53,    54,   171,    55,   172,    58,
      59,    51,    52,    53,    54,    56,   173,   174,    10,    57,
     175,    38,    21,    60,    68,    67,   180,     0,     0,    61,
      58,    59,    87,    62,     0,   122,     0,    20,   -29,     0,
      59,     0,     0,     0,    60,    51,    52,    53,    54,     0,
      61,     0,     0,    60,    62,   124,     0,     0,    20,    61,
     126,     0,     0,    62,   116,    51,    52,    53,    54,   128,
      51,    52,    53,    54,    59,     0,     0,     0,     0,    51,
      52,    53,    54,     0,     0,     0,     0,    60,     0,     0,
     130,     0,     0,    61,    59,     0,     0,    62,     0,    59,
      51,    52,    53,    54,     0,     0,     0,    60,    59,     0,
       0,     0,    60,    61,     0,     0,     0,    62,    61,     0,
       0,    60,    62,   132,     0,     0,     0,    61,   134,    59,
       0,    62,     0,    51,    52,    53,    54,     0,    51,    52,
      53,    54,    60,   136,     0,     0,     0,     0,    61,     0,
       0,     0,    62,    51,    52,    53,    54,     0,   138,     0,
       0,     0,    59,     0,     0,     0,     0,    59,    51,    52,
      53,    54,     0,     0,     0,    60,     0,     0,     0,     0,
      60,    61,    59,     0,     0,    62,    61,     0,     0,     0,
      62,     0,     0,     0,     0,    60,   140,    59,     0,     0,
       0,    61,     0,     0,     0,    62,    51,    52,    53,    54,
      60,   142,     0,     0,     0,     0,    61,     0,   144,     0,
      62,    51,    52,    53,    54,     0,   146,     0,    51,    52,
      53,    54,     0,   148,     0,    59,    51,    52,    53,    54,
       0,     0,     0,    51,    52,    53,    54,     0,    60,     0,
      59,     0,     0,     0,    61,     0,     0,    59,    62,     0,
       0,     0,     0,    60,     0,    59,     0,     0,     0,    61,
      60,     0,    59,    62,     0,     0,    61,     0,    60,     0,
      62,     0,     0,     0,    61,    60,   150,     0,    62,     0,
       0,    61,     0,     0,     0,    62,    51,    52,    53,    54,
       0,    51,    52,    53,    54,     0,     0,    88,    89,     0,
      51,    52,    53,    54,     0,    96,    97,    51,    52,    53,
      54,     0,     0,     0,     0,    59,   104,   105,   106,     0,
      59,   107,     0,     0,     0,     0,     0,     0,    60,    59,
       0,     0,     0,    60,    61,     0,    59,     0,    62,    61,
       0,     0,    60,    62,    78,     0,   119,     0,    61,    60,
       0,     0,    62,     0,     0,    61,     0,     0,     0,    62,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,     0,   100,     0,     0,     0,   102,   103,   104,
     105,   106,     0,     0,   107,   160,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,     0,   100,
     101,     0,     0,   102,   103,   104,   105,   106,     0,     0,
     107,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,     0,   100,   111,     0,     0,   102,   103,
     104,   105,   106,     0,     0,   107,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,     0,   100,
       0,     0,     0,   102,   103,   104,   105,   106,     0,   121,
     107,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,     0,   100,     0,     0,     0,   102,   103,
     104,   105,   106,     0,   155,   107,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,     0,   100,
       0,     0,     0,   102,   103,   104,   105,   106,     0,   156,
     107,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,     0,   100,     0,   158,     0,   102,   103,
     104,   105,   106,     0,     0,   107,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,     0,   100,
       0,     0,   176,   102,   103,   104,   105,   106,     0,     0,
     107,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,     0,   100,     0,     0,     0,   102,   103,
     104,   105,   106,     0,     0,   107,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,     0,     0,     0,
       0,     0,     0,   102,   103,   104,   105,   106,     0,     0,
     107,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,     0,     0,     0,     0,    88,    89,     0,   102,   103,
     104,   105,   106,    96,    97,   107,     0,     0,     0,     0,
       0,     0,   102,   103,   104,   105,   106,     0,     0,   107
};

static const yytype_int16 yycheck[] =
{
      57,     1,     0,    60,    61,    62,   109,     1,     1,     1,
      55,     6,     7,     8,     9,     9,     1,    63,    40,    65,
      77,     1,    55,    68,    81,    82,    83,    64,    56,    66,
      34,    88,    89,    90,    91,    92,    93,    94,    95,    64,
      56,    98,    99,   100,    68,   102,   103,   104,   105,   106,
       0,     1,   155,   156,     4,    40,     6,     7,     8,     9,
      66,    11,    12,    13,    14,    69,    16,    67,    40,    19,
      63,    63,    66,    64,    24,    55,    56,    64,    28,   182,
      16,    56,    66,    63,    20,    65,     1,    41,    42,    39,
      40,     6,     7,     8,     9,    49,    50,    65,     8,    55,
      36,   158,    55,    53,    55,    19,    42,    55,    62,    59,
      55,    65,    22,    63,     1,    55,    26,    67,    68,   176,
       0,     1,    64,    55,     4,    55,     6,     7,     8,     9,
      55,    11,    12,    13,    14,    55,    16,    55,    55,    19,
      19,    65,     1,    55,    24,     4,    55,    55,    28,    64,
      55,     1,    11,    12,    13,    14,    55,    16,    55,    39,
      40,    11,    12,    13,    14,    24,    55,    55,     7,    28,
      55,    22,    13,    53,    42,    36,   158,    -1,    -1,    59,
      39,    40,    65,    63,    -1,     1,    -1,    67,    68,    -1,
      40,    -1,    -1,    -1,    53,    11,    12,    13,    14,    -1,
      59,    -1,    -1,    53,    63,     1,    -1,    -1,    67,    59,
       1,    -1,    -1,    63,    64,    11,    12,    13,    14,     1,
      11,    12,    13,    14,    40,    -1,    -1,    -1,    -1,    11,
      12,    13,    14,    -1,    -1,    -1,    -1,    53,    -1,    -1,
       1,    -1,    -1,    59,    40,    -1,    -1,    63,    -1,    40,
      11,    12,    13,    14,    -1,    -1,    -1,    53,    40,    -1,
      -1,    -1,    53,    59,    -1,    -1,    -1,    63,    59,    -1,
      -1,    53,    63,     1,    -1,    -1,    -1,    59,     1,    40,
      -1,    63,    -1,    11,    12,    13,    14,    -1,    11,    12,
      13,    14,    53,     1,    -1,    -1,    -1,    -1,    59,    -1,
      -1,    -1,    63,    11,    12,    13,    14,    -1,     1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    40,    11,    12,
      13,    14,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      53,    59,    40,    -1,    -1,    63,    59,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    53,     1,    40,    -1,    -1,
      -1,    59,    -1,    -1,    -1,    63,    11,    12,    13,    14,
      53,     1,    -1,    -1,    -1,    -1,    59,    -1,     1,    -1,
      63,    11,    12,    13,    14,    -1,     1,    -1,    11,    12,
      13,    14,    -1,     1,    -1,    40,    11,    12,    13,    14,
      -1,    -1,    -1,    11,    12,    13,    14,    -1,    53,    -1,
      40,    -1,    -1,    -1,    59,    -1,    -1,    40,    63,    -1,
      -1,    -1,    -1,    53,    -1,    40,    -1,    -1,    -1,    59,
      53,    -1,    40,    63,    -1,    -1,    59,    -1,    53,    -1,
      63,    -1,    -1,    -1,    59,    53,     1,    -1,    63,    -1,
      -1,    59,    -1,    -1,    -1,    63,    11,    12,    13,    14,
      -1,    11,    12,    13,    14,    -1,    -1,    41,    42,    -1,
      11,    12,    13,    14,    -1,    49,    50,    11,    12,    13,
      14,    -1,    -1,    -1,    -1,    40,    60,    61,    62,    -1,
      40,    65,    -1,    -1,    -1,    -1,    -1,    -1,    53,    40,
      -1,    -1,    -1,    53,    59,    -1,    40,    -1,    63,    59,
      -1,    -1,    53,    63,    55,    -1,    66,    -1,    59,    53,
      -1,    -1,    63,    -1,    -1,    59,    -1,    -1,    -1,    63,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    -1,    54,    -1,    -1,    -1,    58,    59,    60,
      61,    62,    -1,    -1,    65,    66,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    -1,    54,
      55,    -1,    -1,    58,    59,    60,    61,    62,    -1,    -1,
      65,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    -1,    54,    55,    -1,    -1,    58,    59,
      60,    61,    62,    -1,    -1,    65,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    -1,    54,
      -1,    -1,    -1,    58,    59,    60,    61,    62,    -1,    64,
      65,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    -1,    54,    -1,    -1,    -1,    58,    59,
      60,    61,    62,    -1,    64,    65,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    -1,    54,
      -1,    -1,    -1,    58,    59,    60,    61,    62,    -1,    64,
      65,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    -1,    54,    -1,    56,    -1,    58,    59,
      60,    61,    62,    -1,    -1,    65,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    -1,    54,
      -1,    -1,    57,    58,    59,    60,    61,    62,    -1,    -1,
      65,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    -1,    54,    -1,    -1,    -1,    58,    59,
      60,    61,    62,    -1,    -1,    65,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    59,    60,    61,    62,    -1,    -1,
      65,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    -1,    -1,    -1,    41,    42,    -1,    58,    59,
      60,    61,    62,    49,    50,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    59,    60,    61,    62,    -1,    -1,    65
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     6,     7,     8,     9,    73,    74,    75,    76,     0,
      74,    40,    77,    78,    80,     1,    63,    65,    55,     1,
      67,    79,    56,    64,     1,    64,    76,    81,    82,     1,
       9,    66,    68,     1,    76,    83,    85,    40,    77,    64,
      80,    64,    56,    66,    66,    80,    86,     1,    86,     1,
       4,    11,    12,    13,    14,    16,    24,    28,    39,    40,
      53,    59,    63,    79,    84,    87,    88,    83,    81,    56,
      55,    55,    55,    55,    55,    55,     1,    63,    55,    88,
       1,    63,    63,    65,    88,    88,    88,    84,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      54,    55,    58,    59,    60,    61,    62,    65,    86,    19,
      88,    55,    64,    66,    88,     1,    64,    88,    89,    66,
      88,    64,     1,    88,     1,    88,     1,    88,     1,    88,
       1,    88,     1,    88,     1,    88,     1,    88,     1,    88,
       1,    88,     1,    88,     1,    88,     1,    88,     1,    88,
       1,    88,    88,     1,    87,    64,    64,    55,    56,    64,
      66,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    57,    65,    87,    87,
      89,    88,    19,    87
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    72,    73,    74,    74,    75,    75,    76,    76,    76,
      76,    77,    77,    78,    78,    78,    78,    79,    79,    79,
      80,    80,    80,    80,    81,    81,    82,    83,    83,    84,
      84,    85,    85,    85,    85,    86,    86,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    89,
      89
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     3,     3,     1,     1,     1,
       1,     1,     3,     4,     3,     4,     3,     4,     3,     2,
       1,     4,     3,     4,     3,     1,     2,     0,     2,     0,
       2,     3,     3,     3,     2,     1,     3,     2,     1,     2,
       3,     2,     2,     2,     5,     7,     4,     5,     3,     3,
       2,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       4,     3,     4,     3,     1,     1,     1,     1,     1,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     5,     2,     2,     3,
       1
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
#line 82 "parser.y"
               {
        (yyval.node) = new Node("", "Program", 1, (yyvsp[0].node));
        ROOT = (yyval.node);
    }
#line 1763 "parser.cpp"
    break;

  case 3:
#line 89 "parser.y"
                      {
        (yyval.node) = new Node("", "ExtDefList", 2, (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 1771 "parser.cpp"
    break;

  case 4:
#line 92 "parser.y"
      {
        (yyval.node) = nullptr;
    }
#line 1779 "parser.cpp"
    break;

  case 5:
#line 97 "parser.y"
                                  {
        (yyval.node) = new Node("", "ExtDef", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 1787 "parser.cpp"
    break;

  case 6:
#line 100 "parser.y"
                             {
        (yyval.node) = new Node("", "ExtDef", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 1795 "parser.cpp"
    break;

  case 7:
#line 106 "parser.y"
        {
        (yyval.node) = new Node("", "Specifier", 1, (yyvsp[0].node));
    }
#line 1803 "parser.cpp"
    break;

  case 8:
#line 109 "parser.y"
             {
        (yyval.node) = new Node("", "Specifier", 1, (yyvsp[0].node));
    }
#line 1811 "parser.cpp"
    break;

  case 9:
#line 112 "parser.y"
            {
        (yyval.node) = new Node("", "Specifier", 1, (yyvsp[0].node));
    }
#line 1819 "parser.cpp"
    break;

  case 10:
#line 115 "parser.y"
           {
        (yyval.node) = new Node("", "Specifier", 1, (yyvsp[0].node));
    }
#line 1827 "parser.cpp"
    break;

  case 11:
#line 122 "parser.y"
           {
        (yyval.node) = new Node("", "ExtDecList", 1, (yyvsp[0].node));
    }
#line 1835 "parser.cpp"
    break;

  case 12:
#line 125 "parser.y"
                              {
        (yyval.node) = new Node("", "ExtDecList", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 1843 "parser.cpp"
    break;

  case 13:
#line 131 "parser.y"
                                                    {
        (yyval.node) = new Node("", "FunDec", 4, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 1851 "parser.cpp"
    break;

  case 14:
#line 134 "parser.y"
                                       {
        (yyval.node) = new Node("", "FunDec", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 1859 "parser.cpp"
    break;

  case 15:
#line 137 "parser.y"
                                             {
        if(mistakeRecord[(yylsp[-1]).first_line-1] == 0){
            mistakeRecord[(yylsp[-1]).first_line-1] = 1;
            mistake ++;
            printf("Error at Line %d : Syntax Error.\n", (yylsp[-1]).first_line);
        }
    }
#line 1871 "parser.cpp"
    break;

  case 16:
#line 144 "parser.y"
                                  {
        if(mistakeRecord[(yylsp[-1]).first_line-1] == 0){
            mistakeRecord[(yylsp[-1]).first_line-1] = 1;
            mistake ++;
            printf("Error at Line %d : Syntax Error.\n", (yylsp[-1]).first_line);
        }
    }
#line 1883 "parser.cpp"
    break;

  case 17:
#line 154 "parser.y"
                                         {
        (yyval.node) = new Node("", "CompSt", 4, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 1891 "parser.cpp"
    break;

  case 18:
#line 157 "parser.y"
                                {
        if(mistakeRecord[(yylsp[0]).first_line-1] == 0){
            mistakeRecord[(yylsp[0]).first_line-1] = 1;
            mistake ++;
            printf("Error at Line %d : Syntax Error.\n", (yylsp[0]).first_line);
        }
    }
#line 1903 "parser.cpp"
    break;

  case 19:
#line 164 "parser.y"
                        {
        if(mistakeRecord[(yylsp[-1]).first_line-1] == 0){
            mistakeRecord[(yylsp[-1]).first_line-1] = 1;
            mistake ++;
            printf("Error at Line %d : Syntax Error.\n", (yylsp[-1]).first_line);
        }
    }
#line 1915 "parser.cpp"
    break;

  case 20:
#line 174 "parser.y"
               {
        (yyval.node) = new Node("", "VarDec", 1, (yyvsp[0].node));
    }
#line 1923 "parser.cpp"
    break;

  case 21:
#line 177 "parser.y"
                                                {
        (yyval.node) = new Node("", "VarDec", 4, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 1931 "parser.cpp"
    break;

  case 22:
#line 180 "parser.y"
                                            {
        (yyval.node) = new Node("", "VarDec", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 1939 "parser.cpp"
    break;

  case 23:
#line 183 "parser.y"
                                                  {
        if(mistakeRecord[(yylsp[-1]).first_line-1] == 0){
            mistakeRecord[(yylsp[-1]).first_line-1] = 1;
            mistake ++;
            printf("Error at Line %d : Syntax Error.\n", (yylsp[-1]).first_line);
        }
    }
#line 1951 "parser.cpp"
    break;

  case 24:
#line 192 "parser.y"
                                     {
        (yyval.node) = new Node("", "ParameterList", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 1959 "parser.cpp"
    break;

  case 25:
#line 195 "parser.y"
                   {
        (yyval.node) = new Node("", "ParameterList", 1, (yyvsp[0].node));
    }
#line 1967 "parser.cpp"
    break;

  case 26:
#line 200 "parser.y"
                     {
        (yyval.node) = new Node("", "ParameterDec", 2, (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 1975 "parser.cpp"
    break;

  case 27:
#line 206 "parser.y"
    {
        (yyval.node) = nullptr;
    }
#line 1983 "parser.cpp"
    break;

  case 28:
#line 209 "parser.y"
                  {
        (yyval.node) = new Node("", "DefList", 2, (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 1991 "parser.cpp"
    break;

  case 29:
#line 215 "parser.y"
    {
        (yyval.node) = nullptr;
    }
#line 1999 "parser.cpp"
    break;

  case 30:
#line 218 "parser.y"
                 {
        (yyval.node) = new Node("", "StList", 2, (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 2007 "parser.cpp"
    break;

  case 31:
#line 224 "parser.y"
                               {
        (yyval.node) = new Node("", "Def", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 2015 "parser.cpp"
    break;

  case 32:
#line 227 "parser.y"
                               {
        if(mistakeRecord[(yylsp[-1]).first_line-1] == 0){
            mistakeRecord[(yylsp[-1]).first_line-1] = 1;
            mistake ++;
            printf("Error at Line %d : Syntax Error.\n", (yylsp[-1]).first_line);
        }
    }
#line 2027 "parser.cpp"
    break;

  case 33:
#line 234 "parser.y"
                             {
        if(mistakeRecord[(yylsp[-2]).first_line-1] == 0){
            mistakeRecord[(yylsp[-2]).first_line-1] = 1;
            mistake ++;
            printf("Error at Line %d : Syntax Error.\n", (yylsp[-2]).first_line);
        }
    }
#line 2039 "parser.cpp"
    break;

  case 34:
#line 241 "parser.y"
                        {
        if(mistakeRecord[(yylsp[0]).first_line-1] == 0){
            mistakeRecord[(yylsp[0]).first_line-1] = 1;
            mistake ++;
            printf("Error at Line %d : Syntax Error.\n", (yylsp[0]).first_line);
        }
    }
#line 2051 "parser.cpp"
    break;

  case 35:
#line 251 "parser.y"
           {
        (yyval.node) = new Node("", "DecList", 1, (yyvsp[0].node));
    }
#line 2059 "parser.cpp"
    break;

  case 36:
#line 254 "parser.y"
                           {
        (yyval.node) = new Node("", "DecList", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 2067 "parser.cpp"
    break;

  case 37:
#line 260 "parser.y"
                 {
        (yyval.node) = new Node("", "Stm", 2, (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 2075 "parser.cpp"
    break;

  case 38:
#line 263 "parser.y"
             {
        (yyval.node) = new Node("", "Stm", 1, (yyvsp[0].node));
    }
#line 2083 "parser.cpp"
    break;

  case 39:
#line 266 "parser.y"
                      {
        (yyval.node) = new Node("", "Stm", 1, (yyvsp[-1].node));
    }
#line 2091 "parser.cpp"
    break;

  case 40:
#line 269 "parser.y"
                          {
        (yyval.node) = new Node("", "Stm", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 2099 "parser.cpp"
    break;

  case 41:
#line 272 "parser.y"
                 {
        if(mistakeRecord[(yylsp[0]).first_line-1] == 0){
            mistakeRecord[(yylsp[0]).first_line-1] = 1;
            mistake ++;
            printf("Error at Line %d : Syntax Error.\n", (yylsp[0]).first_line);
        }
    }
#line 2111 "parser.cpp"
    break;

  case 42:
#line 279 "parser.y"
                     {
        (yyval.node) = new Node("", "Stm", 2, (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 2119 "parser.cpp"
    break;

  case 43:
#line 282 "parser.y"
                        {
        (yyval.node) = new Node("", "Stm", 2, (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 2127 "parser.cpp"
    break;

  case 44:
#line 285 "parser.y"
                                                              {
        (yyval.node) = new Node("", "Stm", 5, (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 2135 "parser.cpp"
    break;

  case 45:
#line 288 "parser.y"
                                                 {
        (yyval.node) = new Node("", "Stm", 7, (yyvsp[-6].node), (yyvsp[-5].node), (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 2143 "parser.cpp"
    break;

  case 46:
#line 291 "parser.y"
                       {
        if(mistakeRecord[(yylsp[-2]).first_line-1] == 0){
            mistakeRecord[(yylsp[-2]).first_line-1] = 1;
            mistake ++;
            printf("Error at Line %d : Syntax Error.\n", (yylsp[-2]).first_line);
        }
    }
#line 2155 "parser.cpp"
    break;

  case 47:
#line 298 "parser.y"
                                          {
        (yyval.node) = new Node("", "Stm", 5, (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 2163 "parser.cpp"
    break;

  case 48:
#line 301 "parser.y"
                             {
        if(mistakeRecord[(yylsp[-1]).first_line-1] == 0){
            mistakeRecord[(yylsp[-1]).first_line-1] = 1;
            mistake ++;
            printf("Error at Line %d : Syntax Error.\n", (yylsp[-1]).first_line);
        }
    }
#line 2175 "parser.cpp"
    break;

  case 49:
#line 308 "parser.y"
                                {
        if(mistakeRecord[(yylsp[-1]).first_line-1] == 0){
            mistakeRecord[(yylsp[-1]).first_line-1] = 1;
            mistake ++;
            printf("Error at Line %d : Syntax Error.\n", (yylsp[-1]).first_line);
        }
    }
#line 2187 "parser.cpp"
    break;

  case 50:
#line 315 "parser.y"
                      {
        if(mistakeRecord[(yylsp[-1]).first_line-1] == 0){
            mistakeRecord[(yylsp[-1]).first_line-1] = 1;
            mistake ++;
            printf("Error at Line %d : Syntax Error.\n", (yylsp[-1]).first_line);
        }
    }
#line 2199 "parser.cpp"
    break;

  case 51:
#line 322 "parser.y"
          {
        if(mistakeRecord[(yylsp[0]).first_line-1] == 0){
            mistakeRecord[(yylsp[0]).first_line-1] = 1;
            mistake ++;
            printf("Error at Line %d : Syntax Error.\n", (yylsp[0]).first_line);
        }
    }
#line 2211 "parser.cpp"
    break;

  case 52:
#line 332 "parser.y"
                           {
		(yyval.node) = new Node("", "Exp", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node)->setValueType((yyvsp[0].node)->getValueType());
	}
#line 2220 "parser.cpp"
    break;

  case 53:
#line 336 "parser.y"
                          {
		(yyval.node) = new Node("", "Exp", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node)->setValueType((yyvsp[-2].node)->getValueType());
	}
#line 2229 "parser.cpp"
    break;

  case 54:
#line 340 "parser.y"
                         {
        (yyval.node) = new Node("", "Exp", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node)->setValueType((yyvsp[-2].node)->getValueType());
    }
#line 2238 "parser.cpp"
    break;

  case 55:
#line 344 "parser.y"
                           {
        (yyval.node) = new Node("", "Exp", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node)->setValueType((yyvsp[-2].node)->getValueType());
    }
#line 2247 "parser.cpp"
    break;

  case 56:
#line 348 "parser.y"
                                       {
        (yyval.node) = new Node("", "Exp", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node)->setValueType((yyvsp[-2].node)->getValueType());
    }
#line 2256 "parser.cpp"
    break;

  case 57:
#line 352 "parser.y"
                        {
        (yyval.node) = new Node("", "Exp", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node)->setValueType((yyvsp[-2].node)->getValueType());
    }
#line 2265 "parser.cpp"
    break;

  case 58:
#line 356 "parser.y"
                                    {
        (yyval.node) = new Node("", "Exp", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node)->setValueType((yyvsp[-2].node)->getValueType());
    }
#line 2274 "parser.cpp"
    break;

  case 59:
#line 360 "parser.y"
                       {
        (yyval.node) = new Node("", "Exp", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node)->setValueType((yyvsp[-2].node)->getValueType());
    }
#line 2283 "parser.cpp"
    break;

  case 60:
#line 364 "parser.y"
                           {
        (yyval.node) = new Node("", "Exp", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node)->setValueType((yyvsp[-2].node)->getValueType());
    }
#line 2292 "parser.cpp"
    break;

  case 61:
#line 368 "parser.y"
                   {
        (yyval.node) = new Node("", "Exp", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node)->setValueType((yyvsp[-2].node)->getValueType());
    }
#line 2301 "parser.cpp"
    break;

  case 62:
#line 372 "parser.y"
                    {
        (yyval.node) = new Node("", "Exp", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node)->setValueType((yyvsp[-2].node)->getValueType());
    }
#line 2310 "parser.cpp"
    break;

  case 63:
#line 376 "parser.y"
                       {
        (yyval.node) = new Node("", "Exp", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node)->setValueType((yyvsp[-2].node)->getValueType());
    }
#line 2319 "parser.cpp"
    break;

  case 64:
#line 380 "parser.y"
                     {
        (yyval.node) = new Node("", "Exp", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node)->setValueType((yyvsp[-2].node)->getValueType());
    }
#line 2328 "parser.cpp"
    break;

  case 65:
#line 384 "parser.y"
                          {
        (yyval.node) = new Node("", "Exp", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node)->setValueType((yyvsp[-2].node)->getValueType());
    }
#line 2337 "parser.cpp"
    break;

  case 66:
#line 388 "parser.y"
                         {
        (yyval.node) = new Node("", "Exp", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node)->setValueType((yyvsp[-2].node)->getValueType());
    }
#line 2346 "parser.cpp"
    break;

  case 67:
#line 392 "parser.y"
                                 {
        (yyval.node) = new Node("", "Exp", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node)->setValueType((yyvsp[-1].node)->getValueType());
    }
#line 2355 "parser.cpp"
    break;

  case 68:
#line 396 "parser.y"
                {
        (yyval.node) = new Node("", "Exp", 2, (yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node)->setValueType((yyvsp[0].node)->getValueType());
    }
#line 2364 "parser.cpp"
    break;

  case 69:
#line 400 "parser.y"
              {
        (yyval.node) = new Node("", "Exp", 2, (yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node)->setValueType(BOOL);
    }
#line 2373 "parser.cpp"
    break;

  case 70:
#line 404 "parser.y"
                                             {
        (yyval.node) = new Node("", "Exp", 4, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node)->setValueType((yyvsp[-3].node)->getValueType());
    }
#line 2382 "parser.cpp"
    break;

  case 71:
#line 408 "parser.y"
                                        {
        (yyval.node) = new Node("", "Exp", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node)->setValueType((yyvsp[-2].node)->getValueType());
    }
#line 2391 "parser.cpp"
    break;

  case 72:
#line 413 "parser.y"
                                                {
        (yyval.node) = new Node("", "Exp", 4, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node)->setValueType((yyvsp[-3].node)->getValueType() - ARRAY);
    }
#line 2400 "parser.cpp"
    break;

  case 73:
#line 417 "parser.y"
                                            {
        (yyval.node) = new Node("", "Exp", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
        (yyval.node)->setValueType((yyvsp[-2].node)->getValueType() + ARRAY);
    }
#line 2409 "parser.cpp"
    break;

  case 74:
#line 421 "parser.y"
                 {
        (yyval.node) = new Node("", "Exp", 1, (yyvsp[0].node));
        (yyval.node)->setValueType((yyvsp[0].node)->getValueType());
    }
#line 2418 "parser.cpp"
    break;

  case 75:
#line 425 "parser.y"
              {
        (yyval.node) = new Node("", "Exp", 1, (yyvsp[0].node));
        (yyval.node)->setValueType(TYPE_INT);
    }
#line 2427 "parser.cpp"
    break;

  case 76:
#line 429 "parser.y"
                {
        (yyval.node) = new Node("", "Exp", 1, (yyvsp[0].node));
        (yyval.node)->setValueType(TYPE_FLOAT);
    }
#line 2436 "parser.cpp"
    break;

  case 77:
#line 433 "parser.y"
                 {
        (yyval.node) = new Node("", "Exp", 1, (yyvsp[0].node));
        (yyval.node)->setValueType(TYPE_STRING);
    }
#line 2445 "parser.cpp"
    break;

  case 78:
#line 438 "parser.y"
               {
        (yyval.node) = new Node("", "Exp", 1, (yyvsp[0].node));
        (yyval.node)->setValueType(TYPE_CHAR);
    }
#line 2454 "parser.cpp"
    break;

  case 79:
#line 442 "parser.y"
                                     {
        if(mistakeRecord[(yylsp[-1]).first_line-1] == 0){
            mistakeRecord[(yylsp[-1]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[-1]).first_line);
        }
    }
#line 2466 "parser.cpp"
    break;

  case 80:
#line 449 "parser.y"
                                       {
        if(mistakeRecord[(yylsp[-1]).first_line-1] == 0){
            mistakeRecord[(yylsp[-1]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[-1]).first_line);
        }
    }
#line 2478 "parser.cpp"
    break;

  case 81:
#line 456 "parser.y"
                                      {
        if(mistakeRecord[(yylsp[-1]).first_line-1] == 0){
            mistakeRecord[(yylsp[-1]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[-1]).first_line);
        }
    }
#line 2490 "parser.cpp"
    break;

  case 82:
#line 463 "parser.y"
                                        {
        if(mistakeRecord[(yylsp[-1]).first_line-1] == 0){
            mistakeRecord[(yylsp[-1]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[-1]).first_line);
        }
    }
#line 2502 "parser.cpp"
    break;

  case 83:
#line 470 "parser.y"
                                                    {
        if(mistakeRecord[(yylsp[-1]).first_line-1] == 0){
            mistakeRecord[(yylsp[-1]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[-1]).first_line);
        }
    }
#line 2514 "parser.cpp"
    break;

  case 84:
#line 477 "parser.y"
                                                 {
        if(mistakeRecord[(yylsp[-1]).first_line-1] == 0){
            mistakeRecord[(yylsp[-1]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[-1]).first_line);
        }
    }
#line 2526 "parser.cpp"
    break;

  case 85:
#line 484 "parser.y"
                                     {
        if(mistakeRecord[(yylsp[-1]).first_line-1] == 0){
            mistakeRecord[(yylsp[-1]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[-1]).first_line);
        }
    }
#line 2538 "parser.cpp"
    break;

  case 86:
#line 491 "parser.y"
                                    {
        if(mistakeRecord[(yylsp[-1]).first_line-1] == 0){
            mistakeRecord[(yylsp[-1]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[-1]).first_line);
        }
    }
#line 2550 "parser.cpp"
    break;

  case 87:
#line 498 "parser.y"
                                        {
        if(mistakeRecord[(yylsp[-1]).first_line-1] == 0){
            mistakeRecord[(yylsp[-1]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[-1]).first_line);
        }
    }
#line 2562 "parser.cpp"
    break;

  case 88:
#line 505 "parser.y"
                                {
        if(mistakeRecord[(yylsp[-1]).first_line-1] == 0){
            mistakeRecord[(yylsp[-1]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[-1]).first_line);
        }
    }
#line 2574 "parser.cpp"
    break;

  case 89:
#line 512 "parser.y"
                                 {
        if(mistakeRecord[(yylsp[-1]).first_line-1] == 0){
            mistakeRecord[(yylsp[-1]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[-1]).first_line);
        }
    }
#line 2586 "parser.cpp"
    break;

  case 90:
#line 519 "parser.y"
                                    {
        if(mistakeRecord[(yylsp[-1]).first_line-1] == 0){
            mistakeRecord[(yylsp[-1]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[-1]).first_line);
        }
    }
#line 2598 "parser.cpp"
    break;

  case 91:
#line 526 "parser.y"
                                  {
        if(mistakeRecord[(yylsp[-1]).first_line-1] == 0){
            mistakeRecord[(yylsp[-1]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[-1]).first_line);
        }
    }
#line 2610 "parser.cpp"
    break;

  case 92:
#line 533 "parser.y"
                                       {
        if(mistakeRecord[(yylsp[-1]).first_line-1] == 0){
            mistakeRecord[(yylsp[-1]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[-1]).first_line);
        }
    }
#line 2622 "parser.cpp"
    break;

  case 93:
#line 540 "parser.y"
                                      {
        if(mistakeRecord[(yylsp[-1]).first_line-1] == 0){
            mistakeRecord[(yylsp[-1]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[-1]).first_line);
        }
    }
#line 2634 "parser.cpp"
    break;

  case 94:
#line 547 "parser.y"
                                            {
        if(mistakeRecord[(yylsp[-1]).first_line-1] == 0){
            mistakeRecord[(yylsp[-1]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", (yylsp[-1]).first_line);
        }
    }
#line 2646 "parser.cpp"
    break;

  case 95:
#line 554 "parser.y"
                                          {
        if(mistakeRecord[(yylsp[-1]).first_line-1] == 0){
            mistakeRecord[(yylsp[-1]).first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: wrong expression between \"[\" and \"]\".\n", (yylsp[-1]).first_line);
        }
    }
#line 2658 "parser.cpp"
    break;

  case 96:
#line 561 "parser.y"
                                      {
        (yyval.node) = new Node("", "Exp", 5, (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 2666 "parser.cpp"
    break;

  case 97:
#line 564 "parser.y"
                    {
        (yyval.node) = new Node("", "Exp", 2, (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 2674 "parser.cpp"
    break;

  case 98:
#line 567 "parser.y"
                    {
        (yyval.node) = new Node("", "Exp", 2, (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 2682 "parser.cpp"
    break;

  case 99:
#line 573 "parser.y"
                   {
        (yyval.node) = new Node("", "Args", 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 2690 "parser.cpp"
    break;

  case 100:
#line 576 "parser.y"
          {
        (yyval.node) = new Node("", "Args", 1, (yyvsp[0].node));
    }
#line 2698 "parser.cpp"
    break;


#line 2702 "parser.cpp"

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
