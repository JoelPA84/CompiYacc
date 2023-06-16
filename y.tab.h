/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     P_RESERVADA = 258,
     OPERADOR = 259,
     A_LLAVE = 260,
     C_LLAVE = 261,
     A_PARENTESIS = 262,
     C_PARENTESIS = 263,
     A_CORCHETE = 264,
     C_CORCHETE = 265,
     FIN_SENTENCIA = 266,
     TIPO_DATO = 267,
     SIMBOLOS = 268,
     P_FOR = 269,
     P_DEFINE = 270,
     P_RETURN = 271,
     LETRA = 272,
     P_INCREMENTO = 273,
     P_DECREMENTO = 274,
     NUMERO = 275,
     S_COMA = 276,
     S_MENOR = 277,
     S_MAYOR = 278,
     S_IGUAL = 279,
     S_NUMERAL = 280,
     LIBRERIAS = 281
   };
#endif
/* Tokens.  */
#define P_RESERVADA 258
#define OPERADOR 259
#define A_LLAVE 260
#define C_LLAVE 261
#define A_PARENTESIS 262
#define C_PARENTESIS 263
#define A_CORCHETE 264
#define C_CORCHETE 265
#define FIN_SENTENCIA 266
#define TIPO_DATO 267
#define SIMBOLOS 268
#define P_FOR 269
#define P_DEFINE 270
#define P_RETURN 271
#define LETRA 272
#define P_INCREMENTO 273
#define P_DECREMENTO 274
#define NUMERO 275
#define S_COMA 276
#define S_MENOR 277
#define S_MAYOR 278
#define S_IGUAL 279
#define S_NUMERAL 280
#define LIBRERIAS 281



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
