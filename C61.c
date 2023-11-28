#include <stdio.h>

int countWords(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            count++;
        }
    }
    return count + 1;
}

int main() {
    printf("Suyash Rusia Roll No.: 58\n");
    char input[100];
    printf("Enter a string: ");
    gets(input);
    printf("Total number of words: %d\n", countWords(input));

    return 0;
}
