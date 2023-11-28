#include <stdio.h>
#include <string.h>

int findFirstOccurrenceOfWord(char str[], char word[]) {
    int length = strlen(str);
    int wordLength = strlen(word);
    int position = -1;

    for (int i = 0; i <= length - wordLength; i++) {
        int j;
        for (j = 0; j < wordLength; j++) {
            if (str[i + j] != word[j]) {
                break;
            }
        }

        if (j == wordLength) {
            position = i;
            break;
        }
    }

    return position;
}

int main() {
    printf("Suyash Rusia Roll No.: 58\n");
    char input[100], word[20];
    printf("Enter a string: ");
    gets(input);
    printf("Enter the word to find: ");
    gets(word);
    int position = findFirstOccurrenceOfWord(input, word);
    if (position != -1) {
        printf("First occurrence of '%s' at position: %d\n", word, position);
    } else {
        printf("Word '%s' not found in the string.\n", word);
    }

    return 0;
}
