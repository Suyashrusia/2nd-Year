//Write a program to find series of even and odd numbers till the Nth element

#include<stdio.h>
int main(){
    int i,n;
    printf("\nEnter the number for serise of Odd ans Even:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2 == 0){
            printf("\n%d is Even Number.",i);
        }
        else{
            printf("\n%d is Odd Number.",i);
        }
    }
    printf("\nSuyash Rusia Roll no.:58");
    return 0;
}