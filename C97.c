#include <stdio.h>

struct Address {
    char city[50];
    char state[50];
};

struct Employee {
    char name[50];
    int employeeID;
    float salary;
    struct Address address;
};

int main() {
    struct Employee employee1;

    printf("Suyash Rusia Roll No.: 58\n");
    printf("Enter employee details:\n");
    printf("Name: ");
    scanf("%s", employee1.name);
    printf("Employee ID: ");
    scanf("%d", &employee1.employeeID);
    printf("Salary: ");
    scanf("%f", &employee1.salary);
    printf("City: ");
    scanf("%s", employee1.address.city);
    printf("State: ");
    scanf("%s", employee1.address.state);

    printf("Employee Details:\n");
    printf("Name: %s\n", employee1.name);
    printf("Employee ID: %d\n", employee1.employeeID);
    printf("Salary: %.2f\n", employee1.salary);
    printf("Address: %s, %s\n", employee1.address.city, employee1.address.state);

    return 0;
}
