// C Program to Recognize Strings Under 'a', 'a*b', and 'abb'
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool matchPattern(char *str) {
    if (strcmp(str, "a") == 0 || strcmp(str, "abb") == 0) return true;
    
    if (str[0] == 'a' && str[strlen(str) - 1] == 'b') {
        for (int i = 1; i < strlen(str) - 1; i++) {
            if (str[i] != 'a') return false;
        }
        return true;
    }
    return false;
}

int main() {
    char str[20];
    printf("Enter a string: ");
    scanf("%s", str);

    if (matchPattern(str))
        printf("String matches the pattern.\n");
    else
        printf("String does not match the pattern.\n");

    return 0;
}
