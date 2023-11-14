/* Write a program to find Net salary of employee.Basic salary entered by user.
HRA is 40% basic, Da is 90% of basic, TA is 20 % of basic, PF is 25 % of basic.*/

#include <stdio.h>
int main() {
    double salary, net, hra, da, ta, pf;
    printf("Enter Basic Salary: ");
    scanf("%lf", &salary);

    hra = 0.4 * salary;   
    da = 0.9 * salary;    
    ta = 0.2 * salary;    
    pf = 0.25 * salary;   

    net = (salary + hra + da + ta - pf);
    printf("Net Salary: %.2lf\n", net);

    printf("\nSuyash Rusia Roll no.:58");
    return 0;
}
