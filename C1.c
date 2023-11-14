//Write a program to find entered number is even or odd

#include<stdio.h>
int main(){
    int n;
    printf("\nEnter the number to check even or odd:");
    scanf("%d",&n);
    if(n % 2 == 0)
    printf("\nThe number %d is Even.",n);
    else
    printf("\nThe number %d is Odd.",n);
    printf("\nSuyash Rusia Roll no.:58");
    return 0;
}