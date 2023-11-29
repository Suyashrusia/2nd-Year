#include <stdio.h>
#include <string.h>

void removeLastOccurrenceOfWord(char str[], char word[]) {
    char *ptr = strstr(str, word);
    char *lastPtr = NULL;
    
    while (ptr != NULL) {
        lastPtr = ptr;
        ptr = strstr(ptr + 1, word);
    }

    if (lastPtr != NULL) {
        memmove(lastPtr, lastPtr + strlen(word), strlen(lastPtr + strlen(word)) + 1);
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
    removeLastOccurrenceOfWord(input, word);
    printf("String after removing last occurrence: %s\n", input);

    return 0;
}
