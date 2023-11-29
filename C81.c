#include <stdio.h>
#include <string.h>

void searchAllOccurrencesOfWord(char str[], char word[]) {
    char *ptr = strstr(str, word);
    int count = 0;
    
    while (ptr != NULL) {
        count++;
        printf("Word found at position: %ld\n", ptr - str + 1);
        ptr = strstr(ptr + 1, word);
    }

    if (count == 0) {
        printf("Word not found in the string.\n");
    }
}

int main() {
    printf("Suyash Rusia Roll No.: 58\n");
    char input[100], word[20];
    printf("Enter a string: ");
    gets(input);
    printf("Enter the word to find: ");
    gets(word);
    searchAllOccurrencesOfWord(input, word);

    return 0;
}
