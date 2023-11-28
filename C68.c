#include <stdio.h>

int countOccurrences(char str[], char ch) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    printf("Suyash Rusia Roll No.: 58\n");
    char input[100], ch;
    printf("Enter a string: ");
    gets(input);
    printf("Enter the character to count: ");
    scanf(" %c", &ch); 
    printf("Occurrences of %c: %d\n", ch, countOccurrences(input, ch));

    return 0;
}
