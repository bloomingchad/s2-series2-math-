### **File: `lab-q5q6-employee-salary-search.md`**

#### **Lab Question 5 & 6: Employee Salary Search using Linear Search**

**Problem Statement:**
5. Write a program that stores employee IDs and salaries.
6. Use Linear Search to find employees earning above a certain salary threshold. Display the total count and details.

**Concept Overview:**

This problem is another application of the **Linear Search** algorithm. The goal is to filter a collection of records based on a specific condition rather than searching for a single, unique key.

We will store employee records (ID and salary) in an array of structures. The linear search process will involve iterating through the entire array from the beginning to the end. For each employee record, we will check if their salary is greater than the user-defined threshold.

Unlike a search for a unique ID where we can stop once a match is found, here we **must traverse the entire list** to find all employees who meet the condition. We will use a counter to keep track of how many employees satisfy the criteria and print their details as we find them.

**Key Operations:**
*   **Structure Definition**: Create a `struct` for employee data, including `employeeID` and `salary`.
*   **Data Entry**: A function to populate an array of these employee structures.
*   **Linear Search for Threshold**: A function that takes the array of employees, the total count, and a salary threshold as input. It will:
    1.  Initialize a `count` variable to zero.
    2.  Loop through the entire array.
    3.  For each employee, check if `employee.salary > threshold`.
    4.  If the condition is true, print the employee's ID and salary and increment the `count`.
    5.  After the loop, display the total `count` of employees found.

---

**Algorithm:**

```
// Define Employee structure
STRUCTURE Employee:
  employeeID: integer
  salary: float

// SEARCH ABOVE THRESHOLD function
SEARCH_ABOVE_THRESHOLD(employeeArray[], numEmployees, salaryThreshold):
1. Initialize `foundCount = 0`.
2. PRINT "Employees earning above ", salaryThreshold, ":"
3. FOR i = 0 TO numEmployees - 1:
4.   IF employeeArray[i].salary > salaryThreshold THEN
5.     // Display details of the found employee
6.     PRINT "ID: ", employeeArray[i].employeeID, ", Salary: ", employeeArray[i].salary
7.     foundCount = foundCount + 1
8.   END IF
9. END FOR
10. PRINT "---------------------------------"
11. PRINT "Total count of employees found: ", foundCount
12. IF foundCount == 0 THEN
13.   PRINT "No employees found above the specified salary."
14. END IF
```

---

**C Code:**

```c
#include <stdio.h>
#include <stdlib.h>

#define MAX_EMPLOYEES 100

// Structure for an employee record
struct Employee {
    int employeeID;
    float salary;
};

// Function to search for employees with salary above a threshold
void searchBySalary(struct Employee employees[], int count, float salaryThreshold) {
    int foundCount = 0;

    if (count == 0) {
        printf("No employee records to search.\n");
        return;
    }

    printf("\n--- Employees Earning Above %.2f ---\n", salaryThreshold);
    
    // Linearly search through the array
    for (int i = 0; i < count; i++) {
        if (employees[i].salary > salaryThreshold) {
            printf("Employee ID: %-5d | Salary: %.2f\n", employees[i].employeeID, employees[i].salary);
            foundCount++;
        }
    }

    printf("-------------------------------------------\n");
    if (foundCount == 0) {
        printf("No employees found with a salary above %.2f.\n", salaryThreshold);
    } else {
        printf("Total count of employees found: %d\n", foundCount);
    }
}

int main() {
    struct Employee employees[MAX_EMPLOYEES];
    int count = 0; // Number of employee records
    int choice;
    float threshold;

    while (1) {
        printf("\n--- Employee Salary System ---\n");
        printf("1. Add Employee Record\n");
        printf("2. Find Employees Above Salary Threshold\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count >= MAX_EMPLOYEES) {
                    printf("Database is full. Cannot add more employees.\n");
                } else {
                    printf("\nEnter details for employee %d:\n", count + 1);
                    printf("Employee ID: ");
                    scanf("%d", &employees[count].employeeID);
                    printf("Salary: ");
                    scanf("%f", &employees[count].salary);
                    count++;
                    printf("Employee record added successfully.\n");
                }
                break;

            case 2:
                printf("\nEnter the salary threshold: ");
                scanf("%f", &threshold);
                searchBySalary(employees, count, threshold);
                break;

            case 3:
                printf("Exiting program.\n");
                exit(0);

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
```
