#include <stdio.h>
#include <string.h>
#include <ctype.h>

void trimTrailingWhiteSpace(char str[]) {
    int i = strlen(str) - 1;
    while (i >= 0 && isspace(str[i])) {
        i--;
    }

    str[i + 1] = '\0';
}

int main() {
    printf("Suyash Rusia Roll No.: 58\n");
    char input[100];
    printf("Enter a string: ");
    gets(input);
    trimTrailingWhiteSpace(input);
    printf("String after trimming trailing white space: %s\n", input);

    return 0;
}
