// WAP to print the diagonal elements of given matrix

#include <stdio.h>

void input(int mat[3][3])
{
    int i, j;
    printf("Enter Matrix Elements:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
            scanf("%d", &mat[i][j]);
    }
}

int main()
{
    int i, j;
    int mat1[3][3];
    input(mat1);
    printf("Diagonal Elements of Matrix:\n");
    for(i = 0; i < 3; i++)
        printf("%d\n", mat1[i][i]);
    printf("\nSuyash Rusia Roll No.:58");
    return 0;
}