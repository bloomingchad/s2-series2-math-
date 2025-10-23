### **File: `expt2-queue-array.md`**

#### **Experiment 2: Implementation of Queues using Arrays**

**Concept Overview:**

A **queue** is a linear data structure that operates on the **FIFO (First-In, First-Out)** principle. This means the first element added to the queue will be the first one to be removed. A real-world analogy is a checkout line at a grocery store: the first person to get in line is the first person to be served.

When implemented using a linear array, a queue requires two pointers or indices:
1.  **`front`**: Points to the beginning of the queue, where elements are removed (dequeued).
2.  **`rear`**: Points to the end of the queue, where new elements are added (enqueued).

Initially, both `front` and `rear` are set to `-1` to indicate an empty queue. The `front` pointer is always at a lower or equal index than the `rear` pointer. A key limitation of a simple linear queue is that once the `rear` reaches the end of the array, no more elements can be inserted, even if there are empty spaces at the beginning of the array from previous dequeue operations. This problem is solved by using a Circular Queue (Experiment 3).

**Key Operations:**
*   **`enqueue(item)`**: Adds an item to the `rear` of the queue. If the queue is empty, `front` and `rear` are set to `0`. Otherwise, only `rear` is incremented. Before this, we must check for **Queue Overflow** (when `rear` is at the last index of the array).
*   **`dequeue()`**: Removes an item from the `front` of the queue. This is done by returning the element at the `front` index and then incrementing `front`. Before this, we must check for **Queue Underflow** (when the queue is empty, i.e., `front == -1` or `front > rear`).
*   **`peek()`**: Returns the front element without removing it.
*   **`isEmpty()`**: Checks if the queue is empty.
*   **`isFull()`**: Checks if the queue is full.

---

**Algorithm:**

```
// Global variables
queue[MAX_SIZE] // An array to hold queue elements
front = -1
rear = -1

// Enqueue Operation (Insertion)
ENQUEUE(item):
1. IF rear == MAX_SIZE - 1 THEN
2.   PRINT "Queue Overflow"
3.   RETURN
4. END IF
5. IF front == -1 AND rear == -1 THEN
6.   front = 0
7.   rear = 0
8. ELSE
9.   rear = rear + 1
10. END IF
11. queue[rear] = item

// Dequeue Operation (Deletion)
DEQUEUE():
1. IF front == -1 OR front > rear THEN
2.   PRINT "Queue Underflow"
3.   RETURN -1 // Or an error value
4. ELSE
5.   item = queue[front]
6.   front = front + 1
7.   // If this was the last element, reset queue
8.   IF front > rear THEN
9.     front = -1
10.    rear = -1
11.   END IF
12.  RETURN item
13. END IF

// DISPLAY Operation
DISPLAY():
1. IF front == -1 OR front > rear THEN
2.   PRINT "Queue is empty"
3. ELSE
4.   PRINT "Queue elements are:"
5.   FOR i = front TO rear
6.     PRINT queue[i]
7.   ENDFOR
8. END IF
```

---

**C Code:**

```c
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100 // Maximum size of the queue

int queue[MAX_SIZE];
int front = -1;
int rear = -1;

// Function to check if the queue is full
int isFull() {
    return rear == MAX_SIZE - 1;
}

// Function to check if the queue is empty
int isEmpty() {
    return front == -1 || front > rear;
}

// Function to add an element to the queue (enqueue)
void enqueue(int value) {
    if (isFull()) {
        printf("Queue Overflow: Cannot insert element.\n");
        return;
    }
    if (front == -1) { // If queue is initially empty
        front = 0;
    }
    rear++;
    queue[rear] = value;
    printf("%d enqueued to queue.\n", value);
}

// Function to remove an element from the queue (dequeue)
int dequeue() {
    if (isEmpty()) {
        printf("Queue Underflow: Cannot delete from an empty queue.\n");
        // Reset pointers if they got into an invalid state
        front = -1;
        rear = -1;
        return -1; // Return an error value
    }
    int item = queue[front];
    front++;
    if (front > rear) { // If last element was dequeued, reset queue
        front = -1;
        rear = -1;
    }
    return item;
}

// Function to display the elements of the queue
void display() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements are: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

// Function to get the front element without removing it
int peek() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
        return -1;
    }
    return queue[front];
}

int main() {
    int choice, value;

    while (1) {
        printf("\n--- QUEUE OPERATIONS USING ARRAY ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2: {
                int dequeued_value = dequeue();
                if (dequeued_value != -1) {
                    printf("Dequeued element is %d.\n", dequeued_value);
                }
                break;
            }
            case 3: {
                int peek_value = peek();
                if (peek_value != -1) {
                    printf("Front element is %d.\n", peek_value);
                }
                break;
            }
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
