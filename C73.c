#include <stdio.h>
#include <string.h>

void removeLastOccurrence(char str[], char ch) {
    int length = strlen(str);
    int position = -1;

    for (int i = 0; i < length; i++) {
        if (str[i] == ch) {
            position = i;
        }
    }

    if (position != -1) {
        for (int i = position; i < length - 1; i++) {
            str[i] = str[i + 1];
        }
        str[length - 1] = '\0';
    }
}

int main() {
    printf("Suyash Rusia Roll No.: 58\n");
    char input[100], ch;
    printf("Enter a string: ");
    gets(input);
    printf("Enter the character to remove: ");
    scanf(" %c", &ch);
    removeLastOccurrence(input, ch);
    printf("String after removing last occurrence of %c: %s\n", ch, input);

    return 0;
}
