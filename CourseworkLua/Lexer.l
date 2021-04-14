%{
#include "Parser.tab.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h> //va_list

#define noyywrap
#define DEBUG

#define fileno _fileno

#define YY_USER_ACTION \
yylloc.first_line = yylloc.last_line; \
yylloc.first_column = yylloc.last_column; \
for(int i = 0; yytext[i] != '\0'; i++) { \
if(yytext[i] == '\n') { \
yylloc.last_line++; \
yylloc.last_column = 0; \
} \
else { \
yylloc.last_column++; \
} \
}

void DEBUGPRINT(char* format, ...) // должен быть хотя бы один аргумент
{
	#ifdef DEBUG 
		va_list args;
		va_start(args, format);		
		vprintf(format, args);
		va_end(args);
	#endif
}


int left_side = 0;
int right_side = 0;
/* TEST IT SECTION */

//UtfEscape
//LONGSTR_LVL


/*TODO LIST!!!*/

//To do LONGSTR
//LONGSTR_LVL add the laziness of the | ' [' .*? ']'

//(...) deleted


%}

%option noyywrap yylineno
%x NESTEDSTR1 MANYLINESCOMMENT

Digit					[0-9]
HexDigit				[0-9a-fA-F]
Exponent				[eE][+-]?[0-9]+
HexExponent				[pP][+-]?[0-9]+
DecimalEscape			("\\"{Digit})|("\\"{Digit}{Digit})|("\\"[0-2]{Digit}{Digit})
HexEscape				"\\""x"{HexDigit}{HexDigit}
UtfEscape				"\\""u{"{HexDigit}+"}" 
EscapeSequence			("\\"[abfnrtvz\"\'\\])|(\\(\r)?\n)|{DecimalEscape}|{HexEscape}|{UtfEscape}
LONGSTR_LVL1			(=){LONGSTR_LVL1}(=)

%%
[ \t\n\r\f\v\a]			/* Ignore */


"{"						{ DEBUGPRINT("\nLex: FUNC_BLOCK: %s", yytext); 	return *yytext; } /* Block */
"}"						{ DEBUGPRINT("\nLex: FUNC_BLOCK: %s", yytext); 	return *yytext; }
"("						{ DEBUGPRINT("\nLex: ARGS_BLOCK: %s", yytext); 	return *yytext; }
")"						{ DEBUGPRINT("\nLex: ARGS_BLOCK: %s", yytext); 	return *yytext; }


"["						{ DEBUGPRINT("\nLex: ELEM_BLOCK: %s", yytext); 	return *yytext; } /* Element */
"]"						{ DEBUGPRINT("\nLex: ELEM_BLOCK: %s", yytext); 	return *yytext; }
"<" 					{ DEBUGPRINT("\nLex: MORE & ATTR: %s", yytext); return *yytext; }
">"						{ DEBUGPRINT("\nLex: LESS & ATTR: %s", yytext); return *yytext; }
"."						{ DEBUGPRINT("\nLex: DOT: %s", yytext); 		return *yytext; }


"..."					{ DEBUGPRINT("\nLex: DOTS: %s", yytext);        return DOTS; } /* Args and separators */
","						{ DEBUGPRINT("\nLex: COMMA: %s", yytext);       return *yytext; }
";" 					{ DEBUGPRINT("\nLex: SEMICOLON: %s", yytext);   return *yytext; }
":" 					{ DEBUGPRINT("\nLex: COLON: %s", yytext);   	return *yytext; }
"::" 					{ DEBUGPRINT("\nLex: LABEL_DFE: %s", yytext);   return LABEL_DEF; }


"do"            		{ DEBUGPRINT("\nLex: DO: %s", yytext); 			return DO; }	/* Looping */
"while"         		{ DEBUGPRINT("\nLex: WHILE: %s", yytext); 		return WHILE; }
"for"           		{ DEBUGPRINT("\nLex: FOR: %s", yytext); 		return FOR; }
"until"         		{ DEBUGPRINT("\nLex: UNTIL: %s", yytext); 		return UNTIL; }
"repeat"        		{ DEBUGPRINT("\nLex: REPEAT: %s", yytext); 		return REPEAT; }
"end"           		{ DEBUGPRINT("\nLex: END: %s", yytext); 		return END; }
"goto" 					{ DEBUGPRINT("\nLex: GOTO: %s", yytext); 		return GOTO; }


"if"					{ DEBUGPRINT("\nLex: IF: %s", yytext); 			return IF; }	/* Statements */
"then"					{ DEBUGPRINT("\nLex: THEN: %s", yytext); 		return THEN; }
"elseif"				{ DEBUGPRINT("\nLex: ELSEIF: %s", yytext); 		return ELSEIF; }
"else"					{ DEBUGPRINT("\nLex: ELSE: %s", yytext); 		return ELSE; }


"local"					{ DEBUGPRINT("\nLex: LOCAL: %s", yytext); 		return LOCAL; } /* Values */


"function"				{ DEBUGPRINT("\nLex: ELSE: %s", yytext); 		return FUNCTION; } /* Function */
"return"				{ DEBUGPRINT("\nLex: RETURN: %s", yytext); 		return RETURN; }
"break"					{ DEBUGPRINT("\nLex: BREAK: %s", yytext); 		return BREAK; }


"-"						{ DEBUGPRINT("\nLex: MINUS: %s", yytext); 			return MINUS; } /* UNOP and BINOP */ 

"+"						{ DEBUGPRINT("\nLex: PLUS: %s", yytext); 			return BINOP; } /* Digit operators */
"*"						{ DEBUGPRINT("\nLex: TIMES: %s", yytext); 			return BINOP; }
"/"						{ DEBUGPRINT("\nLex: DIVIDE: %s", yytext); 			return BINOP; }
"^"						{ DEBUGPRINT("\nLex: POWER: %s", yytext); 			return BINOP; }
"%"						{ DEBUGPRINT("\nLex: MODULO: %s", yytext);      	return BINOP; }


"=" 					{ DEBUGPRINT("\nLex: ASSIGN: %s", yytext);			return *yytext; } /* Combined binops */
"+="					{ DEBUGPRINT("\nLex: PLUS_ASSIGN: %s", yytext); 	return BINOP; }
"-="					{ DEBUGPRINT("\nLex: MINUS_ASSIGN: %s", yytext); 	return BINOP; }
"*="					{ DEBUGPRINT("\nLex: TIMES_ASSIGN: %s", yytext); 	return BINOP; }
"/="					{ DEBUGPRINT("\nLex: DIVIDE_ASSIGN: %s", yytext); 	return BINOP; }
"^="					{ DEBUGPRINT("\nLex: POW_ASSIGN: %s", yytext); 		return BINOP; }
"%="					{ DEBUGPRINT("\nLex: MODULO_ASSIGN: %s", yytext);   return BINOP; }


"=="					{ DEBUGPRINT("\nLex: EQUALS: %s", yytext);      	return BINOP; } /* Logic binary operators */
"<="					{ DEBUGPRINT("\nLex: LESS_EQUALS: %s", yytext); 	return BINOP; }
">="					{ DEBUGPRINT("\nLex: MORE_EQUALS: %s", yytext); 	return BINOP; }
"and"					{ DEBUGPRINT("\nLex: AND: %s", yytext); 			return BINOP; }
"or"					{ DEBUGPRINT("\nLex: OR: %s", yytext); 				return BINOP; }
".."					{ DEBUGPRINT("\nLex: CONCAT: %s", yytext); 			return BINOP; }


"&" 					{ DEBUGPRINT("\nLex: AND: %s", yytext); 			return BINOP; } /* Bitwise binary operators */
"|"						{ DEBUGPRINT("\nLex: OR: %s", yytext); 				return BINOP; }
"<<"					{ DEBUGPRINT("\nLex: SHIFT_RIGHT: %s", yytext); 	return BINOP; }
">>"					{ DEBUGPRINT("\nLex: SHIFT_LEFT: %s", yytext); 		return BINOP; } /* XOR is already defined */


"not" 					{ DEBUGPRINT("\nLex: NOT: %s", yytext); 			return UNOP; } /* Unary operators */
"#"						{ DEBUGPRINT("\nLex: #: %s", yytext); 				return UNOP; }
"~"						{ DEBUGPRINT("\nLex: MORE_EQUALS: %s", yytext); 	return UNOP; }


"nil"					{ DEBUGPRINT("\nLex: operation NIL: %s", yytext); 	return NIL; } /* Keyworded values */
"false"					{ DEBUGPRINT("\nLex: operation FALSE: %s", yytext); return FALSE; }
"true"					{ DEBUGPRINT("\nLex: operation TRUE: %s", yytext); 	return TRUE; }


[a-zA-Z_][a-zA-Z_0-9]*	{ DEBUGPRINT("\nLex: NAME: %s", yytext); 			return NAME; }


{Digit}+				{ DEBUGPRINT("\nLex: Numeral INT: %s", yytext);		return INT; }
"0"[xX]{HexDigit}+		{ DEBUGPRINT("\nLex: Numeral HEX: %s", yytext); 	return HEX; }

{Digit}+"."{Digit}*{Exponent}?						{ DEBUGPRINT("\nLex: Numeral FLOAT_1: %s", yytext); return FLOAT; }
"."{Digit}+{Exponent}?								{ DEBUGPRINT("\nLex: Numeral FLOAT_2: %s", yytext); return FLOAT; }
{Digit}+{Exponent}									{ DEBUGPRINT("\nLex: Numeral FLOAT_3: %s", yytext); return FLOAT; }

"0"[xX]{HexDigit}+"."{HexDigit}*{HexExponent}?		{ DEBUGPRINT("\nLex: Numeral HEX_FLOAT_1: %s", yytext); return HEX_FLOAT; }
"0"[xX]"."{HexDigit}+(HexExponent)?					{ DEBUGPRINT("\nLex: Numeral HEX_FLOAT_2: %s", yytext); return HEX_FLOAT; }
"0"[xX]{HexDigit}+{HexExponent}						{ DEBUGPRINT("\nLex: Numeral HEX_FLOAT_3: %s", yytext); return HEX_FLOAT; }

"\""([^\\\"]|{EscapeSequence})*"\""					{ DEBUGPRINT("\nLex: TWOQSTRING: %s", yytext); return TWOQSTRING; }
"'"([^\\\']|{EscapeSequence})*"'"					{ DEBUGPRINT("\nLex: ONEQSTRING: %s", yytext); return ONEQSTRING; }

"--["(=)*"["										{	left_side = strlen(yytext) - 2;
														DEBUGPRINT("\nLex: LINES_COMMENT count left: %d, %s", left_side, yytext);
														BEGIN(MANYLINESCOMMENT); 
													}
<MANYLINESCOMMENT>.									{ DEBUGPRINT("\nLex: In_comment1 %s", yytext);   }
<MANYLINESCOMMENT>\n								{ DEBUGPRINT("\nLex: In_comment2 %s", yytext);   }
<MANYLINESCOMMENT>"]"(=)*"]"						{	right_side = strlen(yytext);
														DEBUGPRINT("\nLex: LINES_COMMENT count right: %d, %s", right_side, yytext);
														BEGIN(INITIAL);
														if (right_side == left_side)
														{ /* ignore */ }
														else { DEBUGPRINT("\nLex: incorrect many_lines_comment"); exit(-20); }  
													}		

"--"([^[]*|EOF)										{ DEBUGPRINT("\nLex: ONELINE_comment: %s", yytext);/* one line comment */}

"["(=)*"["											{	left_side = strlen(yytext);  
														DEBUGPRINT("\nLex: LONG_STR count left: %d, %s", left_side, yytext); 
														BEGIN(NESTEDSTR1);
													}
<NESTEDSTR1>.										{ }
<NESTEDSTR1>\n										{ }
<NESTEDSTR1>"]"(=)*"]"								{	right_side = strlen(yytext);  
														DEBUGPRINT("\nLex: LONG_STR count right: %d, %s", right_side, yytext); 
														BEGIN(INITIAL); 
														if (right_side == left_side) return LONGSTRING;
													}
.						{
							DEBUGPRINT("\nLex: unknown: %s", yytext);
							return yytext[0]; 
						}

%%