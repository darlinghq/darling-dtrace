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
     DT_KEY_VOID = 357,
     DT_KEY_VOLATILE = 358,
     DT_KEY_WHILE = 359,
     DT_KEY_XLATOR = 360,
     DT_KEY_USERLAND = 361,
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
#define DT_KEY_VOID 357
#define DT_KEY_VOLATILE 358
#define DT_KEY_WHILE 359
#define DT_KEY_XLATOR 360
#define DT_KEY_USERLAND 361
#define DT_TOK_EPRED 362
#define DT_CTX_DEXPR 363
#define DT_CTX_DPROG 364
#define DT_CTX_DTYPE 365




/* Copy the first part of user declarations.  */
#line 1 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"

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
 *
 * Copyright (c) 2013 by Delphix. All rights reserved.
 * Copyright (c) 2013, Joyent, Inc. All rights reserved.
 */

#pragma ident	"@(#)dt_grammar.y	1.9	06/01/07 SMI"

#include <dt_impl.h>

#define	OP1(op, c)	dt_node_op1(op, c)
#define	OP2(op, l, r)	dt_node_op2(op, l, r)
#define	OP3(x, y, z)	dt_node_op3(x, y, z)
#define	LINK(l, r)	dt_node_link(l, r)
#define	DUP(s)		strdup(s)

static int yylex(void);



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
#line 44 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
{
	dt_node_t *l_node;
	dt_decl_t *l_decl;
	char *l_str;
	uintmax_t l_int;
	int l_tok;
}
/* Line 193 of yacc.c.  */
#line 369 "/Users/andrewhyatt/Library/Developer/Xcode/DerivedData/dtrace-dovtkuhnwoydvocwsxkptypjbyik/Build/Intermediates/dtrace.build/Release/libdtrace.so.build/DerivedSources/y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 382 "/Users/andrewhyatt/Library/Developer/Xcode/DerivedData/dtrace-dovtkuhnwoydvocwsxkptypjbyik/Build/Intermediates/dtrace.build/Release/libdtrace.so.build/DerivedSources/y.tab.c"

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
#define YYLAST   956

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  114
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  83
/* YYNRULES -- Number of rules.  */
#define YYNRULES  246
/* YYNRULES -- Number of states.  */
#define YYNSTATES  377

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
     202,   207,   211,   216,   220,   224,   228,   232,   235,   238,
     245,   252,   260,   262,   265,   268,   271,   274,   279,   282,
     284,   286,   288,   290,   292,   294,   296,   301,   303,   307,
     311,   315,   317,   321,   325,   327,   331,   335,   337,   341,
     345,   349,   353,   355,   359,   363,   365,   369,   371,   375,
     377,   381,   383,   387,   389,   393,   395,   399,   401,   403,
     409,   411,   415,   417,   419,   421,   423,   425,   427,   429,
     431,   433,   435,   437,   439,   443,   446,   450,   452,   455,
     457,   460,   462,   465,   467,   470,   472,   475,   477,   480,
     482,   484,   486,   488,   490,   492,   494,   496,   498,   500,
     502,   504,   506,   508,   510,   512,   514,   516,   518,   520,
     522,   524,   526,   528,   530,   534,   537,   540,   543,   547,
     551,   553,   555,   557,   560,   562,   566,   568,   572,   574,
     577,   579,   582,   584,   588,   590,   593,   597,   601,   604,
     607,   610,   614,   618,   620,   624,   626,   630,   632,   635,
     637,   641,   644,   647,   649,   651,   654,   657,   661,   663,
     666,   668,   670,   674,   676,   680,   682,   685,   688,   690,
     693,   695,   697,   700,   704,   707,   709,   712,   714,   715,
     720,   721,   723,   725,   726,   731,   732
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     115,     0,    -1,   116,     0,    -1,   117,     0,    -1,   118,
       0,    -1,   108,    -1,   108,   158,    -1,   109,    -1,   109,
     119,    -1,   110,    -1,   110,   188,    -1,   120,    -1,   119,
     120,    -1,   121,    -1,   123,    -1,   126,    -1,   129,    -1,
     159,    -1,    -1,    83,   160,   180,   122,     5,   156,   111,
      -1,   105,   188,    26,   188,    60,    28,   112,   124,   113,
     111,    -1,   105,   188,    26,   188,    60,    28,   112,   113,
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
     139,    58,    63,    -1,   139,    57,    60,    -1,   139,    57,
      63,    -1,   139,    39,    -1,   139,    40,    -1,    49,    53,
     188,     3,    60,    54,    -1,    49,    53,   188,     3,    63,
      54,    -1,    52,    26,   188,    28,    53,   158,    54,    -1,
     139,    -1,    39,   140,    -1,    40,   140,    -1,   141,   142,
      -1,    50,   140,    -1,    50,    53,   188,    54,    -1,    51,
     140,    -1,    23,    -1,    34,    -1,    32,    -1,    33,    -1,
      38,    -1,    37,    -1,   140,    -1,    53,   188,    54,   142,
      -1,   142,    -1,   143,    34,   142,    -1,   143,    35,   142,
      -1,   143,    36,   142,    -1,   143,    -1,   144,    32,   143,
      -1,   144,    33,   143,    -1,   144,    -1,   145,    30,   144,
      -1,   145,    31,   144,    -1,   145,    -1,   146,    26,   145,
      -1,   146,    28,   145,    -1,   146,    27,   145,    -1,   146,
      29,   145,    -1,   146,    -1,   147,    24,   146,    -1,   147,
      25,   146,    -1,   147,    -1,   148,    23,   147,    -1,   148,
      -1,   149,    22,   148,    -1,   149,    -1,   150,    21,   149,
      -1,   150,    -1,   151,    20,   150,    -1,   151,    -1,   152,
      19,   151,    -1,   152,    -1,   153,    18,   152,    -1,   155,
      -1,   153,    -1,   153,    16,   158,    17,   155,    -1,   155,
      -1,   140,   157,   156,    -1,     5,    -1,     8,    -1,     9,
      -1,    10,    -1,     6,    -1,     7,    -1,    14,    -1,    15,
      -1,    11,    -1,    12,    -1,    13,    -1,   156,    -1,   158,
       3,   156,    -1,   160,   111,    -1,   160,   170,   111,    -1,
     163,    -1,   163,   160,    -1,   164,    -1,   164,   160,    -1,
     165,    -1,   165,   160,    -1,   162,    -1,   162,   160,    -1,
     164,    -1,   164,   160,    -1,   165,    -1,   165,   160,    -1,
      65,    -1,    88,    -1,    94,    -1,    77,    -1,    99,    -1,
     162,    -1,    91,    -1,    98,    -1,   102,    -1,    68,    -1,
      92,    -1,    84,    -1,    85,    -1,    78,    -1,    74,    -1,
      93,    -1,   101,    -1,   106,    -1,    95,    -1,    63,    -1,
     166,    -1,   176,    -1,    69,    -1,    89,    -1,   103,    -1,
     167,   169,   113,    -1,   168,    60,    -1,   168,    63,    -1,
     168,   112,    -1,   168,    60,   112,    -1,   168,    63,   112,
      -1,    96,    -1,   100,    -1,   172,    -1,   169,   172,    -1,
     171,    -1,   170,     3,   171,    -1,   180,    -1,   173,   174,
     111,    -1,   164,    -1,   164,   173,    -1,   165,    -1,   165,
     173,    -1,   175,    -1,   174,     3,   175,    -1,   180,    -1,
      17,   154,    -1,   180,    17,   154,    -1,   177,   178,   113,
      -1,    76,    60,    -1,    76,    63,    -1,    76,   112,    -1,
      76,    60,   112,    -1,    76,    63,   112,    -1,   179,    -1,
     178,     3,   179,    -1,    60,    -1,    60,     5,   158,    -1,
     181,    -1,   183,   181,    -1,    60,    -1,   182,   180,    54,
      -1,   181,   191,    -1,   181,   194,    -1,    53,    -1,    34,
      -1,    34,   184,    -1,    34,   183,    -1,    34,   184,   183,
      -1,   165,    -1,   184,   165,    -1,   186,    -1,     4,    -1,
     186,     3,     4,    -1,   187,    -1,   186,     3,   187,    -1,
     161,    -1,   161,   180,    -1,   161,   189,    -1,   173,    -1,
     173,   189,    -1,   183,    -1,   190,    -1,   183,   190,    -1,
     182,   189,    54,    -1,   190,   191,    -1,   191,    -1,   190,
     194,    -1,   194,    -1,    -1,    55,   192,   193,    56,    -1,
      -1,   154,    -1,   185,    -1,    -1,    53,   195,   196,    54,
      -1,    -1,   185,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   217,   217,   218,   219,   222,   223,   226,   227,   230,
     231,   235,   236,   240,   241,   242,   243,   244,   249,   248,
     264,   268,   275,   276,   280,   286,   289,   295,   296,   300,
     303,   310,   327,   331,   335,   343,   347,   348,   354,   355,
     358,   359,   363,   364,   370,   371,   373,   374,   375,   378,
     385,   386,   392,   393,   394,   395,   396,   397,   398,   402,
     403,   407,   410,   414,   417,   420,   423,   426,   429,   432,
     436,   440,   447,   448,   449,   450,   451,   452,   455,   460,
     461,   462,   463,   464,   465,   469,   470,   476,   477,   480,
     483,   489,   490,   493,   499,   500,   503,   509,   510,   513,
     516,   519,   525,   526,   529,   535,   536,   542,   543,   549,
     550,   556,   557,   563,   564,   570,   571,   576,   580,   581,
     586,   587,   593,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   606,   607,   612,   617,   625,   626,   627,
     628,   629,   630,   634,   635,   636,   637,   638,   639,   643,
     644,   645,   646,   647,   651,   652,   653,   656,   657,   658,
     659,   660,   661,   662,   663,   664,   665,   666,   669,   670,
     671,   674,   675,   676,   680,   683,   684,   688,   689,   690,
     694,   695,   699,   700,   704,   705,   711,   718,   724,   725,
     726,   727,   731,   732,   736,   737,   738,   744,   745,   746,
     750,   751,   752,   756,   757,   760,   761,   766,   767,   771,
     772,   773,   774,   777,   780,   781,   782,   783,   787,   788,
     792,   793,   794,   799,   800,   806,   809,   812,   817,   820,
     826,   827,   828,   832,   833,   834,   835,   836,   839,   839,
     847,   848,   849,   852,   852,   860,   861
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
  "DT_KEY_UNSIGNED", "DT_KEY_VOID", "DT_KEY_VOLATILE", "DT_KEY_WHILE",
  "DT_KEY_XLATOR", "DT_KEY_USERLAND", "DT_TOK_EPRED", "DT_CTX_DEXPR",
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
  "function_parameters", 0
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
     139,   139,   140,   140,   140,   140,   140,   140,   140,   141,
     141,   141,   141,   141,   141,   142,   142,   143,   143,   143,
     143,   144,   144,   144,   145,   145,   145,   146,   146,   146,
     146,   146,   147,   147,   147,   148,   148,   149,   149,   150,
     150,   151,   151,   152,   152,   153,   153,   154,   155,   155,
     156,   156,   157,   157,   157,   157,   157,   157,   157,   157,
     157,   157,   157,   158,   158,   159,   159,   160,   160,   160,
     160,   160,   160,   161,   161,   161,   161,   161,   161,   162,
     162,   162,   162,   162,   163,   163,   163,   164,   164,   164,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     164,   165,   165,   165,   166,   166,   166,   167,   167,   167,
     168,   168,   169,   169,   170,   170,   171,   172,   173,   173,
     173,   173,   174,   174,   175,   175,   175,   176,   176,   176,
     177,   177,   177,   178,   178,   179,   179,   180,   180,   181,
     181,   181,   181,   182,   183,   183,   183,   183,   184,   184,
     185,   185,   185,   186,   186,   187,   187,   187,   188,   188,
     189,   189,   189,   190,   190,   190,   190,   190,   192,   191,
     193,   193,   193,   195,   194,   196,   196
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
       4,     3,     4,     3,     3,     3,     3,     2,     2,     6,
       6,     7,     1,     2,     2,     2,     2,     4,     2,     1,
       1,     1,     1,     1,     1,     1,     4,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     1,     5,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     2,     3,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     2,     2,     2,     3,     3,
       1,     1,     1,     2,     1,     3,     1,     3,     1,     2,
       1,     2,     1,     3,     1,     2,     3,     3,     2,     2,
       2,     3,     3,     1,     3,     1,     3,     1,     2,     1,
       3,     2,     2,     1,     1,     2,     2,     3,     1,     2,
       1,     1,     3,     1,     3,     1,     2,     2,     1,     2,
       1,     1,     2,     3,     2,     1,     2,     1,     0,     4,
       0,     1,     1,     0,     4,     0,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     5,     7,     9,     0,     0,     0,     0,    79,    81,
      82,    80,    84,    83,     0,     0,     0,     0,     0,     0,
       0,    55,    52,    53,    54,    56,    57,    59,    72,    85,
       0,    87,    91,    94,    97,   102,   105,   107,   109,   111,
     113,   115,   118,   120,   133,     6,    38,   168,    39,   149,
     158,   171,   163,     0,   152,   162,     0,   160,   161,     0,
     150,   172,   155,   159,   164,   151,   167,   180,   156,   153,
     181,   165,   157,   173,     0,   166,     8,    11,    13,    14,
      15,    16,    31,    35,    36,    17,     0,   154,   137,   139,
     141,   169,     0,     0,   170,     0,   188,   190,   228,    10,
       1,     2,     3,     4,     0,    73,    74,     0,     0,    76,
      78,     0,     0,     0,    67,    68,     0,     0,     0,     0,
     122,   126,   127,   123,   124,   125,   130,   131,   132,   128,
     129,     0,    85,    75,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   198,   199,   200,     0,     0,
       0,    12,     0,    40,     0,   214,   213,   209,   135,     0,
     184,   186,   207,     0,     0,   138,   140,   142,     0,   182,
       0,   175,   176,   177,   205,     0,   203,   189,   191,   243,
     238,     0,   230,   229,   231,   235,   237,     0,     0,     0,
      58,     0,    61,     0,    50,     0,    65,    66,    63,    64,
     121,    88,    89,    90,    92,    93,    95,    96,    98,   100,
      99,   101,   103,   104,   106,   108,   110,   112,   114,     0,
     116,   134,   201,   202,    18,     0,     0,     0,    42,     0,
      37,   218,   216,   215,     0,   136,   243,   211,   212,     0,
     208,   174,   183,     0,     0,   192,   194,   178,   179,     0,
       0,   197,   245,   240,     0,   232,   234,   236,     0,    77,
       0,    86,     0,    62,    60,     0,     0,     0,     0,     0,
      27,     0,    33,     0,    46,    41,    43,    32,   219,   217,
     185,   210,   195,   117,     0,   187,     0,   206,   204,   221,
     225,   143,   145,   147,   246,   220,   223,     0,   241,   242,
       0,   233,     0,     0,     0,    51,   119,     0,     0,    26,
       0,    28,     0,    40,     0,    47,   193,   196,   226,     0,
     230,   227,   144,   146,   148,     0,   244,   239,    69,    70,
       0,     0,     0,    25,     0,     0,     0,   222,   224,    71,
      19,     0,    30,     0,    34,     0,     0,     0,     0,     0,
      22,    40,    48,    44,     0,    29,     0,    21,     0,    23,
       0,     0,     0,    20,    45,    49,    24
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,     7,    76,    77,    78,   276,    79,
     359,   360,    80,   279,   280,    81,    82,    83,    84,   238,
     239,   362,   363,   203,    27,    28,   132,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
     292,    43,    44,   131,   112,    85,    86,   300,    87,    88,
      96,    97,    91,    92,    93,   178,   169,   170,   179,    98,
     254,   255,    94,    95,   185,   186,   171,   172,   173,   174,
     243,   304,   305,   306,    99,   264,   194,   195,   263,   310,
     196,   262,   307
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -280
static const yytype_int16 yypact[] =
{
      71,   677,   765,   850,    39,   150,   169,   173,  -280,  -280,
    -280,  -280,  -280,  -280,   720,   720,    17,   753,   720,    61,
     568,  -280,  -280,  -280,  -280,  -280,  -280,  -280,   188,   267,
     677,  -280,   183,    18,   194,   164,   226,   161,   103,   166,
     182,   191,   154,  -280,  -280,   211,  -280,  -280,  -280,  -280,
    -280,  -280,  -280,    -4,  -280,  -280,   809,  -280,  -280,   179,
    -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,
    -280,  -280,  -280,  -280,   850,  -280,   765,  -280,  -280,  -280,
    -280,  -280,   -24,   239,  -280,  -280,    -7,  -280,   809,   809,
     809,  -280,   850,    15,  -280,   196,   850,   850,   102,  -280,
    -280,  -280,  -280,  -280,   677,  -280,  -280,   850,   568,  -280,
    -280,   850,    25,   206,  -280,  -280,   644,   677,     8,    23,
    -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,
    -280,   677,  -280,  -280,   677,   677,   677,   677,   677,   677,
     677,   677,   677,   677,   677,   677,   677,   677,   677,   677,
     677,   677,   677,   677,   677,   149,   153,  -280,   125,   156,
     236,  -280,   677,  -280,    77,    -8,  -280,  -280,  -280,    20,
    -280,  -280,   142,   125,    87,  -280,  -280,  -280,   120,  -280,
     111,   157,   158,  -280,   278,     9,  -280,  -280,  -280,   105,
    -280,   102,   146,  -280,   142,  -280,  -280,   281,   231,   258,
    -280,   677,  -280,    46,  -280,    28,  -280,  -280,  -280,  -280,
    -280,  -280,  -280,  -280,   183,   183,    18,    18,   194,   194,
     194,   194,   164,   164,   226,   161,   103,   166,   182,   126,
     191,  -280,  -280,  -280,  -280,   -46,   850,    27,   518,   174,
    -280,  -280,  -280,    -8,   125,  -280,  -280,  -280,  -280,   234,
     142,  -280,  -280,   677,    21,  -280,   272,  -280,  -280,   677,
     196,  -280,   368,   324,   237,   142,  -280,  -280,    86,  -280,
     240,  -280,   677,  -280,  -280,   677,   285,   232,   184,   -17,
    -280,   238,   185,   241,  -280,  -280,    22,  -280,  -280,  -280,
    -280,  -280,  -280,  -280,   111,  -280,   677,  -280,  -280,  -280,
     122,   809,   809,   809,  -280,   293,  -280,   245,  -280,  -280,
     244,  -280,   247,   254,   677,  -280,  -280,   677,   256,  -280,
     199,  -280,   283,  -280,   677,  -280,  -280,  -280,  -280,   122,
      82,  -280,  -280,  -280,  -280,   410,  -280,  -280,  -280,  -280,
      63,   201,    12,  -280,   203,   204,    70,  -280,  -280,  -280,
    -280,   256,  -280,   -12,  -280,   485,   207,   314,   209,     5,
    -280,  -280,   246,  -280,    22,  -280,   677,  -280,   214,  -280,
     213,   485,   216,  -280,  -280,  -280,  -280
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -280,  -280,  -280,  -280,  -280,  -280,   253,  -280,  -280,  -280,
    -280,   -37,  -280,  -280,    51,  -280,  -280,  -280,   167,  -280,
    -279,   -39,    95,   217,  -280,  -280,    -1,  -280,   -15,   -25,
     113,    88,   109,   190,   187,   189,   192,   193,   195,  -280,
    -222,  -211,  -109,  -280,     0,  -280,   -54,  -280,  -225,  -280,
       4,     1,  -280,  -280,  -280,  -280,  -280,    96,   163,   -34,
    -280,    49,  -280,  -280,  -280,    85,  -126,  -154,   -94,   -89,
    -280,    83,  -280,    14,    -2,   -93,  -182,  -139,  -280,  -280,
    -151,  -280,  -280
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -214
static const yytype_int16 yytable[] =
{
      29,    45,   158,    90,   191,   193,    89,   204,   204,   192,
     265,   162,   260,   105,   106,   133,   109,   110,   113,    29,
     250,   248,   210,   244,   294,   154,   165,   165,   154,   351,
     154,   272,   234,   247,   175,   176,   177,   301,   301,   100,
     277,   308,   293,   267,   345,   231,   166,   249,   357,   272,
     137,   138,   293,   167,   256,   266,   155,    90,   180,   156,
      89,    51,   187,   188,   316,   357,   154,   278,   206,   277,
     107,   207,   160,   154,   327,   181,   242,    90,   182,   200,
      89,    61,   370,   208,   274,   293,   209,   111,   163,    90,
      90,    90,    89,    89,    89,    73,   320,   191,   191,   248,
     273,   358,   192,    29,   168,   197,   198,    29,   157,   199,
     301,   247,   214,   215,   267,    29,    29,   349,   368,   211,
     212,   213,   261,   352,   355,   148,   266,   183,   253,   154,
      29,   245,   295,   325,   282,   189,   165,   190,    46,  -213,
     166,    48,   167,   275,   180,   165,   312,   167,   265,   313,
     101,    29,   229,    29,   289,   189,   165,   190,  -213,   165,
    -213,    29,   237,   315,   166,  -213,   241,   342,   256,   102,
     152,   167,   153,   103,   328,   189,   250,   190,   166,     1,
       2,     3,   167,    47,   147,   167,   271,   149,    50,    51,
     141,   142,   143,   144,    52,   246,    53,   190,    55,   189,
     356,   190,   150,   249,    57,    58,   329,   331,   341,    61,
     151,   330,    63,    64,   154,    66,    67,   134,   135,   136,
      70,    71,    72,    73,   139,   140,    75,   114,   115,   218,
     219,   220,   221,   251,   281,   329,   329,    29,   286,   159,
     330,   116,   164,   117,   288,   118,   119,   332,   333,   334,
     145,   146,   216,   217,   222,   223,   184,   372,    29,   297,
     201,   232,   236,   303,   303,   233,   302,   302,   235,   257,
     258,    29,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   259,   268,   269,   270,   287,   291,   296,
     317,   311,   318,   314,   324,   319,   335,   323,   322,   336,
     337,   338,    90,    90,    90,    89,    89,    89,   339,   246,
     343,   344,   350,    29,   340,   353,    29,   354,   365,   366,
     367,   371,   369,    29,   346,   373,   374,   376,   299,   161,
     321,   240,   375,   285,   205,   225,   303,   224,   226,   302,
     290,   252,   227,   326,   228,   298,   309,     8,   230,   348,
       0,     0,     0,     0,    29,   364,     9,    10,    11,     0,
       0,    12,    13,    14,    15,    29,     0,     0,     0,     0,
      29,   364,   299,    16,    17,    18,    19,    20,     0,     0,
       0,     0,     0,    21,    22,     0,    23,    47,    24,    49,
       0,     0,    50,    51,     0,     0,     0,     0,    52,     0,
      53,    54,    55,     0,     0,     0,     0,     0,    57,    58,
       0,     0,    60,    61,   347,    25,    63,    64,    65,    66,
      67,     0,    26,    69,    70,    71,    72,    73,     0,     0,
      75,    47,     0,    49,     0,     0,    50,    51,     0,     0,
       0,     0,    52,     0,    53,    54,    55,     0,     0,     0,
       0,     0,    57,    58,     0,     0,    60,    61,     0,     0,
      63,    64,    65,    66,    67,     0,     0,    69,    70,    71,
      72,    73,     0,    47,    75,    49,     0,     0,    50,    51,
       0,     0,     0,     0,    52,     0,    53,    54,    55,     0,
       0,     0,     0,     0,    57,    58,     0,     0,    60,    61,
       0,     0,    63,    64,    65,    66,    67,     0,     8,    69,
      70,    71,    72,    73,     0,     0,    75,     9,    10,    11,
       0,     0,    12,    13,    14,    15,     0,     0,     0,     0,
       0,     0,     0,     0,    16,    17,    18,    19,    20,     0,
       0,     8,     0,     0,    21,    22,     0,    23,     0,    24,
       9,    10,    11,     0,     0,    12,    13,    14,    15,     0,
       0,     0,     0,     0,     0,     0,   283,    16,    17,    18,
      19,    20,     0,     0,     0,     0,    25,    21,    22,     0,
      23,     0,    24,    26,     0,     0,     0,     0,     0,     0,
       0,     8,     0,     0,     0,     0,   284,   361,     0,   283,
       9,    10,    11,     0,     0,    12,    13,    14,    15,    25,
       0,     0,     0,     0,     0,     0,    26,    16,    17,    18,
      19,    20,     0,     0,     0,     0,     0,    21,    22,   284,
      23,    47,    24,     0,     0,     0,    50,    51,     0,     0,
       0,     0,    52,     0,    53,     0,    55,     0,     0,     0,
       0,     0,    57,    58,     0,     0,     0,    61,     0,    25,
      63,    64,     0,    66,    67,     0,    26,     8,    70,    71,
      72,    73,     0,     0,    75,     0,     9,    10,    11,     0,
       0,    12,    13,    14,    15,     0,     0,     0,     0,     0,
       0,     0,     0,    16,    17,    18,    19,    20,   202,     0,
       8,     0,     0,    21,    22,     0,    23,     0,    24,     9,
      10,    11,     0,     0,    12,    13,    14,    15,     0,     0,
       0,     0,     0,     0,     0,     0,    16,    17,    18,    19,
      20,     0,     0,     0,     0,    25,    21,    22,     0,    23,
       0,    24,    26,     8,     0,     0,     0,     0,     0,     0,
       0,     0,     9,    10,    11,     0,     0,    12,    13,    14,
      15,     0,     0,     0,     0,     0,     0,     0,    25,    16,
      17,    18,    19,   104,     0,    26,     8,     0,     0,    21,
      22,     0,    23,     0,    24,     9,    10,    11,     0,     0,
      12,    13,    14,    15,     0,     0,     0,     0,     0,     0,
       0,     0,    16,    17,    18,    19,   108,     0,     0,     0,
       0,    25,    21,    22,     0,    23,     0,    24,    26,     0,
       0,     0,     0,     0,     0,     0,    46,     0,    47,    48,
      49,     0,     0,    50,    51,     0,     0,     0,     0,    52,
       0,    53,    54,    55,    25,     0,     0,     0,    56,    57,
      58,    26,    59,    60,    61,     0,    62,    63,    64,    65,
      66,    67,     0,    68,    69,    70,    71,    72,    73,     0,
      74,    75,    47,     0,    49,     0,     0,    50,    51,     0,
       0,     0,     0,    52,     0,    53,    54,    55,     0,     0,
       0,     0,     0,    57,    58,     0,     0,    60,    61,     0,
      62,    63,    64,    65,    66,    67,     0,    68,    69,    70,
      71,    72,    73,    47,     0,    75,     0,     0,    50,    51,
       0,     0,     0,     0,    52,     0,    53,     0,    55,     0,
       0,     0,     0,     0,    57,    58,     0,     0,     0,    61,
       0,     0,    63,    64,     0,    66,    67,     0,     0,     0,
      70,    71,    72,    73,     0,     0,    75
};

static const yytype_int16 yycheck[] =
{
       1,     1,    56,     2,    98,    98,     2,   116,   117,    98,
     192,    35,     3,    14,    15,    30,    17,    18,    20,    20,
     174,   172,   131,     3,     3,     3,    34,    34,     3,    17,
       3,     3,   158,   172,    88,    89,    90,   262,   263,     0,
      86,   263,   253,   194,   323,   154,    53,   173,    60,     3,
      32,    33,   263,    60,   180,   194,    60,    56,    92,    63,
      56,    69,    96,    97,   275,    60,     3,   113,    60,    86,
      53,    63,    74,     3,   296,    60,   165,    76,    63,    54,
      76,    89,   361,    60,    56,   296,    63,    26,   112,    88,
      89,    90,    88,    89,    90,   103,   113,   191,   192,   250,
      54,   113,   191,   104,   111,   107,   108,   108,   112,   111,
     335,   250,   137,   138,   265,   116,   117,    54,   113,   134,
     135,   136,   113,   111,    54,    22,   265,   112,    17,     3,
     131,   111,   111,   111,   107,    53,    34,    55,    61,    34,
      53,    64,    60,    17,   178,    34,    60,    60,   330,    63,
       0,   152,   152,   154,   243,    53,    34,    55,    53,    34,
      55,   162,   162,   272,    53,    60,   165,   318,   294,     0,
      16,    60,    18,     0,   300,    53,   330,    55,    53,   108,
     109,   110,    60,    63,    23,    60,   201,    21,    68,    69,
      26,    27,    28,    29,    74,    53,    76,    55,    78,    53,
     351,    55,    20,   329,    84,    85,   300,   300,   317,    89,
      19,   300,    92,    93,     3,    95,    96,    34,    35,    36,
     100,   101,   102,   103,    30,    31,   106,    39,    40,   141,
     142,   143,   144,   113,   236,   329,   330,   238,   238,    60,
     329,    53,     3,    55,   243,    57,    58,   301,   302,   303,
      24,    25,   139,   140,   145,   146,    60,   366,   259,   259,
      54,   112,    26,   262,   263,   112,   262,   263,   112,   112,
     112,   272,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,     5,     3,    54,    28,   113,    54,    17,
       5,    54,    60,    53,    53,   111,     3,   112,    60,    54,
      56,    54,   301,   302,   303,   301,   302,   303,    54,    53,
     111,    28,   111,   314,   314,   112,   317,   113,   111,     5,
     111,    75,   359,   324,   324,   111,   113,   111,     4,    76,
     279,   164,   371,   238,   117,   148,   335,   147,   149,   335,
     244,   178,   150,   294,   151,   260,   263,    23,   153,   335,
      -1,    -1,    -1,    -1,   355,   355,    32,    33,    34,    -1,
      -1,    37,    38,    39,    40,   366,    -1,    -1,    -1,    -1,
     371,   371,     4,    49,    50,    51,    52,    53,    -1,    -1,
      -1,    -1,    -1,    59,    60,    -1,    62,    63,    64,    65,
      -1,    -1,    68,    69,    -1,    -1,    -1,    -1,    74,    -1,
      76,    77,    78,    -1,    -1,    -1,    -1,    -1,    84,    85,
      -1,    -1,    88,    89,     4,    91,    92,    93,    94,    95,
      96,    -1,    98,    99,   100,   101,   102,   103,    -1,    -1,
     106,    63,    -1,    65,    -1,    -1,    68,    69,    -1,    -1,
      -1,    -1,    74,    -1,    76,    77,    78,    -1,    -1,    -1,
      -1,    -1,    84,    85,    -1,    -1,    88,    89,    -1,    -1,
      92,    93,    94,    95,    96,    -1,    -1,    99,   100,   101,
     102,   103,    -1,    63,   106,    65,    -1,    -1,    68,    69,
      -1,    -1,    -1,    -1,    74,    -1,    76,    77,    78,    -1,
      -1,    -1,    -1,    -1,    84,    85,    -1,    -1,    88,    89,
      -1,    -1,    92,    93,    94,    95,    96,    -1,    23,    99,
     100,   101,   102,   103,    -1,    -1,   106,    32,    33,    34,
      -1,    -1,    37,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,    51,    52,    53,    -1,
      -1,    23,    -1,    -1,    59,    60,    -1,    62,    -1,    64,
      32,    33,    34,    -1,    -1,    37,    38,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    49,    50,    51,
      52,    53,    -1,    -1,    -1,    -1,    91,    59,    60,    -1,
      62,    -1,    64,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    -1,   111,   112,    -1,    81,
      32,    33,    34,    -1,    -1,    37,    38,    39,    40,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    98,    49,    50,    51,
      52,    53,    -1,    -1,    -1,    -1,    -1,    59,    60,   111,
      62,    63,    64,    -1,    -1,    -1,    68,    69,    -1,    -1,
      -1,    -1,    74,    -1,    76,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    84,    85,    -1,    -1,    -1,    89,    -1,    91,
      92,    93,    -1,    95,    96,    -1,    98,    23,   100,   101,
     102,   103,    -1,    -1,   106,    -1,    32,    33,    34,    -1,
      -1,    37,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    51,    52,    53,    54,    -1,
      23,    -1,    -1,    59,    60,    -1,    62,    -1,    64,    32,
      33,    34,    -1,    -1,    37,    38,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,
      53,    -1,    -1,    -1,    -1,    91,    59,    60,    -1,    62,
      -1,    64,    98,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    34,    -1,    -1,    37,    38,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    49,
      50,    51,    52,    53,    -1,    98,    23,    -1,    -1,    59,
      60,    -1,    62,    -1,    64,    32,    33,    34,    -1,    -1,
      37,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    50,    51,    52,    53,    -1,    -1,    -1,
      -1,    91,    59,    60,    -1,    62,    -1,    64,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    63,    64,
      65,    -1,    -1,    68,    69,    -1,    -1,    -1,    -1,    74,
      -1,    76,    77,    78,    91,    -1,    -1,    -1,    83,    84,
      85,    98,    87,    88,    89,    -1,    91,    92,    93,    94,
      95,    96,    -1,    98,    99,   100,   101,   102,   103,    -1,
     105,   106,    63,    -1,    65,    -1,    -1,    68,    69,    -1,
      -1,    -1,    -1,    74,    -1,    76,    77,    78,    -1,    -1,
      -1,    -1,    -1,    84,    85,    -1,    -1,    88,    89,    -1,
      91,    92,    93,    94,    95,    96,    -1,    98,    99,   100,
     101,   102,   103,    63,    -1,   106,    -1,    -1,    68,    69,
      -1,    -1,    -1,    -1,    74,    -1,    76,    -1,    78,    -1,
      -1,    -1,    -1,    -1,    84,    85,    -1,    -1,    -1,    89,
      -1,    -1,    92,    93,    -1,    95,    96,    -1,    -1,    -1,
     100,   101,   102,   103,    -1,    -1,   106
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
     100,   101,   102,   103,   105,   106,   119,   120,   121,   123,
     126,   129,   130,   131,   132,   159,   160,   162,   163,   164,
     165,   166,   167,   168,   176,   177,   164,   165,   173,   188,
       0,     0,     0,     0,    53,   140,   140,    53,    53,   140,
     140,    26,   158,   188,    39,    40,    53,    55,    57,    58,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,   157,   140,   142,    34,    35,    36,    32,    33,    30,
      31,    26,    27,    28,    29,    24,    25,    23,    22,    21,
      20,    19,    16,    18,     3,    60,    63,   112,   160,    60,
     188,   120,    35,   112,     3,    34,    53,    60,   111,   170,
     171,   180,   181,   182,   183,   160,   160,   160,   169,   172,
     173,    60,    63,   112,    60,   178,   179,   173,   173,    53,
      55,   182,   183,   189,   190,   191,   194,   188,   188,   188,
      54,    54,    54,   137,   156,   137,    60,    63,    60,    63,
     156,   142,   142,   142,   143,   143,   144,   144,   145,   145,
     145,   145,   146,   146,   147,   148,   149,   150,   151,   158,
     152,   156,   112,   112,   180,   112,    26,   158,   133,   134,
     132,   165,   183,   184,     3,   111,    53,   191,   194,   180,
     181,   113,   172,    17,   174,   175,   180,   112,   112,     5,
       3,   113,   195,   192,   189,   190,   191,   194,     3,    54,
      28,   142,     3,    54,    56,    17,   122,    86,   113,   127,
     128,   188,   107,    81,   111,   136,   158,   113,   165,   183,
     171,    54,   154,   155,     3,   111,    17,   158,   179,     4,
     161,   162,   164,   165,   185,   186,   187,   196,   154,   185,
     193,    54,    60,    63,    53,   156,   155,     5,    60,   111,
     113,   128,    60,   112,    53,   111,   175,   154,   180,   182,
     183,   189,   160,   160,   160,     3,    54,    56,    54,    54,
     158,   156,   194,   111,    28,   134,   158,     4,   187,    54,
     111,    17,   111,   112,   113,    54,   194,    60,   113,   124,
     125,   112,   135,   136,   158,   111,     5,   111,   113,   125,
     134,    75,   156,   111,   113,   135,   111
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
#line 217 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { return (dt_node_root((yyvsp[(1) - (2)].l_node))); }
    break;

  case 3:
#line 218 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { return (dt_node_root((yyvsp[(1) - (2)].l_node))); }
    break;

  case 4:
#line 219 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { return (dt_node_root((yyvsp[(1) - (2)].l_node))); }
    break;

  case 5:
#line 222 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_node) = NULL; }
    break;

  case 6:
#line 223 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_node) = (yyvsp[(2) - (2)].l_node); }
    break;

  case 7:
#line 226 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_node) = dt_node_program(NULL); }
    break;

  case 8:
#line 227 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_node) = dt_node_program((yyvsp[(2) - (2)].l_node)); }
    break;

  case 9:
#line 230 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_node) = NULL; }
    break;

  case 10:
#line 231 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_node) = (dt_node_t *)(yyvsp[(2) - (2)].l_decl); }
    break;

  case 12:
#line 236 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_node) = LINK((yyvsp[(1) - (2)].l_node), (yyvsp[(2) - (2)].l_node)); }
    break;

  case 18:
#line 249 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { dt_scope_push(NULL, CTF_ERR); }
    break;

  case 19:
#line 250 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
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
		}
    break;

  case 20:
#line 265 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = dt_node_xlator((yyvsp[(2) - (10)].l_decl), (yyvsp[(4) - (10)].l_decl), (yyvsp[(5) - (10)].l_str), (yyvsp[(8) - (10)].l_node));
		}
    break;

  case 21:
#line 269 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = dt_node_xlator((yyvsp[(2) - (9)].l_decl), (yyvsp[(4) - (9)].l_decl), (yyvsp[(5) - (9)].l_str), NULL);
		}
    break;

  case 23:
#line 276 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_node) = LINK((yyvsp[(1) - (2)].l_node),(yyvsp[(2) - (2)].l_node)); }
    break;

  case 24:
#line 280 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = dt_node_member(NULL, (yyvsp[(1) - (4)].l_str), (yyvsp[(3) - (4)].l_node));
		}
    break;

  case 25:
#line 286 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = dt_node_provider((yyvsp[(2) - (6)].l_str), (yyvsp[(4) - (6)].l_node));
		}
    break;

  case 26:
#line 289 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = dt_node_provider((yyvsp[(2) - (5)].l_str), NULL);
		}
    break;

  case 28:
#line 296 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_node) = LINK((yyvsp[(1) - (2)].l_node), (yyvsp[(2) - (2)].l_node)); }
    break;

  case 29:
#line 300 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = dt_node_probe((yyvsp[(2) - (6)].l_str), 2, (yyvsp[(3) - (6)].l_node), (yyvsp[(5) - (6)].l_node));
		}
    break;

  case 30:
#line 303 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = dt_node_probe((yyvsp[(2) - (4)].l_str), 1, (yyvsp[(3) - (4)].l_node), NULL);
		}
    break;

  case 31:
#line 310 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
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
		}
    break;

  case 32:
#line 327 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = dt_node_clause((yyvsp[(1) - (4)].l_node), NULL, (yyvsp[(3) - (4)].l_node));
			yybegin(YYS_CLAUSE);
		}
    break;

  case 33:
#line 331 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			dnerror((yyvsp[(3) - (4)].l_node), D_SYNTAX, "expected actions { } following "
			    "probe description and predicate\n");
		}
    break;

  case 34:
#line 336 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = dt_node_clause((yyvsp[(1) - (7)].l_node), (yyvsp[(3) - (7)].l_node), (yyvsp[(6) - (7)].l_node));
			yybegin(YYS_CLAUSE);
		}
    break;

  case 35:
#line 343 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { yybegin(YYS_EXPR); (yyval.l_node) = (yyvsp[(1) - (1)].l_node); }
    break;

  case 37:
#line 348 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = LINK((yyvsp[(1) - (3)].l_node), (yyvsp[(3) - (3)].l_node));
		}
    break;

  case 38:
#line 354 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_node) = dt_node_pdesc_by_name((yyvsp[(1) - (1)].l_str)); }
    break;

  case 39:
#line 355 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_node) = dt_node_pdesc_by_id((yyvsp[(1) - (1)].l_int)); }
    break;

  case 40:
#line 358 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_node) = NULL; }
    break;

  case 41:
#line 359 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_node) = LINK((yyvsp[(1) - (2)].l_node), (yyvsp[(2) - (2)].l_node)); }
    break;

  case 42:
#line 363 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_node) = (yyvsp[(1) - (1)].l_node); }
    break;

  case 43:
#line 364 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = LINK((yyvsp[(1) - (2)].l_node), dt_node_statement((yyvsp[(2) - (2)].l_node)));
		}
    break;

  case 45:
#line 371 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_node) = (yyvsp[(2) - (3)].l_node); }
    break;

  case 46:
#line 373 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_node) = NULL; }
    break;

  case 47:
#line 374 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_node) = dt_node_statement((yyvsp[(1) - (2)].l_node)); }
    break;

  case 48:
#line 375 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = dt_node_if((yyvsp[(3) - (5)].l_node), (yyvsp[(5) - (5)].l_node), NULL);
		}
    break;

  case 49:
#line 379 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = dt_node_if((yyvsp[(3) - (7)].l_node), (yyvsp[(5) - (7)].l_node), (yyvsp[(7) - (7)].l_node));
		}
    break;

  case 51:
#line 386 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = LINK((yyvsp[(1) - (3)].l_node), (yyvsp[(3) - (3)].l_node));
		}
    break;

  case 52:
#line 392 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_node) = dt_node_ident((yyvsp[(1) - (1)].l_str)); }
    break;

  case 53:
#line 393 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_node) = dt_node_ident((yyvsp[(1) - (1)].l_str)); }
    break;

  case 54:
#line 394 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_node) = dt_node_int((yyvsp[(1) - (1)].l_int)); }
    break;

  case 55:
#line 395 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_node) = dt_node_string((yyvsp[(1) - (1)].l_str)); }
    break;

  case 56:
#line 396 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_node) = dt_node_ident(DUP("self")); }
    break;

  case 57:
#line 397 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_node) = dt_node_ident(DUP("this")); }
    break;

  case 58:
#line 398 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_node) = (yyvsp[(2) - (3)].l_node); }
    break;

  case 60:
#line 404 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_LBRAC, (yyvsp[(1) - (4)].l_node), (yyvsp[(3) - (4)].l_node));
		}
    break;

  case 61:
#line 407 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = dt_node_func((yyvsp[(1) - (3)].l_node), NULL);
		}
    break;

  case 62:
#line 411 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = dt_node_func((yyvsp[(1) - (4)].l_node), (yyvsp[(3) - (4)].l_node));
		}
    break;

  case 63:
#line 414 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_DOT, (yyvsp[(1) - (3)].l_node), dt_node_ident((yyvsp[(3) - (3)].l_str)));
		}
    break;

  case 64:
#line 417 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_DOT, (yyvsp[(1) - (3)].l_node), dt_node_ident((yyvsp[(3) - (3)].l_str)));
		}
    break;

  case 65:
#line 420 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_PTR, (yyvsp[(1) - (3)].l_node), dt_node_ident((yyvsp[(3) - (3)].l_str)));
		}
    break;

  case 66:
#line 423 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_PTR, (yyvsp[(1) - (3)].l_node), dt_node_ident((yyvsp[(3) - (3)].l_str)));
		}
    break;

  case 67:
#line 426 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = OP1(DT_TOK_POSTINC, (yyvsp[(1) - (2)].l_node));
		}
    break;

  case 68:
#line 429 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = OP1(DT_TOK_POSTDEC, (yyvsp[(1) - (2)].l_node));
		}
    break;

  case 69:
#line 433 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = dt_node_offsetof((yyvsp[(3) - (6)].l_decl), (yyvsp[(5) - (6)].l_str));
		}
    break;

  case 70:
#line 437 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = dt_node_offsetof((yyvsp[(3) - (6)].l_decl), (yyvsp[(5) - (6)].l_str));
		}
    break;

  case 71:
#line 441 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_XLATE, dt_node_type((yyvsp[(3) - (7)].l_decl)), (yyvsp[(6) - (7)].l_node));
		}
    break;

  case 73:
#line 448 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_node) = OP1(DT_TOK_PREINC, (yyvsp[(2) - (2)].l_node)); }
    break;

  case 74:
#line 449 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_node) = OP1(DT_TOK_PREDEC, (yyvsp[(2) - (2)].l_node)); }
    break;

  case 75:
#line 450 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_node) = OP1((yyvsp[(1) - (2)].l_tok), (yyvsp[(2) - (2)].l_node)); }
    break;

  case 76:
#line 451 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_node) = OP1(DT_TOK_SIZEOF, (yyvsp[(2) - (2)].l_node)); }
    break;

  case 77:
#line 452 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = OP1(DT_TOK_SIZEOF, dt_node_type((yyvsp[(3) - (4)].l_decl)));
		}
    break;

  case 78:
#line 455 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = OP1(DT_TOK_STRINGOF, (yyvsp[(2) - (2)].l_node));
		}
    break;

  case 79:
#line 460 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_tok) = DT_TOK_ADDROF; }
    break;

  case 80:
#line 461 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_tok) = DT_TOK_DEREF; }
    break;

  case 81:
#line 462 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_tok) = DT_TOK_IPOS; }
    break;

  case 82:
#line 463 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_tok) = DT_TOK_INEG; }
    break;

  case 83:
#line 464 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_tok) = DT_TOK_BNEG; }
    break;

  case 84:
#line 465 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_tok) = DT_TOK_LNEG; }
    break;

  case 86:
#line 470 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_LPAR, dt_node_type((yyvsp[(2) - (4)].l_decl)), (yyvsp[(4) - (4)].l_node));
		}
    break;

  case 88:
#line 477 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_MUL, (yyvsp[(1) - (3)].l_node), (yyvsp[(3) - (3)].l_node));
		}
    break;

  case 89:
#line 480 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_DIV, (yyvsp[(1) - (3)].l_node), (yyvsp[(3) - (3)].l_node));
		}
    break;

  case 90:
#line 483 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_MOD, (yyvsp[(1) - (3)].l_node), (yyvsp[(3) - (3)].l_node));
		}
    break;

  case 92:
#line 490 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_ADD, (yyvsp[(1) - (3)].l_node), (yyvsp[(3) - (3)].l_node));
		}
    break;

  case 93:
#line 493 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_SUB, (yyvsp[(1) - (3)].l_node), (yyvsp[(3) - (3)].l_node));
		}
    break;

  case 95:
#line 500 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_LSH, (yyvsp[(1) - (3)].l_node), (yyvsp[(3) - (3)].l_node));
		}
    break;

  case 96:
#line 503 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_RSH, (yyvsp[(1) - (3)].l_node), (yyvsp[(3) - (3)].l_node));
		}
    break;

  case 98:
#line 510 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_LT, (yyvsp[(1) - (3)].l_node), (yyvsp[(3) - (3)].l_node));
		}
    break;

  case 99:
#line 513 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_GT, (yyvsp[(1) - (3)].l_node), (yyvsp[(3) - (3)].l_node));
		}
    break;

  case 100:
#line 516 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_LE, (yyvsp[(1) - (3)].l_node), (yyvsp[(3) - (3)].l_node));
		}
    break;

  case 101:
#line 519 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_GE, (yyvsp[(1) - (3)].l_node), (yyvsp[(3) - (3)].l_node));
		}
    break;

  case 103:
#line 526 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_EQU, (yyvsp[(1) - (3)].l_node), (yyvsp[(3) - (3)].l_node));
		}
    break;

  case 104:
#line 529 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_NEQ, (yyvsp[(1) - (3)].l_node), (yyvsp[(3) - (3)].l_node));
		}
    break;

  case 106:
#line 536 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_BAND, (yyvsp[(1) - (3)].l_node), (yyvsp[(3) - (3)].l_node));
		}
    break;

  case 108:
#line 543 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_XOR, (yyvsp[(1) - (3)].l_node), (yyvsp[(3) - (3)].l_node));
		}
    break;

  case 110:
#line 550 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_BOR, (yyvsp[(1) - (3)].l_node), (yyvsp[(3) - (3)].l_node));
		}
    break;

  case 112:
#line 557 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_LAND, (yyvsp[(1) - (3)].l_node), (yyvsp[(3) - (3)].l_node));
		}
    break;

  case 114:
#line 564 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_LXOR, (yyvsp[(1) - (3)].l_node), (yyvsp[(3) - (3)].l_node));
		}
    break;

  case 116:
#line 571 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_LOR, (yyvsp[(1) - (3)].l_node), (yyvsp[(3) - (3)].l_node));
		}
    break;

  case 119:
#line 582 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_node) = OP3((yyvsp[(1) - (5)].l_node), (yyvsp[(3) - (5)].l_node), (yyvsp[(5) - (5)].l_node)); }
    break;

  case 121:
#line 587 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = OP2((yyvsp[(2) - (3)].l_tok), (yyvsp[(1) - (3)].l_node), (yyvsp[(3) - (3)].l_node));
		}
    break;

  case 122:
#line 593 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_tok) = DT_TOK_ASGN; }
    break;

  case 123:
#line 594 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_tok) = DT_TOK_MUL_EQ; }
    break;

  case 124:
#line 595 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_tok) = DT_TOK_DIV_EQ; }
    break;

  case 125:
#line 596 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_tok) = DT_TOK_MOD_EQ; }
    break;

  case 126:
#line 597 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_tok) = DT_TOK_ADD_EQ; }
    break;

  case 127:
#line 598 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_tok) = DT_TOK_SUB_EQ; }
    break;

  case 128:
#line 599 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_tok) = DT_TOK_LSH_EQ; }
    break;

  case 129:
#line 600 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_tok) = DT_TOK_RSH_EQ; }
    break;

  case 130:
#line 601 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_tok) = DT_TOK_AND_EQ; }
    break;

  case 131:
#line 602 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_tok) = DT_TOK_XOR_EQ; }
    break;

  case 132:
#line 603 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_tok) = DT_TOK_OR_EQ; }
    break;

  case 134:
#line 607 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = OP2(DT_TOK_COMMA, (yyvsp[(1) - (3)].l_node), (yyvsp[(3) - (3)].l_node));
		}
    break;

  case 135:
#line 612 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = dt_node_decl();
			dt_decl_free(dt_decl_pop());
			yybegin(YYS_CLAUSE);
		}
    break;

  case 136:
#line 617 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = (yyvsp[(2) - (3)].l_node);
			dt_decl_free(dt_decl_pop());
			yybegin(YYS_CLAUSE);
		}
    break;

  case 149:
#line 643 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { dt_decl_class(DT_DC_AUTO); }
    break;

  case 150:
#line 644 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { dt_decl_class(DT_DC_REGISTER); }
    break;

  case 151:
#line 645 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { dt_decl_class(DT_DC_STATIC); }
    break;

  case 152:
#line 646 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { dt_decl_class(DT_DC_EXTERN); }
    break;

  case 153:
#line 647 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { dt_decl_class(DT_DC_TYPEDEF); }
    break;

  case 155:
#line 652 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { dt_decl_class(DT_DC_SELF); }
    break;

  case 156:
#line 653 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { dt_decl_class(DT_DC_THIS); }
    break;

  case 157:
#line 656 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_decl) = dt_decl_spec(CTF_K_INTEGER, DUP("void")); }
    break;

  case 158:
#line 657 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_decl) = dt_decl_spec(CTF_K_INTEGER, DUP("char")); }
    break;

  case 159:
#line 658 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_decl) = dt_decl_attr(DT_DA_SHORT); }
    break;

  case 160:
#line 659 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_decl) = dt_decl_spec(CTF_K_INTEGER, DUP("int")); }
    break;

  case 161:
#line 660 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_decl) = dt_decl_attr(DT_DA_LONG); }
    break;

  case 162:
#line 661 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_decl) = dt_decl_spec(CTF_K_FLOAT, DUP("float")); }
    break;

  case 163:
#line 662 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_decl) = dt_decl_spec(CTF_K_FLOAT, DUP("double")); }
    break;

  case 164:
#line 663 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_decl) = dt_decl_attr(DT_DA_SIGNED); }
    break;

  case 165:
#line 664 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_decl) = dt_decl_attr(DT_DA_UNSIGNED); }
    break;

  case 166:
#line 665 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_decl) = dt_decl_attr(DT_DA_USER); }
    break;

  case 167:
#line 666 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_decl) = dt_decl_spec(CTF_K_TYPEDEF, DUP("string"));
		}
    break;

  case 168:
#line 669 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_decl) = dt_decl_spec(CTF_K_TYPEDEF, (yyvsp[(1) - (1)].l_str)); }
    break;

  case 171:
#line 674 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_decl) = dt_decl_attr(DT_DA_CONST); }
    break;

  case 172:
#line 675 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_decl) = dt_decl_attr(DT_DA_RESTRICT); }
    break;

  case 173:
#line 676 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_decl) = dt_decl_attr(DT_DA_VOLATILE); }
    break;

  case 174:
#line 680 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_decl) = dt_scope_pop();
		}
    break;

  case 175:
#line 683 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_decl) = dt_decl_spec((yyvsp[(1) - (2)].l_tok), (yyvsp[(2) - (2)].l_str)); }
    break;

  case 176:
#line 684 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_decl) = dt_decl_spec((yyvsp[(1) - (2)].l_tok), (yyvsp[(2) - (2)].l_str)); }
    break;

  case 177:
#line 688 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { dt_decl_sou((yyvsp[(1) - (2)].l_tok), NULL); }
    break;

  case 178:
#line 689 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { dt_decl_sou((yyvsp[(1) - (3)].l_tok), (yyvsp[(2) - (3)].l_str)); }
    break;

  case 179:
#line 690 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { dt_decl_sou((yyvsp[(1) - (3)].l_tok), (yyvsp[(2) - (3)].l_str)); }
    break;

  case 180:
#line 694 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_tok) = CTF_K_STRUCT; }
    break;

  case 181:
#line 695 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_tok) = CTF_K_UNION; }
    break;

  case 185:
#line 705 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = LINK((yyvsp[(1) - (3)].l_node), (yyvsp[(3) - (3)].l_node));
		}
    break;

  case 186:
#line 711 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = dt_node_decl();
			dt_decl_reset();
		}
    break;

  case 187:
#line 718 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			dt_decl_free(dt_decl_pop());
		}
    break;

  case 189:
#line 725 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_decl) = (yyvsp[(2) - (2)].l_decl); }
    break;

  case 191:
#line 727 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_decl) = (yyvsp[(2) - (2)].l_decl); }
    break;

  case 194:
#line 736 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { dt_decl_member(NULL); }
    break;

  case 195:
#line 737 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { dt_decl_member((yyvsp[(2) - (2)].l_node)); }
    break;

  case 196:
#line 738 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			dt_decl_member((yyvsp[(3) - (3)].l_node));
		}
    break;

  case 197:
#line 744 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_decl) = dt_scope_pop(); }
    break;

  case 198:
#line 745 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_decl) = dt_decl_spec(CTF_K_ENUM, (yyvsp[(2) - (2)].l_str)); }
    break;

  case 199:
#line 746 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_decl) = dt_decl_spec(CTF_K_ENUM, (yyvsp[(2) - (2)].l_str)); }
    break;

  case 200:
#line 750 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { dt_decl_enum(NULL); }
    break;

  case 201:
#line 751 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { dt_decl_enum((yyvsp[(2) - (3)].l_str)); }
    break;

  case 202:
#line 752 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { dt_decl_enum((yyvsp[(2) - (3)].l_str)); }
    break;

  case 205:
#line 760 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { dt_decl_enumerator((yyvsp[(1) - (1)].l_str), NULL); }
    break;

  case 206:
#line 761 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			dt_decl_enumerator((yyvsp[(1) - (3)].l_str), (yyvsp[(3) - (3)].l_node));
		}
    break;

  case 209:
#line 771 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_decl) = dt_decl_ident((yyvsp[(1) - (1)].l_str)); }
    break;

  case 210:
#line 772 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_decl) = (yyvsp[(2) - (3)].l_decl); }
    break;

  case 211:
#line 773 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { dt_decl_array((yyvsp[(2) - (2)].l_node)); }
    break;

  case 212:
#line 774 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { dt_decl_func((yyvsp[(1) - (2)].l_decl), (yyvsp[(2) - (2)].l_node)); }
    break;

  case 213:
#line 777 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { dt_decl_top()->dd_attr |= DT_DA_PAREN; }
    break;

  case 214:
#line 780 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_decl) = dt_decl_ptr(); }
    break;

  case 215:
#line 781 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_decl) = dt_decl_ptr(); }
    break;

  case 216:
#line 782 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_decl) = dt_decl_ptr(); }
    break;

  case 217:
#line 783 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_decl) = dt_decl_ptr(); }
    break;

  case 219:
#line 788 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_decl) = (yyvsp[(2) - (2)].l_decl); }
    break;

  case 221:
#line 793 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_node) = dt_node_vatype(); }
    break;

  case 222:
#line 794 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = LINK((yyvsp[(1) - (3)].l_node), dt_node_vatype());
		}
    break;

  case 224:
#line 800 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = LINK((yyvsp[(1) - (3)].l_node), (yyvsp[(3) - (3)].l_node));
		}
    break;

  case 225:
#line 806 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = dt_node_type(NULL);
		}
    break;

  case 226:
#line 809 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = dt_node_type(NULL);
		}
    break;

  case 227:
#line 812 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_node) = dt_node_type(NULL);
		}
    break;

  case 228:
#line 817 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_decl) = dt_decl_pop();
		}
    break;

  case 229:
#line 820 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			(yyval.l_decl) = dt_decl_pop();
		}
    break;

  case 233:
#line 832 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_decl) = (yyvsp[(2) - (3)].l_decl); }
    break;

  case 234:
#line 833 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { dt_decl_array((yyvsp[(2) - (2)].l_node)); }
    break;

  case 235:
#line 834 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { dt_decl_array((yyvsp[(1) - (1)].l_node)); (yyval.l_decl) = NULL; }
    break;

  case 236:
#line 835 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { dt_decl_func((yyvsp[(1) - (2)].l_decl), (yyvsp[(2) - (2)].l_node)); }
    break;

  case 237:
#line 836 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { dt_decl_func(NULL, (yyvsp[(1) - (1)].l_node)); }
    break;

  case 238:
#line 839 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { dt_scope_push(NULL, CTF_ERR); }
    break;

  case 239:
#line 840 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			dt_scope_pop();
			(yyval.l_node) = (yyvsp[(3) - (4)].l_node);
		}
    break;

  case 240:
#line 847 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_node) = NULL; }
    break;

  case 241:
#line 848 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_node) = (yyvsp[(1) - (1)].l_node); }
    break;

  case 242:
#line 849 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_node) = (yyvsp[(1) - (1)].l_node); }
    break;

  case 243:
#line 852 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { dt_scope_push(NULL, CTF_ERR); }
    break;

  case 244:
#line 853 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    {
			dt_scope_pop();
			(yyval.l_node) = (yyvsp[(3) - (4)].l_node);
		}
    break;

  case 245:
#line 860 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_node) = NULL; }
    break;

  case 246:
#line 861 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"
    { (yyval.l_node) = (yyvsp[(1) - (1)].l_node); }
    break;


/* Line 1267 of yacc.c.  */
#line 3215 "/Users/andrewhyatt/Library/Developer/Xcode/DerivedData/dtrace-dovtkuhnwoydvocwsxkptypjbyik/Build/Intermediates/dtrace.build/Release/libdtrace.so.build/DerivedSources/y.tab.c"
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


#line 864 "/Users/andrewhyatt/Downloads/dtrace-209.50.12/libdtrace/dt_grammar.y"


