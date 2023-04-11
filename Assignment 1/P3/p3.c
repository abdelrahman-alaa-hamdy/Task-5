#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    int maxLength, freq[256] = {0}, i, maxFreq = 0;
    printf("Enter maximum length of name: ");
    scanf("%d", &maxLength);

    printf("Enter name: ");
    scanf(" %[^\n]", name);

    printf("Name entered: %s\n", name);

    for (i = 0; i < strlen(name); i++) {
        freq[(int)name[i]]++;
    }

    for (i = 0; i < 256; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
        }
    }

    printf("Frequency of the most repeated character: %d\n", maxFreq);

    return 0;
}
