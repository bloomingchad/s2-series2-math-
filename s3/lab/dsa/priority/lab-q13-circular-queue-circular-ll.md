### **File: `lab-q13-circular-queue-circular-ll.md`**

#### **Lab Question 13: Circular Queue using a Circular Linked List**

**Problem Statement:**
Implement a Circular Queue using a Circular Linked List. Perform the following operations:
*   Enqueue (Insert element)
*   Dequeue (Delete element)
*   Display the queue contents

**Concept Overview:**

This problem combines the concepts of a circular queue and a circular linked list. A circular queue is a linear data structure in which the operations are performed based on FIFO principle and the last position is connected back to the first position to make a circle. Using a **circular linked list** to implement it is a natural fit.

In this implementation, instead of `front` and `rear` pointers like in an array-based queue, we typically use a single pointer, often called `rear`, that points to the last node in the queue.
*   The `rear` pointer gives us direct access to the last element.
*   The first element (`front`) can be accessed efficiently because it is the node right after the `rear` node (`rear->link`).

**Key Operations:**
*   **Enqueue (Insert element)**: This is equivalent to **inserting a node at the end** of the circular linked list. A new node is created. It is inserted between the current `rear` node and the `front` node. The `rear` pointer is then updated to point to this new node. This is an O(1) operation.
*   **Dequeue (Delete element)**: This is equivalent to **deleting the node from the beginning**. The `front` node (which is `rear->link`) is removed. The `link` of the `rear` node is updated to point to the new `front` node. This is also an O(1) operation.
*   **Display**: Traversal starts from the `front` node (`rear->link`) and continues until it comes back to the `rear` node.

---

**Algorithm:**

```
// Define Node structure
STRUCTURE Node:
  data: integer
  link: pointer to Node

// Global rear pointer
rear = NULL

// INSERTION (ENQUEUE)
ENQUEUE(value):
1. Allocate memory for a newNode.
2. newNode.data = value
3. IF rear == NULL THEN // If the queue is empty
4.   rear = newNode
5.   rear.link = rear // The node points to itself
6. ELSE
7.   newNode.link = rear.link // New node points to the current front
8.   rear.link = newNode    // Old rear points to the new node
9.   rear = newNode         // Update rear to be the new node
10. END IF
11. PRINT "Element inserted."

// DELETION (DEQUEUE)
DEQUEUE():
1. IF rear == NULL THEN
2.   PRINT "Queue Underflow (is empty)."
3.   RETURN
4. END IF
5. temp = rear.link // temp points to the front node
6. PRINT "Deleted element is ", temp.data
7. IF rear == temp THEN // If there is only one node
8.   rear = NULL
9. ELSE
10.  rear.link = temp.link // Rear now points to the new front
11. END IF
12. FREE temp
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

struct Node* rear = NULL;

// Function to insert an element into the queue (enqueue)
void enqueue() {
    int value;
    printf("Enter the value to insert: ");
    scanf("%d", &value);

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Heap Overflow: Cannot create new node.\n");
        return;
    }
    newNode->data = value;

    if (rear == NULL) {
        // If queue is empty, new node is the only node
        rear = newNode;
        rear->link = rear; // Points to itself
    } else {
        // Link new node to the front and old rear to the new node
        newNode->link = rear->link;
        rear->link = newNode;
        rear = newNode; // Update rear
    }
    printf("%d enqueued to the queue.\n", value);
}

// Function to delete an element from the queue (dequeue)
void dequeue() {
    if (rear == NULL) {
        printf("Queue Underflow: The queue is empty.\n");
        return;
    }

    struct Node* temp = rear->link; // temp points to the front node
    int deletedValue = temp->data;

    if (rear == temp) { // If there is only one node
        rear = NULL;
    } else {
        // The last node will now point to the new front node
        rear->link = temp->link;
    }

    free(temp);
    printf("Dequeued element is %d.\n", deletedValue);
}

// Function to display the elements in the circular queue
void display() {
    if (rear == NULL) {
        printf("The queue is empty.\n");
        return;
    }

    struct Node* front = rear->link; // The front of the queue
    struct Node* temp = front;

    printf("Circular Queue (Front to Rear): ");
    do {
        printf("%d -> ", temp->data);
        temp = temp->link;
    } while (temp != front);
    printf("(back to front)\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n--- Circular Queue using Circular Linked List ---\n");
        printf("1. Enqueue (Insert Element)\n");
        printf("2. Dequeue (Delete Element)\n");
        printf("3. Display Queue\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
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
