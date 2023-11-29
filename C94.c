#include <stdio.h>

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Values after swapping (Call by Value): a = %d, b = %d\n", a, b);
}

void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Values after swapping (Call by Reference): a = %d, b = %d\n", *a, *b);
}

int main() {
    int x, y;

    printf("Suyash Rusia Roll No.: 58\n");
    printf("Enter two values (x and y): ");
    scanf("%d %d", &x, &y);

    swapByValue(x, y);
    printf("Values after swapping (Original): x = %d, y = %d\n", x, y);

    swapByReference(&x, &y);
    printf("Values after swapping (Original): x = %d, y = %d\n", x, y);

    return 0;
}
