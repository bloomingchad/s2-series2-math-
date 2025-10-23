### **File: `lab-q14-hospital-patient-bst.md`**

#### **Lab Question 14: Hospital Patient Management using a BST**

**Problem Statement:**
A hospital wants to manage its patients using a Binary Search Tree (BST) based on the `PatientID` (an integer). Each patient has the following data:
*   Patient ID (unique integer)
*   Name (string)
*   Age (integer)

The system should support the following operations:
1.  Add a new patient
2.  Discharge a patient (i.e., remove by Patient ID)
3.  Search for a patient by Patient ID
4.  Display all patients in increasing order of their Patient IDs.

**Concept Overview:**

This problem is a real-world application of a **Binary Search Tree (BST)**. Using a BST is highly suitable for managing patient records because it allows for efficient searching, addition, and removal of patients based on their unique ID. The average time complexity for these operations is O(log n).

*   The BST will be organized based on `PatientID`.
*   Each **node** in the tree will be a structure containing the patient's full details (`PatientID`, `Name`, `Age`) along with pointers to the left and right children.
*   **Adding a patient** is a standard BST insertion.
*   **Discharging a patient** is a standard BST deletion.
*   **Searching for a patient** is a standard BST search.
*   **Displaying all patients in increasing order** is achieved by performing an **In-order Traversal** of the BST, which naturally visits the nodes in sorted order of their keys (the `PatientID`).

---

**Algorithm:**

```
// Define PatientNode structure
STRUCTURE PatientNode:
  patientID: integer
  name: string
  age: integer
  left: pointer to PatientNode
  right: pointer to PatientNode

// Global root pointer
root = NULL

// 1. ADD A NEW PATIENT (BST Insert)
ADD_PATIENT(node, id, name, age):
1. IF node == NULL THEN
2.   RETURN CREATE_PATIENT_NODE(id, name, age)
3. END IF
4. IF id < node.patientID THEN
5.   node.left = ADD_PATIENT(node.left, id, name, age)
6. ELSE IF id > node.patientID THEN
7.   node.right = ADD_PATIENT(node.right, id, name, age)
8. END IF
9. RETURN node

// 2. DISCHARGE A PATIENT (BST Delete)
// Helper to find the patient with the minimum ID in a subtree
FIND_MIN(node):
1. current = node
2. WHILE current.left != NULL, current = current.left, END WHILE
3. RETURN current

DISCHARGE_PATIENT(node, id):
1. IF node == NULL THEN RETURN NULL
2. IF id < node.patientID THEN node.left = DISCHARGE_PATIENT(node.left, id)
3. ELSE IF id > node.patientID THEN node.right = DISCHARGE_PATIENT(node.right, id)
4. ELSE // Patient to be discharged is found
   a. IF node.left == NULL THEN
      i. temp = node.right, FREE node, RETURN temp
   b. ELSE IF node.right == NULL THEN
      i. temp = node.left, FREE node, RETURN temp
   c. // Node has two children
   d. temp = FIND_MIN(node.right)
   e. // Copy data from in-order successor to this node
   f. node.patientID = temp.patientID
   g. strcpy(node.name, temp.name)
   h. node.age = temp.age
   i. node.right = DISCHARGE_PATIENT(node.right, temp.patientID) // Delete the successor
5. END IF
6. RETURN node

// 3. SEARCH FOR A PATIENT (BST Search)
SEARCH_PATIENT(node, id):
1. IF node == NULL OR node.patientID == id THEN
2.   RETURN node
3. END IF
4. IF id < node.patientID THEN
5.   RETURN SEARCH_PATIENT(node.left, id)
6. ELSE
7.   RETURN SEARCH_PATIENT(node.right, id)
8. END IF

// 4. DISPLAY ALL PATIENTS (In-order Traversal)
DISPLAY_ALL(node):
1. IF node != NULL THEN
2.   DISPLAY_ALL(node.left)
3.   PRINT node.patientID, node.name, node.age
4.   DISPLAY_ALL(node.right)
5. END IF
```

---

**C Code:**

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_LEN 50

// Structure for a patient record node
struct PatientNode {
    int patientID;
    char name[NAME_LEN];
    int age;
    struct PatientNode *left;
    struct PatientNode *right;
};

// Function to create a new patient node
struct PatientNode* createPatientNode(int id, const char* name, int age) {
    struct PatientNode* newNode = (struct PatientNode*)malloc(sizeof(struct PatientNode));
    newNode->patientID = id;
    strcpy(newNode->name, name);
    newNode->age = age;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// 1. Add a new patient (Insert into BST)
struct PatientNode* addPatient(struct PatientNode* node, int id, const char* name, int age) {
    if (node == NULL) {
        return createPatientNode(id, name, age);
    }
    if (id < node->patientID) {
        node->left = addPatient(node->left, id, name, age);
    } else if (id > node->patientID) {
        node->right = addPatient(node->right, id, name, age);
    } else {
        printf("Error: Patient with ID %d already exists.\n", id);
    }
    return node;
}

// Helper to find the in-order successor
struct PatientNode* minValueNode(struct PatientNode* node) {
    struct PatientNode* current = node;
    while (current && current->left != NULL) {
        current = current->left;
    }
    return current;
}

// 2. Discharge a patient (Delete from BST)
struct PatientNode* dischargePatient(struct PatientNode* root, int id) {
    if (root == NULL) return root;

    if (id < root->patientID) {
        root->left = dischargePatient(root->left, id);
    } else if (id > root->patientID) {
        root->right = dischargePatient(root->right, id);
    } else {
        // Node with one or no child
        if (root->left == NULL) {
            struct PatientNode* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct PatientNode* temp = root->left;
            free(root);
            return temp;
        }
        // Node with two children
        struct PatientNode* temp = minValueNode(root->right);
        root->patientID = temp->patientID;
        strcpy(root->name, temp->name);
        root->age = temp->age;
        root->right = dischargePatient(root->right, temp->patientID);
    }
    return root;
}

// 3. Search for a patient by Patient ID
void searchPatient(struct PatientNode* root, int id) {
    if (root == NULL) {
        printf("Patient with ID %d not found.\n", id);
        return;
    }
    if (root->patientID == id) {
        printf("\n--- Patient Found ---\n");
        printf("ID: %d\nName: %s\nAge: %d\n", root->patientID, root->name, root->age);
        printf("---------------------\n");
    } else if (id < root->patientID) {
        searchPatient(root->left, id);
    } else {
        searchPatient(root->right, id);
    }
}

// 4. Display all patients (In-order traversal)
void displayAll(struct PatientNode* root) {
    if (root != NULL) {
        displayAll(root->left);
        printf("ID: %-5d | Name: %-20s | Age: %d\n", root->patientID, root->name, root->age);
        displayAll(root->right);
    }
}

int main() {
    struct PatientNode* root = NULL;
    int choice, id, age;
    char name[NAME_LEN];

    while (1) {
        printf("\n--- Hospital Patient Management System (BST) ---\n");
        printf("1. Add a new patient\n");
        printf("2. Discharge a patient (by ID)\n");
        printf("3. Search for a patient (by ID)\n");
        printf("4. Display all patients (sorted by ID)\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Patient ID: ");
                scanf("%d", &id);
                printf("Enter Patient Name: ");
                scanf(" %[^\n]", name);
                printf("Enter Patient Age: ");
                scanf("%d", &age);
                root = addPatient(root, id, name, age);
                printf("Patient added.\n");
                break;
            case 2:
                printf("Enter Patient ID to discharge: ");
                scanf("%d", &id);
                root = dischargePatient(root, id);
                break;
            case 3:
                printf("Enter Patient ID to search: ");
                scanf("%d", &id);
                searchPatient(root, id);
                break;
            case 4:
                printf("\n--- All Patient Records ---\n");
                if (root == NULL) {
                    printf("No patient records in the system.\n");
                } else {
                    displayAll(root);
                }
                printf("---------------------------\n");
                break;
            case 5:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
```
