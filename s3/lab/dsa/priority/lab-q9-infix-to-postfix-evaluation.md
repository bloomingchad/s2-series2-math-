### **File: `lab-q9-infix-to-postfix-evaluation.md`**

#### **Lab Question 9: Infix to Postfix Conversion and Evaluation**

**Problem Statement:**
Write a program to convert an infix expression to postfix using a stack and then evaluate the postfix expression. Input: `(A + B) * (C - D)`

**Concept Overview:**

This problem is a two-part process, both of which heavily rely on the **stack** data structure.

**Part 1: Infix to Postfix Conversion**
This is identical to Experiment 5. We scan the infix expression and use a stack to correctly order the operators based on their precedence and associativity. Operands are immediately appended to the output string, while operators are managed on the stack.
*   **Key Idea**: The stack holds operators that are waiting for their right-hand operand or for an operator of lower precedence.

**Part 2: Postfix Expression Evaluation**
Evaluating a postfix expression is simpler than parsing an infix one because no operator precedence rules or parentheses are needed. We use a stack to hold operands (numbers).
*   **How it works**:
    1.  Scan the postfix expression from left to right.
    2.  If the scanned character is an **operand** (a number), push it onto the stack.
    3.  If the scanned character is an **operator**, pop the top two operands from the stack.
    4.  Perform the operation with these two operands (note: the first popped operand is the second operand in the infix expression, e.g., for `A B -`, B is popped first, then A, and the operation is `A - B`).
    5.  Push the result of the operation back onto the stack.
*   **Final Result**: After the entire expression is scanned, the final result is the only number remaining on the stack.

---

**Algorithm:**

**Part A: Infix to Postfix Conversion**
*(This algorithm is the same as Experiment 5)*

```
// FUNCTION to get precedence of an operator
PRECEDENCE(operator):
1. IF operator == '^' THEN RETURN 3
2. ELSE IF operator == '*' OR operator == '/' THEN RETURN 2
3. ELSE IF operator == '+' OR operator == '-' THEN RETURN 1
4. ELSE RETURN 0

// CONVERT Infix to Postfix
CONVERT(infix, postfix):
1. Initialize an empty operator stack. Push '('. Append ')' to infix.
2. FOR each character `c` in infix:
   a. IF `c` is an operand, append to `postfix`.
   b. IF `c` is '(', push onto stack.
   c. IF `c` is ')', pop from stack and append to `postfix` until '(' is found. Pop '('.
   d. IF `c` is an operator, pop from stack and append to `postfix` all operators with higher or equal precedence. Then push `c` onto the stack.
3. AFTER loop, the `postfix` string is ready.
```

**Part B: Postfix Evaluation**

```
// EVALUATE Postfix Expression
EVALUATE(postfix):
1. Initialize an empty operand stack (for integers/floats).
2. FOR each character `c` in postfix:
   a. IF `c` is an operand (digit):
      i. Convert `c` to a number and PUSH it onto the stack.
   b. ELSE IF `c` is an operator:
      i. operand2 = POP from stack.
      ii. operand1 = POP from stack.
      iii. result = operand1 OPERATOR operand2.
      iv. PUSH `result` onto the stack.
3. END FOR
4. Final_Result = POP from stack.
5. RETURN Final_Result
```

---

**C Code:**

This program first converts the infix expression to postfix and then evaluates the resulting postfix expression. For evaluation, it prompts the user to enter values for the variables (A, B, C, etc.).

```c
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX_SIZE 100

// ----- Stack Implementation -----
char char_stack[MAX_SIZE];
int int_stack[MAX_SIZE];
int top = -1;

void push_char(char item) {
    if (top < MAX_SIZE - 1) char_stack[++top] = item;
}
char pop_char() {
    if (top > -1) return char_stack[top--];
    return -1;
}
void push_int(int item) {
    if (top < MAX_SIZE - 1) int_stack[++top] = item;
}
int pop_int() {
    if (top > -1) return int_stack[top--];
    return -1;
}

// ----- Infix to Postfix Conversion -----
int precedence(char symbol) {
    if (symbol == '^') return 3;
    if (symbol == '*' || symbol == '/') return 2;
    if (symbol == '+' || symbol == '-') return 1;
    return 0;
}

void infixToPostfix(char infix[], char postfix[]) {
    top = -1; // Reset stack for characters
    int i = 0, j = 0;
    char item;

    push_char('(');
    strcat(infix, ")");
    
    while (infix[i] != '\0') {
        item = infix[i];
        if (isalnum(item)) {
            postfix[j++] = item;
        } else if (item == '(') {
            push_char(item);
        } else if (item == ')') {
            while (top > -1 && char_stack[top] != '(') {
                postfix[j++] = pop_char();
            }
            pop_char(); // Pop '('
        } else { // Operator
            while (top > -1 && precedence(char_stack[top]) >= precedence(item)) {
                postfix[j++] = pop_char();
            }
            push_char(item);
        }
        i++;
    }
    postfix[j] = '\0';
}

// ----- Postfix Evaluation -----
int evaluatePostfix(char postfix[]) {
    top = -1; // Reset stack for integers
    int i = 0, val;
    char item;
    int op1, op2;

    while (postfix[i] != '\0') {
        item = postfix[i];
        if (isalpha(item)) {
            printf("Enter the value for %c: ", item);
            scanf("%d", &val);
            push_int(val);
        } else { // Operator
            op2 = pop_int();
            op1 = pop_int();
            switch (item) {
                case '+': push_int(op1 + op2); break;
                case '-': push_int(op1 - op2); break;
                case '*': push_int(op1 * op2); break;
                case '/': push_int(op1 / op2); break;
                case '^': push_int(op1 ^ op2); break; // Note: ^ in C is XOR, not power
            }
        }
        i++;
    }
    return pop_int();
}

int main() {
    char infix[MAX_SIZE] = "(A+B)*(C-D)";
    char postfix[MAX_SIZE];

    printf("Infix Expression: %s\n", infix);

    // Part 1: Convert to Postfix
    infixToPostfix(infix, postfix);
    printf("Postfix Expression: %s\n", postfix);

    // Part 2: Evaluate Postfix
    printf("\n--- Evaluating Postfix Expression ---\n");
    int result = evaluatePostfix(postfix);
    printf("\nResult of the evaluation: %d\n", result);

    return 0;
}
```
