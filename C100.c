#include <stdio.h>

union CarDetails {
    char model[20];
    int year;
    float price;
};

int main() {
    union CarDetails car;

    printf("Suyash Rusia Roll No.: 58\n");
    
    printf("Enter car details:\n");
    printf("Model: ");
    scanf("%s", car.model);
    printf("Year: ");
    scanf("%d", &car.year);
    printf("Price: ");
    scanf("%f", &car.price);

    printf("\nCar Details:\n");
    printf("Model: %s\n", car.model);
    printf("Year: %d\n", car.year);
    printf("Price: %.2f\n", car.price);

    return 0;
}
