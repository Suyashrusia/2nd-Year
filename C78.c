#include <stdio.h>
#include <string.h>

void replaceAllOccurrences(char str[], char oldChar, char newChar) {
    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        if (str[i] == oldChar) {
            str[i] = newChar;
        }
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
    replaceAllOccurrences(input, oldChar, newChar);
    printf("String after replacing all occurrences of %c with %c: %s\n", oldChar, newChar, input);

    return 0;
}
