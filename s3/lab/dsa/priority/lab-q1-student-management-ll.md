### **File: `lab-q1-student-management-ll.md`**

#### **Lab Question 1: Student Management System using Linked Lists**

**Problem Statement:**
Develop a student management system using linked lists to insert and delete student records.

**Concept Overview:**

This problem requires creating a system to manage a collection of student records. Since the number of students is not fixed, a **singly linked list** is an ideal data structure. It allows for dynamic addition and removal of records without the size limitations of an array.

Each node in the linked list will represent a student. The node structure should contain the student's information (like roll number, name, etc.) and a pointer to the next student record in the list. The core functionalities will be inserting a new student record and deleting an existing one, likely identified by a unique key like the roll number.

**Key Operations:**
*   **Node Structure**: Define a `struct` to hold student data (e.g., `rollNumber`, `name`) and a `link` pointer.
*   **Insert Record**: A new node is created with the student's data. This node can be inserted at the beginning, end, or in a sorted manner based on roll number. Inserting at the end is a common approach.
*   **Delete Record**: To delete a student, the list is searched for a matching roll number. Once found, the node is removed by adjusting the `link` of the previous node to bypass the node being deleted. Special cases include deleting the first node or a non-existent node.
*   **Display Records**: Traverse the entire linked list from the `start` and print the details of each student.

---

**Algorithm:**

```
// Define StudentNode structure
STRUCTURE StudentNode:
  rollNumber: integer
  name: string
  link: pointer to StudentNode

// Global start pointer
start = NULL

// INSERT STUDENT RECORD
INSERT_STUDENT(roll, studentName):
1. Allocate memory for a newNode.
2. newNode.rollNumber = roll
3. newNode.name = studentName
4. newNode.link = NULL
5. IF start == NULL THEN
6.   start = newNode
7. ELSE
8.   temp = start
9.   WHILE temp.link != NULL
10.    temp = temp.link
11.  END WHILE
12.  temp.link = newNode
13. END IF
14. PRINT "Student record inserted."

// DELETE STUDENT RECORD
DELETE_STUDENT(roll):
1. IF start == NULL THEN
2.   PRINT "List is empty."
3.   RETURN
4. END IF
5. temp = start
6. prev = NULL
7. // Case 1: Deleting the first node
8. IF temp != NULL AND temp.rollNumber == roll THEN
9.   start = temp.link
10.  FREE temp
11.  PRINT "Student record deleted."
12.  RETURN
13. END IF
14. // Case 2: Search for the node to be deleted
15. WHILE temp != NULL AND temp.rollNumber != roll
16.  prev = temp
17.  temp = temp.link
18. END WHILE
19. // If roll number was not found
20. IF temp == NULL THEN
21.  PRINT "Student with roll number not found."
22.  RETURN
23. END IF
24. // Unlink the node from the linked list
25. prev.link = temp.link
26. FREE temp
27. PRINT "Student record deleted."

// DISPLAY ALL RECORDS
DISPLAY_STUDENTS():
1. IF start == NULL THEN
2.   PRINT "No student records to display."
3. ELSE
4.   temp = start
5.   PRINT "--- Student Records ---"
6.   WHILE temp != NULL
7.     PRINT "Roll: ", temp.rollNumber, ", Name: ", temp.name
8.     temp = temp.link
9.   END WHILE
10. END IF
```

---

**C Code:**

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_LEN 50

// Structure for a student record
struct Student {
    int rollNumber;
    char name[NAME_LEN];
    struct Student* link;
};

struct Student* start = NULL;

// Function to insert a new student record
void insertStudent() {
    struct Student* newNode = (struct Student*)malloc(sizeof(struct Student));
    if (!newNode) {
        printf("Memory allocation failed!\n");
        return;
    }

    printf("Enter Roll Number: ");
    scanf("%d", &newNode->rollNumber);
    printf("Enter Name: ");
    scanf(" %[^\n]", newNode->name); // Read string with spaces
    newNode->link = NULL;

    // Check for duplicate roll number
    struct Student* check = start;
    while(check != NULL) {
        if(check->rollNumber == newNode->rollNumber) {
            printf("Error: A student with this roll number already exists.\n");
            free(newNode);
            return;
        }
        check = check->link;
    }

    if (start == NULL) {
        start = newNode;
    } else {
        struct Student* temp = start;
        while (temp->link != NULL) {
            temp = temp->link;
        }
        temp->link = newNode;
    }
    printf("Student record added successfully.\n");
}

// Function to delete a student record by roll number
void deleteStudent() {
    if (start == NULL) {
        printf("The list is empty. No records to delete.\n");
        return;
    }

    int roll;
    printf("Enter the Roll Number to delete: ");
    scanf("%d", &roll);

    struct Student* temp = start;
    struct Student* prev = NULL;

    // Case 1: The node to be deleted is the first node
    if (temp != NULL && temp->rollNumber == roll) {
        start = temp->link;
        free(temp);
        printf("Student record with Roll Number %d deleted.\n", roll);
        return;
    }

    // Case 2: Search for the node to delete
    while (temp != NULL && temp->rollNumber != roll) {
        prev = temp;
        temp = temp->link;
    }

    // If the roll number was not found
    if (temp == NULL) {
        printf("Student with Roll Number %d not found.\n", roll);
        return;
    }

    // Unlink the node and free memory
    prev->link = temp->link;
    free(temp);
    printf("Student record with Roll Number %d deleted.\n", roll);
}

// Function to display all student records
void displayStudents() {
    if (start == NULL) {
        printf("No student records to display. The list is empty.\n");
        return;
    }

    struct Student* temp = start;
    printf("\n--- All Student Records ---\n");
    while (temp != NULL) {
        printf("Roll Number: %-5d | Name: %s\n", temp->rollNumber, temp->name);
        temp = temp->link;
    }
    printf("---------------------------\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n--- Student Management System ---\n");
        printf("1. Add Student Record\n");
        printf("2. Delete Student Record\n");
        printf("3. Display All Records\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insertStudent();
                break;
            case 2:
                deleteStudent();
                break;
            case 3:
                displayStudents();
                break;
            case 4:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
```
