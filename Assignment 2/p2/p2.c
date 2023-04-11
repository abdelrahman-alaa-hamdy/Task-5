#include <stdio.h>
#include <string.h>

#define STOP_CODE "QUIT" // Define stop code

int main() {
    char input[50];
    int i, j, isUnique;

    // Continuously  for string input
    while (1) {
        // Ask user for string input
        printf("Enter a string: ");
        scanf(" %[^\n]", input);

        // Check if input is the stop code
        if (strcmp(input, STOP_CODE) == 0) {
            break;
        }

        // Print unique characters in input string
        printf("Unique characters: ");
        for (i = 0; i < strlen(input); i++) {
            isUnique = 1;
            for (j = 0; j < i; j++) {
                if (input[i] == input[j]) {
                    isUnique = 0;
                    break;
                }
            }
            if (isUnique) {
                printf("%c", input[i]);
            }
        }
        printf("\n");
    }

    return 0;
}
