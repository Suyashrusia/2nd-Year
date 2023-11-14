// WAP to sort the array elements using selection sort


#include <stdio.h>  
void selection(int arr[], int n)  {  
    int i, j, small;  
      
    for (i = 0; i < n-1; i++){  
        small = i; 
          
        for (j = i+1; j < n; j++)  
        if (arr[j] < arr[small])  
            small = j;  
    int temp = arr[small];  
    arr[small] = arr[i];  
    arr[i] = temp;  
    }  
}  
void printArr(int a[], int n) {  
    int i;  
    for (i = 0; i < n; i++)  
        printf("%d ", a[i]);  
}  
int main()  {  
    int a[] ={54, 24, 75, 30, 12, 61, 72};  
    int n = sizeof(a) / sizeof(a[0]);  
    printf("Before sorting array elements are - \n");  
    printArr(a, n);  
    selection(a, n);  
    printf("\nAfter sorting array elements are - \n");    
    printArr(a, n);  
    printf("\nSuyash Rusia Roll No.:58");
    return 0;  
}    