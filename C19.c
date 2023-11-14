// WAP to check if given number is palindrome or not

#include <stdio.h>
int main(){
    int no, rev = 0, rem, tmp;
    printf("Enter Number to check palindrome: ");
    scanf("%d", &no);
    tmp = no;
    while(no != 0){
        rem = no % 10;
        rev = rev * 10 + rem;
        no = no / 10;
    }
    if(tmp == rev)
        printf("%d is Palindrome", tmp);
    else
        printf("%d is Not Palindrome", tmp);
    printf("\nSuyash Rusia Roll no.:58");
    return 0;
}