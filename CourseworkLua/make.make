all: Lexer.l Parser.y main.cpp
	lex Lexer.l
	bison -dt -v Parser.y
	cc lex.yy.c Parser.tab.c main.cpp