
### **File: `expt8-doubly-linked-list.md`**

#### **Experiment 8: Implementation of Doubly Linked List Operations**

**Concept Overview:**

A **Doubly Linked List** is a more complex type of linked list where each node has two pointers instead of one. In addition to the `next` pointer that points to the subsequent node, each node also has a `prev` (previous) pointer that points to the preceding node.

This bidirectional linkage provides significant advantages:
1.  **Traversal in Both Directions**: The list can be traversed both forwards (using the `next` pointer) and backwards (using the `prev` pointer).
2.  **Efficient Deletion**: Deleting a node is more efficient. In a singly linked list, to delete a node, you need a pointer to the node *before* it. In a doubly linked list, if you have a pointer to the node you want to delete, you can access its `prev` node directly, making deletion simpler.

The structure of a node in a doubly linked list contains three parts:
*   **`prev`**: A pointer to the previous node in the sequence. For the first node, this is `NULL`.
*   **Data**: The value stored in the node.
*   **`next`**: A pointer to the next node in the sequence. For the last node, this is `NULL`.

---

**Algorithm:**

```
// Define Node structure
STRUCTURE Node:
  prev: pointer to Node
  data: integer (or any type)
  next: pointer to Node

// Global start pointer
start = NULL

// INSERT AT BEGINNING
INSERT_BEGIN(value):
1. Allocate memory for a newNode.
2. newNode.data = value
3. newNode.prev = NULL
4. newNode.next = start
5. IF start != NULL THEN
6.   start.prev = newNode
7. END IF
8. start = newNode

// INSERT AT END
INSERT_END(value):
1. Allocate memory for a newNode.
2. newNode.data = value
3. newNode.next = NULL
4. IF start == NULL THEN
5.   newNode.prev = NULL
6.   start = newNode
7. ELSE
8.   temp = start
9.   WHILE temp.next != NULL
10.    temp = temp.next
11.  END WHILE
12.  temp.next = newNode
13.  newNode.prev = temp
14. END IF

// DELETE FROM BEGINNING
DELETE_BEGIN():
1. IF start == NULL THEN
2.   PRINT "List is empty"
3.   RETURN
4. END IF
5. temp = start
6. start = start.next
7. IF start != NULL THEN
8.   start.prev = NULL
9. END IF
10. FREE temp

// DELETE FROM END
DELETE_END():
1. IF start == NULL THEN
2.   PRINT "List is empty"
3.   RETURN
4. END IF
5. IF start.next == NULL THEN // Only one node
6.   FREE start
7.   start = NULL
8. ELSE
9.   temp = start
10.  WHILE temp.next != NULL
11.    temp = temp.next
12.  END WHILE
13.  temp.prev.next = NULL
14.  FREE temp
15. END IF

// DISPLAY LIST FORWARD
DISPLAY_FORWARD():
1. IF start == NULL THEN
2.   PRINT "List is empty"
3. ELSE
4.   temp = start
5.   WHILE temp != NULL
6.     PRINT temp.data
7.     temp = temp.next
8.   END WHILE
9. END IF
```

---

**C Code:**

```c
#include <stdio.h>
#include <stdlib.h>

// Define the Node structure
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* start = NULL;

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the beginning
void insertAtFirst() {
    int data;
    printf("Enter data to insert at the beginning: ");
    scanf("%d", &data);
    struct Node* newNode = createNode(data);

    if (start == NULL) {
        start = newNode;
    } else {
        newNode->next = start;
        start->prev = newNode;
        start = newNode;
    }
    printf("Node inserted successfully.\n");
}

// Function to insert a node at the end
void insertAtEnd() {
    int data;
    printf("Enter data to insert at the end: ");
    scanf("%d", &data);
    struct Node* newNode = createNode(data);

    if (start == NULL) {
        start = newNode;
    } else {
        struct Node* temp = start;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
    printf("Node inserted successfully.\n");
}

// Function to delete a node from the beginning
void deleteFromFirst() {
    if (start == NULL) {
        printf("List is empty. Cannot delete.\n");
        return;
    }
    struct Node* temp = start;
    start = start->next;
    if (start != NULL) {
        start->prev = NULL;
    }
    printf("Deleted node with data: %d\n", temp->data);
    free(temp);
}

// Function to delete a node from the end
void deleteFromEnd() {
    if (start == NULL) {
        printf("List is empty. Cannot delete.\n");
        return;
    }
    struct Node* temp = start;
    if (temp->next == NULL) { // Only one node
        start = NULL;
    } else {
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->prev->next = NULL;
    }
    printf("Deleted node with data: %d\n", temp->data);
    free(temp);
}

// Function to display the doubly linked list forward
void display() {
    if (start == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node* temp = start;
    printf("Doubly Linked List (Forward): NULL <-> ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    int choice;
    while (1) {
        printf("\n--- DOUBLY LINKED LIST OPERATIONS ---\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Delete from Beginning\n");
        printf("4. Delete from End\n");
        printf("5. Display List\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insertAtFirst();
                break;
            case 2:
                insertAtEnd();
                break;
            case 3:
                deleteFromFirst();
                break;
            case 4:
                deleteFromEnd();
                break;
            case 5:
                display();
                break;
            case 6:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
```
