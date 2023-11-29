#include <stdio.h>
#include <string.h>

int countOccurrencesOfWord(char str[], char word[]) {
    char *ptr = strstr(str, word);
    int count = 0;
    
    while (ptr != NULL) {
        count++;
        ptr = strstr(ptr + 1, word);
    }

    return count;
}

int main() {
    printf("Suyash Rusia Roll No.: 58\n");
    char input[100], word[20];
    printf("Enter a string: ");
    gets(input);
    printf("Enter the word to count: ");
    gets(word);
    printf("Occurrences of %s: %d\n", word, countOccurrencesOfWord(input, word));

    return 0;
}
