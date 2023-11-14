//Write a program to find the largest number among three entered number

#include<stdio.h>
int main(){
    int a,b,c;
    printf("\nEnter Three Numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if ((a>b) && (a>c))
    printf("\nThe %d is Largest of all.",a);
    else if ((b>a) && (b>c))
    printf("\nThe %d is Largest of all.",b);
    else
    printf("\nThe %d is Largest of all.",c);
    printf("\nSuyash Rusia Roll no.:58");
    return 0;
}