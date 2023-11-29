#include <stdio.h>

int calculateFactorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * calculateFactorial(n - 1);
}

int main() {
    int num;

    printf("Suyash Rusia Roll No.: 58\n");
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);

    printf("Factorial: %d\n", calculateFactorial(num));

    return 0;
}
