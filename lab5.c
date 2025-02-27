// C Program to Check if a Given Identifier is Valid
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isValidIdentifier(char *str) {
    if (!isalpha(str[0]) && str[0] != '_') return 0;

    for (int i = 1; i < strlen(str); i++) {
        if (!isalnum(str[i]) && str[i] != '_') return 0;
    }
    return 1;
}

int main() {
    char str[20];
    printf("Enter an identifier: ");
    scanf("%s", str);

    if (isValidIdentifier(str))
        printf("Valid identifier\n");
    else
        printf("Invalid identifier\n");

    return 0;
}
