/*Write a menu driven program for 1. Check no is Even or odd number
2. Check no is Prim or not
3. Check no is palindrome or not*/

#include<stdio.h>
void main()  {
    int n,no,i, rev = 0, rem, tmp;
    printf("Enter accordingly:\n1 to Check no is Even or odd number\n2 to Check no is Prime or not\n3 to Check no is palindrome or not\nYour choice:");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("\nEnter the number to check even or odd:");
        scanf("%d",&no);
        if(no % 2 == 0)
        printf("\nThe number %d is Even.",no);
        else
        printf("\nThe number %d is Odd.",no);
        break;
    
    case 2:
        printf("Enter Number to check prime or not: ");
        scanf("%d", &no);
        for(i = 2; i < no; i++){
            if (no % i == 0){
            printf("%d is Not Prime Number", no);
            return;
          }
        }
        printf("%d is Prime Number", no);
        break;

    case 3:
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
        break;

    default:
        printf("Enter valid Choice.");
        break;
    }
printf("\nSuyash Rusia Roll no.:58");
}