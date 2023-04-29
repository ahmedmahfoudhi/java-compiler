flex exemple.lex
bison -d exemple.y
gcc exemple.tab.c lex.yy.c