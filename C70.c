#include <stdio.h>
#include <string.h>

char lowestFrequencyChar(char str[]) {
    int frequency[256] = {0};
    int minFrequency = 1;
    char minChar = str[0];

    for (int i = 0; str[i] != '\0'; i++) {
        frequency[str[i]]++;
        if (frequency[str[i]] == 1) {
            minChar = str[i];
        }
    }

    return minChar;
}

int main() {
    printf("Suyash Rusia Roll No.: 58\n");
    char input[100];
    printf("Enter a string: ");
    gets(input);
    char result = lowestFrequencyChar(input);
    printf("Lowest frequency character: %c\n", result);

    return 0;
}
