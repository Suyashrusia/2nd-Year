// WAP to find serise of palindrome till nth element

#include<stdio.h>
int fun(int n){
    int temp,rev = 0,rem;
    temp = n;
    while(n != 0){
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }if(temp == rev)
     printf("%d is Palindrome.\n",temp);
    return 0;
}
int main(){
    int i,n;
    printf("Enter the number for palindrome serise:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fun(i);
    }
    printf("\nSuyash Rusia Roll no.:58");
    return 0;
}
