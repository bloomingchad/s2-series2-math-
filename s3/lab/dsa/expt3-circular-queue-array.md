### **File: `expt3-circular-queue-array.md`**

#### **Experiment 3: Implementation of Circular Queues using Arrays**

**Concept Overview:**

A **Circular Queue** is an enhanced version of a standard linear queue that overcomes its main limitation. In a linear queue, once the `rear` pointer reaches the end of the array, no new elements can be added, even if there are empty slots at the beginning. A circular queue resolves this by treating the array as circular, meaning the last element is connected back to the first.

This circular behavior is achieved using the **modulo (`%`) operator**. When `rear` or `front` reaches the end of the array, it wraps around to the beginning. This allows for efficient utilization of the entire array space.

The conditions for checking if the queue is full or empty are different from a linear queue:
*   **Empty Condition**: The queue is empty when `front` is `-1`.
*   **Full Condition**: The queue is full when `(rear + 1) % MAX_SIZE == front`. This means the rear is just one position behind the front (in a circular sense).

**Key Operations:**
*   **`enqueue(item)`**: Adds an item to the queue. `rear` is updated using `rear = (rear + 1) % MAX_SIZE`. If it's the first element, `front` is also set to `0`. The overflow condition must be checked first.
*   **`dequeue()`**: Removes an item from the queue. The element at the `front` index is returned. `front` is then updated using `front = (front + 1) % MAX_SIZE`. If the last element is dequeued, both `front` and `rear` are reset to `-1`. The underflow condition must be checked first.
*   **`peek()`**: Returns the front element without removing it.
*   **`display()`**: Displays elements from `front` to `rear`, handling the wrap-around case where `front > rear`.

---

**Algorithm:**

```
// Global variables
queue[MAX_SIZE] // An array to hold queue elements
front = -1
rear = -1

// Enqueue Operation (Insertion)
ENQUEUE(item):
1. IF (rear + 1) % MAX_SIZE == front THEN
2.   PRINT "Queue Overflow"
3.   RETURN
4. END IF
5. IF front == -1 AND rear == -1 THEN
6.   front = 0
7.   rear = 0
8. ELSE
9.   rear = (rear + 1) % MAX_SIZE
10. END IF
11. queue[rear] = item

// Dequeue Operation (Deletion)
DEQUEUE():
1. IF front == -1 AND rear == -1 THEN
2.   PRINT "Queue Underflow"
3.   RETURN -1 // Or an error value
4. END IF
5. item = queue[front]
6. IF front == rear THEN // Only one element in queue
7.   front = -1
8.   rear = -1
9. ELSE
10.  front = (front + 1) % MAX_SIZE
11. END IF
12. RETURN item

// DISPLAY Operation
DISPLAY():
1. IF front == -1 THEN
2.   PRINT "Queue is empty"
3.   RETURN
4. END IF
5. i = front
6. PRINT "Queue elements are:"
7. IF front <= rear THEN
8.   WHILE i <= rear
9.     PRINT queue[i]
10.    i = i + 1
11.  END WHILE
12. ELSE
13.  WHILE i <= MAX_SIZE - 1
14.    PRINT queue[i]
15.    i = i + 1
16.  END WHILE
17.  i = 0
18.  WHILE i <= rear
19.    PRINT queue[i]
20.    i = i + 1
21.  END WHILE
22. END IF
```

---

**C Code:**

```c
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5 // Define a smaller size for easier testing

int queue[MAX_SIZE];
int front = -1;
int rear = -1;

// Function to check if the queue is full
int isFull() {
    // Condition for a full circular queue
    return (rear + 1) % MAX_SIZE == front;
}

// Function to check if the queue is empty
int isEmpty() {
    return front == -1;
}

// Function to add an element to the circular queue (enqueue)
void enqueue(int value) {
    if (isFull()) {
        printf("Queue Overflow: Cannot insert element %d.\n", value);
    } else {
        if (front == -1) { // If queue is initially empty
            front = 0;
        }
        rear = (rear + 1) % MAX_SIZE;
        queue[rear] = value;
        printf("%d enqueued to queue.\n", value);
    }
}

// Function to remove an element from the circular queue (dequeue)
int dequeue() {
    int item;
    if (isEmpty()) {
        printf("Queue Underflow: Cannot delete from an empty queue.\n");
        return -1; // Return an error value
    }
    item = queue[front];
    if (front == rear) { // If only one element is in the queue
        front = -1;
        rear = -1;
    } else {
        front = (front + 1) % MAX_SIZE;
    }
    return item;
}

// Function to display the elements of the circular queue
void display() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements are: ");
        int i = front;
        if (front <= rear) {
            // Traverse from front to rear
            while (i <= rear) {
                printf("%d ", queue[i]);
                i++;
            }
        } else {
            // Traverse from front to end of array
            while (i < MAX_SIZE) {
                printf("%d ", queue[i]);
                i++;
            }
            // Traverse from start of array to rear
            i = 0;
            while (i <= rear) {
                printf("%d ", queue[i]);
                i++;
            }
        }
        printf("\n");
    }
}

int main() {
    int choice, value;

    while (1) {
        printf("\n--- CIRCULAR QUEUE OPERATIONS ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
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
            case 3:
                display();
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
