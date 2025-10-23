### **File: `expt5-infix-to-postfix.md`**

#### **Experiment 5: Conversion of Infix to Postfix Notation**

**Concept Overview:**

Arithmetic expressions can be written in three different notations:
1.  **Infix Notation**: The standard way we write expressions. The operator is placed *between* the operands (e.g., `A + B`).
2.  **Prefix Notation (Polish Notation)**: The operator is placed *before* the operands (e.g., `+ A B`).
3.  **Postfix Notation (Reverse Polish Notation)**: The operator is placed *after* the operands (e.g., `A B +`).

Postfix notation is particularly useful for computer evaluation because it doesn't require parentheses or operator precedence rules. The order of operations is determined by the position of the operators.

A **stack** is the perfect data structure for converting an infix expression to a postfix expression. The conversion process involves scanning the infix expression from left to right and using a stack to temporarily store operators that cannot be immediately placed in the postfix string.

**The process is governed by the precedence of operators:**
*   Higher precedence operators (`*`, `/`) are evaluated before lower precedence ones (`+`, `-`).
*   `^` (exponentiation) has the highest precedence.
*   Parentheses `()` are used to override the default precedence.

---

**Algorithm:**

```
// FUNCTION to get precedence of an operator
PRECEDENCE(operator):
1. IF operator == '^' THEN RETURN 3
2. ELSE IF operator == '*' OR operator == '/' THEN RETURN 2
3. ELSE IF operator == '+' OR operator == '-' THEN RETURN 1
4. ELSE RETURN -1 // For non-operators

// MAIN ALGORITHM to convert Infix to Postfix
CONVERT(infix_expression):
1. Initialize an empty stack for operators.
2. Initialize an empty string for the postfix result.
3. SCAN the infix_expression from left to right, character by character.
4. FOR each character `c`:
   a. IF `c` is an operand (letter or digit):
      i. Append `c` to the postfix result string.
   b. ELSE IF `c` is '(':
      i. PUSH `c` onto the stack.
   c. ELSE IF `c` is ')':
      i. WHILE stack is not empty AND top of stack is not '(':
         - POP operator from stack and append it to postfix result.
      ii. POP the '(' from the stack (and discard it).
   d. ELSE IF `c` is an operator:
      i. WHILE stack is not empty AND PRECEDENCE(c) <= PRECEDENCE(top of stack):
         - POP operator from stack and append it to postfix result.
      ii. PUSH `c` onto the stack.
5. AFTER scanning is complete, POP all remaining operators from the stack and append them to the postfix result string.
6. PRINT the postfix result string.
```
**Note:** For the associativity of `^` (right-to-left), the condition in step 4.d.i should be `PRECEDENCE(c) < PRECEDENCE(top of stack)` when dealing with `^`. For simplicity, the provided code handles operators with left-to-right associativity.

---

**C Code:**

```c
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX_SIZE 100

char stack[MAX_SIZE];
int top = -1;

// Push function for stack
void push(char item) {
    if (top >= MAX_SIZE - 1) {
        printf("Stack Overflow.\n");
        return;
    }
    stack[++top] = item;
}

// Pop function for stack
char pop() {
    if (top < 0) {
        printf("Stack Underflow.\n");
        return -1;
    }
    return stack[top--];
}

// Function to return precedence of operators
int precedence(char symbol) {
    switch (symbol) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
        default:
            return 0; // For operands and parentheses
    }
}

// Function to convert infix expression to postfix
void infixToPostfix(char infix[], char postfix[]) {
    int i = 0; // Infix scanner
    int j = 0; // Postfix writer
    char item;

    push('('); // Push '(' onto stack
    strcat(infix, ")"); // Add ')' to the end of infix expression

    item = infix[i];

    while (item != '\0') {
        if (item == '(') {
            push(item);
        } else if (isalnum(item)) { // Check for operand
            postfix[j] = item;
            j++;
        } else if (item == ')') {
            while (stack[top] != '(') {
                postfix[j] = pop();
                j++;
            }
            pop(); // Remove '(' from stack
        } else { // Operator is encountered
            while (precedence(stack[top]) >= precedence(item)) {
                postfix[j] = pop();
                j++;
            }
            push(item);
        }
        i++;
        item = infix[i];
    }
    postfix[j] = '\0'; // Null terminate the postfix string
}

int main() {
    char infix[MAX_SIZE], postfix[MAX_SIZE];

    printf("Enter an Infix expression: ");
    scanf("%s", infix);

    infixToPostfix(infix, postfix);

    printf("Postfix expression is: %s\n", postfix);

    return 0;
}
```
