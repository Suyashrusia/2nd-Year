// WAP to find GCD (Greatest Common Divisior)

#include<stdio.h>
int main(){
    int a,b,i,g;
    printf("Enter the Numbers for GDC:");
    scanf("%d %d",&a,&b);
    for(i = 1; i<= (a>b?a:b); i++){
        if(a % i == 0 && b % i == 0)
        g = i;
    }
    printf("Greatest Common Divisor : %d",g);
    printf("\nSuyash Rusia Roll no.:58");
    return 0;
}