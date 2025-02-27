// C Program to Check If a String is Within a Valid Comment Section
#include <stdio.h>
#include <string.h>

int isValidComment(char *str) {
    int len = strlen(str);
    return (len >= 4 && str[0] == '/' && str[1] == '*' && str[len-2] == '*' && str[len-1] == '/');
}

int main() {
    char str[100];
    printf("Enter a comment: ");
    fgets(str, sizeof(str), stdin);

    if (isValidComment(str))
        printf("Valid comment\n");
    else
        printf("Invalid comment\n");

    return 0;
}
