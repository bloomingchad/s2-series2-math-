### **File: `expt4-dequeue-array.md`**

#### **Experiment 4: Implementation of DEQUEUE using Arrays**

**Concept Overview:**

A **DEQueue** (pronounced "deck"), or Double-Ended Queue, is a generalized version of a queue. Unlike a standard queue where insertions happen at the rear and deletions at the front, a DEQueue allows insertions and deletions at **both ends**—front and rear.

This flexibility makes it a versatile data structure, though it does not strictly follow the FIFO principle. When implemented with an array, it's most effective as a circular array to avoid the space wastage issue of linear queues. It requires two pointers, `front` and `rear`, to keep track of the ends.

**Key Operations:**
*   **`insertFront(item)`**: Adds an item at the `front` end. This involves decrementing `front` (with wrap-around).
*   **`insertRear(item)`**: Adds an item at the `rear` end. This involves incrementing `rear` (with wrap-around). This is similar to a standard `enqueue`.
*   **`deleteFront()`**: Removes an item from the `front` end. This is similar to a standard `dequeue`.
*   **`deleteRear()`**: Removes an item from the `rear` end. This involves decrementing `rear` (with wrap-around).
*   **`isEmpty()`**: Checks if the DEQueue is empty (`front == -1`).
*   **`isFull()`**: Checks if the DEQueue is full (`(rear + 1) % MAX_SIZE == front`).

---

**Algorithm:**

```
// Global variables
dequeue[MAX_SIZE] // An array to hold dequeue elements
front = -1
rear = -1

// Insert at Front Operation
INSERT_FRONT(item):
1. IF (front == 0 AND rear == MAX_SIZE - 1) OR (front == rear + 1) THEN
2.   PRINT "Dequeue Overflow"
3.   RETURN
4. END IF
5. IF front == -1 THEN // If dequeue is initially empty
6.   front = 0
7.   rear = 0
8. ELSE IF front == 0 THEN // If front is at the beginning
9.   front = MAX_SIZE - 1 // Wrap around
10. ELSE
11.  front = front - 1
12. END IF
13. dequeue[front] = item

// Insert at Rear Operation
INSERT_REAR(item):
1. IF (front == 0 AND rear == MAX_SIZE - 1) OR (front == rear + 1) THEN
2.   PRINT "Dequeue Overflow"
3.   RETURN
4. END IF
5. IF front == -1 THEN // If dequeue is initially empty
6.   front = 0
7.   rear = 0
8. ELSE IF rear == MAX_SIZE - 1 THEN // If rear is at the end
9.   rear = 0 // Wrap around
10. ELSE
11.  rear = rear + 1
12. END IF
13. dequeue[rear] = item

// Delete from Front Operation
DELETE_FRONT():
1. IF front == -1 THEN
2.   PRINT "Dequeue Underflow"
3.   RETURN -1
4. END IF
5. item = dequeue[front]
6. IF front == rear THEN // Only one element
7.   front = -1
8.   rear = -1
9. ELSE IF front == MAX_SIZE - 1 THEN // If front is at the end
10.  front = 0 // Wrap around
11. ELSE
12.  front = front + 1
13. END IF
14. RETURN item

// Delete from Rear Operation
DELETE_REAR():
1. IF front == -1 THEN
2.   PRINT "Dequeue Underflow"
3.   RETURN -1
4. END IF
5. item = dequeue[rear]
6. IF front == rear THEN // Only one element
7.   front = -1
8.   rear = -1
9. ELSE IF rear == 0 THEN // If rear is at the beginning
10.  rear = MAX_SIZE - 1 // Wrap around
11. ELSE
12.  rear = rear - 1
13. END IF
14. RETURN item
```

---

**C Code:**

```c
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10 // Maximum size of the DEQueue

int dequeue[MAX_SIZE];
int front = -1;
int rear = -1;

// Function to check if the DEQueue is full
int isFull() {
    return ((front == 0 && rear == MAX_SIZE - 1) || (front == rear + 1));
}

// Function to check if the DEQueue is empty
int isEmpty() {
    return (front == -1);
}

// Function to insert an element at the front
void insertFront(int value) {
    if (isFull()) {
        printf("DEQueue Overflow.\n");
        return;
    }
    if (front == -1) { // If queue is empty
        front = 0;
        rear = 0;
    } else if (front == 0) { // If front is at first position
        front = MAX_SIZE - 1;
    } else {
        front = front - 1;
    }
    dequeue[front] = value;
    printf("%d inserted at the front.\n", value);
}

// Function to insert an element at the rear
void insertRear(int value) {
    if (isFull()) {
        printf("DEQueue Overflow.\n");
        return;
    }
    if (front == -1) { // If queue is empty
        front = 0;
        rear = 0;
    } else if (rear == MAX_SIZE - 1) { // If rear is at last position
        rear = 0;
    } else {
        rear = rear + 1;
    }
    dequeue[rear] = value;
    printf("%d inserted at the rear.\n", value);
}

// Function to delete an element from the front
void deleteFront() {
    if (isEmpty()) {
        printf("DEQueue Underflow.\n");
        return;
    }
    printf("Element deleted from front is %d.\n", dequeue[front]);
    if (front == rear) { // If only one element
        front = -1;
        rear = -1;
    } else if (front == MAX_SIZE - 1) {
        front = 0;
    } else {
        front = front + 1;
    }
}

// Function to delete an element from the rear
void deleteRear() {
    if (isEmpty()) {
        printf("DEQueue Underflow.\n");
        return;
    }
    printf("Element deleted from rear is %d.\n", dequeue[rear]);
    if (front == rear) { // If only one element
        front = -1;
        rear = -1;
    } else if (rear == 0) {
        rear = MAX_SIZE - 1;
    } else {
        rear = rear - 1;
    }
}

// Function to display the DEQueue
void display() {
    if (isEmpty()) {
        printf("DEQueue is empty.\n");
        return;
    }
    printf("DEQueue elements are: ");
    int i = front;
    if (front <= rear) {
        while (i <= rear)
            printf("%d ", dequeue[i++]);
    } else {
        while (i <= MAX_SIZE - 1)
            printf("%d ", dequeue[i++]);
        i = 0;
        while (i <= rear)
            printf("%d ", dequeue[i++]);
    }
    printf("\n");
}

int main() {
    int choice, value;
    while (1) {
        printf("\n--- DEQUEUE OPERATIONS ---\n");
        printf("1. Insert at Front\n");
        printf("2. Insert at Rear\n");
        printf("3. Delete from Front\n");
        printf("4. Delete from Rear\n");
        printf("5. Display\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert at front: ");
                scanf("%d", &value);
                insertFront(value);
                break;
            case 2:
                printf("Enter value to insert at rear: ");
                scanf("%d", &value);
                insertRear(value);
                break;
            case 3:
                deleteFront();
                break;
            case 4:
                deleteRear();
                break;
            case 5:
                display();
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}
```
