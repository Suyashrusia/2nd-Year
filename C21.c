// WAP to print multiplication table

#include <stdio.h>
int main(){
    int no, i;
    printf("Enter Number: ");
    scanf("%d", &no);
    for(i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", no, i, no*i);
    }
    printf("\nSuyash Rusia Roll no.:58");
    return 0;
}