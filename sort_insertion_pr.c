#include <stdio.h>
#include <string.h>
// Define a structure to represent a book record
struct BookRecord {
char bookName[100];
char callNumber[20];
};
void selectionSort(struct BookRecord arr[], int n) {
int i, j, min_index;
struct BookRecord temp;
for (i = 0; i < n - 1; i++) {
min_index = i;
for (j = i + 1; j < n; j++) {
if (strcmp(arr[j].callNumber, arr[i].callNumber) < 0) {
temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
}
}
// Display the current state of the book records

printf("Pass %d: \n", i + 1);
for (int k = 0; k < n; k++) {
printf("Book Name: %s, Call Number: %s\n", arr[k].bookName,
arr[k].callNumber);
}
printf("\n");
}
}
int main() {
int n;
printf("Enter the number of books: ");
scanf("%d", &n);
struct BookRecord books[n];
printf("Enter book details (Name CallNumber):\n");
for (int i = 0; i < n; i++) {
scanf("%s %s", books[i].bookName, books[i].callNumber);
}
printf("Initial order of book records:\n");
for (int i = 0; i < n; i++) {
printf("Book Name: %s, Call Number: %s\n", books[i].bookName,
books[i].callNumber);
}
printf("\n");
selectionSort(books, n);
printf("Sorted order of book records:\n");
for (int i = 0; i < n; i++) {
printf("Book Name: %s, Call Number: %s\n", books[i].bookName,
books[i].callNumber);
}
printf("\n");
printf("\nSuyash Rusia Roll no.:58");
return 0;
}