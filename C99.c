#include <stdio.h>

struct Circle {
    float radius;
};

void readCircleDetails(struct Circle *circle) {
    printf("Enter the radius of the circle: ");
    scanf("%f", &circle->radius);
}

void displayCircleDetails(struct Circle *circle) {
    printf("Circle Details:\n");
    printf("Radius: %.2f\n", circle->radius);
}

int main() {
    struct Circle circle;
    struct Circle *ptrCircle = &circle;

    printf("Suyash Rusia Roll No.: 58\n");
    readCircleDetails(ptrCircle);
    displayCircleDetails(ptrCircle);

    return 0;
}
