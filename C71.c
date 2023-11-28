#include <stdio.h>

void countFrequency(char str[]) {
    int frequency[256] = {0}; 

    for (int i = 0; str[i] != '\0'; i++) {
        frequency[str[i]]++;
    }

    printf("Character frequencies:\n");
    for (int i = 0; i < 256; i++) {
        if (frequency[i] > 0) {
            printf("%c: %d\n", i, frequency[i]);
        }
    }
}

int main() {
    printf("Suyash Rusia Roll No.: 58\n");
    char input[100];
    printf("Enter a string: ");
    gets(input);
    countFrequency(input);

    return 0;
}
