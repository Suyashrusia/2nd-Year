#include <stdio.h>
#include <string.h>
#include <ctype.h>

void trimLeadingWhiteSpace(char str[]) {
    int i = 0;
    while (isspace(str[i])) {
        i++;
    }

    memmove(str, str + i, strlen(str + i) + 1);
}

int main() {
    printf("Suyash Rusia Roll No.: 58\n");
    char input[100];
    printf("Enter a string: ");
    gets(input);
    trimLeadingWhiteSpace(input);
    printf("String after trimming leading white space: %s\n", input);

    return 0;
}
