### **File: `lab-q7-hospital-binary-search.md`**

#### **Lab Question 7: Hospital Patient Search using Binary Search**

**Problem Statement:**
In a hospital management system, patient IDs are stored in sorted order. Use Binary Search to check whether a particular patient record exists and retrieve their diagnosis and doctor name.

**Concept Overview:**

**Binary Search** is a highly efficient search algorithm with a time complexity of **O(log n)**. Its major prerequisite is that the data collection (e.g., an array) must be **sorted**. In this problem, the patient records are already stored in sorted order based on `patientID`, making Binary Search the ideal choice.

*   **How it works**: Instead of checking elements one by one, Binary Search starts by checking the middle element of the collection.
    *   If the middle element's ID matches the target ID, the record is found.
    *   If the target ID is less than the middle element's ID, the search continues only in the **lower half** of the collection.
    *   If the target ID is greater than the middle element's ID, the search continues only in the **upper half**.
    This process of halving the search space is repeated until the record is found or the search space becomes empty.

We will use an array of structures to store the sorted patient records. The Binary Search function will efficiently locate the patient without having to scan the entire list.

**Key Operations:**
*   **Structure Definition**: Create a `struct` for patient data: `patientID`, `diagnosis`, `doctorName`.
*   **Data Entry**: A function to populate an array of patient structures. For this problem, we will assume the data is entered or maintained in sorted order of `patientID`.
*   **Binary Search Function**: A function that takes the sorted array of patients, the total count, and the target `patientID`. It will use the divide-and-conquer approach to find the record. If found, it displays the patient's details; otherwise, it reports that the record was not found.

---

**Algorithm:**

```
// Define Patient structure
STRUCTURE Patient:
  patientID: integer
  diagnosis: string
  doctorName: string

// BINARY SEARCH function
// Assumes patientArray is sorted by patientID
BINARY_SEARCH(patientArray[], count, targetID):
1. Initialize `low = 0`, `high = count - 1`.
2. WHILE `low <= high`:
3.   `mid = low + (high - low) / 2`
4.   // Check if targetID is present at mid
5.   IF patientArray[mid].patientID == targetID THEN
6.     PRINT "Patient Record Found:"
7.     PRINT "Diagnosis: ", patientArray[mid].diagnosis
8.     PRINT "Doctor: ", patientArray[mid].doctorName
9.     RETURN mid // Record found at index mid
10.  END IF
11.  // If targetID is smaller, ignore the right half
12.  IF patientArray[mid].patientID > targetID THEN
13.    `high = mid - 1`
14.  // If targetID is larger, ignore the left half
15.  ELSE
16.    `low = mid + 1`
17.  END IF
18. END WHILE
19. // If the loop finishes, the element was not found
20. PRINT "Patient record with ID ", targetID, " not found."
21. RETURN -1
```

---

**C Code:**

```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_PATIENTS 50
#define DIAG_LEN 100
#define DOC_NAME_LEN 50

// Structure for a patient record
struct Patient {
    int patientID;
    char diagnosis[DIAG_LEN];
    char doctorName[DOC_NAME_LEN];
};

// Function to perform binary search for a patient by ID
void binarySearch(struct Patient patients[], int count, int targetID) {
    int low = 0;
    int high = count - 1;
    int found = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (patients[mid].patientID == targetID) {
            printf("\n--- Patient Record Found! ---\n");
            printf("Patient ID:    %d\n", patients[mid].patientID);
            printf("Diagnosis:     %s\n", patients[mid].diagnosis);
            printf("Doctor Name:   %s\n", patients[mid].doctorName);
            printf("-----------------------------\n");
            found = 1;
            break;
        }

        if (patients[mid].patientID < targetID) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (!found) {
        printf("\n--- Patient record with ID %d not found. ---\n", targetID);
    }
}

// Helper function to sort patients by ID (for demonstration if data isn't pre-sorted)
int comparePatients(const void* a, const void* b) {
    struct Patient* p1 = (struct Patient*)a;
    struct Patient* p2 = (struct Patient*)b;
    return (p1->patientID - p2->patientID);
}

int main() {
    struct Patient patients[MAX_PATIENTS];
    int count = 0;
    int choice;

    while (1) {
        printf("\n--- Hospital Management System ---\n");
        printf("1. Add Patient Record (maintains sorted order)\n");
        printf("2. Search for a Patient (Binary Search)\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count >= MAX_PATIENTS) {
                    printf("Database is full.\n");
                } else {
                    printf("\nEnter details for new patient:\n");
                    printf("Patient ID: ");
                    scanf("%d", &patients[count].patientID);
                    printf("Diagnosis: ");
                    scanf(" %[^\n]", patients[count].diagnosis);
                    printf("Doctor Name: ");
                    scanf(" %[^\n]", patients[count].doctorName);
                    count++;
                    // Sort the array after each insertion to maintain order for binary search
                    qsort(patients, count, sizeof(struct Patient), comparePatients);
                    printf("Patient record added and list sorted.\n");
                }
                break;

            case 2:
                if (count == 0) {
                    printf("No records to search.\n");
                } else {
                    int searchID;
                    printf("\nEnter the Patient ID to search for: ");
                    scanf("%d", &searchID);
                    binarySearch(patients, count, searchID);
                }
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
