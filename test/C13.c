#include <stdio.h>

int main() {
    int no, i, j, flag;
    printf("Enter Number: ");
    scanf("%d", &no);
    printf("List of Prime Numbers:\n");
    
    i = 2;
    while (i <= no) {
        flag = 0;
        j = 2;
        
        while (j < i) {
            if (i != 2 && i % j == 0) {
                flag++;
                break;
            }
            j++;
        }
        
        if (flag == 0)
            printf("%d\n", i);
            
        i++;
    }
    
    printf("\nSuyash Rusia Roll no.:58");
    return 0;
}
