#include <stdio.h>
#include<conio.h>
long long factorial(int n) 
{
    if (n == 0 || n == 1)
     {
        return 1;
    } else
     {
        return n * factorial(n - 1);
    }
}

int main()
 {
    int N;
    clrscr();
 
    printf("Enter the value of N: ");
    scanf("%d", &N);
    printf("Factorial series up to the %dth element:\n", N);
    for (int i = 0; i < N; i++) 
    {
        printf("%d! = %lld\n", i, factorial(i));
    }
    printf(“Aastha Kadu Roll no:01”);
    getch();
}