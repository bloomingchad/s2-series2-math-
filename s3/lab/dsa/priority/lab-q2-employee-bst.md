### **File: `lab-q2-employee-bst.md`**

#### **Lab Question 2: Employee ID Management using Binary Search Tree**

**Problem Statement:**
Implement a Binary Search Tree (BST) for managing employee IDs with insert and delete functionality.

**Concept Overview:**

This problem requires a system to manage a set of unique employee IDs. A **Binary Search Tree (BST)** is an excellent choice for this task because its inherent ordering property allows for very efficient searching, insertion, and deletion of IDs, with an average time complexity of O(log n).

The BST will be structured based on the numeric value of the employee IDs.
*   For any given employee ID in the tree, all IDs in its **left subtree** will be smaller.
*   All IDs in its **right subtree** will be larger.

This structure ensures that we can quickly locate, add, or remove an employee ID by following a simple path from the root down. The core functionalities are inserting a new ID, deleting an existing ID, and perhaps displaying all IDs (which can be done efficiently in sorted order using an in-order traversal).

The algorithms for **insertion** and **deletion** are the standard BST operations:
*   **Insertion**: Recursively find the correct leaf position for the new ID and add it.
*   **Deletion**: Handle the three cases: deleting a leaf node, a node with one child, or a node with two children (by replacing it with its in-order successor).

---

**Algorithm:**

```
// Define TreeNode structure
STRUCTURE TreeNode:
  employeeID: integer
  left: pointer to TreeNode
  right: pointer to TreeNode

// Global root pointer
root = NULL

// INSERT Operation (Recursive)
INSERT(node, id):
1. IF node == NULL THEN
2.   RETURN CREATE_NODE(id)
3. END IF
4. IF id < node.employeeID THEN
5.   node.left = INSERT(node.left, id)
6. ELSE IF id > node.employeeID THEN
7.   node.right = INSERT(node.right, id)
8. END IF
9. RETURN node

// DELETE Operation (Recursive)
// Helper to find the node with the minimum ID in a subtree
FIND_MIN(node):
1. current = node
2. WHILE current.left != NULL
3.   current = current.left
4. END WHILE
5. RETURN current

DELETE(node, id):
1. IF node == NULL THEN RETURN NULL
2. IF id < node.employeeID THEN
3.   node.left = DELETE(node.left, id)
4. ELSE IF id > node.employeeID THEN
5.   node.right = DELETE(node.right, id)
6. ELSE // ID to be deleted is found
   a. // Case 1: Node has no children or one child
   b. IF node.left == NULL THEN
      i. temp = node.right
      ii. FREE node
      iii. RETURN temp
   c. ELSE IF node.right == NULL THEN
      i. temp = node.left
      ii. FREE node
      iii. RETURN temp
   d. // Case 2: Node has two children
   e. temp = FIND_MIN(node.right) // Find in-order successor
   f. node.employeeID = temp.employeeID // Copy successor's ID
   g. node.right = DELETE(node.right, temp.employeeID) // Delete the successor
7. END IF
8. RETURN node

// DISPLAY (IN-ORDER TRAVERSAL)
DISPLAY_INORDER(node):
1. IF node != NULL THEN
2.   DISPLAY_INORDER(node.left)
3.   PRINT node.employeeID
4.   DISPLAY_INORDER(node.right)
5. END IF
```

---

**C Code:**

```c
#include <stdio.h>
#include <stdlib.h>

// Structure for a node in the BST
struct Node {
    int employeeID;
    struct Node *left;
    struct Node *right;
};

// Function to create a new node
struct Node* createNode(int id) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->employeeID = id;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert an employee ID into the BST
struct Node* insert(struct Node* node, int id) {
    // If the tree is empty, create a new node and return it
    if (node == NULL) {
        return createNode(id);
    }
    // Recur down the tree
    if (id < node->employeeID) {
        node->left = insert(node->left, id);
    } else if (id > node->employeeID) {
        node->right = insert(node->right, id);
    } else {
        printf("Employee ID %d already exists. No duplicates allowed.\n", id);
    }
    return node;
}

// Helper function to find the node with the minimum value (in-order successor)
struct Node* minValueNode(struct Node* node) {
    struct Node* current = node;
    while (current && current->left != NULL) {
        current = current->left;
    }
    return current;
}

// Function to delete an employee ID from the BST
struct Node* deleteNode(struct Node* root, int id) {
    if (root == NULL) {
        printf("Employee ID %d not found in the tree.\n", id);
        return root;
    }

    if (id < root->employeeID) {
        root->left = deleteNode(root->left, id);
    } else if (id > root->employeeID) {
        root->right = deleteNode(root->right, id);
    } else {
        // Node with the ID to be deleted is found

        // Case 1 & 2: Node with zero or one child
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            printf("Employee ID %d deleted.\n", id);
            return temp;
        } else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            printf("Employee ID %d deleted.\n", id);
            return temp;
        }

        // Case 3: Node with two children
        struct Node* temp = minValueNode(root->right);
        root->employeeID = temp->employeeID; // Copy the in-order successor's ID
        root->right = deleteNode(root->right, temp->employeeID); // Delete the successor
        printf("Employee ID %d deleted.\n", id);
    }
    return root;
}

// Function to display all employee IDs in sorted order (In-order traversal)
void displayInOrder(struct Node* root) {
    if (root != NULL) {
        displayInOrder(root->left);
        printf("%d ", root->employeeID);
        displayInOrder(root->right);
    }
}

int main() {
    struct Node* root = NULL;
    int choice, id;

    while (1) {
        printf("\n--- Employee ID Management (BST) ---\n");
        printf("1. Insert Employee ID\n");
        printf("2. Delete Employee ID\n");
        printf("3. Display All IDs (Sorted)\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Employee ID to insert: ");
                scanf("%d", &id);
                root = insert(root, id);
                break;
            case 2:
                printf("Enter Employee ID to delete: ");
                scanf("%d", &id);
                root = deleteNode(root, id);
                break;
            case 3:
                printf("All Employee IDs in sorted order: ");
                if (root == NULL) {
                    printf("No IDs to display.");
                } else {
                    displayInOrder(root);
                }
                printf("\n");
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
