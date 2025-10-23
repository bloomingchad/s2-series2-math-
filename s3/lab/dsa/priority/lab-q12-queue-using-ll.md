### **File: `lab-q12-queue-using-ll.md`**

#### **Lab Question 12: Queue using Linked Lists**

**Problem Statement:**
Implement a queue using linked lists and perform insertion and deletion operations.

**Concept Overview:**

This problem requires implementing a **queue** data structure using a **linked list**. As discussed in Experiment 9, a linked list is an excellent choice for a queue because it provides dynamic memory allocation, allowing the queue to grow and shrink as needed without the fixed-size limitation of an array.

A queue follows the **FIFO (First-In, First-Out)** principle. To implement this efficiently, we maintain two pointers:
1.  **`front`**: Points to the first node in the linked list. This is the end from which elements are **deleted (dequeued)**.
2.  **`rear`**: Points to the last node in the linked list. This is the end where new elements are **inserted (enqueued)**.

**Key Operations:**
*   **Insertion (`enqueue`)**: A new node is created and added *after* the current `rear` node. The `rear` pointer is then updated to this new node. This is an O(1) operation. A special case is when the queue is empty; both `front` and `rear` must be set to the new node.
*   **Deletion (`dequeue`)**: The node at the `front` of the list is removed. This involves moving the `front` pointer to the next node in the sequence and freeing the memory of the old front node. This is also an O(1) operation. A special case is when the last element is dequeued; both `front` and `rear` must be set to `NULL`.
*   **Display**: Traverse the linked list from the `front` pointer to the `rear` pointer, printing the data of each node.

---

**Algorithm:**

```
// Define Node structure
STRUCTURE Node:
  data: integer
  link: pointer to Node

// Global front and rear pointers
front = NULL
rear = NULL

// INSERTION (ENQUEUE)
ENQUEUE(value):
1. Allocate memory for a newNode.
2. newNode.data = value
3. newNode.link = NULL
4. IF rear == NULL THEN // If the queue is empty
5.   front = newNode
6.   rear = newNode
7. ELSE
8.   rear.link = newNode // Link the new node to the end of the list
9.   rear = newNode       // Update rear to be the new node
10. END IF
11. PRINT "Element inserted."

// DELETION (DEQUEUE)
DEQUEUE():
1. IF front == NULL THEN
2.   PRINT "Queue Underflow (is empty)."
3.   RETURN
4. END IF
5. temp = front
6. PRINT "Deleted element is ", temp.data
7. front = front.link // Move front to the next node
8. IF front == NULL THEN // If the queue becomes empty after deletion
9.   rear = NULL
10. END IF
11. FREE temp
```

---

**C Code:**

```c
#include <stdio.h>
#include <stdlib.h>

// Define the Node structure for the queue
struct Node {
    int data;
    struct Node* link;
};

// Global pointers for the front and rear of the queue
struct Node* front = NULL;
struct Node* rear = NULL;

// Function to insert an element into the queue (enqueue)
void enqueue() {
    int value;
    printf("Enter the value to insert: ");
    scanf("%d", &value);

    // Create a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Heap Overflow: Cannot create new node.\n");
        return;
    }
    newNode->data = value;
    newNode->link = NULL;

    // If the queue is empty, the new node is both front and rear
    if (rear == NULL) {
        front = rear = newNode;
    } else {
        // Add the new node at the end of the queue and change rear
        rear->link = newNode;
        rear = newNode;
    }
    printf("%d enqueued to the queue.\n", value);
}

// Function to delete an element from the queue (dequeue)
void dequeue() {
    // If the queue is empty, there's nothing to delete
    if (front == NULL) {
        printf("Queue Underflow: The queue is empty.\n");
        return;
    }

    // Store the current front and move front one node ahead
    struct Node* temp = front;
    printf("Dequeued element is %d.\n", temp->data);
    front = front->link;

    // If front becomes NULL, then the queue is now empty, so change rear also to NULL
    if (front == NULL) {
        rear = NULL;
    }

    free(temp); // Free the old front node
}

// Function to display the elements in the queue
void display() {
    if (front == NULL) {
        printf("The queue is empty.\n");
        return;
    }

    struct Node* temp = front;
    printf("Queue elements (Front to Rear): ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->link;
    }
    printf("NULL\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n--- Queue using Linked List ---\n");
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
