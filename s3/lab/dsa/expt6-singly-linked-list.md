### **File: `expt6-singly-linked-list.md`**

#### **Experiment 6: Implementation of Singly Linked List Operations**

**Concept Overview:**

A **Singly Linked List** is a fundamental dynamic data structure. Unlike arrays which store elements in contiguous memory locations, linked lists store elements in separate objects called **nodes**. Each node contains two parts:
1.  **Data**: The actual value to be stored in the node.
2.  **Link (or Next Pointer)**: A pointer that stores the memory address of the next node in the sequence.

The list is accessed through a starting pointer, often called `start` or `head`, which points to the first node. The last node in the list has its link part set to `NULL`, indicating the end of the sequence.

Because nodes are not stored contiguously, linked lists are highly flexible. Insertions and deletions can be done efficiently without shifting elements, just by rearranging the pointers. This makes them a **dynamic data structure** that can grow or shrink at runtime.

**Key Operations:**
*   **Insertion**: Can be done at the beginning, at the end, or at a specific position.
*   **Deletion**: Can be done from the beginning, from the end, or by deleting a specific node (by value or position).
*   **Traversal / Display**: Visiting each node in the list from beginning to end to display its data.
*   **Search**: Traversing the list to find a node with a specific value.

---

**Algorithm:**

```
// Define Node structure
STRUCTURE Node:
  data: integer (or any type)
  link: pointer to Node

// Global start pointer
start = NULL

// INSERT AT BEGINNING
INSERT_BEGIN(value):
1. Allocate memory for a newNode.
2. newNode.data = value
3. newNode.link = start
4. start = newNode

// INSERT AT END
INSERT_END(value):
1. Allocate memory for a newNode.
2. newNode.data = value
3. newNode.link = NULL
4. IF start == NULL THEN
5.   start = newNode
6. ELSE
7.   temp = start
8.   WHILE temp.link != NULL
9.     temp = temp.link
10.  END WHILE
11.  temp.link = newNode
12. END IF

// DELETE FROM BEGINNING
DELETE_BEGIN():
1. IF start == NULL THEN
2.   PRINT "List is empty"
3.   RETURN
4. END IF
5. temp = start
6. start = start.link
7. FREE temp

// DELETE FROM END
DELETE_END():
1. IF start == NULL THEN
2.   PRINT "List is empty"
3.   RETURN
4. END IF
5. IF start.link == NULL THEN // Only one node
6.   FREE start
7.   start = NULL
8. ELSE
9.   temp = start
10.  prev = NULL
11.  WHILE temp.link != NULL
12.    prev = temp
13.    temp = temp.link
14.  END WHILE
15.  prev.link = NULL
16.  FREE temp
17. END IF

// DISPLAY LIST
DISPLAY():
1. IF start == NULL THEN
2.   PRINT "List is empty"
3. ELSE
4.   temp = start
5.   WHILE temp != NULL
6.     PRINT temp.data
7.     temp = temp.link
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
    struct Node* link;
};

// Global start pointer
struct Node* start = NULL;

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->link = NULL;
    return newNode;
}

// Function to insert a node at the beginning
void insertAtFirst() {
    int data;
    printf("Enter the data to insert: ");
    scanf("%d", &data);
    struct Node* newNode = createNode(data);
    newNode->link = start;
    start = newNode;
    printf("Node inserted successfully.\n");
}

// Function to insert a node at the end
void insertAtEnd() {
    int data;
    printf("Enter the data to insert: ");
    scanf("%d", &data);
    struct Node* newNode = createNode(data);

    if (start == NULL) {
        start = newNode;
    } else {
        struct Node* temp = start;
        while (temp->link != NULL) {
            temp = temp->link;
        }
        temp->link = newNode;
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
    start = start->link;
    printf("Deleted node with data: %d\n", temp->data);
    free(temp);
}

// Function to delete a node from the end
void deleteFromEnd() {
    if (start == NULL) {
        printf("List is empty. Cannot delete.\n");
        return;
    }
    if (start->link == NULL) { // If only one node exists
        printf("Deleted node with data: %d\n", start->data);
        free(start);
        start = NULL;
        return;
    }
    struct Node* temp = start;
    struct Node* prev = NULL;
    while (temp->link != NULL) {
        prev = temp;
        temp = temp->link;
    }
    prev->link = NULL;
    printf("Deleted node with data: %d\n", temp->data);
    free(temp);
}

// Function to display the linked list
void display() {
    if (start == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node* temp = start;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->link;
    }
    printf("NULL\n");
}

int main() {
    int choice;
    while (1) {
        printf("\n--- SINGLY LINKED LIST OPERATIONS ---\n");
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
