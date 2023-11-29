#include <stdio.h>

void generateFibonacciSeries(int n) {
    int a = 0, b = 1, nextTerm;

    printf("Suyash Rusia Roll No.: 58\n");
    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; i++) {
        printf("%d, ", a);
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &n);

    generateFibonacciSeries(n);

    return 0;
}
