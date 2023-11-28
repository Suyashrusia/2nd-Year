#include <stdio.h>
#include <string.h>

void removeFirstOccurrence(char str[], char ch) {
    int length = strlen(str);
    int found = 0;

    for (int i = 0; i < length; i++) {
        if (str[i] == ch && !found) {
            found = 1;
        } else {
            str[i - found] = str[i];
        }
    }

    str[length - found] = '\0';
}

int main() {
    printf("Suyash Rusia Roll No.: 58\n");
    char input[100], ch;
    printf("Enter a string: ");
    gets(input);
    printf("Enter the character to remove: ");
    scanf(" %c", &ch);
    removeFirstOccurrence(input, ch);
    printf("String after removing first occurrence of %c: %s\n", ch, input);

    return 0;
}
