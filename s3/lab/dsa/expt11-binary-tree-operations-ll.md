### **File: `expt11-binary-tree-operations-ll.md`**

#### **Experiment 11: Implementation of Binary Trees using Linked Lists**

**Concept Overview:**

A **Binary Tree** is a hierarchical data structure where each node has at most two children, referred to as the **left child** and the **right child**. The topmost node in the tree is called the **root**. A node with no children is a **leaf node**.

Using a linked list (specifically, a doubly-linked structure) is the most common and flexible way to implement a binary tree. Each node in the tree is represented by a structure containing three parts:
1.  **Data**: The value stored in the node.
2.  **Left Pointer**: A pointer to the left child node. If there is no left child, it is `NULL`.
3.  **Right Pointer**: A pointer to the right child node. If there is no right child, it is `NULL`.

**Tree Traversal:**
Traversal is the process of visiting (e.g., printing the data of) each node in the tree exactly once. The three most common traversal methods are Depth-First Traversals:
*   **Pre-order Traversal (Node-Left-Right)**:
    1.  Visit the root.
    2.  Traverse the left subtree.
    3.  Traverse the right subtree.
*   **In-order Traversal (Left-Node-Right)**:
    1.  Traverse the left subtree.
    2.  Visit the root.
    3.  Traverse the right subtree.
*   **Post-order Traversal (Left-Right-Node)**:
    1.  Traverse the left subtree.
    2.  Traverse the right subtree.
    3.  Visit the root.

---

**Algorithm:**

```
// Define Node structure for a Binary Tree
STRUCTURE TreeNode:
  data: integer (or any type)
  left: pointer to TreeNode
  right: pointer to TreeNode

// CREATE NODE
CREATE_NODE(value):
1. Allocate memory for a newNode.
2. newNode.data = value
3. newNode.left = NULL
4. newNode.right = NULL
5. RETURN newNode

// PRE-ORDER TRAVERSAL
PREORDER(root):
1. IF root == NULL THEN RETURN
2. VISIT(root.data)
3. PREORDER(root.left)
4. PREORDER(root.right)

// IN-ORDER TRAVERSAL
INORDER(root):
1. IF root == NULL THEN RETURN
2. INORDER(root.left)
3. VISIT(root.data)
4. INORDER(root.right)

// POST-ORDER TRAVERSAL
POSTORDER(root):
1. IF root == NULL THEN RETURN
2. POSTORDER(root.left)
3. POSTORDER(root.right)
4. VISIT(root.data)

// INSERTION AND DELETION
// For a general Binary Tree, insertion and deletion can be complex as there's no inherent order.
// A common approach for insertion is to insert at the first available spot in a level-by-level manner.
// A common approach for deletion is to find the node, replace it with the deepest, right-most node, and then delete that deepest node.
// These operations are simpler in a Binary Search Tree (Experiment 12). The code below provides a basic manual tree creation and traversal.
```

---

**C Code:**

This code provides a manual way to create a simple binary tree and then performs the three main traversals on it. For a general binary tree, insertion and deletion are not as well-defined as in a Binary Search Tree, so this example focuses on creation and traversal.

```c
#include <stdio.h>
#include <stdlib.h>

// Node structure for a binary tree
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function for Pre-order traversal (Node-Left-Right)
void preOrderTraversal(struct Node* root) {
    if (root == NULL) {
        return;
    }
    printf("%d ", root->data);       // Visit the root
    preOrderTraversal(root->left);   // Traverse left subtree
    preOrderTraversal(root->right);  // Traverse right subtree
}

// Function for In-order traversal (Left-Node-Right)
void inOrderTraversal(struct Node* root) {
    if (root == NULL) {
        return;
    }
    inOrderTraversal(root->left);    // Traverse left subtree
    printf("%d ", root->data);       // Visit the root
    inOrderTraversal(root->right);   // Traverse right subtree
}

// Function for Post-order traversal (Left-Right-Node)
void postOrderTraversal(struct Node* root) {
    if (root == NULL) {
        return;
    }
    postOrderTraversal(root->left);  // Traverse left subtree
    postOrderTraversal(root->right); // Traverse right subtree
    printf("%d ", root->data);       // Visit the root
}


// A simple function to create a tree from user input (recursive)
// Note: This is a basic creation method for demonstration.
struct Node* createTree() {
    int data;
    struct Node* newNode;

    printf("Enter data (-1 for no node): ");
    scanf("%d", &data);

    if (data == -1) {
        return NULL;
    }

    newNode = createNode(data);

    printf("Enter left child for %d:\n", data);
    newNode->left = createTree();

    printf("Enter right child for %d:\n", data);
    newNode->right = createTree();

    return newNode;
}


int main() {
    struct Node* root = NULL;
    int choice;

    printf("--- CREATE A BINARY TREE ---\n");
    root = createTree();

    while (1) {
        printf("\n\n--- BINARY TREE TRAVERSAL MENU ---\n");
        printf("1. Pre-order Traversal\n");
        printf("2. In-order Traversal\n");
        printf("3. Post-order Traversal\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Pre-order Traversal: ");
                preOrderTraversal(root);
                break;
            case 2:
                printf("In-order Traversal: ");
                inOrderTraversal(root);
                break;
            case 3:
                printf("Post-order Traversal: ");
                postOrderTraversal(root);
                break;
            case 4:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
```
