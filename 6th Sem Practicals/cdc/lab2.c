// Semantic Analyzer (Checking for Undeclared Variables in C)
#include <stdio.h>
#include <string.h>

#define MAX 100

char declaredVars[MAX][20];
int varCount = 0;

int isDeclared(char *var) {
    for (int i = 0; i < varCount; i++) {
        if (strcmp(declaredVars[i], var) == 0) return 1;
    }
    return 0;
}

void declareVar(char *var) {
    strcpy(declaredVars[varCount++], var);
}

int main() {
    char var[20];
    int choice;

    while (1) {
        printf("\n1. Declare Variable\n2. Use Variable\n3. Exit\nChoice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter variable name: ");
            scanf("%s", var);
            declareVar(var);
        } else if (choice == 2) {
            printf("Enter variable name: ");
            scanf("%s", var);
            if (isDeclared(var)) {
                printf("Variable '%s' is declared.\n", var);
            } else {
                printf("Error: Variable '%s' is not declared!\n", var);
            }
        } else {
            break;
        }
    }
    return 0;
}
