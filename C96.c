#include <stdio.h>

struct Employee {
    char name[50];
    int employeeID;
    float salary;
};

int main() {
    struct Employee employee;

    printf("Suyash Rusia Roll No.: 58\n");
    printf("Enter employee details:\n");
    printf("Name: ");
    scanf("%s", employee.name);
    printf("Employee ID: ");
    scanf("%d", &employee.employeeID);
    printf("Salary: ");
    scanf("%f", &employee.salary);

    printf("Employee Details:\n");
    printf("Name: %s\n", employee.name);
    printf("Employee ID: %d\n", employee.employeeID);
    printf("Salary: %.2f\n", employee.salary);

    return 0;
}
