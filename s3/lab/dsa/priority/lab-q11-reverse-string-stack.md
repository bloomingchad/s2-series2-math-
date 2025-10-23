### **File: `lab-q11-reverse-string-stack.md`**

#### **Lab Question 11: Reverse a String using a Stack**

**Problem Statement:**
Implement a program to reverse a string using a stack.

**Concept Overview:**

This problem is a direct and excellent demonstration of the **LIFO (Last-In, First-Out)** property of a stack. The goal is to take a string as input and produce its reversed version as output.

The logic is simple and intuitive:
1.  **Push Phase**: Iterate through the input string from the first character to the last. Push each character onto the stack. By the end of this phase, the last character of the string will be at the top of the stack, and the first character will be at the bottom.
2.  **Pop Phase**: Iterate from the beginning of the string's character array again. This time, pop a character from the stack and place it into the current position in the array. Since the last character pushed is the first to be popped, the string will be filled in reverse order.

After the pop phase is complete, the original string array will now contain the reversed string.

---

**Algorithm:**

```
// FUNCTION REVERSE_STRING(inputString)
1. Initialize an empty stack.
2. Get the length of `inputString`, let it be `len`.
3. // Push phase: Push all characters onto the stack
4. FOR i = 0 TO len - 1:
5.   PUSH `inputString[i]` onto the stack.
6. END FOR
7. // Pop phase: Pop characters back into the string
8. FOR i = 0 TO len - 1:
9.   `inputString[i]` = POP from the stack.
10. END FOR
11. The `inputString` is now reversed.
```

---

**C Code:**

```c
#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

// ----- Stack Implementation -----
char stack[MAX_SIZE];
int top = -1;

// Function to check if the stack is full
int isFull() {
    return top == MAX_SIZE - 1;
}

// Function to check if the stack is empty
int isEmpty() {
    return top == -1;
}

// Function to push a character onto the stack
void push(char item) {
    if (isFull()) {
        printf("Stack Overflow\n");
    } else {
        stack[++top] = item;
    }
}

// Function to pop a character from the stack
char pop() {
    if (isEmpty()) {
        printf("Stack Underflow\n");
        return -1; // Error character
    }
    return stack[top--];
}

// Function to reverse a string using a stack
void reverseString(char* str) {
    int length = strlen(str);

    // 1. Push all characters of the string onto the stack
    for (int i = 0; i < length; i++) {
        push(str[i]);
    }

    // 2. Pop all characters from the stack and put them back into the string
    for (int i = 0; i < length; i++) {
        str[i] = pop();
    }
}

int main() {
    char inputString[MAX_SIZE];

    printf("--- String Reverser using Stack ---\n");
    printf("Enter a string to reverse: ");
    // Reads a full line, including spaces
    scanf(" %[^\n]", inputString);

    printf("Original string: %s\n", inputString);

    // Call the reverse function
    reverseString(inputString);

    printf("Reversed string: %s\n", inputString);

    return 0;
}
```
