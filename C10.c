// WAP  to find factorial of entered number

#include <stdio.h>
int main(){
    int no, i, fact = 1;
    printf("Enter Number for Factorial: ");
    scanf("%d", &no);
    for(i = 1; i <= no; i++){
        fact = fact * i;
    }
    printf("Factorial of %d is %d", no, fact);
    printf("\nSuyash Rusia Roll no.:58");
    return 0;
}