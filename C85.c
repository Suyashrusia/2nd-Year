#include <stdio.h>
#include <string.h>

void removeAllOccurrencesOfWord(char str[], char word[]) {
    char *ptr = strstr(str, word);
    
    while (ptr != NULL) {
        memmove(ptr, ptr + strlen(word), strlen(ptr + strlen(word)) + 1);
        ptr = strstr(ptr, word);
    }
}

int main() {
    printf("Suyash Rusia Roll No.: 58\n");
    char input[100], word[20];
    printf("Enter a string: ");
    gets(input);
    printf("Enter the word to remove: ");
    gets(word);
    removeAllOccurrencesOfWord(input, word);
    printf("String after removing all occurrences: %s\n", input);

    return 0;
}
