#include <stdio.h>
#include <string.h>
// Define a structure to represent a student record
struct StudentRecord {
char name[50];
int score;
};
// Function to perform binary search on an array of student records
int binarySearch(struct StudentRecord student_records[], int n, char target[]) {
int low = 0;
int high = n - 1;
while (low <= high) {
int mid = (low + high) / 2;
// Compare the target name with the name at the midpoint
int cmp = strcmp(target, student_records[mid].name);
if (cmp == 0) {
// Student name found
return student_records[mid].score;
} else if (cmp < 0) {
// Search in the left half
high = mid - 1;
} else {

// Search in the right half
low = mid + 1;
}
}
// Student name not found
return -1;
}
int main() {
// Initialize an array of student records (sorted by name)
struct StudentRecord student_records[] = {
{"Arpit", 88},
{"Prince", 91},
{"Ansh", 89},
{"Kausik", 94},
// Add more records here...
};
int n = sizeof(student_records) / sizeof(student_records[0]);
char student_name[50];
while (1) {
// Prompt the user to enter the name of the student
printf("Enter the name of the student (or 'exit' to quit): ");
scanf("%s", student_name);
// Check if the user wants to exit
if (strcmp(student_name, "exit") == 0) {
break;
}
// Perform binary search to find the student's exam score
int score = binarySearch(student_records, n, student_name);
if (score != -1) {
// Student name found
printf("Exam score for %s: %d\n", student_name, score);
} else {
// Student name not found
printf("Student with the name '%s' not found.\n", student_name);
}
}
printf("\nSuyash Rusia Roll No.:58");
return 0;
}