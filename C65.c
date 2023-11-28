#include <stdio.h>

int firstOccurrence(char str[], char ch) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            return i;
        }
    }
    return -1;
}

int main() {
    printf("Suyash Rusia Roll No.: 58\n");
    char input[100], ch;
    printf("Enter a string: ");
    gets(input);
    printf("Enter the character to find: ");
    scanf(" %c", &ch);
    int position = firstOccurrence(input, ch);
    if (position != -1) {
        printf("First occurrence of %c at position: %d\n", ch, position);
    } else {
        printf("%c not found in the string.\n", ch);
    }

    return 0;
}
