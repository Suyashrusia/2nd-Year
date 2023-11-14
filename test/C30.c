#include <stdio.h>

void printPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        

        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        
        printf("\n");
    }
}


void printRightTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        
        printf("\n");
    }
}


void printMirroredTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        
        printf("\n");
    }
}


void printHollowRightTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        if (i == 1 || i == n) {
            for (int j = 1; j <= i; j++) {
                printf("*");
            }
        } else {
            
            printf("*");
            for (int j = 1; j <= i - 2; j++) {
                printf(" ");
            }
            printf("*");
        }
        
        printf("\n");
    }
}

int main() {
    int choice, n;
    
        printf("Choose a star pattern:\n");
        printf("1. Print Pyramid of stars\n");
        printf("2. Right triangle star pattern\n");
        printf("3. Left or mirrored triangle star pattern\n");
        printf("4. Hollow right triangle star pattern\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        
        printf("Enter the number of rows: ");
        scanf("%d", &n);
        
        switch (choice) {
            case 1:
                printPyramid(n);
                break;
            case 2:
                printRightTriangle(n);
                break;
            case 3:
                printMirroredTriangle(n);
                break;
            case 4:
                printHollowRightTriangle(n);
                break;
            case 5:
                break;
            default:
                printf("Invalid choice! Please enter a valid option.\n");
                break;
        }
    printf("\nSuyash Rusia Roll no.:58");
    return 0;
}
