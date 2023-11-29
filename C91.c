#include <stdio.h>

float calculateNetSalary(float basicSalary) {
    float hra, da, ta, pf, netSalary;

    hra = 0.4 * basicSalary;
    da = 0.9 * basicSalary;
    ta = 0.2 * basicSalary;
    pf = 0.25 * basicSalary;

    netSalary = basicSalary + hra + da + ta - pf;

    return netSalary;
}

int main() {
    float basicSalary;
    
    printf("Suyash Rusia Roll No.: 58\n");
    printf("Enter the basic salary: $");
    scanf("%f", &basicSalary);

    printf("Net Salary: $%.2f\n", calculateNetSalary(basicSalary));

    return 0;
}
