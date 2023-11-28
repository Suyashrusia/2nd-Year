#include <stdio.h>
#include <string.h>

void replaceLastOccurrence(char str[], char oldChar, char newChar) {
    int length = strlen(str);
    int position = -1;

    for (int i = 0; i < length; i++) {
        if (str[i] == oldChar) {
            position = i;
        }
    }

    if (position != -1) {
        str[position] = newChar;
    }
}

int main() {
    printf("Suyash Rusia Roll No.: 58\n");
    char input[100], oldChar, newChar;
    printf("Enter a string: ");
    gets(input);
    printf("Enter the character to replace: ");
    scanf(" %c", &oldChar);
    printf("Enter the new character: ");
    scanf(" %c", &newChar);
    replaceLastOccurrence(input, oldChar, newChar);
    printf("String after replacing last occurrence of %c with %c: %s\n", oldChar, newChar, input);

    return 0;
}
