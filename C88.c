#include <stdio.h>
#include <string.h>
#include <ctype.h>

void trimBothLeadingAndTrailingWhiteSpace(char str[]) {
    int i = 0, j = strlen(str) - 1;

    while (isspace(str[i])) {
        i++;
    }

    while (j >= 0 && isspace(str[j])) {
        j--;
    }

    memmove(str, str + i, j - i + 2);
}

int main() {
    printf("Suyash Rusia Roll No.: 58\n");
    char input[100];
    printf("Enter a string: ");
    gets(input);
    trimBothLeadingAndTrailingWhiteSpace(input);
    printf("String after trimming both leading and trailing white space: %s\n", input);

    return 0;
}
