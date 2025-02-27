%{
    #include<stdio.h>
    %}
    
    %option noyywrap
    
    DIGIT  [0-9]+
    ID     [a-zA-Z_][a-zA-Z0-9_]*
    OP     [+\-*/=<>]
    SPACE  [ \t\n]
    
    %%
    
    {DIGIT}    { printf("NUMBER: %s\n", yytext); }
    {ID}       { printf("IDENTIFIER: %s\n", yytext); }
    {OP}       { printf("OPERATOR: %s\n", yytext); }
    {SPACE}    { /* Ignore spaces */ }
    .          { printf("UNKNOWN: %s\n", yytext); }
    
    %%
    
    int main() {
        printf("Enter input: ");
        yylex();
        return 0;
    }
    