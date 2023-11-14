// WAP to find the sum of first n natural numbers

#include <stdio.h>
int main(){
    int no, ans = 0;
    printf("Enter Number to get sum till: ");
    scanf("%d", &no);
    while (no != 0){
        ans += no;
        no--;
    }
    printf("Sum = %d", ans);
    printf("\nSuyash Rusia Roll no.:58");
    return 0;
}