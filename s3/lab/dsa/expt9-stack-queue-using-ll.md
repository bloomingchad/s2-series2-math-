### **File: `expt9-stack-queue-using-ll.md`**

#### **Experiment 9: Implementation of Stack and Queue using Linked List**

**Concept Overview:**

While arrays are a straightforward way to implement stacks and queues, they suffer from a major drawback: fixed size. If the array becomes full, no more elements can be added (overflow). Using a **linked list** provides a dynamic solution where the data structure can grow or shrink as needed at runtime, limited only by available memory.

**Stack using Linked List:**
A stack follows the LIFO (Last-In, First-Out) principle. When implemented with a linked list, this is very efficient. The `top` of the stack corresponds to the `head` (or `start`) of the linked list.
*   **`push(item)`**: This is equivalent to **inserting a node at the beginning** of the linked list. A new node is created, and its `link` is pointed to the current `top`. The `top` pointer is then updated to this new node. This is an O(1) operation.
*   **`pop()`**: This is equivalent to **deleting a node from the beginning** of the linked list. The `top` pointer is moved to the next node, and the old top node is freed. This is also an O(1) operation.

**Queue using Linked List:**
A queue follows the FIFO (First-In, First-Out) principle. To implement this efficiently with a linked list, we need two pointers:
*   **`front`**: Points to the beginning of the list (head). This is where `dequeue` operations happen.
*   **`rear`**: Points to the end of the list. This is where `enqueue` operations happen.
*   **`enqueue(item)`**: This is equivalent to **inserting a node at the end** of the linked list. The new node is added after the current `rear` node, and the `rear` pointer is updated.
*   **`dequeue()`**: This is equivalent to **deleting a node from the beginning** of the linked list. The `front` pointer is simply moved to the next node.

---

### **Part A: Stack using Linked List**

**Algorithm:**

```
// Define Node structure
STRUCTURE Node:
  data: integer
  link: pointer to Node

// Global top pointer
top = NULL

// PUSH Operation
PUSH(value):
1. Allocate memory for a newNode.
2. newNode.data = value
3. newNode.link = top
4. top = newNode

// POP Operation
POP():
1. IF top == NULL THEN
2.   PRINT "Stack Underflow"
3.   RETURN -1
4. END IF
5. temp = top
6. item = top.data
7. top = top.link
8. FREE temp
9. RETURN item
```

**C Code for Stack:**

```c
#include <stdio.h>
#include <stdlib.h>

// Define the Node structure
struct Node {
    int data;
    struct Node* link;
};

// Top pointer for the stack
struct Node* top = NULL;

// Function to push an element onto the stack
void push(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Heap Overflow (Stack could not be created).\n");
        return;
    }
    newNode->data = value;
    newNode->link = top;
    top = newNode;
    printf("%d pushed to stack.\n", value);
}

// Function to pop an element from the stack
void pop() {
    if (top == NULL) {
        printf("Stack Underflow.\n");
        return;
    }
    struct Node* temp = top;
    printf("Popped element is %d.\n", top->data);
    top = top->link;
    free(temp);
}

// Function to display the stack
void displayStack() {
    if (top == NULL) {
        printf("Stack is empty.\n");
        return;
    }
    struct Node* temp = top;
    printf("Stack elements: TOP -> ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->link;
    }
    printf("NULL\n");
}

// --- Main function for Stack is combined with Queue below ---
```

---

### **Part B: Queue using Linked List**

**Algorithm:**

```
// Define Node structure (same as stack)
// Global front and rear pointers
front = NULL
rear = NULL

// ENQUEUE Operation
ENQUEUE(value):
1. Allocate memory for a newNode.
2. newNode.data = value
3. newNode.link = NULL
4. IF rear == NULL THEN // If queue is empty
5.   front = newNode
6.   rear = newNode
7. ELSE
8.   rear.link = newNode
9.   rear = newNode
10. END IF

// DEQUEUE Operation
DEQUEUE():
1. IF front == NULL THEN
2.   PRINT "Queue Underflow"
3.   RETURN -1
4. END IF
5. temp = front
6. item = front.data
7. front = front.link
8. IF front == NULL THEN // If queue becomes empty
9.   rear = NULL
10. END IF
11. FREE temp
12. RETURN item
```

**C Code for Queue and Main Menu:**

```c
#include <stdio.h>
#include <stdlib.h>

// Define the Node structure
struct Node {
    int data;
    struct Node* link;
};

// Stack's top pointer
struct Node* top = NULL;
// Queue's front and rear pointers
struct Node* front = NULL;
struct Node* rear = NULL;

// ----- STACK FUNCTIONS -----
void push() {
    int value;
    printf("Enter value to push: ");
    scanf("%d", &value);
    
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Heap Overflow.\n");
        return;
    }
    newNode->data = value;
    newNode->link = top;
    top = newNode;
    printf("%d pushed to stack.\n", value);
}

void pop() {
    if (top == NULL) {
        printf("Stack Underflow.\n");
        return;
    }
    struct Node* temp = top;
    printf("Popped element is %d.\n", temp->data);
    top = temp->link;
    free(temp);
}

void displayStack() {
    if (top == NULL) {
        printf("Stack is empty.\n");
        return;
    }
    struct Node* temp = top;
    printf("Stack: TOP -> ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->link;
    }
    printf("NULL\n");
}

// ----- QUEUE FUNCTIONS -----
void enqueue() {
    int value;
    printf("Enter value to enqueue: ");
    scanf("%d", &value);

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Heap Overflow.\n");
        return;
    }
    newNode->data = value;
    newNode->link = NULL;

    if (rear == NULL) { // If queue is empty
        front = rear = newNode;
    } else {
        rear->link = newNode;
        rear = newNode;
    }
    printf("%d enqueued to queue.\n", value);
}

void dequeue() {
    if (front == NULL) {
        printf("Queue Underflow.\n");
        return;
    }
    struct Node* temp = front;
    printf("Dequeued element is %d.\n", temp->data);
    front = front->link;
    
    if (front == NULL) { // If queue becomes empty after dequeue
        rear = NULL;
    }
    free(temp);
}

void displayQueue() {
    if (front == NULL) {
        printf("Queue is empty.\n");
        return;
    }
    struct Node* temp = front;
    printf("Queue: FRONT -> ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->link;
    }
    printf("NULL\n");
}


// ----- MAIN FUNCTION with Menu -----
int main() {
    int choice;
    while(1) {
        printf("\n--- IMPLEMENTATION MENU ---\n");
        printf("1. Stack Operations\n");
        printf("2. Queue Operations\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            int stack_choice;
            while(1) {
                printf("\n-- Stack Menu --\n");
                printf("1. Push\n2. Pop\n3. Display Stack\n4. Back to Main Menu\n");
                printf("Enter choice: ");
                scanf("%d", &stack_choice);
                if (stack_choice == 1) push();
                else if (stack_choice == 2) pop();
                else if (stack_choice == 3) displayStack();
                else if (stack_choice == 4) break;
                else printf("Invalid choice!\n");
            }
        } else if (choice == 2) {
            int queue_choice;
            while(1) {
                printf("\n-- Queue Menu --\n");
                printf("1. Enqueue\n2. Dequeue\n3. Display Queue\n4. Back to Main Menu\n");
                printf("Enter choice: ");
                scanf("%d", &queue_choice);
                if (queue_choice == 1) enqueue();
                else if (queue_choice == 2) dequeue();
                else if (queue_choice == 3) displayQueue();
                else if (queue_choice == 4) break;
                else printf("Invalid choice!\n");
            }
        } else if (choice == 3) {
            printf("Exiting program.\n");
            exit(0);
        } else {
            printf("Invalid main menu choice!\n");
        }
    }
    return 0;
}
```
