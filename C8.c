//Write a program to interchange the value of two variable without using third variable

#include<stdio.h>
int main(){
    int a,b;
    printf("\nEnter Two Numbers:");
    scanf("%d %d",&a,&b);
    printf("\nThe value of a is %d and b is %d",a,b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nThe value of a is %d and b is %d",a,b);
    printf("\nSuyash Rusia Roll no.:58");
    return 0;
}