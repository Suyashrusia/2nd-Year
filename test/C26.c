#include <stdio.h>

int main() {
    int n;

    printf("Enter the height of the mirrored right triangle: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        for (int k = 1; k <= i; k++) {
            printf("*");
        }

        printf("\n");
    }
    printf("\nSuyash Rusia Roll no.:58");
    return 0;
}
