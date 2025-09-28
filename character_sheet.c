#include <stdio.h>
#include <string.h>

char userInput[100];

int main() {
    printf("Starting program...\n");
    printf("(Enter 'exit' anytime to exit program)\n\n");
    printf("Initializing character sheet...\n\n");
    while (1 != 0) {
        fgets(userInput, 100, stdin);
        userInput[strcspn(userInput, "\n")] = 0;
        if (strcmp(userInput, "exit") == 0) {
            break;
        }
    }
    printf("\nProgram complete.\n\n");
    return 0;
}