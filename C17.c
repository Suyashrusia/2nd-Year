// WAP to find reverse of entered number

#include <stdio.h>
int main(){
    int no, rev = 0, rem;
    printf("Enter Number: ");
    scanf("%d", &no);
    while(no != 0){
        rem = no % 10;
        rev = rev * 10 + rem;
        no = no / 10;
    }
    printf("Reverse: %d", rev);
    printf("\nSuyash Rusia Roll no.:58");
    return 0;
}