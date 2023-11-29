#include <stdio.h>
#include <string.h>

void removeFirstOccurrenceOfWord(char str[], char word[]) {
    char *ptr = strstr(str, word);
    
    if (ptr != NULL) {
        memmove(ptr, ptr + strlen(word), strlen(ptr + strlen(word)) + 1);
    } else {
        printf("Word not found in the string.\n");
    }
}

int main() {
    printf("Suyash Rusia Roll No.: 58\n");
    char input[100], word[20];
    printf("Enter a string: ");
    gets(input);
    printf("Enter the word to remove: ");
    gets(word);
    removeFirstOccurrenceOfWord(input, word);
    printf("String after removing first occurrence: %s\n", input);

    return 0;
}
