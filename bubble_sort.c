#include <stdio.h>
#include <string.h>
#define MAX_STUDENTS 100
struct Student {
char name[50];
int score;
};
void bubbleSort(struct Student arr[], int n) {
int i, j;
struct Student temp;
int swapped;
for (i = 0; i < n - 1; i++) {
swapped = 0;
for (j = 0; j < n - i - 1; j++) {
if (arr[j].score > arr[j + 1].score) {
// Swap arr[j] and arr[j+1]
temp = arr[j];
arr[j] = arr[j + 1];
arr[j + 1] = temp;

swapped = 1;
}
}
}
printf("Sorted student scores:\n");
for (i = 0; i < n; i++) {
printf("%s: %d\n", arr[i].name, arr[i].score);
}
}
int main() {
int n;
printf("Enter the number of students: ");
scanf("%d", &n);
struct Student students[MAX_STUDENTS];
printf("Enter student names and scores:\n");
for (int i = 0; i < n; i++) {
scanf("%s %d", students[i].name, &students[i].score);
}
bubbleSort(students, n);
printf("\nSuyash Rusia Roll No.:58");
return 0;
}