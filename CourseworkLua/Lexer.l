%{
#include "Parser.tab.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h> //va_list

#define noyywrap
//#define DEBUG

#define fileno fileno

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

void DEBUGPRINT(char* format, ...) // ������ ���� ���� �� ���� ��������
{
	#ifdef DEBUG 
		va_list args;
		va_start(args, format);		
		vprintf(format, args);
		va_end(args);
	#endif
}

int parse_EscapeSequencez(void)
{
	/*
	int c = 0;
	DEBUGPRINT("before: %s", yytext);
	c = input();
	DEBUGPRINT("after: %s, %s", yytext, yytext+1);
	while (c == '\n' || c == '\t' || c == '\r')
	{
		c = input();
	}
	*/
	return 1;
}

int left_side = 0;
int right_side = 0;
int unput_character = 0;

/* TEST IT SECTION */

//UtfEscape
//LONGSTR_LVL


/*TODO LIST!!!*/

//To do LONGSTR
//LONGSTR_LVL add the laziness of the | ' [' .*? ']'

//(...) deleted


//delete n!!!!! EscapeSequence			("\\"[abfrtvz"'\\])|(\\(\r)?\n)|{DecimalEscape}|{HexEscape}|{UtfEscape}

%}

%option noyywrap yylineno
%x NESTEDSTR1 NESTEDSTR2 NESTEDSTR3 MANYLINESCOMMENT1 MANYLINESCOMMENT2 MANYLINESCOMMENT3 ONELINECOMMENT TWOQSTRING_X ONEQSTRING_X SKIP_N

Digit					[0-9]
HexDigit				[0-9a-fA-F]
Exponent				[eE][+-]?[0-9]+
HexExponent				[pP][+-]?[0-9]+
DecimalEscape			("\\"{Digit})|("\\"{Digit}{Digit})|("\\"[0-2]{Digit}{Digit})
HexEscape				"\\""x"{HexDigit}{HexDigit}
UtfEscape				"\\""u{"{HexDigit}+"}" 
EscapeSequence			("\\"[abfrntv"'\\\[\]])|(\\(\r)?\n)|{DecimalEscape}|{HexEscape}|{UtfEscape}
EscapeSequence2         "\\"[abfnrtv"'\\]|(\\(\r)?\n)|{DecimalEscape}|{HexEscape}|{UtfEscape}
EscapeSequencez			"\z"
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
"::" 					{ DEBUGPRINT("\nLex: LABEL_DEF: %s", yytext);   return LABEL_DEF; }


"do"            		{ DEBUGPRINT("\nLex: DO: %s", yytext); 			return DO; }	/* Looping */
"while"         		{ DEBUGPRINT("\nLex: WHILE: %s", yytext); 		return WHILE; }
"for"           		{ DEBUGPRINT("\nLex: FOR: %s", yytext); 		return FOR; }
"until"         		{ DEBUGPRINT("\nLex: UNTIL: %s", yytext); 		return UNTIL; }
"repeat"        		{ DEBUGPRINT("\nLex: REPEAT: %s", yytext); 		return REPEAT; }
"end"           		{ DEBUGPRINT("\nLex: END: %s", yytext); 		return END; }
"goto" 					{ DEBUGPRINT("\nLex: GOTO: %s", yytext); 		return GOTO; }
"in" 					{ DEBUGPRINT("\nLex: IN: %s", yytext); 			return IN; }


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
"//"					{ DEBUGPRINT("\nLex: FLOOR_DIVIDE: %s", yytext); 	return BINOP; }
"^"						{ DEBUGPRINT("\nLex: POWER: %s", yytext); 			return BINOP; }
"%"						{ DEBUGPRINT("\nLex: MODULO: %s", yytext);      	return BINOP; }


"=" 					{ DEBUGPRINT("\nLex: ASSIGN: %s", yytext);			return *yytext; } /* Combined binops */
"+="					{ DEBUGPRINT("\nLex: PLUS_ASSIGN: %s", yytext); 	return BINOP; }
"-="					{ DEBUGPRINT("\nLex: MINUS_ASSIGN: %s", yytext); 	return BINOP; }
"*="					{ DEBUGPRINT("\nLex: TIMES_ASSIGN: %s", yytext); 	return BINOP; }
"/="					{ DEBUGPRINT("\nLex: DIVIDE_ASSIGN: %s", yytext); 	return BINOP; }
"^="					{ DEBUGPRINT("\nLex: POW_ASSIGN: %s", yytext); 		return BINOP; }
"%="					{ DEBUGPRINT("\nLex: MODULO_ASSIGN: %s", yytext);   return BINOP; }
"~="					{ DEBUGPRINT("\nLex: NOT_ASSIGN: %s", yytext);   	return BINOP; }


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
"~"						{ DEBUGPRINT("\nLex: BINARY_NOT: %s", yytext); 		return UNOP; }


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

"\""												{ BEGIN(TWOQSTRING_X); DEBUGPRINT("\nLex: TWOQSTRING start: "); }
<TWOQSTRING_X>"\""									{ BEGIN(INITIAL); DEBUGPRINT("\nLex: TWOQSTRING end"); return TWOQSTRING;}
<TWOQSTRING_X>"\z"									{ DEBUGPRINT("\n4 - %s", yytext); unput_character = parse_EscapeSequencez(); unput(unput_character); }
<TWOQSTRING_X>{EscapeSequence}						{ DEBUGPRINT("\n1 - %s", yytext); }
<TWOQSTRING_X>\n									{ DEBUGPRINT("\n3 - %s",  yytext); DEBUGPRINT("Error with \\n"); exit(-20); }
<TWOQSTRING_X>[^\\"]								{ DEBUGPRINT("\n2 - %s", yytext); }
<TWOQSTRING_X>[\\][^z]								{ DEBUGPRINT("\nError with \\ - %s", yytext); printf("\n in line %d. %d:%d - %d:%d\n", yylineno, yylloc.first_line, yylloc.first_column, yylloc.last_line, yylloc.last_column); exit(-20);}

"'"													{ BEGIN(ONEQSTRING_X); DEBUGPRINT("\nLex: ONEQSTRING start: ");}
<ONEQSTRING_X>"'"									{ BEGIN(INITIAL); DEBUGPRINT("\nLex: TWOQSTRING end"); return ONEQSTRING;}
<TWOQSTRING_X>"\z"									{ DEBUGPRINT("\n4 - %s", yytext); unput_character = parse_EscapeSequencez(); unput(unput_character); }
<ONEQSTRING_X>{EscapeSequence}						{ DEBUGPRINT("1 - %s", yytext); }
<ONEQSTRING_X>\n									{ DEBUGPRINT("3 - %s", yytext); DEBUGPRINT("Incorrect string"); exit(-20);}
<ONEQSTRING_X>[^\\']								{ DEBUGPRINT("2 - %s", yytext); }
<ONEQSTRING_X>[\\][^z]								{ DEBUGPRINT("\nError with \\ - %s", yytext); printf("\nin line %d. %d:%d - %d:%d\n", yylineno, yylloc.first_line, yylloc.first_column, yylloc.last_line, yylloc.last_column); exit(-20);}
 
"--[=["												{ left_side = strlen(yytext) - 2; DEBUGPRINT("\nLex: LINES_COMMENT count left: %d, %s", left_side, yytext); DEBUGPRINT("\nLex: Start many_lines_comment"); BEGIN(MANYLINESCOMMENT2); }
<MANYLINESCOMMENT2>.								{ DEBUGPRINT("\nLex: In_comment1 %s", yytext);   }
<MANYLINESCOMMENT2>\n								{ DEBUGPRINT("\nLex: In_comment2 %s", yytext);   }
<MANYLINESCOMMENT2>"]=]"								{ right_side = strlen(yytext); DEBUGPRINT("\nLex: LINES_COMMENT count right: %d, %s", right_side, yytext);
														BEGIN(INITIAL);
														if (right_side == left_side)
														{ /* ignore */ }
														else { DEBUGPRINT("\nLex: incorrect many_lines_comment"); exit(-20); }
													}
"--[==["											{ left_side = strlen(yytext) - 2; DEBUGPRINT("\nLex: LINES_COMMENT count left: %d, %s", left_side, yytext); DEBUGPRINT("\nLex: Start many_lines_comment"); BEGIN(MANYLINESCOMMENT3); }
<MANYLINESCOMMENT3>.								{ DEBUGPRINT("\nLex: In_comment1 %s", yytext);   }
<MANYLINESCOMMENT3>\n								{ DEBUGPRINT("\nLex: In_comment2 %s", yytext);   }
<MANYLINESCOMMENT3>"]==]"								{ right_side = strlen(yytext); DEBUGPRINT("\nLex: LINES_COMMENT count right: %d, %s", right_side, yytext);
														BEGIN(INITIAL);
														if (right_side == left_side)
														{ /* ignore */ }
														else { DEBUGPRINT("\nLex: incorrect many_lines_comment"); exit(-20); }
													}
"--[["												{ left_side = strlen(yytext) - 2; DEBUGPRINT("\nLex: LINES_COMMENT count left: %d, %s", left_side, yytext); DEBUGPRINT("\nLex: Start many_lines_comment"); BEGIN(MANYLINESCOMMENT1); }
<MANYLINESCOMMENT1>.									{ DEBUGPRINT("\nLex: In_comment1 %s", yytext);   }
<MANYLINESCOMMENT1>\n								{ DEBUGPRINT("\nLex: In_comment2 %s", yytext);   }
<MANYLINESCOMMENT1>"]]"								{ right_side = strlen(yytext); DEBUGPRINT("\nLex: LINES_COMMENT count right: %d, %s", right_side, yytext);
														BEGIN(INITIAL);
														if (right_side == left_side)
														{ /* ignore */ }
														else { DEBUGPRINT("\nLex: incorrect many_lines_comment"); exit(-20); }
													} 

"--"												{ DEBUGPRINT("\nLex: Start ONE_lines_comment"); BEGIN(ONELINECOMMENT); }
<ONELINECOMMENT>.									{ }
<ONELINECOMMENT>\n									{ DEBUGPRINT("\nLex: Stop ONE_lines_comment"); BEGIN(INITIAL);  }

"[==["											{	left_side = strlen(yytext);  
														DEBUGPRINT("\nLex: LONG_STR count left: %d, %s", left_side, yytext); 
														BEGIN(NESTEDSTR1);
												}
<NESTEDSTR1>.									{ }
<NESTEDSTR1>\n									{ }
<NESTEDSTR1>"]==]"								{	right_side = strlen(yytext);  
														DEBUGPRINT("\nLex: LONG_STR count right: %d, %s", right_side, yytext); 
														BEGIN(INITIAL); 
														if (right_side == left_side) return LONGSTRING;
													}
"[["											{ BEGIN(NESTEDSTR2); }
<NESTEDSTR2>.									{ }
<NESTEDSTR2>\n									{ }
<NESTEDSTR2>"]]"								{ BEGIN(INITIAL); return LONGSTRING; }

"[=["											{ BEGIN(NESTEDSTR3); }
<NESTEDSTR3>.									{ }
<NESTEDSTR3>\n									{ }
<NESTEDSTR3>"]=]"								{ BEGIN(INITIAL); return LONGSTRING; }
.						{
							DEBUGPRINT("\nLex: unknown: %s", yytext);
							return yytext[0]; 
						}

%%