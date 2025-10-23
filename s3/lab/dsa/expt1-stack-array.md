### **File: `expt1-stack-array.md`**

#### **Experiment 1: Implementation of Stack using Arrays**

**Concept Overview:**

A **stack** is a fundamental linear data structure that follows the **LIFO (Last-In, First-Out)** principle. This means that the last element added to the stack is the first one to be removed. Think of it like a stack of plates: you can only add a new plate to the top, and you can only remove the topmost plate.

When implemented using an array, a stack uses a contiguous block of memory. We need two main components:
1.  An array to store the elements.
2.  A variable, often called `top`, which acts as an index to keep track of the topmost element of the stack. Initially, `top` is set to `-1` to indicate that the stack is empty.

**Key Operations:**
*   **`push(item)`**: Adds an item to the top of the stack. This involves incrementing `top` and then inserting the item at the new `top` index. Before pushing, we must check for **Stack Overflow** (when the stack is full).
*   **`pop()`**: Removes the topmost item from the stack. This involves returning the element at the `top` index and then decrementing `top`. Before popping, we must check for **Stack Underflow** (when the stack is empty).
*   **`peek()`** (or `top()`): Returns the top element without removing it.
*   **`isEmpty()`**: Checks if the stack is empty (i.e., if `top == -1`).
*   **`isFull()`**: Checks if the stack is full (i.e., if `top == MAX_SIZE - 1`).

---

**Algorithm:**

```
// Global variables
stack[MAX_SIZE] // An array to hold stack elements
top = -1        // Initialize top to -1 (empty stack)
n               // To store the user-defined size of the stack

// PUSH Operation
PUSH(item):
1. IF top >= n - 1 THEN
2.   PRINT "Stack Overflow"
3.   RETURN
4. ELSE
5.   top = top + 1
6.   stack[top] = item
7.   PRINT "Item pushed successfully"
8. END IF

// POP Operation
POP():
1. IF top <= -1 THEN
2.   PRINT "Stack Underflow"
3.   RETURN -1 (or an error value)
4. ELSE
5.   item = stack[top]
6.   top = top - 1
7.   RETURN item
8. END IF

// PEEK (or TOP) Operation
PEEK():
1. IF top <= -1 THEN
2.   PRINT "Stack is empty"
3.   RETURN -1 (or an error value)
4. ELSE
5.   RETURN stack[top]
6. END IF

// DISPLAY Operation
DISPLAY():
1. IF top >= 0 THEN
2.   PRINT "Elements in stack are:"
3.   FOR i = top DOWNTO 0
4.     PRINT stack[i]
5.   ENDFOR
6. ELSE
7.   PRINT "Stack is empty"
8. END IF
```

---

**C Code:**

```c
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100 // Maximum size of the stack

int stack[MAX_SIZE];
int top = -1;

// Function to push an element onto the stack
void push(int data) {
    if (top >= MAX_SIZE - 1) {
        printf("Stack Overflow: Cannot push element %d.\n", data);
    } else {
        top++;
        stack[top] = data;
        printf("%d pushed to stack.\n", data);
    }
}

// Function to pop an element from the stack
int pop() {
    if (top < 0) {
        printf("Stack Underflow: Cannot pop from an empty stack.\n");
        return -1; // Return an error value
    } else {
        int item = stack[top];
        top--;
        return item;
    }
}

// Function to get the top element of the stack without removing it
int peek() {
    if (top < 0) {
        printf("Stack is empty.\n");
        return -1; // Return an error value
    } else {
        return stack[top];
    }
}

// Function to display the elements of the stack
void display() {
    if (top < 0) {
        printf("Stack is empty.\n");
    } else {
        printf("Elements in the stack are: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, value;

    while (1) {
        printf("\n--- STACK OPERATIONS USING ARRAY ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2: {
                int popped_value = pop();
                if (popped_value != -1) {
                    printf("Popped element is %d.\n", popped_value);
                }
                break;
            }
            case 3: {
                int peek_value = peek();
                if (peek_value != -1) {
                    printf("Top element is %d.\n", peek_value);
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
