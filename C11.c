// WAP to find series of factorial number till the Nth element

#include <stdio.h>
int main(){
    int no, i, fact, j;
    printf("Enter Number for Factorial till Nth element: ");
    scanf("%d", &no);
    for(i = 0; i <= no; i++){
        fact = 1;
        for(j = 1; j <= i; j++){
            fact = fact * j;
        }
	printf("%d! = %d\n", i, fact);
    }
    printf("\nSuyash Rusia Roll no.:58");
    return 0;
}