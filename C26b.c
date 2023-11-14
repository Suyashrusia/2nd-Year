// WAP to print Hollow Right Triangle Star Pattern

#include <stdio.h>

int main() {
    int height;
    printf("Enter Height: ");
    scanf("%d", &height);

    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == height) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\nSuyash Rusia Roll no.:58");
    return 0;
}

