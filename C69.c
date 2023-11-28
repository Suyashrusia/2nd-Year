#include <stdio.h>
#include <string.h>

char highestFrequencyChar(char str[]) {
    int frequency[256] = {0};
    int maxFrequency = 0;
    char maxChar;

    for (int i = 0; str[i] != '\0'; i++) {
        frequency[str[i]]++;
        if (frequency[str[i]] > maxFrequency) {
            maxFrequency = frequency[str[i]];
            maxChar = str[i];
        }
    }

    return maxChar;
}

int main() {
    printf("Suyash Rusia Roll No.: 58\n");
    char input[100];
    printf("Enter a string: ");
    gets(input);
    char result = highestFrequencyChar(input);
    printf("Highest frequency character: %c\n", result);

    return 0;
}
