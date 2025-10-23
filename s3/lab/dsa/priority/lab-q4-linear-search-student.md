### **File: `lab-q4-linear-search-student.md`**

#### **Lab Question 4: Student Record Search using Linear Search**

**Problem Statement:**
Implement a program to search for a student's roll number in a list of student records using Linear Search. The program should display: Student name, Department, and Marks if found, otherwise display “Record not found”.

**Concept Overview:**

**Linear Search** (or Sequential Search) is the simplest search algorithm. It sequentially checks each element in a list until a match is found or the whole list has been searched.
*   **How it works**: It starts from the first element of the collection and compares each element with the target value (in this case, the roll number).
*   **Performance**: The time complexity is **O(n)** in the worst and average case, where `n` is the number of records, because it might have to check every single record. In the best case (the record is the first element), it is O(1).
*   **Applicability**: It can be used on both sorted and unsorted data.

For this problem, we will define a structure to hold student records. We can store these records in a simple array. The search function will iterate through this array to find the student.

**Key Operations:**
*   **Structure Definition**: Create a `struct` for student data, including `rollNumber`, `name`, `department`, and `marks`.
*   **Data Entry**: A function to populate an array of these student structures.
*   **Linear Search Function**: A function that takes the array of students, the total number of students, and the target roll number as input. It will loop through the array, and if a match is found, it will print the student's details and return the index. If no match is found after checking all records, it will print a "Record not found" message and return -1.

---

**Algorithm:**

```
// Define Student structure
STRUCTURE Student:
  rollNumber: integer
  name: string
  department: string
  marks: float

// LINEAR SEARCH function
LINEAR_SEARCH(studentArray[], count, targetRoll):
1. Initialize a flag `found = false`.
2. FOR i = 0 TO count - 1:
3.   IF studentArray[i].rollNumber == targetRoll THEN
4.     PRINT "Record Found:"
5.     PRINT "Name: ", studentArray[i].name
6.     PRINT "Department: ", studentArray[i].department
7.     PRINT "Marks: ", studentArray[i].marks
8.     found = true
9.     BREAK // Exit the loop as the record is found
10.  END IF
11. END FOR
12. IF found == false THEN
13.  PRINT "Record not found."
14. END IF
```

---

**C Code:**

```c
#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 50
#define NAME_LEN 50
#define DEPT_LEN 30

// Structure for a student record
struct Student {
    int rollNumber;
    char name[NAME_LEN];
    char department[DEPT_LEN];
    float marks;
};

// Function to perform linear search for a student by roll number
void linearSearch(struct Student students[], int count, int targetRoll) {
    int found = 0; // Flag to indicate if the record is found

    for (int i = 0; i < count; i++) {
        if (students[i].rollNumber == targetRoll) {
            printf("\n--- Record Found! ---\n");
            printf("Student Name: %s\n", students[i].name);
            printf("Department:   %s\n", students[i].department);
            printf("Marks:        %.2f\n", students[i].marks);
            printf("---------------------\n");
            found = 1;
            break; // Exit loop once the student is found
        }
    }

    if (found == 0) {
        printf("\n--- Record not found for Roll Number %d. ---\n", targetRoll);
    }
}

int main() {
    struct Student students[MAX_STUDENTS];
    int count = 0; // Number of student records entered
    int choice;
    int searchRoll;

    while (1) {
        printf("\n--- Student Record System ---\n");
        printf("1. Add Student Record\n");
        printf("2. Search for a Student (Linear Search)\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count >= MAX_STUDENTS) {
                    printf("Cannot add more students. Database is full.\n");
                } else {
                    printf("\nEnter details for student %d:\n", count + 1);
                    printf("Roll Number: ");
                    scanf("%d", &students[count].rollNumber);
                    printf("Name: ");
                    scanf(" %[^\n]", students[count].name);
                    printf("Department: ");
                    scanf(" %[^\n]", students[count].department);
                    printf("Marks: ");
                    scanf("%f", &students[count].marks);
                    count++;
                    printf("Student record added.\n");
                }
                break;

            case 2:
                if (count == 0) {
                    printf("No records to search. Please add student records first.\n");
                } else {
                    printf("\nEnter the Roll Number to search for: ");
                    scanf("%d", &searchRoll);
                    linearSearch(students, count, searchRoll);
                }
                break;

            case 3:
                printf("Exiting program.\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
```
