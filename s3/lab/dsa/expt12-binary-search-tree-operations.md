### **File: `expt12-binary-search-tree-operations.md`**

#### **Experiment 12: Implementation of Binary Search Trees**

**Concept Overview:**

A **Binary Search Tree (BST)** is a special type of binary tree that maintains a specific ordering among its nodes. This ordering property makes search, insertion, and deletion operations highly efficient.

The key properties of a BST are:
1.  For any given node `N`, all values in its **left subtree** are **less than** `N`'s value.
2.  For any given node `N`, all values in its **right subtree** are **greater than** `N`'s value.
3.  Both the left and right subtrees must also be binary search trees.
4.  There must be no duplicate nodes (though some definitions allow them).

A significant advantage of this structure is that an **In-order Traversal** of a BST always yields the nodes in sorted (ascending) order. The average time complexity for search, insertion, and deletion is O(log n), which is very fast. However, in the worst-case scenario (an unbalanced tree resembling a linked list), the complexity degrades to O(n).

**Key Operations:**
*   **Search**: To find a value, start at the root. If the target value is less than the current node's value, go left; if greater, go right. Repeat until the value is found or a `NULL` pointer is reached.
*   **Insertion**: Find the correct position for the new value using the search logic. Once a `NULL` pointer is reached, insert the new node there.
*   **Deletion**: This is the most complex operation, with three cases for the node to be deleted:
    1.  **Node has no children (leaf node)**: Simply remove the node.
    2.  **Node has one child**: Replace the node with its child.
    3.  **Node has two children**: Find the node's **in-order successor** (the smallest value in its right subtree) or **in-order predecessor** (the largest value in its left subtree). Copy the successor's/predecessor's value to the node being deleted, and then delete the successor/predecessor node (which will have at most one child, making it an easier case to handle).

---

**Algorithm:**

```
// Define Node structure (same as Binary Tree)
STRUCTURE TreeNode:
  data: integer
  left: pointer to TreeNode
  right: pointer to TreeNode

// SEARCH Operation
SEARCH(root, value):
1. IF root == NULL OR root.data == value THEN
2.   RETURN root
3. END IF
4. IF value < root.data THEN
5.   RETURN SEARCH(root.left, value)
6. ELSE
7.   RETURN SEARCH(root.right, value)
8. END IF

// INSERT Operation
INSERT(root, value):
1. IF root == NULL THEN
2.   RETURN CREATE_NODE(value)
3. END IF
4. IF value < root.data THEN
5.   root.left = INSERT(root.left, value)
6. ELSE IF value > root.data THEN
7.   root.right = INSERT(root.right, value)
8. END IF
9. RETURN root

// DELETE Operation
// Helper function to find the in-order successor
MIN_VALUE_NODE(node):
1. current = node
2. WHILE current.left != NULL
3.   current = current.left
4. END WHILE
5. RETURN current

DELETE(root, value):
1. IF root == NULL THEN RETURN root
2. IF value < root.data THEN
3.   root.left = DELETE(root.left, value)
4. ELSE IF value > root.data THEN
5.   root.right = DELETE(root.right, value)
6. ELSE // Node to be deleted is found
   a. // Case 1 & 2: Node with 0 or 1 child
   b. IF root.left == NULL THEN
      i. temp = root.right
      ii. FREE root
      iii. RETURN temp
   c. ELSE IF root.right == NULL THEN
      i. temp = root.left
      ii. FREE root
      iii. RETURN temp
   d. // Case 3: Node with 2 children
   e. temp = MIN_VALUE_NODE(root.right) // Find in-order successor
   f. root.data = temp.data // Copy successor's data
   g. root.right = DELETE(root.right, temp.data) // Delete the successor
7. END IF
8. RETURN root
```

---

**C Code:**

```c
#include <stdio.h>
#include <stdlib.h>

// Node structure for a binary search tree
struct Node {
    int data;
    struct Node *left, *right;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to insert a node into the BST
struct Node* insert(struct Node* root, int value) {
    // If the tree is empty, return a new node
    if (root == NULL) {
        return createNode(value);
    }
    // Otherwise, recur down the tree
    if (value < root->data) {
        root->left = insert(root->left, value);
    } else if (value > root->data) {
        root->right = insert(root->right, value);
    }
    // Return the (unchanged) node pointer
    return root;
}

// Function to search for a key in the BST
struct Node* search(struct Node* root, int key) {
    if (root == NULL || root->data == key) {
        return root;
    }
    if (key < root->data) {
        return search(root->left, key);
    }
    return search(root->right, key);
}


// Function to find the in-order successor (smallest in the right subtree)
struct Node* minValueNode(struct Node* node) {
    struct Node* current = node;
    while (current && current->left != NULL) {
        current = current->left;
    }
    return current;
}

// Function to delete a node from the BST
struct Node* deleteNode(struct Node* root, int key) {
    if (root == NULL) return root;

    // Recur down the tree
    if (key < root->data) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->data) {
        root->right = deleteNode(root->right, key);
    } else { // Node with the key is found
        // Case 1 & 2: Node with one or no child
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }

        // Case 3: Node with two children
        struct Node* temp = minValueNode(root->right); // Get the in-order successor
        root->data = temp->data; // Copy the successor's content to this node
        root->right = deleteNode(root->right, temp->data); // Delete the in-order successor
    }
    return root;
}

// Function for In-order traversal (prints sorted data)
void inOrderTraversal(struct Node* root) {
    if (root != NULL) {
        inOrderTraversal(root->left);
        printf("%d ", root->data);
        inOrderTraversal(root->right);
    }
}

int main() {
    struct Node* root = NULL;
    int choice, value;

    while (1) {
        printf("\n\n--- BINARY SEARCH TREE OPERATIONS ---\n");
        printf("1. Insert Node\n");
        printf("2. Delete Node\n");
        printf("3. Search for a Node\n");
        printf("4. Display (In-order Traversal)\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                root = insert(root, value);
                printf("%d inserted successfully.\n", value);
                break;
            case 2:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                root = deleteNode(root, value);
                printf("%d deleted (if it existed).\n", value);
                break;
            case 3:
                printf("Enter value to search: ");
                scanf("%d", &value);
                if (search(root, value) != NULL) {
                    printf("Value %d found in the BST.\n", value);
                } else {
                    printf("Value %d not found in the BST.\n", value);
                }
                break;
            case 4:
                printf("In-order Traversal: ");
                inOrderTraversal(root);
                printf("\n");
                break;
            case 5:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
```
