/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     DT_TOK_EOF = 0,
     DT_TOK_COMMA = 258,
     DT_TOK_ELLIPSIS = 259,
     DT_TOK_ASGN = 260,
     DT_TOK_ADD_EQ = 261,
     DT_TOK_SUB_EQ = 262,
     DT_TOK_MUL_EQ = 263,
     DT_TOK_DIV_EQ = 264,
     DT_TOK_MOD_EQ = 265,
     DT_TOK_AND_EQ = 266,
     DT_TOK_XOR_EQ = 267,
     DT_TOK_OR_EQ = 268,
     DT_TOK_LSH_EQ = 269,
     DT_TOK_RSH_EQ = 270,
     DT_TOK_QUESTION = 271,
     DT_TOK_COLON = 272,
     DT_TOK_LOR = 273,
     DT_TOK_LXOR = 274,
     DT_TOK_LAND = 275,
     DT_TOK_BOR = 276,
     DT_TOK_XOR = 277,
     DT_TOK_BAND = 278,
     DT_TOK_EQU = 279,
     DT_TOK_NEQ = 280,
     DT_TOK_LT = 281,
     DT_TOK_LE = 282,
     DT_TOK_GT = 283,
     DT_TOK_GE = 284,
     DT_TOK_LSH = 285,
     DT_TOK_RSH = 286,
     DT_TOK_ADD = 287,
     DT_TOK_SUB = 288,
     DT_TOK_MUL = 289,
     DT_TOK_DIV = 290,
     DT_TOK_MOD = 291,
     DT_TOK_LNEG = 292,
     DT_TOK_BNEG = 293,
     DT_TOK_ADDADD = 294,
     DT_TOK_SUBSUB = 295,
     DT_TOK_PREINC = 296,
     DT_TOK_POSTINC = 297,
     DT_TOK_PREDEC = 298,
     DT_TOK_POSTDEC = 299,
     DT_TOK_IPOS = 300,
     DT_TOK_INEG = 301,
     DT_TOK_DEREF = 302,
     DT_TOK_ADDROF = 303,
     DT_TOK_OFFSETOF = 304,
     DT_TOK_SIZEOF = 305,
     DT_TOK_STRINGOF = 306,
     DT_TOK_XLATE = 307,
     DT_TOK_LPAR = 308,
     DT_TOK_RPAR = 309,
     DT_TOK_LBRAC = 310,
     DT_TOK_RBRAC = 311,
     DT_TOK_PTR = 312,
     DT_TOK_DOT = 313,
     DT_TOK_STRING = 314,
     DT_TOK_IDENT = 315,
     DT_TOK_PSPEC = 316,
     DT_TOK_AGG = 317,
     DT_TOK_TNAME = 318,
     DT_TOK_INT = 319,
     DT_KEY_AUTO = 320,
     DT_KEY_BREAK = 321,
     DT_KEY_CASE = 322,
     DT_KEY_CHAR = 323,
     DT_KEY_CONST = 324,
     DT_KEY_CONTINUE = 325,
     DT_KEY_COUNTER = 326,
     DT_KEY_DEFAULT = 327,
     DT_KEY_DO = 328,
     DT_KEY_DOUBLE = 329,
     DT_KEY_ELSE = 330,
     DT_KEY_ENUM = 331,
     DT_KEY_EXTERN = 332,
     DT_KEY_FLOAT = 333,
     DT_KEY_FOR = 334,
     DT_KEY_GOTO = 335,
     DT_KEY_IF = 336,
     DT_KEY_IMPORT = 337,
     DT_KEY_INLINE = 338,
     DT_KEY_INT = 339,
     DT_KEY_LONG = 340,
     DT_KEY_PROBE = 341,
     DT_KEY_PROVIDER = 342,
     DT_KEY_REGISTER = 343,
     DT_KEY_RESTRICT = 344,
     DT_KEY_RETURN = 345,
     DT_KEY_SELF = 346,
     DT_KEY_SHORT = 347,
     DT_KEY_SIGNED = 348,
     DT_KEY_STATIC = 349,
     DT_KEY_STRING = 350,
     DT_KEY_STRUCT = 351,
     DT_KEY_SWITCH = 352,
     DT_KEY_THIS = 353,
     DT_KEY_TYPEDEF = 354,
     DT_KEY_UNION = 355,
     DT_KEY_UNSIGNED = 356,
     DT_KEY_USERLAND = 357,
     DT_KEY_VOID = 358,
     DT_KEY_VOLATILE = 359,
     DT_KEY_WHILE = 360,
     DT_KEY_XLATOR = 361,
     DT_TOK_EPRED = 362,
     DT_CTX_DEXPR = 363,
     DT_CTX_DPROG = 364,
     DT_CTX_DTYPE = 365
   };
#endif
/* Tokens.  */
#define DT_TOK_EOF 0
#define DT_TOK_COMMA 258
#define DT_TOK_ELLIPSIS 259
#define DT_TOK_ASGN 260
#define DT_TOK_ADD_EQ 261
#define DT_TOK_SUB_EQ 262
#define DT_TOK_MUL_EQ 263
#define DT_TOK_DIV_EQ 264
#define DT_TOK_MOD_EQ 265
#define DT_TOK_AND_EQ 266
#define DT_TOK_XOR_EQ 267
#define DT_TOK_OR_EQ 268
#define DT_TOK_LSH_EQ 269
#define DT_TOK_RSH_EQ 270
#define DT_TOK_QUESTION 271
#define DT_TOK_COLON 272
#define DT_TOK_LOR 273
#define DT_TOK_LXOR 274
#define DT_TOK_LAND 275
#define DT_TOK_BOR 276
#define DT_TOK_XOR 277
#define DT_TOK_BAND 278
#define DT_TOK_EQU 279
#define DT_TOK_NEQ 280
#define DT_TOK_LT 281
#define DT_TOK_LE 282
#define DT_TOK_GT 283
#define DT_TOK_GE 284
#define DT_TOK_LSH 285
#define DT_TOK_RSH 286
#define DT_TOK_ADD 287
#define DT_TOK_SUB 288
#define DT_TOK_MUL 289
#define DT_TOK_DIV 290
#define DT_TOK_MOD 291
#define DT_TOK_LNEG 292
#define DT_TOK_BNEG 293
#define DT_TOK_ADDADD 294
#define DT_TOK_SUBSUB 295
#define DT_TOK_PREINC 296
#define DT_TOK_POSTINC 297
#define DT_TOK_PREDEC 298
#define DT_TOK_POSTDEC 299
#define DT_TOK_IPOS 300
#define DT_TOK_INEG 301
#define DT_TOK_DEREF 302
#define DT_TOK_ADDROF 303
#define DT_TOK_OFFSETOF 304
#define DT_TOK_SIZEOF 305
#define DT_TOK_STRINGOF 306
#define DT_TOK_XLATE 307
#define DT_TOK_LPAR 308
#define DT_TOK_RPAR 309
#define DT_TOK_LBRAC 310
#define DT_TOK_RBRAC 311
#define DT_TOK_PTR 312
#define DT_TOK_DOT 313
#define DT_TOK_STRING 314
#define DT_TOK_IDENT 315
#define DT_TOK_PSPEC 316
#define DT_TOK_AGG 317
#define DT_TOK_TNAME 318
#define DT_TOK_INT 319
#define DT_KEY_AUTO 320
#define DT_KEY_BREAK 321
#define DT_KEY_CASE 322
#define DT_KEY_CHAR 323
#define DT_KEY_CONST 324
#define DT_KEY_CONTINUE 325
#define DT_KEY_COUNTER 326
#define DT_KEY_DEFAULT 327
#define DT_KEY_DO 328
#define DT_KEY_DOUBLE 329
#define DT_KEY_ELSE 330
#define DT_KEY_ENUM 331
#define DT_KEY_EXTERN 332
#define DT_KEY_FLOAT 333
#define DT_KEY_FOR 334
#define DT_KEY_GOTO 335
#define DT_KEY_IF 336
#define DT_KEY_IMPORT 337
#define DT_KEY_INLINE 338
#define DT_KEY_INT 339
#define DT_KEY_LONG 340
#define DT_KEY_PROBE 341
#define DT_KEY_PROVIDER 342
#define DT_KEY_REGISTER 343
#define DT_KEY_RESTRICT 344
#define DT_KEY_RETURN 345
#define DT_KEY_SELF 346
#define DT_KEY_SHORT 347
#define DT_KEY_SIGNED 348
#define DT_KEY_STATIC 349
#define DT_KEY_STRING 350
#define DT_KEY_STRUCT 351
#define DT_KEY_SWITCH 352
#define DT_KEY_THIS 353
#define DT_KEY_TYPEDEF 354
#define DT_KEY_UNION 355
#define DT_KEY_UNSIGNED 356
#define DT_KEY_USERLAND 357
#define DT_KEY_VOID 358
#define DT_KEY_VOLATILE 359
#define DT_KEY_WHILE 360
#define DT_KEY_XLATOR 361
#define DT_TOK_EPRED 362
#define DT_CTX_DEXPR 363
#define DT_CTX_DPROG 364
#define DT_CTX_DTYPE 365




/* Copy the first part of user declarations.  */
#line 1 "../../lib/libdtrace/common/dt_grammar.y"

/*
 * CDDL HEADER START
 *
 * The contents of this file are subject to the terms of the
 * Common Development and Distribution License, Version 1.0 only
 * (the "License").  You may not use this file except in compliance
 * with the License.
 *
 * You can obtain a copy of the license at usr/src/OPENSOLARIS.LICENSE
 * or http://www.opensolaris.org/os/licensing.
 * See the License for the specific language governing permissions
 * and limitations under the License.
 *
 * When distributing Covered Code, include this CDDL HEADER in each
 * file and include the License file at usr/src/OPENSOLARIS.LICENSE.
 * If applicable, add the following below this CDDL HEADER, with the
 * fields enclosed by brackets "[]" replaced with your own identifying
 * information: Portions Copyright [yyyy] [name of copyright owner]
 *
 * CDDL HEADER END
 *
 * Copyright 2006 Sun Microsystems, Inc.  All rights reserved.
 * Use is subject to license terms.
 */

/*
 * Copyright (c) 2014, 2016 by Delphix. All rights reserved.
 * Copyright (c) 2013, Joyent, Inc. All rights reserved.
 */

#include <dt_impl.h>
#include <string.h>

#define	OP1(op, c)	dt_node_op1(op, c)
#define	OP2(op, l, r)	dt_node_op2(op, l, r)
#define	OP3(x, y, z)	dt_node_op3(x, y, z)
#define	LINK(l, r)	dt_node_link(l, r)
#define	DUP(s)		strdup(s)

int yylex(void);



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 45 "../../lib/libdtrace/common/dt_grammar.y"
{
	dt_node_t *l_node;
	dt_decl_t *l_decl;
	char *l_str;
	uintmax_t l_int;
	int l_tok;
}
/* Line 193 of yacc.c.  */
#line 370 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 383 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  100
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   971

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  114
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  84
/* YYNRULES -- Number of rules.  */
#define YYNRULES  258
/* YYNRULES -- Number of states.  */
#define YYNSTATES  391

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   365

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   111,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   112,     2,   113,     2,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    12,    14,    17,    19,    22,
      24,    27,    29,    32,    34,    36,    38,    40,    42,    43,
      51,    62,    72,    74,    77,    82,    89,    95,    97,   100,
     107,   112,   114,   119,   124,   132,   134,   136,   140,   142,
     144,   145,   148,   150,   153,   155,   159,   161,   164,   170,
     178,   180,   184,   186,   188,   190,   192,   194,   196,   200,
     202,   207,   211,   216,   220,   224,   228,   232,   236,   240,
     243,   246,   253,   260,   267,   275,   277,   280,   283,   286,
     289,   294,   297,   299,   301,   303,   305,   307,   309,   311,
     316,   318,   322,   326,   330,   332,   336,   340,   342,   346,
     350,   352,   356,   360,   364,   368,   370,   374,   378,   380,
     384,   386,   390,   392,   396,   398,   402,   404,   408,   410,
     414,   416,   418,   424,   426,   430,   432,   434,   436,   438,
     440,   442,   444,   446,   448,   450,   452,   454,   458,   461,
     465,   467,   470,   472,   475,   477,   480,   482,   485,   487,
     490,   492,   495,   497,   499,   501,   503,   505,   507,   509,
     511,   513,   515,   517,   519,   521,   523,   525,   527,   529,
     531,   533,   535,   537,   539,   541,   543,   545,   549,   552,
     555,   558,   562,   566,   568,   570,   572,   575,   577,   581,
     583,   587,   590,   592,   595,   597,   600,   602,   606,   608,
     611,   615,   619,   622,   625,   628,   632,   636,   638,   642,
     644,   648,   650,   653,   655,   659,   662,   665,   667,   669,
     672,   675,   679,   681,   684,   686,   688,   692,   694,   698,
     700,   703,   706,   708,   711,   713,   715,   718,   722,   725,
     727,   730,   732,   733,   738,   739,   741,   743,   744,   749,
     750,   752,   754,   756,   758,   760,   762,   764,   766
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     115,     0,    -1,   116,     0,    -1,   117,     0,    -1,   118,
       0,    -1,   108,    -1,   108,   158,    -1,   109,    -1,   109,
     119,    -1,   110,    -1,   110,   188,    -1,   120,    -1,   119,
     120,    -1,   121,    -1,   123,    -1,   126,    -1,   129,    -1,
     159,    -1,    -1,    83,   160,   180,   122,     5,   156,   111,
      -1,   106,   188,    26,   188,    60,    28,   112,   124,   113,
     111,    -1,   106,   188,    26,   188,    60,    28,   112,   113,
     111,    -1,   125,    -1,   124,   125,    -1,    60,     5,   156,
     111,    -1,    87,    60,   112,   127,   113,   111,    -1,    87,
      60,   112,   113,   111,    -1,   128,    -1,   127,   128,    -1,
      86,    60,   194,    17,   194,   111,    -1,    86,    60,   194,
     111,    -1,   130,    -1,   130,   112,   134,   113,    -1,   130,
      35,   158,   107,    -1,   130,    35,   158,   107,   112,   134,
     113,    -1,   131,    -1,   132,    -1,   131,     3,   132,    -1,
      61,    -1,    64,    -1,    -1,   133,   136,    -1,   133,    -1,
     133,   158,    -1,   136,    -1,   112,   134,   113,    -1,   111,
      -1,   158,   111,    -1,    81,    53,   158,    54,   135,    -1,
      81,    53,   158,    54,   135,    75,   135,    -1,   156,    -1,
     137,     3,   156,    -1,    60,    -1,    62,    -1,    64,    -1,
      59,    -1,    91,    -1,    98,    -1,    53,   158,    54,    -1,
     138,    -1,   139,    55,   137,    56,    -1,   139,    53,    54,
      -1,   139,    53,   137,    54,    -1,   139,    58,    60,    -1,
     139,    58,    63,    -1,   139,    58,   197,    -1,   139,    57,
      60,    -1,   139,    57,    63,    -1,   139,    57,   197,    -1,
     139,    39,    -1,   139,    40,    -1,    49,    53,   188,     3,
      60,    54,    -1,    49,    53,   188,     3,    63,    54,    -1,
      49,    53,   188,     3,   197,    54,    -1,    52,    26,   188,
      28,    53,   158,    54,    -1,   139,    -1,    39,   140,    -1,
      40,   140,    -1,   141,   142,    -1,    50,   140,    -1,    50,
      53,   188,    54,    -1,    51,   140,    -1,    23,    -1,    34,
      -1,    32,    -1,    33,    -1,    38,    -1,    37,    -1,   140,
      -1,    53,   188,    54,   142,    -1,   142,    -1,   143,    34,
     142,    -1,   143,    35,   142,    -1,   143,    36,   142,    -1,
     143,    -1,   144,    32,   143,    -1,   144,    33,   143,    -1,
     144,    -1,   145,    30,   144,    -1,   145,    31,   144,    -1,
     145,    -1,   146,    26,   145,    -1,   146,    28,   145,    -1,
     146,    27,   145,    -1,   146,    29,   145,    -1,   146,    -1,
     147,    24,   146,    -1,   147,    25,   146,    -1,   147,    -1,
     148,    23,   147,    -1,   148,    -1,   149,    22,   148,    -1,
     149,    -1,   150,    21,   149,    -1,   150,    -1,   151,    20,
     150,    -1,   151,    -1,   152,    19,   151,    -1,   152,    -1,
     153,    18,   152,    -1,   155,    -1,   153,    -1,   153,    16,
     158,    17,   155,    -1,   155,    -1,   140,   157,   156,    -1,
       5,    -1,     8,    -1,     9,    -1,    10,    -1,     6,    -1,
       7,    -1,    14,    -1,    15,    -1,    11,    -1,    12,    -1,
      13,    -1,   156,    -1,   158,     3,   156,    -1,   160,   111,
      -1,   160,   170,   111,    -1,   163,    -1,   163,   160,    -1,
     164,    -1,   164,   160,    -1,   165,    -1,   165,   160,    -1,
     162,    -1,   162,   160,    -1,   164,    -1,   164,   160,    -1,
     165,    -1,   165,   160,    -1,    65,    -1,    88,    -1,    94,
      -1,    77,    -1,    99,    -1,   162,    -1,    91,    -1,    98,
      -1,   103,    -1,    68,    -1,    92,    -1,    84,    -1,    85,
      -1,    78,    -1,    74,    -1,    93,    -1,   101,    -1,   102,
      -1,    95,    -1,    63,    -1,   166,    -1,   176,    -1,    69,
      -1,    89,    -1,   104,    -1,   167,   169,   113,    -1,   168,
      60,    -1,   168,    63,    -1,   168,   112,    -1,   168,    60,
     112,    -1,   168,    63,   112,    -1,    96,    -1,   100,    -1,
     172,    -1,   169,   172,    -1,   171,    -1,   170,     3,   171,
      -1,   180,    -1,   173,   174,   111,    -1,   166,   111,    -1,
     164,    -1,   164,   173,    -1,   165,    -1,   165,   173,    -1,
     175,    -1,   174,     3,   175,    -1,   180,    -1,    17,   154,
      -1,   180,    17,   154,    -1,   177,   178,   113,    -1,    76,
      60,    -1,    76,    63,    -1,    76,   112,    -1,    76,    60,
     112,    -1,    76,    63,   112,    -1,   179,    -1,   178,     3,
     179,    -1,    60,    -1,    60,     5,   158,    -1,   181,    -1,
     183,   181,    -1,    60,    -1,   182,   180,    54,    -1,   181,
     191,    -1,   181,   194,    -1,    53,    -1,    34,    -1,    34,
     184,    -1,    34,   183,    -1,    34,   184,   183,    -1,   165,
      -1,   184,   165,    -1,   186,    -1,     4,    -1,   186,     3,
       4,    -1,   187,    -1,   186,     3,   187,    -1,   161,    -1,
     161,   180,    -1,   161,   189,    -1,   173,    -1,   173,   189,
      -1,   183,    -1,   190,    -1,   183,   190,    -1,   182,   189,
      54,    -1,   190,   191,    -1,   191,    -1,   190,   194,    -1,
     194,    -1,    -1,    55,   192,   193,    56,    -1,    -1,   154,
      -1,   185,    -1,    -1,    53,   195,   196,    54,    -1,    -1,
     185,    -1,    86,    -1,    87,    -1,    91,    -1,    95,    -1,
      51,    -1,   102,    -1,    52,    -1,   106,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   220,   220,   221,   222,   225,   226,   229,   230,   233,
     234,   238,   239,   243,   244,   245,   246,   247,   252,   251,
     267,   271,   278,   279,   283,   289,   292,   298,   299,   303,
     306,   313,   330,   334,   338,   346,   350,   351,   357,   358,
     361,   362,   366,   367,   373,   374,   376,   377,   378,   381,
     388,   389,   395,   396,   397,   398,   399,   400,   401,   405,
     406,   410,   413,   417,   420,   423,   426,   429,   432,   435,
     438,   441,   445,   449,   453,   460,   461,   462,   463,   464,
     465,   468,   473,   474,   475,   476,   477,   478,   482,   483,
     489,   490,   493,   496,   502,   503,   506,   512,   513,   516,
     522,   523,   526,   529,   532,   538,   539,   542,   548,   549,
     555,   556,   562,   563,   569,   570,   576,   577,   583,   584,
     589,   593,   594,   599,   600,   606,   607,   608,   609,   610,
     611,   612,   613,   614,   615,   616,   619,   620,   625,   630,
     638,   639,   640,   641,   642,   643,   647,   648,   649,   650,
     651,   652,   656,   657,   658,   659,   660,   664,   665,   666,
     669,   670,   671,   672,   673,   674,   675,   676,   677,   678,
     679,   682,   683,   684,   687,   688,   689,   693,   696,   697,
     701,   702,   703,   707,   708,   712,   713,   717,   718,   724,
     731,   734,   741,   742,   743,   744,   748,   749,   753,   754,
     755,   761,   762,   763,   767,   768,   769,   773,   774,   777,
     778,   783,   784,   788,   789,   790,   791,   794,   797,   798,
     799,   800,   804,   805,   809,   810,   811,   816,   817,   823,
     826,   829,   834,   837,   843,   844,   845,   849,   850,   851,
     852,   853,   856,   856,   864,   865,   866,   869,   869,   877,
     878,   882,   883,   884,   885,   886,   887,   888,   889
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "DT_TOK_EOF", "error", "$undefined", "DT_TOK_COMMA", "DT_TOK_ELLIPSIS",
  "DT_TOK_ASGN", "DT_TOK_ADD_EQ", "DT_TOK_SUB_EQ", "DT_TOK_MUL_EQ",
  "DT_TOK_DIV_EQ", "DT_TOK_MOD_EQ", "DT_TOK_AND_EQ", "DT_TOK_XOR_EQ",
  "DT_TOK_OR_EQ", "DT_TOK_LSH_EQ", "DT_TOK_RSH_EQ", "DT_TOK_QUESTION",
  "DT_TOK_COLON", "DT_TOK_LOR", "DT_TOK_LXOR", "DT_TOK_LAND", "DT_TOK_BOR",
  "DT_TOK_XOR", "DT_TOK_BAND", "DT_TOK_EQU", "DT_TOK_NEQ", "DT_TOK_LT",
  "DT_TOK_LE", "DT_TOK_GT", "DT_TOK_GE", "DT_TOK_LSH", "DT_TOK_RSH",
  "DT_TOK_ADD", "DT_TOK_SUB", "DT_TOK_MUL", "DT_TOK_DIV", "DT_TOK_MOD",
  "DT_TOK_LNEG", "DT_TOK_BNEG", "DT_TOK_ADDADD", "DT_TOK_SUBSUB",
  "DT_TOK_PREINC", "DT_TOK_POSTINC", "DT_TOK_PREDEC", "DT_TOK_POSTDEC",
  "DT_TOK_IPOS", "DT_TOK_INEG", "DT_TOK_DEREF", "DT_TOK_ADDROF",
  "DT_TOK_OFFSETOF", "DT_TOK_SIZEOF", "DT_TOK_STRINGOF", "DT_TOK_XLATE",
  "DT_TOK_LPAR", "DT_TOK_RPAR", "DT_TOK_LBRAC", "DT_TOK_RBRAC",
  "DT_TOK_PTR", "DT_TOK_DOT", "DT_TOK_STRING", "DT_TOK_IDENT",
  "DT_TOK_PSPEC", "DT_TOK_AGG", "DT_TOK_TNAME", "DT_TOK_INT",
  "DT_KEY_AUTO", "DT_KEY_BREAK", "DT_KEY_CASE", "DT_KEY_CHAR",
  "DT_KEY_CONST", "DT_KEY_CONTINUE", "DT_KEY_COUNTER", "DT_KEY_DEFAULT",
  "DT_KEY_DO", "DT_KEY_DOUBLE", "DT_KEY_ELSE", "DT_KEY_ENUM",
  "DT_KEY_EXTERN", "DT_KEY_FLOAT", "DT_KEY_FOR", "DT_KEY_GOTO",
  "DT_KEY_IF", "DT_KEY_IMPORT", "DT_KEY_INLINE", "DT_KEY_INT",
  "DT_KEY_LONG", "DT_KEY_PROBE", "DT_KEY_PROVIDER", "DT_KEY_REGISTER",
  "DT_KEY_RESTRICT", "DT_KEY_RETURN", "DT_KEY_SELF", "DT_KEY_SHORT",
  "DT_KEY_SIGNED", "DT_KEY_STATIC", "DT_KEY_STRING", "DT_KEY_STRUCT",
  "DT_KEY_SWITCH", "DT_KEY_THIS", "DT_KEY_TYPEDEF", "DT_KEY_UNION",
  "DT_KEY_UNSIGNED", "DT_KEY_USERLAND", "DT_KEY_VOID", "DT_KEY_VOLATILE",
  "DT_KEY_WHILE", "DT_KEY_XLATOR", "DT_TOK_EPRED", "DT_CTX_DEXPR",
  "DT_CTX_DPROG", "DT_CTX_DTYPE", "';'", "'{'", "'}'", "$accept",
  "dtrace_program", "d_expression", "d_program", "d_type",
  "translation_unit", "external_declaration", "inline_definition", "@1",
  "translator_definition", "translator_member_list", "translator_member",
  "provider_definition", "provider_probe_list", "provider_probe",
  "probe_definition", "probe_specifiers", "probe_specifier_list",
  "probe_specifier", "statement_list_impl", "statement_list",
  "statement_or_block", "statement", "argument_expression_list",
  "primary_expression", "postfix_expression", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_xor_expression", "logical_or_expression", "constant_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "declaration", "declaration_specifiers",
  "parameter_declaration_specifiers", "storage_class_specifier",
  "d_storage_class_specifier", "type_specifier", "type_qualifier",
  "struct_or_union_specifier", "struct_or_union_definition",
  "struct_or_union", "struct_declaration_list", "init_declarator_list",
  "init_declarator", "struct_declaration", "specifier_qualifier_list",
  "struct_declarator_list", "struct_declarator", "enum_specifier",
  "enum_definition", "enumerator_list", "enumerator", "declarator",
  "direct_declarator", "lparen", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "type_name", "abstract_declarator", "direct_abstract_declarator",
  "array", "@2", "array_parameters", "function", "@3",
  "function_parameters", "dtrace_keyword_ident", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,    59,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   114,   115,   115,   115,   116,   116,   117,   117,   118,
     118,   119,   119,   120,   120,   120,   120,   120,   122,   121,
     123,   123,   124,   124,   125,   126,   126,   127,   127,   128,
     128,   129,   129,   129,   129,   130,   131,   131,   132,   132,
     133,   133,   134,   134,   135,   135,   136,   136,   136,   136,
     137,   137,   138,   138,   138,   138,   138,   138,   138,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   140,   140,   140,   140,   140,
     140,   140,   141,   141,   141,   141,   141,   141,   142,   142,
     143,   143,   143,   143,   144,   144,   144,   145,   145,   145,
     146,   146,   146,   146,   146,   147,   147,   147,   148,   148,
     149,   149,   150,   150,   151,   151,   152,   152,   153,   153,
     154,   155,   155,   156,   156,   157,   157,   157,   157,   157,
     157,   157,   157,   157,   157,   157,   158,   158,   159,   159,
     160,   160,   160,   160,   160,   160,   161,   161,   161,   161,
     161,   161,   162,   162,   162,   162,   162,   163,   163,   163,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     164,   164,   164,   164,   165,   165,   165,   166,   166,   166,
     167,   167,   167,   168,   168,   169,   169,   170,   170,   171,
     172,   172,   173,   173,   173,   173,   174,   174,   175,   175,
     175,   176,   176,   176,   177,   177,   177,   178,   178,   179,
     179,   180,   180,   181,   181,   181,   181,   182,   183,   183,
     183,   183,   184,   184,   185,   185,   185,   186,   186,   187,
     187,   187,   188,   188,   189,   189,   189,   190,   190,   190,
     190,   190,   192,   191,   193,   193,   193,   195,   194,   196,
     196,   197,   197,   197,   197,   197,   197,   197,   197
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     1,     1,     1,     1,     0,     7,
      10,     9,     1,     2,     4,     6,     5,     1,     2,     6,
       4,     1,     4,     4,     7,     1,     1,     3,     1,     1,
       0,     2,     1,     2,     1,     3,     1,     2,     5,     7,
       1,     3,     1,     1,     1,     1,     1,     1,     3,     1,
       4,     3,     4,     3,     3,     3,     3,     3,     3,     2,
       2,     6,     6,     6,     7,     1,     2,     2,     2,     2,
       4,     2,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     1,     5,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     2,     3,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     2,     2,
       2,     3,     3,     1,     1,     1,     2,     1,     3,     1,
       3,     2,     1,     2,     1,     2,     1,     3,     1,     2,
       3,     3,     2,     2,     2,     3,     3,     1,     3,     1,
       3,     1,     2,     1,     3,     2,     2,     1,     1,     2,
       2,     3,     1,     2,     1,     1,     3,     1,     3,     1,
       2,     2,     1,     2,     1,     1,     2,     3,     2,     1,
       2,     1,     0,     4,     0,     1,     1,     0,     4,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     5,     7,     9,     0,     0,     0,     0,    82,    84,
      85,    83,    87,    86,     0,     0,     0,     0,     0,     0,
       0,    55,    52,    53,    54,    56,    57,    59,    75,    88,
       0,    90,    94,    97,   100,   105,   108,   110,   112,   114,
     116,   118,   121,   123,   136,     6,    38,   171,    39,   152,
     161,   174,   166,     0,   155,   165,     0,   163,   164,     0,
     153,   175,   158,   162,   167,   154,   170,   183,   159,   156,
     184,   168,   169,   160,   176,     0,     8,    11,    13,    14,
      15,    16,    31,    35,    36,    17,     0,   157,   140,   142,
     144,   172,     0,     0,   173,     0,   192,   194,   232,    10,
       1,     2,     3,     4,     0,    76,    77,     0,     0,    79,
      81,     0,     0,     0,    69,    70,     0,     0,     0,     0,
     125,   129,   130,   126,   127,   128,   133,   134,   135,   131,
     132,     0,    88,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   202,   203,   204,     0,     0,
       0,    12,     0,    40,     0,   218,   217,   213,   138,     0,
     187,   189,   211,     0,     0,   141,   143,   145,   172,     0,
     185,     0,   178,   179,   180,   209,     0,   207,   193,   195,
     247,   242,     0,   234,   233,   235,   239,   241,     0,     0,
       0,    58,     0,    61,     0,    50,     0,   255,   257,    66,
      67,   251,   252,   253,   254,   256,   258,    68,    63,    64,
      65,   124,    91,    92,    93,    95,    96,    98,    99,   101,
     103,   102,   104,   106,   107,   109,   111,   113,   115,   117,
       0,   119,   137,   205,   206,    18,     0,     0,     0,    42,
       0,    37,   222,   220,   219,     0,   139,   247,   215,   216,
       0,   212,   191,   177,   186,     0,     0,   196,   198,   181,
     182,     0,     0,   201,   249,   244,     0,   236,   238,   240,
       0,    80,     0,    89,     0,    62,    60,     0,     0,     0,
       0,     0,    27,     0,    33,     0,    46,    41,    43,    32,
     223,   221,   188,   214,   199,   120,     0,   190,     0,   210,
     208,   225,   229,   146,   148,   150,   250,   224,   227,     0,
     245,   246,     0,   237,     0,     0,     0,     0,    51,   122,
       0,     0,    26,     0,    28,     0,    40,     0,    47,   197,
     200,   230,     0,   234,   231,   147,   149,   151,     0,   248,
     243,    71,    72,    73,     0,     0,     0,    25,     0,     0,
       0,   226,   228,    74,    19,     0,    30,     0,    34,     0,
       0,     0,     0,     0,    22,    40,    48,    44,     0,    29,
       0,    21,     0,    23,     0,     0,     0,    20,    45,    49,
      24
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,     7,    76,    77,    78,   288,    79,
     373,   374,    80,   291,   292,    81,    82,    83,    84,   249,
     250,   376,   377,   204,    27,    28,   132,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
     304,    43,    44,   131,   112,    85,    86,   312,    87,    88,
      96,    97,    91,    92,    93,   179,   169,   170,   180,    98,
     266,   267,    94,    95,   186,   187,   171,   172,   173,   174,
     254,   316,   317,   318,    99,   276,   195,   196,   275,   322,
     197,   274,   319,   217
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -279
static const yytype_int16 yypact[] =
{
      78,   646,   772,   856,    59,    65,    87,    99,  -279,  -279,
    -279,  -279,  -279,  -279,   689,   689,    84,   722,   689,   128,
     539,  -279,  -279,  -279,  -279,  -279,  -279,  -279,   229,   956,
     646,  -279,   157,    43,   113,   121,   171,   134,   138,   148,
     182,   188,   165,  -279,  -279,   207,  -279,  -279,  -279,  -279,
    -279,  -279,  -279,    -7,  -279,  -279,   814,  -279,  -279,   183,
    -279,  -279,  -279,  -279,  -279,  -279,  -279,  -279,  -279,  -279,
    -279,  -279,  -279,  -279,  -279,   856,   772,  -279,  -279,  -279,
    -279,  -279,    -4,   222,  -279,  -279,    14,  -279,   814,   814,
     814,  -279,   856,    10,  -279,   184,   856,   856,    30,  -279,
    -279,  -279,  -279,  -279,   646,  -279,  -279,   856,   539,  -279,
    -279,   856,    34,   193,  -279,  -279,   613,   646,   194,   260,
    -279,  -279,  -279,  -279,  -279,  -279,  -279,  -279,  -279,  -279,
    -279,   646,  -279,  -279,   646,   646,   646,   646,   646,   646,
     646,   646,   646,   646,   646,   646,   646,   646,   646,   646,
     646,   646,   646,   646,   646,   130,   150,  -279,   137,   151,
     224,  -279,   646,  -279,     5,    52,  -279,  -279,  -279,    21,
    -279,  -279,   120,   137,     2,  -279,  -279,  -279,   147,   726,
    -279,   125,   152,   153,  -279,   261,    18,  -279,  -279,  -279,
     112,  -279,    30,   146,  -279,   120,  -279,  -279,   264,   219,
     246,  -279,   646,  -279,    58,  -279,    39,  -279,  -279,  -279,
    -279,  -279,  -279,  -279,  -279,  -279,  -279,  -279,  -279,  -279,
    -279,  -279,  -279,  -279,  -279,   157,   157,    43,    43,   113,
     113,   113,   113,   121,   121,   171,   134,   138,   148,   182,
      51,   188,  -279,  -279,  -279,  -279,   -15,   856,    19,   489,
     164,  -279,  -279,  -279,    52,   137,  -279,  -279,  -279,  -279,
     234,   120,  -279,  -279,  -279,   646,    24,  -279,   273,  -279,
    -279,   646,   184,  -279,   135,   338,   237,   120,  -279,  -279,
     523,  -279,   239,  -279,   646,  -279,  -279,   646,   288,   235,
     186,    42,  -279,   238,   187,   241,  -279,  -279,    25,  -279,
    -279,  -279,  -279,  -279,  -279,  -279,   125,  -279,   646,  -279,
    -279,  -279,   129,   814,   814,   814,  -279,   298,  -279,   248,
    -279,  -279,   247,  -279,   250,   251,   252,   646,  -279,  -279,
     646,   254,  -279,   197,  -279,   281,  -279,   646,  -279,  -279,
    -279,  -279,   129,    85,  -279,  -279,  -279,  -279,   382,  -279,
    -279,  -279,  -279,  -279,    75,   199,    13,  -279,   201,   208,
      79,  -279,  -279,  -279,  -279,   254,  -279,   -17,  -279,   456,
     211,   319,   214,   -13,  -279,  -279,   253,  -279,    25,  -279,
     646,  -279,   220,  -279,   217,   456,   221,  -279,  -279,  -279,
    -279
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -279,  -279,  -279,  -279,  -279,  -279,   257,  -279,  -279,  -279,
    -279,   -39,  -279,  -279,    44,  -279,  -279,  -279,   174,  -279,
    -278,   -46,    91,   226,  -279,  -279,    -1,  -279,   -25,    68,
      93,    73,    95,   198,   196,   192,   200,   202,   195,  -279,
    -236,  -224,  -108,  -279,     0,  -279,   -54,  -279,  -225,  -279,
       4,     1,   -60,  -279,  -279,  -279,  -279,   101,   175,   -52,
    -279,    53,  -279,  -279,  -279,    86,  -148,  -163,   -91,   -86,
    -279,    82,  -279,    12,     6,   -94,  -173,  -143,  -279,  -279,
    -157,  -279,  -279,  -101
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -218
static const yytype_int16 yytable[] =
{
      29,    45,   158,    90,   194,   133,    89,   192,   205,   205,
     245,   261,   193,   105,   106,   259,   109,   110,   220,    29,
     277,   272,   154,   221,   255,   260,   113,   306,   154,   258,
     365,   162,   178,   268,   175,   176,   177,   154,   279,   320,
     181,   305,   284,   371,   188,   189,   242,   371,   165,   313,
     313,   305,   278,   155,   154,   166,   156,    90,   359,   100,
      89,   284,   167,   329,   165,   101,    46,   166,   287,    48,
     182,   289,   340,   183,   167,   137,   138,    90,   154,   253,
      89,   160,   154,   190,   305,   191,   165,   102,   201,    90,
      90,    90,    89,    89,    89,   286,   372,   384,   290,   103,
     382,   192,   192,    29,   259,   157,   193,    29,   163,   222,
     223,   224,   285,   198,   199,    29,    29,   200,   258,   178,
     279,    51,   184,   313,   366,   168,   294,   181,   289,   363,
      29,   273,   256,   369,   278,   307,   338,   107,   190,   311,
     191,    61,   265,   139,   140,   167,  -217,   141,   142,   143,
     144,    29,   240,    29,   111,   333,    74,   147,   268,   165,
     148,    29,   248,   165,   341,  -217,   252,  -217,   301,   149,
     277,   165,  -217,   257,   356,   191,   328,   283,   166,   326,
     261,   152,   190,   153,   191,   167,     1,     2,     3,   167,
     166,   134,   135,   136,   260,   145,   146,   167,    47,   190,
      49,   191,   150,    50,    51,   225,   226,   151,   370,    52,
     154,    53,    54,    55,   229,   230,   231,   232,   344,    57,
      58,   342,   355,    60,    61,   164,   343,    63,    64,    65,
      66,    67,   227,   228,    69,    70,    71,    72,    73,    74,
     233,   234,   243,   159,   185,   207,   208,   202,    29,   298,
     247,   342,   342,   293,   209,   300,   343,   210,   262,   345,
     346,   347,   244,   246,   269,   270,   271,   280,   114,   115,
      29,   309,   386,   281,   282,   315,   315,   299,   314,   314,
     211,   212,   116,    29,   117,   213,   118,   119,   303,   214,
     308,   323,   327,   330,   337,   331,   215,   332,   335,   336,
     216,   348,   349,   350,   351,   352,   353,   257,   357,   358,
     364,   207,   208,   367,    90,    90,    90,    89,    89,    89,
     218,   368,   379,   219,   380,   381,    29,   354,   385,    29,
     388,   387,   390,   161,   383,   334,    29,   360,   251,   389,
     297,   237,   311,   206,   236,   235,   211,   212,   241,   315,
     238,   213,   314,   239,   264,   214,   302,   321,   310,   339,
     362,     8,   215,     0,     0,     0,   216,     0,    29,   378,
       9,    10,    11,     0,     0,    12,    13,    14,    15,    29,
       0,     0,     0,     0,    29,   378,   361,    16,    17,    18,
      19,    20,     0,     0,     0,     0,     0,    21,    22,     0,
      23,    47,    24,    49,     0,     0,    50,    51,     0,     0,
       0,     0,    52,     0,    53,    54,    55,     0,     0,     0,
       0,     0,    57,    58,     0,     0,    60,    61,     0,    25,
      63,    64,    65,    66,    67,     0,    26,    69,    70,    71,
      72,    73,    74,     0,     0,    47,     0,    49,     0,     0,
      50,    51,     0,     0,     0,     0,    52,     0,    53,    54,
      55,     0,     0,     0,     0,     0,    57,    58,     0,     0,
      60,    61,     0,     0,    63,    64,    65,    66,    67,     8,
       0,    69,    70,    71,    72,    73,    74,     0,     9,    10,
      11,     0,     0,    12,    13,    14,    15,     0,     0,     0,
       0,     0,     0,     0,     0,    16,    17,    18,    19,    20,
       0,     0,     8,     0,     0,    21,    22,     0,    23,     0,
      24,     9,    10,    11,     0,     0,    12,    13,    14,    15,
       0,     0,     0,     0,     0,     0,     0,   295,    16,    17,
      18,    19,    20,     0,     0,     0,     0,    25,    21,    22,
       0,    23,     0,    24,    26,     0,     0,     0,     0,     0,
       0,     0,     8,     0,     0,     0,     0,   296,   375,     0,
     295,     9,    10,    11,   207,   208,    12,    13,    14,    15,
      25,     0,     0,   324,     0,     0,   325,    26,    16,    17,
      18,    19,    20,     0,     0,     0,     0,     0,    21,    22,
     296,    23,    47,    24,     0,     0,     0,    50,    51,   211,
     212,     0,     0,    52,   213,    53,     0,    55,   214,     0,
       0,     0,     0,    57,    58,   215,     0,     0,    61,   216,
      25,    63,    64,     0,    66,    67,     8,    26,     0,    70,
      71,    72,    73,    74,     0,     9,    10,    11,     0,     0,
      12,    13,    14,    15,     0,     0,     0,     0,     0,     0,
       0,     0,    16,    17,    18,    19,    20,   203,     0,     8,
       0,     0,    21,    22,     0,    23,     0,    24,     9,    10,
      11,     0,     0,    12,    13,    14,    15,     0,     0,     0,
       0,     0,     0,     0,     0,    16,    17,    18,    19,    20,
       0,     0,     0,     0,    25,    21,    22,     0,    23,     0,
      24,    26,     8,     0,     0,     0,     0,     0,     0,     0,
       0,     9,    10,    11,     0,     0,    12,    13,    14,    15,
       0,     0,     0,     0,     0,     0,     0,    25,    16,    17,
      18,    19,   104,     0,    26,     8,     0,     0,    21,    22,
       0,    23,     0,    24,     9,    10,    11,     0,     0,    12,
      13,    14,    15,     0,     0,     0,     0,     0,     0,     0,
       0,    16,    17,    18,    19,   108,     0,     0,     0,     0,
      25,    21,    22,     0,    23,     0,    24,    26,     0,    47,
       0,     0,     0,     0,    50,    51,     0,     0,     0,     0,
      52,     0,    53,     0,    55,     0,     0,     0,     0,     0,
      57,    58,     0,    25,     0,    61,     0,     0,    63,    64,
      26,    66,    67,     0,     0,     0,    70,    71,    72,    73,
      74,     0,     0,    46,     0,    47,    48,    49,     0,   263,
      50,    51,     0,     0,     0,     0,    52,     0,    53,    54,
      55,     0,     0,     0,     0,    56,    57,    58,     0,    59,
      60,    61,     0,    62,    63,    64,    65,    66,    67,     0,
      68,    69,    70,    71,    72,    73,    74,    47,    75,    49,
       0,     0,    50,    51,     0,     0,     0,     0,    52,     0,
      53,    54,    55,     0,     0,     0,     0,     0,    57,    58,
       0,     0,    60,    61,     0,    62,    63,    64,    65,    66,
      67,     0,    68,    69,    70,    71,    72,    73,    74,    47,
       0,     0,     0,     0,    50,    51,     0,     0,     0,     0,
      52,     0,    53,     0,    55,     0,     0,     0,     0,     0,
      57,    58,     0,     0,     0,    61,     0,     0,    63,    64,
       0,    66,    67,     0,     0,     0,    70,    71,    72,    73,
      74,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130
};

static const yytype_int16 yycheck[] =
{
       1,     1,    56,     2,    98,    30,     2,    98,   116,   117,
     158,   174,    98,    14,    15,   172,    17,    18,   119,    20,
     193,     3,     3,   131,     3,   173,    20,     3,     3,   172,
      17,    35,    92,   181,    88,    89,    90,     3,   195,   275,
      92,   265,     3,    60,    96,    97,   154,    60,    34,   274,
     275,   275,   195,    60,     3,    53,    63,    56,   336,     0,
      56,     3,    60,   287,    34,     0,    61,    53,    17,    64,
      60,    86,   308,    63,    60,    32,    33,    76,     3,   165,
      76,    75,     3,    53,   308,    55,    34,     0,    54,    88,
      89,    90,    88,    89,    90,    56,   113,   375,   113,     0,
     113,   192,   193,   104,   261,   112,   192,   108,   112,   134,
     135,   136,    54,   107,   108,   116,   117,   111,   261,   179,
     277,    69,   112,   348,   111,   111,   107,   179,    86,    54,
     131,   113,   111,    54,   277,   111,   111,    53,    53,     4,
      55,    89,    17,    30,    31,    60,    34,    26,    27,    28,
      29,   152,   152,   154,    26,   113,   104,    23,   306,    34,
      22,   162,   162,    34,   312,    53,   165,    55,   254,    21,
     343,    34,    60,    53,   331,    55,   284,   202,    53,   280,
     343,    16,    53,    18,    55,    60,   108,   109,   110,    60,
      53,    34,    35,    36,   342,    24,    25,    60,    63,    53,
      65,    55,    20,    68,    69,   137,   138,    19,   365,    74,
       3,    76,    77,    78,   141,   142,   143,   144,   312,    84,
      85,   312,   330,    88,    89,     3,   312,    92,    93,    94,
      95,    96,   139,   140,    99,   100,   101,   102,   103,   104,
     145,   146,   112,    60,    60,    51,    52,    54,   249,   249,
      26,   342,   343,   247,    60,   254,   342,    63,   111,   313,
     314,   315,   112,   112,   112,   112,     5,     3,    39,    40,
     271,   271,   380,    54,    28,   274,   275,   113,   274,   275,
      86,    87,    53,   284,    55,    91,    57,    58,    54,    95,
      17,    54,    53,     5,    53,    60,   102,   111,    60,   112,
     106,     3,    54,    56,    54,    54,    54,    53,   111,    28,
     111,    51,    52,   112,   313,   314,   315,   313,   314,   315,
      60,   113,   111,    63,     5,   111,   327,   327,    75,   330,
     113,   111,   111,    76,   373,   291,   337,   337,   164,   385,
     249,   149,     4,   117,   148,   147,    86,    87,   153,   348,
     150,    91,   348,   151,   179,    95,   255,   275,   272,   306,
     348,    23,   102,    -1,    -1,    -1,   106,    -1,   369,   369,
      32,    33,    34,    -1,    -1,    37,    38,    39,    40,   380,
      -1,    -1,    -1,    -1,   385,   385,     4,    49,    50,    51,
      52,    53,    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,
      62,    63,    64,    65,    -1,    -1,    68,    69,    -1,    -1,
      -1,    -1,    74,    -1,    76,    77,    78,    -1,    -1,    -1,
      -1,    -1,    84,    85,    -1,    -1,    88,    89,    -1,    91,
      92,    93,    94,    95,    96,    -1,    98,    99,   100,   101,
     102,   103,   104,    -1,    -1,    63,    -1,    65,    -1,    -1,
      68,    69,    -1,    -1,    -1,    -1,    74,    -1,    76,    77,
      78,    -1,    -1,    -1,    -1,    -1,    84,    85,    -1,    -1,
      88,    89,    -1,    -1,    92,    93,    94,    95,    96,    23,
      -1,    99,   100,   101,   102,   103,   104,    -1,    32,    33,
      34,    -1,    -1,    37,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,    53,
      -1,    -1,    23,    -1,    -1,    59,    60,    -1,    62,    -1,
      64,    32,    33,    34,    -1,    -1,    37,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    49,    50,
      51,    52,    53,    -1,    -1,    -1,    -1,    91,    59,    60,
      -1,    62,    -1,    64,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    -1,   111,   112,    -1,
      81,    32,    33,    34,    51,    52,    37,    38,    39,    40,
      91,    -1,    -1,    60,    -1,    -1,    63,    98,    49,    50,
      51,    52,    53,    -1,    -1,    -1,    -1,    -1,    59,    60,
     111,    62,    63,    64,    -1,    -1,    -1,    68,    69,    86,
      87,    -1,    -1,    74,    91,    76,    -1,    78,    95,    -1,
      -1,    -1,    -1,    84,    85,   102,    -1,    -1,    89,   106,
      91,    92,    93,    -1,    95,    96,    23,    98,    -1,   100,
     101,   102,   103,   104,    -1,    32,    33,    34,    -1,    -1,
      37,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    50,    51,    52,    53,    54,    -1,    23,
      -1,    -1,    59,    60,    -1,    62,    -1,    64,    32,    33,
      34,    -1,    -1,    37,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,    53,
      -1,    -1,    -1,    -1,    91,    59,    60,    -1,    62,    -1,
      64,    98,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    -1,    -1,    37,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    49,    50,
      51,    52,    53,    -1,    98,    23,    -1,    -1,    59,    60,
      -1,    62,    -1,    64,    32,    33,    34,    -1,    -1,    37,
      38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,
      91,    59,    60,    -1,    62,    -1,    64,    98,    -1,    63,
      -1,    -1,    -1,    -1,    68,    69,    -1,    -1,    -1,    -1,
      74,    -1,    76,    -1,    78,    -1,    -1,    -1,    -1,    -1,
      84,    85,    -1,    91,    -1,    89,    -1,    -1,    92,    93,
      98,    95,    96,    -1,    -1,    -1,   100,   101,   102,   103,
     104,    -1,    -1,    61,    -1,    63,    64,    65,    -1,   113,
      68,    69,    -1,    -1,    -1,    -1,    74,    -1,    76,    77,
      78,    -1,    -1,    -1,    -1,    83,    84,    85,    -1,    87,
      88,    89,    -1,    91,    92,    93,    94,    95,    96,    -1,
      98,    99,   100,   101,   102,   103,   104,    63,   106,    65,
      -1,    -1,    68,    69,    -1,    -1,    -1,    -1,    74,    -1,
      76,    77,    78,    -1,    -1,    -1,    -1,    -1,    84,    85,
      -1,    -1,    88,    89,    -1,    91,    92,    93,    94,    95,
      96,    -1,    98,    99,   100,   101,   102,   103,   104,    63,
      -1,    -1,    -1,    -1,    68,    69,    -1,    -1,    -1,    -1,
      74,    -1,    76,    -1,    78,    -1,    -1,    -1,    -1,    -1,
      84,    85,    -1,    -1,    -1,    89,    -1,    -1,    92,    93,
      -1,    95,    96,    -1,    -1,    -1,   100,   101,   102,   103,
     104,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   108,   109,   110,   115,   116,   117,   118,    23,    32,
      33,    34,    37,    38,    39,    40,    49,    50,    51,    52,
      53,    59,    60,    62,    64,    91,    98,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   155,   156,   158,    61,    63,    64,    65,
      68,    69,    74,    76,    77,    78,    83,    84,    85,    87,
      88,    89,    91,    92,    93,    94,    95,    96,    98,    99,
     100,   101,   102,   103,   104,   106,   119,   120,   121,   123,
     126,   129,   130,   131,   132,   159,   160,   162,   163,   164,
     165,   166,   167,   168,   176,   177,   164,   165,   173,   188,
       0,     0,     0,     0,    53,   140,   140,    53,    53,   140,
     140,    26,   158,   188,    39,    40,    53,    55,    57,    58,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,   157,   140,   142,    34,    35,    36,    32,    33,    30,
      31,    26,    27,    28,    29,    24,    25,    23,    22,    21,
      20,    19,    16,    18,     3,    60,    63,   112,   160,    60,
     188,   120,    35,   112,     3,    34,    53,    60,   111,   170,
     171,   180,   181,   182,   183,   160,   160,   160,   166,   169,
     172,   173,    60,    63,   112,    60,   178,   179,   173,   173,
      53,    55,   182,   183,   189,   190,   191,   194,   188,   188,
     188,    54,    54,    54,   137,   156,   137,    51,    52,    60,
      63,    86,    87,    91,    95,   102,   106,   197,    60,    63,
     197,   156,   142,   142,   142,   143,   143,   144,   144,   145,
     145,   145,   145,   146,   146,   147,   148,   149,   150,   151,
     158,   152,   156,   112,   112,   180,   112,    26,   158,   133,
     134,   132,   165,   183,   184,     3,   111,    53,   191,   194,
     180,   181,   111,   113,   172,    17,   174,   175,   180,   112,
     112,     5,     3,   113,   195,   192,   189,   190,   191,   194,
       3,    54,    28,   142,     3,    54,    56,    17,   122,    86,
     113,   127,   128,   188,   107,    81,   111,   136,   158,   113,
     165,   183,   171,    54,   154,   155,     3,   111,    17,   158,
     179,     4,   161,   162,   164,   165,   185,   186,   187,   196,
     154,   185,   193,    54,    60,    63,   197,    53,   156,   155,
       5,    60,   111,   113,   128,    60,   112,    53,   111,   175,
     154,   180,   182,   183,   189,   160,   160,   160,     3,    54,
      56,    54,    54,    54,   158,   156,   194,   111,    28,   134,
     158,     4,   187,    54,   111,    17,   111,   112,   113,    54,
     194,    60,   113,   124,   125,   112,   135,   136,   158,   111,
       5,   111,   113,   125,   134,    75,   156,   111,   113,   135,
     111
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

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
#line 220 "../../lib/libdtrace/common/dt_grammar.y"
    { return (dt_node_root((yyvsp[(1) - (2)].l_node))); ;}
    break;

  case 3:
#line 221 "../../lib/libdtrace/common/dt_grammar.y"
    { return (dt_node_root((yyvsp[(1) - (2)].l_node))); ;}
    break;

  case 4:
#line 222 "../../lib/libdtrace/common/dt_grammar.y"
    { return (dt_node_root((yyvsp[(1) - (2)].l_node))); ;}
    break;

  case 5:
#line 225 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_node) = NULL; ;}
    break;

  case 6:
#line 226 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_node) = (yyvsp[(2) - (2)].l_node); ;}
    break;

  case 7:
#line 229 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_node) = dt_node_program(NULL); ;}
    break;

  case 8:
#line 230 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_node) = dt_node_program((yyvsp[(2) - (2)].l_node)); ;}
    break;

  case 9:
#line 233 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_node) = NULL; ;}
    break;

  case 10:
#line 234 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_node) = (dt_node_t *)(yyvsp[(2) - (2)].l_decl); ;}
    break;

  case 12:
#line 239 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_node) = LINK((yyvsp[(1) - (2)].l_node), (yyvsp[(2) - (2)].l_node)); ;}
    break;

  case 18:
#line 252 "../../lib/libdtrace/common/dt_grammar.y"
    { dt_scope_push(NULL, CTF_ERR); ;}
    break;

  case 19:
#line 253 "../../lib/libdtrace/common/dt_grammar.y"
    {
			/*
			 * We push a new declaration scope before shifting the
			 * assignment_expression in order to preserve ds_class
			 * and ds_ident for use in dt_node_inline().  Once the
			 * entire inline_definition rule is matched, pop the
			 * scope and construct the inline using the saved decl.
			 */
			dt_scope_pop();
			(yyval.l_node) = dt_node_inline((yyvsp[(6) - (7)].l_node));
		;}
    break;

  case 20:
#line 268 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = dt_node_xlator((yyvsp[(2) - (10)].l_decl), (yyvsp[(4) - (10)].l_decl), (yyvsp[(5) - (10)].l_str), (yyvsp[(8) - (10)].l_node));
		;}
    break;

  case 21:
#line 272 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = dt_node_xlator((yyvsp[(2) - (9)].l_decl), (yyvsp[(4) - (9)].l_decl), (yyvsp[(5) - (9)].l_str), NULL);
		;}
    break;

  case 23:
#line 279 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_node) = LINK((yyvsp[(1) - (2)].l_node),(yyvsp[(2) - (2)].l_node)); ;}
    break;

  case 24:
#line 283 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = dt_node_member(NULL, (yyvsp[(1) - (4)].l_str), (yyvsp[(3) - (4)].l_node));
		;}
    break;

  case 25:
#line 289 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = dt_node_provider((yyvsp[(2) - (6)].l_str), (yyvsp[(4) - (6)].l_node));
		;}
    break;

  case 26:
#line 292 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = dt_node_provider((yyvsp[(2) - (5)].l_str), NULL);
		;}
    break;

  case 28:
#line 299 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_node) = LINK((yyvsp[(1) - (2)].l_node), (yyvsp[(2) - (2)].l_node)); ;}
    break;

  case 29:
#line 303 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = dt_node_probe((yyvsp[(2) - (6)].l_str), 2, (yyvsp[(3) - (6)].l_node), (yyvsp[(5) - (6)].l_node));
		;}
    break;

  case 30:
#line 306 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = dt_node_probe((yyvsp[(2) - (4)].l_str), 1, (yyvsp[(3) - (4)].l_node), NULL);
		;}
    break;

  case 31:
#line 313 "../../lib/libdtrace/common/dt_grammar.y"
    {
			/*
			 * If the input stream is a file, do not permit a probe
			 * specification without / <pred> / or { <act> } after
			 * it.  This can only occur if the next token is EOF or
			 * an ambiguous predicate was slurped up as a comment.
			 * We cannot perform this check if input() is a string
			 * because dtrace(1M) [-fmnP] also use the compiler and
			 * things like dtrace -n BEGIN have to be accepted.
			 */
			if (yypcb->pcb_fileptr != NULL) {
				dnerror((yyvsp[(1) - (1)].l_node), D_SYNTAX, "expected predicate and/"
				    "or actions following probe description\n");
			}
			(yyval.l_node) = dt_node_clause((yyvsp[(1) - (1)].l_node), NULL, NULL);
			yybegin(YYS_CLAUSE);
		;}
    break;

  case 32:
#line 330 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = dt_node_clause((yyvsp[(1) - (4)].l_node), NULL, (yyvsp[(3) - (4)].l_node));
			yybegin(YYS_CLAUSE);
		;}
    break;

  case 33:
#line 334 "../../lib/libdtrace/common/dt_grammar.y"
    {
			dnerror((yyvsp[(3) - (4)].l_node), D_SYNTAX, "expected actions { } following "
			    "probe description and predicate\n");
		;}
    break;

  case 34:
#line 339 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = dt_node_clause((yyvsp[(1) - (7)].l_node), (yyvsp[(3) - (7)].l_node), (yyvsp[(6) - (7)].l_node));
			yybegin(YYS_CLAUSE);
		;}
    break;

  case 35:
#line 346 "../../lib/libdtrace/common/dt_grammar.y"
    { yybegin(YYS_EXPR); (yyval.l_node) = (yyvsp[(1) - (1)].l_node); ;}
    break;

  case 37:
#line 351 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = LINK((yyvsp[(1) - (3)].l_node), (yyvsp[(3) - (3)].l_node));
		;}
    break;

  case 38:
#line 357 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_node) = dt_node_pdesc_by_name((yyvsp[(1) - (1)].l_str)); ;}
    break;

  case 39:
#line 358 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_node) = dt_node_pdesc_by_id((yyvsp[(1) - (1)].l_int)); ;}
    break;

  case 40:
#line 361 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_node) = NULL; ;}
    break;

  case 41:
#line 362 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_node) = LINK((yyvsp[(1) - (2)].l_node), (yyvsp[(2) - (2)].l_node)); ;}
    break;

  case 42:
#line 366 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_node) = (yyvsp[(1) - (1)].l_node); ;}
    break;

  case 43:
#line 367 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = LINK((yyvsp[(1) - (2)].l_node), dt_node_statement((yyvsp[(2) - (2)].l_node)));
		;}
    break;

  case 45:
#line 374 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_node) = (yyvsp[(2) - (3)].l_node); ;}
    break;

  case 46:
#line 376 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_node) = NULL; ;}
    break;

  case 47:
#line 377 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_node) = dt_node_statement((yyvsp[(1) - (2)].l_node)); ;}
    break;

  case 48:
#line 378 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = dt_node_if((yyvsp[(3) - (5)].l_node), (yyvsp[(5) - (5)].l_node), NULL);
		;}
    break;

  case 49:
#line 382 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = dt_node_if((yyvsp[(3) - (7)].l_node), (yyvsp[(5) - (7)].l_node), (yyvsp[(7) - (7)].l_node));
		;}
    break;

  case 51:
#line 389 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = LINK((yyvsp[(1) - (3)].l_node), (yyvsp[(3) - (3)].l_node));
		;}
    break;

  case 52:
#line 395 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_node) = dt_node_ident((yyvsp[(1) - (1)].l_str)); ;}
    break;

  case 53:
#line 396 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_node) = dt_node_ident((yyvsp[(1) - (1)].l_str)); ;}
    break;

  case 54:
#line 397 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_node) = dt_node_int((yyvsp[(1) - (1)].l_int)); ;}
    break;

  case 55:
#line 398 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_node) = dt_node_string((yyvsp[(1) - (1)].l_str)); ;}
    break;

  case 56:
#line 399 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_node) = dt_node_ident(DUP("self")); ;}
    break;

  case 57:
#line 400 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_node) = dt_node_ident(DUP("this")); ;}
    break;

  case 58:
#line 401 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_node) = (yyvsp[(2) - (3)].l_node); ;}
    break;

  case 60:
#line 407 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_LBRAC, (yyvsp[(1) - (4)].l_node), (yyvsp[(3) - (4)].l_node));
		;}
    break;

  case 61:
#line 410 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = dt_node_func((yyvsp[(1) - (3)].l_node), NULL);
		;}
    break;

  case 62:
#line 414 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = dt_node_func((yyvsp[(1) - (4)].l_node), (yyvsp[(3) - (4)].l_node));
		;}
    break;

  case 63:
#line 417 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_DOT, (yyvsp[(1) - (3)].l_node), dt_node_ident((yyvsp[(3) - (3)].l_str)));
		;}
    break;

  case 64:
#line 420 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_DOT, (yyvsp[(1) - (3)].l_node), dt_node_ident((yyvsp[(3) - (3)].l_str)));
		;}
    break;

  case 65:
#line 423 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_DOT, (yyvsp[(1) - (3)].l_node), dt_node_ident((yyvsp[(3) - (3)].l_str)));
		;}
    break;

  case 66:
#line 426 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_PTR, (yyvsp[(1) - (3)].l_node), dt_node_ident((yyvsp[(3) - (3)].l_str)));
		;}
    break;

  case 67:
#line 429 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_PTR, (yyvsp[(1) - (3)].l_node), dt_node_ident((yyvsp[(3) - (3)].l_str)));
		;}
    break;

  case 68:
#line 432 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_PTR, (yyvsp[(1) - (3)].l_node), dt_node_ident((yyvsp[(3) - (3)].l_str)));
		;}
    break;

  case 69:
#line 435 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = OP1(DT_TOK_POSTINC, (yyvsp[(1) - (2)].l_node));
		;}
    break;

  case 70:
#line 438 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = OP1(DT_TOK_POSTDEC, (yyvsp[(1) - (2)].l_node));
		;}
    break;

  case 71:
#line 442 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = dt_node_offsetof((yyvsp[(3) - (6)].l_decl), (yyvsp[(5) - (6)].l_str));
		;}
    break;

  case 72:
#line 446 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = dt_node_offsetof((yyvsp[(3) - (6)].l_decl), (yyvsp[(5) - (6)].l_str));
		;}
    break;

  case 73:
#line 450 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = dt_node_offsetof((yyvsp[(3) - (6)].l_decl), (yyvsp[(5) - (6)].l_str));
		;}
    break;

  case 74:
#line 454 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_XLATE, dt_node_type((yyvsp[(3) - (7)].l_decl)), (yyvsp[(6) - (7)].l_node));
		;}
    break;

  case 76:
#line 461 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_node) = OP1(DT_TOK_PREINC, (yyvsp[(2) - (2)].l_node)); ;}
    break;

  case 77:
#line 462 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_node) = OP1(DT_TOK_PREDEC, (yyvsp[(2) - (2)].l_node)); ;}
    break;

  case 78:
#line 463 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_node) = OP1((yyvsp[(1) - (2)].l_tok), (yyvsp[(2) - (2)].l_node)); ;}
    break;

  case 79:
#line 464 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_node) = OP1(DT_TOK_SIZEOF, (yyvsp[(2) - (2)].l_node)); ;}
    break;

  case 80:
#line 465 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = OP1(DT_TOK_SIZEOF, dt_node_type((yyvsp[(3) - (4)].l_decl)));
		;}
    break;

  case 81:
#line 468 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = OP1(DT_TOK_STRINGOF, (yyvsp[(2) - (2)].l_node));
		;}
    break;

  case 82:
#line 473 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_tok) = DT_TOK_ADDROF; ;}
    break;

  case 83:
#line 474 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_tok) = DT_TOK_DEREF; ;}
    break;

  case 84:
#line 475 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_tok) = DT_TOK_IPOS; ;}
    break;

  case 85:
#line 476 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_tok) = DT_TOK_INEG; ;}
    break;

  case 86:
#line 477 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_tok) = DT_TOK_BNEG; ;}
    break;

  case 87:
#line 478 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_tok) = DT_TOK_LNEG; ;}
    break;

  case 89:
#line 483 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_LPAR, dt_node_type((yyvsp[(2) - (4)].l_decl)), (yyvsp[(4) - (4)].l_node));
		;}
    break;

  case 91:
#line 490 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_MUL, (yyvsp[(1) - (3)].l_node), (yyvsp[(3) - (3)].l_node));
		;}
    break;

  case 92:
#line 493 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_DIV, (yyvsp[(1) - (3)].l_node), (yyvsp[(3) - (3)].l_node));
		;}
    break;

  case 93:
#line 496 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_MOD, (yyvsp[(1) - (3)].l_node), (yyvsp[(3) - (3)].l_node));
		;}
    break;

  case 95:
#line 503 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_ADD, (yyvsp[(1) - (3)].l_node), (yyvsp[(3) - (3)].l_node));
		;}
    break;

  case 96:
#line 506 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_SUB, (yyvsp[(1) - (3)].l_node), (yyvsp[(3) - (3)].l_node));
		;}
    break;

  case 98:
#line 513 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_LSH, (yyvsp[(1) - (3)].l_node), (yyvsp[(3) - (3)].l_node));
		;}
    break;

  case 99:
#line 516 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_RSH, (yyvsp[(1) - (3)].l_node), (yyvsp[(3) - (3)].l_node));
		;}
    break;

  case 101:
#line 523 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_LT, (yyvsp[(1) - (3)].l_node), (yyvsp[(3) - (3)].l_node));
		;}
    break;

  case 102:
#line 526 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_GT, (yyvsp[(1) - (3)].l_node), (yyvsp[(3) - (3)].l_node));
		;}
    break;

  case 103:
#line 529 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_LE, (yyvsp[(1) - (3)].l_node), (yyvsp[(3) - (3)].l_node));
		;}
    break;

  case 104:
#line 532 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_GE, (yyvsp[(1) - (3)].l_node), (yyvsp[(3) - (3)].l_node));
		;}
    break;

  case 106:
#line 539 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_EQU, (yyvsp[(1) - (3)].l_node), (yyvsp[(3) - (3)].l_node));
		;}
    break;

  case 107:
#line 542 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_NEQ, (yyvsp[(1) - (3)].l_node), (yyvsp[(3) - (3)].l_node));
		;}
    break;

  case 109:
#line 549 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_BAND, (yyvsp[(1) - (3)].l_node), (yyvsp[(3) - (3)].l_node));
		;}
    break;

  case 111:
#line 556 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_XOR, (yyvsp[(1) - (3)].l_node), (yyvsp[(3) - (3)].l_node));
		;}
    break;

  case 113:
#line 563 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_BOR, (yyvsp[(1) - (3)].l_node), (yyvsp[(3) - (3)].l_node));
		;}
    break;

  case 115:
#line 570 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_LAND, (yyvsp[(1) - (3)].l_node), (yyvsp[(3) - (3)].l_node));
		;}
    break;

  case 117:
#line 577 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_LXOR, (yyvsp[(1) - (3)].l_node), (yyvsp[(3) - (3)].l_node));
		;}
    break;

  case 119:
#line 584 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_LOR, (yyvsp[(1) - (3)].l_node), (yyvsp[(3) - (3)].l_node));
		;}
    break;

  case 122:
#line 595 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_node) = OP3((yyvsp[(1) - (5)].l_node), (yyvsp[(3) - (5)].l_node), (yyvsp[(5) - (5)].l_node)); ;}
    break;

  case 124:
#line 600 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = OP2((yyvsp[(2) - (3)].l_tok), (yyvsp[(1) - (3)].l_node), (yyvsp[(3) - (3)].l_node));
		;}
    break;

  case 125:
#line 606 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_tok) = DT_TOK_ASGN; ;}
    break;

  case 126:
#line 607 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_tok) = DT_TOK_MUL_EQ; ;}
    break;

  case 127:
#line 608 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_tok) = DT_TOK_DIV_EQ; ;}
    break;

  case 128:
#line 609 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_tok) = DT_TOK_MOD_EQ; ;}
    break;

  case 129:
#line 610 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_tok) = DT_TOK_ADD_EQ; ;}
    break;

  case 130:
#line 611 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_tok) = DT_TOK_SUB_EQ; ;}
    break;

  case 131:
#line 612 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_tok) = DT_TOK_LSH_EQ; ;}
    break;

  case 132:
#line 613 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_tok) = DT_TOK_RSH_EQ; ;}
    break;

  case 133:
#line 614 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_tok) = DT_TOK_AND_EQ; ;}
    break;

  case 134:
#line 615 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_tok) = DT_TOK_XOR_EQ; ;}
    break;

  case 135:
#line 616 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_tok) = DT_TOK_OR_EQ; ;}
    break;

  case 137:
#line 620 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_COMMA, (yyvsp[(1) - (3)].l_node), (yyvsp[(3) - (3)].l_node));
		;}
    break;

  case 138:
#line 625 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = dt_node_decl();
			dt_decl_free(dt_decl_pop());
			yybegin(YYS_CLAUSE);
		;}
    break;

  case 139:
#line 630 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = (yyvsp[(2) - (3)].l_node);
			dt_decl_free(dt_decl_pop());
			yybegin(YYS_CLAUSE);
		;}
    break;

  case 152:
#line 656 "../../lib/libdtrace/common/dt_grammar.y"
    { dt_decl_class(DT_DC_AUTO); ;}
    break;

  case 153:
#line 657 "../../lib/libdtrace/common/dt_grammar.y"
    { dt_decl_class(DT_DC_REGISTER); ;}
    break;

  case 154:
#line 658 "../../lib/libdtrace/common/dt_grammar.y"
    { dt_decl_class(DT_DC_STATIC); ;}
    break;

  case 155:
#line 659 "../../lib/libdtrace/common/dt_grammar.y"
    { dt_decl_class(DT_DC_EXTERN); ;}
    break;

  case 156:
#line 660 "../../lib/libdtrace/common/dt_grammar.y"
    { dt_decl_class(DT_DC_TYPEDEF); ;}
    break;

  case 158:
#line 665 "../../lib/libdtrace/common/dt_grammar.y"
    { dt_decl_class(DT_DC_SELF); ;}
    break;

  case 159:
#line 666 "../../lib/libdtrace/common/dt_grammar.y"
    { dt_decl_class(DT_DC_THIS); ;}
    break;

  case 160:
#line 669 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_decl) = dt_decl_spec(CTF_K_INTEGER, DUP("void")); ;}
    break;

  case 161:
#line 670 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_decl) = dt_decl_spec(CTF_K_INTEGER, DUP("char")); ;}
    break;

  case 162:
#line 671 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_decl) = dt_decl_attr(DT_DA_SHORT); ;}
    break;

  case 163:
#line 672 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_decl) = dt_decl_spec(CTF_K_INTEGER, DUP("int")); ;}
    break;

  case 164:
#line 673 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_decl) = dt_decl_attr(DT_DA_LONG); ;}
    break;

  case 165:
#line 674 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_decl) = dt_decl_spec(CTF_K_FLOAT, DUP("float")); ;}
    break;

  case 166:
#line 675 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_decl) = dt_decl_spec(CTF_K_FLOAT, DUP("double")); ;}
    break;

  case 167:
#line 676 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_decl) = dt_decl_attr(DT_DA_SIGNED); ;}
    break;

  case 168:
#line 677 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_decl) = dt_decl_attr(DT_DA_UNSIGNED); ;}
    break;

  case 169:
#line 678 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_decl) = dt_decl_attr(DT_DA_USER); ;}
    break;

  case 170:
#line 679 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_decl) = dt_decl_spec(CTF_K_TYPEDEF, DUP("string"));
		;}
    break;

  case 171:
#line 682 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_decl) = dt_decl_spec(CTF_K_TYPEDEF, (yyvsp[(1) - (1)].l_str)); ;}
    break;

  case 174:
#line 687 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_decl) = dt_decl_attr(DT_DA_CONST); ;}
    break;

  case 175:
#line 688 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_decl) = dt_decl_attr(DT_DA_RESTRICT); ;}
    break;

  case 176:
#line 689 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_decl) = dt_decl_attr(DT_DA_VOLATILE); ;}
    break;

  case 177:
#line 693 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_decl) = dt_scope_pop();
		;}
    break;

  case 178:
#line 696 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_decl) = dt_decl_spec((yyvsp[(1) - (2)].l_tok), (yyvsp[(2) - (2)].l_str)); ;}
    break;

  case 179:
#line 697 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_decl) = dt_decl_spec((yyvsp[(1) - (2)].l_tok), (yyvsp[(2) - (2)].l_str)); ;}
    break;

  case 180:
#line 701 "../../lib/libdtrace/common/dt_grammar.y"
    { dt_decl_sou((yyvsp[(1) - (2)].l_tok), NULL); ;}
    break;

  case 181:
#line 702 "../../lib/libdtrace/common/dt_grammar.y"
    { dt_decl_sou((yyvsp[(1) - (3)].l_tok), (yyvsp[(2) - (3)].l_str)); ;}
    break;

  case 182:
#line 703 "../../lib/libdtrace/common/dt_grammar.y"
    { dt_decl_sou((yyvsp[(1) - (3)].l_tok), (yyvsp[(2) - (3)].l_str)); ;}
    break;

  case 183:
#line 707 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_tok) = CTF_K_STRUCT; ;}
    break;

  case 184:
#line 708 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_tok) = CTF_K_UNION; ;}
    break;

  case 188:
#line 718 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = LINK((yyvsp[(1) - (3)].l_node), (yyvsp[(3) - (3)].l_node));
		;}
    break;

  case 189:
#line 724 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = dt_node_decl();
			dt_decl_reset();
		;}
    break;

  case 190:
#line 731 "../../lib/libdtrace/common/dt_grammar.y"
    {
			dt_decl_free(dt_decl_pop());
		;}
    break;

  case 191:
#line 734 "../../lib/libdtrace/common/dt_grammar.y"
    {
			dt_decl_member(NULL);
			dt_decl_free(dt_decl_pop());
		;}
    break;

  case 193:
#line 742 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_decl) = (yyvsp[(2) - (2)].l_decl); ;}
    break;

  case 195:
#line 744 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_decl) = (yyvsp[(2) - (2)].l_decl); ;}
    break;

  case 198:
#line 753 "../../lib/libdtrace/common/dt_grammar.y"
    { dt_decl_member(NULL); ;}
    break;

  case 199:
#line 754 "../../lib/libdtrace/common/dt_grammar.y"
    { dt_decl_member((yyvsp[(2) - (2)].l_node)); ;}
    break;

  case 200:
#line 755 "../../lib/libdtrace/common/dt_grammar.y"
    {
			dt_decl_member((yyvsp[(3) - (3)].l_node));
		;}
    break;

  case 201:
#line 761 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_decl) = dt_scope_pop(); ;}
    break;

  case 202:
#line 762 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_decl) = dt_decl_spec(CTF_K_ENUM, (yyvsp[(2) - (2)].l_str)); ;}
    break;

  case 203:
#line 763 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_decl) = dt_decl_spec(CTF_K_ENUM, (yyvsp[(2) - (2)].l_str)); ;}
    break;

  case 204:
#line 767 "../../lib/libdtrace/common/dt_grammar.y"
    { dt_decl_enum(NULL); ;}
    break;

  case 205:
#line 768 "../../lib/libdtrace/common/dt_grammar.y"
    { dt_decl_enum((yyvsp[(2) - (3)].l_str)); ;}
    break;

  case 206:
#line 769 "../../lib/libdtrace/common/dt_grammar.y"
    { dt_decl_enum((yyvsp[(2) - (3)].l_str)); ;}
    break;

  case 209:
#line 777 "../../lib/libdtrace/common/dt_grammar.y"
    { dt_decl_enumerator((yyvsp[(1) - (1)].l_str), NULL); ;}
    break;

  case 210:
#line 778 "../../lib/libdtrace/common/dt_grammar.y"
    {
			dt_decl_enumerator((yyvsp[(1) - (3)].l_str), (yyvsp[(3) - (3)].l_node));
		;}
    break;

  case 213:
#line 788 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_decl) = dt_decl_ident((yyvsp[(1) - (1)].l_str)); ;}
    break;

  case 214:
#line 789 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_decl) = (yyvsp[(2) - (3)].l_decl); ;}
    break;

  case 215:
#line 790 "../../lib/libdtrace/common/dt_grammar.y"
    { dt_decl_array((yyvsp[(2) - (2)].l_node)); ;}
    break;

  case 216:
#line 791 "../../lib/libdtrace/common/dt_grammar.y"
    { dt_decl_func((yyvsp[(1) - (2)].l_decl), (yyvsp[(2) - (2)].l_node)); ;}
    break;

  case 217:
#line 794 "../../lib/libdtrace/common/dt_grammar.y"
    { dt_decl_top()->dd_attr |= DT_DA_PAREN; ;}
    break;

  case 218:
#line 797 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_decl) = dt_decl_ptr(); ;}
    break;

  case 219:
#line 798 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_decl) = dt_decl_ptr(); ;}
    break;

  case 220:
#line 799 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_decl) = dt_decl_ptr(); ;}
    break;

  case 221:
#line 800 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_decl) = dt_decl_ptr(); ;}
    break;

  case 223:
#line 805 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_decl) = (yyvsp[(2) - (2)].l_decl); ;}
    break;

  case 225:
#line 810 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_node) = dt_node_vatype(); ;}
    break;

  case 226:
#line 811 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = LINK((yyvsp[(1) - (3)].l_node), dt_node_vatype());
		;}
    break;

  case 228:
#line 817 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = LINK((yyvsp[(1) - (3)].l_node), (yyvsp[(3) - (3)].l_node));
		;}
    break;

  case 229:
#line 823 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = dt_node_type(NULL);
		;}
    break;

  case 230:
#line 826 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = dt_node_type(NULL);
		;}
    break;

  case 231:
#line 829 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_node) = dt_node_type(NULL);
		;}
    break;

  case 232:
#line 834 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_decl) = dt_decl_pop();
		;}
    break;

  case 233:
#line 837 "../../lib/libdtrace/common/dt_grammar.y"
    {
			(yyval.l_decl) = dt_decl_pop();
		;}
    break;

  case 237:
#line 849 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_decl) = (yyvsp[(2) - (3)].l_decl); ;}
    break;

  case 238:
#line 850 "../../lib/libdtrace/common/dt_grammar.y"
    { dt_decl_array((yyvsp[(2) - (2)].l_node)); ;}
    break;

  case 239:
#line 851 "../../lib/libdtrace/common/dt_grammar.y"
    { dt_decl_array((yyvsp[(1) - (1)].l_node)); (yyval.l_decl) = NULL; ;}
    break;

  case 240:
#line 852 "../../lib/libdtrace/common/dt_grammar.y"
    { dt_decl_func((yyvsp[(1) - (2)].l_decl), (yyvsp[(2) - (2)].l_node)); ;}
    break;

  case 241:
#line 853 "../../lib/libdtrace/common/dt_grammar.y"
    { dt_decl_func(NULL, (yyvsp[(1) - (1)].l_node)); ;}
    break;

  case 242:
#line 856 "../../lib/libdtrace/common/dt_grammar.y"
    { dt_scope_push(NULL, CTF_ERR); ;}
    break;

  case 243:
#line 857 "../../lib/libdtrace/common/dt_grammar.y"
    {
			dt_scope_pop();
			(yyval.l_node) = (yyvsp[(3) - (4)].l_node);
		;}
    break;

  case 244:
#line 864 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_node) = NULL; ;}
    break;

  case 245:
#line 865 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_node) = (yyvsp[(1) - (1)].l_node); ;}
    break;

  case 246:
#line 866 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_node) = (yyvsp[(1) - (1)].l_node); ;}
    break;

  case 247:
#line 869 "../../lib/libdtrace/common/dt_grammar.y"
    { dt_scope_push(NULL, CTF_ERR); ;}
    break;

  case 248:
#line 870 "../../lib/libdtrace/common/dt_grammar.y"
    {
			dt_scope_pop();
			(yyval.l_node) = (yyvsp[(3) - (4)].l_node);
		;}
    break;

  case 249:
#line 877 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_node) = NULL; ;}
    break;

  case 250:
#line 878 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_node) = (yyvsp[(1) - (1)].l_node); ;}
    break;

  case 251:
#line 882 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_str) = DUP("probe"); ;}
    break;

  case 252:
#line 883 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_str) = DUP("provider"); ;}
    break;

  case 253:
#line 884 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_str) = DUP("self"); ;}
    break;

  case 254:
#line 885 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_str) = DUP("string"); ;}
    break;

  case 255:
#line 886 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_str) = DUP("stringof"); ;}
    break;

  case 256:
#line 887 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_str) = DUP("userland"); ;}
    break;

  case 257:
#line 888 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_str) = DUP("xlate"); ;}
    break;

  case 258:
#line 889 "../../lib/libdtrace/common/dt_grammar.y"
    { (yyval.l_str) = DUP("translator"); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 3302 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 892 "../../lib/libdtrace/common/dt_grammar.y"


