#include <stdio.h>

void searchAllOccurrences(char str[], char ch) {
    printf("Occurrences at positions: ");
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    printf("Suyash Rusia Roll No.: 58\n");
    char input[100], ch;
    printf("Enter a string: ");
    gets(input);
    printf("Enter the character to find: ");
    scanf(" %c", &ch); 
    searchAllOccurrences(input, ch);

    return 0;
}
