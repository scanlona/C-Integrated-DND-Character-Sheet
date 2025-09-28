#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

char userInput[100];

bool nameFlag = false;
bool classFlag = false;
bool exitFlag = false;
char characterName[100] = "N/A";
char characterClass[100] = "N/A";

void checkForPrintCharacterSheet() {
    if (strcmp(userInput, "character sheet") == 0) {
        printf("NAME: %s\nCLASS: %s\n\n", characterName, characterClass);
    }
}

void getCharacterName() {
    while (nameFlag == false) {
        printf("Enter your character's name!\n\n");
        printf(">");
        fgets(userInput, 100, stdin);
        userInput[strcspn(userInput, "\n")] = 0;
        if (strcmp(userInput, "character sheet") != 0 && strcmp(userInput, "exit") != 0) {
            strcpy(characterName, userInput);
            printf("You entered: %s\n", characterName);
            printf("Your character's name rules!\n\n");
        }
        checkForPrintCharacterSheet();
        if (strcmp(userInput, "exit") == 0) {
            exitFlag = true;
            break;
        }
        if (strcmp(characterName, "N/A") != 0) {
            nameFlag = true;
        }
    }
}

void getCharacterClass() {
    while (classFlag == false) {
        printf("Enter your character's class!\n\n");
        printf(">");
        fgets(userInput, 100, stdin);
        userInput[strcspn(userInput, "\n")] = 0;
        if (strcmp(userInput, "character sheet") != 0 && strcmp(userInput, "exit") != 0) {
            strcpy(characterClass, userInput);
            printf("You entered: %s\n", characterClass);
            printf("Sweet!\n\n");
        }
        checkForPrintCharacterSheet();
        if (strcmp(userInput, "exit") == 0) {
            exitFlag = true;
            break;
        }
        if (strcmp(characterClass, "N/A") != 0) {
            classFlag = true;
        }
    }
}

int main() {
    printf("Starting program...\n");
    printf("(Enter 'exit' anytime to exit program)\n\n");
    printf("Initializing character sheet...\n\n");
    while (1 != 0) {
        getCharacterName();
        if (exitFlag == true) {
            break;
        }
        getCharacterClass();
        if (exitFlag == true) {
            break;
        }
        printf(">");
        fgets(userInput, 100, stdin);
        userInput[strcspn(userInput, "\n")] = 0;
        checkForPrintCharacterSheet();
        if (strcmp(userInput, "exit") == 0) {
            break;
        }
    }
    printf("\nProgram complete.\n\n");
    return 0;
}