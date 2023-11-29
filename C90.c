#include <stdio.h>

float calculateElectricityBill() {
    float units, totalBill;

    printf("Suyash Rusia Roll No.: 58\n");
    printf("Enter the number of units consumed: ");
    scanf("%f", &units);

    if (units <= 50)
        totalBill = units * 0.50;
    else if (units <= 150)
        totalBill = 50 * 0.50 + (units - 50) * 0.75;
    else if (units <= 250)
        totalBill = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
    else
        totalBill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;

    return totalBill;
}

int main() {
    printf("Electricity Bill: $%.2f\n", calculateElectricityBill());

    return 0;
}
