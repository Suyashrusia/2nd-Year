#include <stdio.h>
#include <string.h>

void removeRepeatedCharacters(char str[]) {
    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        for (int j = i + 1; j < length; j++) {
            if (str[i] == str[j]) {
                for (int k = j; k < length - 1; k++) {
                    str[k] = str[k + 1];
                }
                length--;
                j--;
            }
        }
    }
    str[length] = '\0';
}

int main() {
    printf("Suyash Rusia Roll No.: 58\n");
    char input[100];
    printf("Enter a string: ");
    gets(input);
    removeRepeatedCharacters(input);
    printf("String after removing repeated characters: %s\n", input);

    return 0;
}
