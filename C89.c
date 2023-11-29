#include <stdio.h>
#include <string.h>

void removeExtraBlankSpaces(char str[]) {
    int i, j;
    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' || (i > 0 && str[i - 1] != ' ')) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() {
    printf("Suyash Rusia Roll No.: 58\n");
    char input[100];
    printf("Enter a string: ");
    gets(input);
    removeExtraBlankSpaces(input);
    printf("String after removing extra blank spaces: %s\n", input);

    return 0;
}
