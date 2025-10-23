### **File: `expt7-circular-linked-list.md`**

#### **Experiment 7: Implementation of Circular Linked List Operations**

**Concept Overview:**

A **Circular Linked List** is a variation of a standard singly linked list where the last node does not point to `NULL`. Instead, the `link` (or `next`) pointer of the last node points back to the **first node** (the `start` or `head` of the list). This creates a circular loop.

This structure is useful in applications where you need to cycle through the elements of a list repeatedly, such as managing a round-robin scheduling algorithm or a playlist of songs. Since there's no `NULL` end, every node has a successor, and the list can be traversed indefinitely.

A single pointer, often called `start` or `last`, can be used to manage the list. If we use a `start` pointer (pointing to the first node), traversing to the end requires iterating through the entire list. A more efficient approach is to use a `last` pointer (pointing to the last node), which gives direct access to the end of the list and O(1) access to the beginning (since `last->link` points to `start`). The code below uses the `start` pointer for simplicity and conceptual clarity.

**Key Operations:**
*   **Insertion**: Can be done at the beginning or at the end. Both require careful updating of the last node's link to maintain the circular structure.
*   **Deletion**: Can be done from the beginning or from the end. Similar to insertion, this requires finding the last node and updating its link.
*   **Traversal / Display**: Starts at the `start` node and continues until it comes back to the `start` node.

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
3. IF start == NULL THEN
4.   start = newNode
5.   newNode.link = start // Points to itself
6. ELSE
7.   temp = start
8.   WHILE temp.link != start
9.     temp = temp.link
10.  END WHILE
11.  newNode.link = start
12.  temp.link = newNode
13.  start = newNode
14. END IF

// INSERT AT END
INSERT_END(value):
1. Allocate memory for a newNode.
2. newNode.data = value
3. IF start == NULL THEN
4.   start = newNode
5.   newNode.link = start // Points to itself
6. ELSE
7.   temp = start
8.   WHILE temp.link != start
9.     temp = temp.link
10.  END WHILE
11.  temp.link = newNode
12.  newNode.link = start
13. END IF

// DELETE FROM BEGINNING
DELETE_BEGIN():
1. IF start == NULL THEN
2.   PRINT "List is empty"
3.   RETURN
4. END IF
5. toDelete = start
6. IF start.link == start THEN // Only one node
7.   start = NULL
8. ELSE
9.   lastNode = start
10.  WHILE lastNode.link != start
11.    lastNode = lastNode.link
12.  END WHILE
13.  start = start.link
14.  lastNode.link = start
15. END IF
16. FREE toDelete

// DISPLAY LIST
DISPLAY():
1. IF start == NULL THEN
2.   PRINT "List is empty"
3.   RETURN
4. END IF
5. temp = start
6. DO
7.   PRINT temp.data
8.   temp = temp.link
9. WHILE temp != start
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
    printf("Enter data to insert at the beginning: ");
    scanf("%d", &data);
    struct Node* newNode = createNode(data);

    if (start == NULL) {
        start = newNode;
        newNode->link = start; // Points to itself
    } else {
        struct Node* temp = start;
        while (temp->link != start) {
            temp = temp->link;
        }
        newNode->link = start;
        temp->link = newNode;
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
        newNode->link = start; // Points to itself
    } else {
        struct Node* temp = start;
        while (temp->link != start) {
            temp = temp->link;
        }
        temp->link = newNode;
        newNode->link = start;
    }
    printf("Node inserted successfully.\n");
}

// Function to delete a node from the beginning
void deleteFromFirst() {
    if (start == NULL) {
        printf("List is empty. Cannot delete.\n");
        return;
    }
    
    struct Node* toDelete = start;
    if (start->link == start) { // Only one node in the list
        start = NULL;
    } else {
        struct Node* last = start;
        while (last->link != start) {
            last = last->link;
        }
        start = start->link;
        last->link = start;
    }
    printf("Deleted node with data: %d\n", toDelete->data);
    free(toDelete);
}

// Function to display the circular linked list
void display() {
    if (start == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node* temp = start;
    printf("Circular Linked List: ");
    do {
        printf("%d -> ", temp->data);
        temp = temp->link;
    } while (temp != start);
    printf("(back to start %d)\n", start->data);
}

int main() {
    int choice;
    while (1) {
        printf("\n--- CIRCULAR LINKED LIST OPERATIONS ---\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Delete from Beginning\n");
        printf("4. Display List\n");
        printf("5. Exit\n");
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
                display();
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
