#include <stdio.h>
#include <string.h>

void reverseOrderOfWords(char str[]) {
    char *word = strtok(str, " ");
    if (word != NULL) {
        reverseOrderOfWords(NULL);
        printf("%s ", word);
    }
}

int main() {
    printf("Suyash Rusia Roll No.: 58\n");
    char input[100];
    printf("Enter a string: ");
    gets(input);
    printf("Reversed order of words: ");
    reverseOrderOfWords(input);

    return 0;
}
