//Write a program to find series of Armstrong number till the Nth element

#include <stdio.h>

int main() {
    int n,i,temp,sum,count,num,rem,res;
    printf("Enter a number for Armstrong Serise: ");
    scanf("%d", &n);

    printf("Armstrong numbers up to %d:\n", n);
    for ( i = 1; i <= n; i++) {
         temp = i;
         sum = 0;
         count = 0;
         num = i;
         
        while (num != 0) {
            num /= 10;
            count++;
        }

        num = temp;

        while (num != 0) {
             rem = num % 10;
             res = rem * rem * rem;

            sum += res;
            num /= 10;
        }

        if (sum == temp) {
            printf("%d\n", i);
        }
    }
    printf("\nSuyash Rusia Roll no.:58");
    return 0;
}