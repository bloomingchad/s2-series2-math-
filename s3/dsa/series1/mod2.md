# Module 2: Linear Data Structures (Final ECE Version)

This module covers fundamental linear data structures. We will explore how to implement and use Stacks, Queues, and Linked Lists. The focus is on their algorithms, operations, and key applications.

## Part A: Array-Based Structures

### 1. The Stack

A **Stack** is a data structure that follows the **LIFO (Last-In, First-Out)** principle. Imagine a stack of books; you can only add a book to the top and take a book from the top.
*   **Key Pointer:** `TOP`, which keeps track of the index of the last element inserted.
*   **Initialization:** An empty stack is represented by `TOP = -1`.

#### Core Stack Operations (Algorithm using an Array)
**PUSH (Adding an element `item`)**
1.  **Check for Overflow:** IF `TOP == MAX_SIZE - 1`, print "Stack Overflow" and stop.
2.  **Increment TOP:** `TOP = TOP + 1`.
3.  **Insert Element:** `StackArray[TOP] = item`.

**POP (Removing an element)**
1.  **Check for Underflow:** IF `TOP == -1`, print "Stack Underflow" and stop.
2.  **Get Element:** `item = StackArray[TOP]`.
3.  **Decrement TOP:** `TOP = TOP - 1`.
4.  Return `item`.

#### Applications of Stacks
*   **Expression Conversion:** Used to convert expressions from Infix to Postfix or Prefix.
*   **Expression Evaluation:** Used to evaluate Postfix and Prefix expressions.
*   **Function Calls (Call Stack):** Programming languages use a stack to manage function calls. When a function is called, it's pushed onto the stack; when it returns, it's popped off.
*   **Recursion:** The call stack is essential for managing the state of recursive function calls.
*   **Undo/Redo Operations:** In software like text editors, a stack can be used to keep track of recent actions, allowing the user to undo them.
*   **Backtracking:** Used in algorithms that need to explore a path and "backtrack" if it's a dead end (e.g., solving a maze).
*   **String Reversal:** Push each character of a string onto a stack, then pop them off to get the reversed string.

---

### 2. The Queue

A **Queue** follows the **FIFO (First-In, First-Out)** principle, like a line of people.
*   **Key Pointers:** `FRONT` (where elements are removed) and `REAR` (where elements are added).
*   **Initialization:** An empty queue is `FRONT = -1` and `REAR = -1`.

#### Core Queue Operations (Algorithm using an Array)
**ENQUEUE (Adding an element `item`)**
1.  **Check for Overflow:** IF `REAR == MAX_SIZE - 1`, print "Queue Overflow" and stop.
2.  **Handle First Element:** IF `FRONT == -1`, set `FRONT = 0`.
3.  **Increment REAR:** `REAR = REAR + 1`.
4.  **Insert Element:** `QueueArray[REAR] = item`.

**DEQUEUE (Removing an element)**
1.  **Check for Underflow:** IF `FRONT == -1` or `FRONT > REAR`, print "Queue Underflow" and stop.
2.  **Get Element:** `item = QueueArray[FRONT]`.
3.  **Increment FRONT:** `FRONT = FRONT + 1`.
4.  Return `item`.

#### Applications of Queues
*   **Operating Systems:** Used for job scheduling (e.g., CPU scheduling, disk scheduling). Processes waiting for a resource are kept in a queue.
*   **Printers:** Print jobs are added to a print queue in the order they are received.
*   **Networking:** Data packets are often managed in queues in routers and switches to handle network congestion.
*   **Breadth-First Search (BFS):** The BFS algorithm for traversing graphs and trees uses a queue.
*   **Call Centers:** Phone systems use queues to hold calls for the next available service representative.

---

### 3. Circular Queue

A **Circular Queue** is an improved queue that treats the array as a circle to reuse empty space at the beginning. It uses the **modulo (`%`) operator** for this.

#### Algorithm for ENQUEUE() and DEQUEUE()
**ENQUEUE(item):**
1.  **Check for Overflow:** `IF (REAR + 1) % MAX_SIZE == FRONT`, the queue is full. Print "Queue Full" and stop.
2.  **Handle First Element:** IF `FRONT == -1`, set `FRONT = 0`.
3.  **Increment REAR circularly:** `REAR = (REAR + 1) % MAX_SIZE`.
4.  **Insert Element:** `QueueArray[REAR] = item`.

**DEQUEUE():**
1.  **Check for Underflow:** IF `FRONT == -1`, the queue is empty. Print "Queue Empty" and stop.
2.  **Get Element:** `item = QueueArray[FRONT]`.
3.  **Check if last element:** IF `FRONT == REAR`, reset the queue to empty: `FRONT = -1`, `REAR = -1`.
4.  **Else, increment FRONT circularly:** `FRONT = (FRONT + 1) % MAX_SIZE`.
5.  Return `item`.

### 4. Double-Ended Queue (Deque)

A **Deque** is a queue where you can add and remove elements from **both the front and the rear**.

---

## Part B: Linked Lists

A **Linked List** is a dynamic data structure where elements (**nodes**) are linked together using pointers.

### 1. Key Concepts (Required for Exam)
*   **Node:** Contains `data` and a `next` pointer.
*   **Head:** A pointer to the first node. If `head` is `NULL`, the list is empty.
*   **Self-Referential Structure:** A `struct` that contains a pointer to another `struct` of the same type, which is how nodes are defined.
*   **Dynamic Memory Allocation:** Using `malloc()` to create nodes as needed.

### 2. Types of Linked Lists (Definitions Only)
As per your teacher's instructions, you only need to know the **definitions and introductory concepts**. Insertion and deletion algorithms for linked lists are **not** in your syllabus.

*   **Singly Linked List:** Nodes have one `next` pointer. Traversal is one-way (forward).
*   **Doubly Linked List:** Nodes have a `next` and a `prev` pointer. Traversal is two-way.
*   **Circular Linked List:** The last node's `next` pointer points back to the `head`, forming a loop.

### 3. Implementing a Stack using a Linked List

Instead of an array, we can use a linked list to implement a stack. This approach provides dynamic sizing.
*   The **`head`** of the linked list acts as the **`TOP`** of the stack.
*   **Push** becomes "insert at the beginning" of the list.
*   **Pop** becomes "delete from the beginning" of the list.

#### Advantages of Linked List Stack over Array Stack
| Feature | Array-based Stack | Linked List-based Stack (Advantage) |
| :--- | :--- | :--- |
| **Memory Allocation** | **Static.** Size is fixed. | **Dynamic.** Can grow or shrink at runtime. |
| **Overflow** | Can overflow if the array size is exceeded. | **No Overflow (Theoretically).** Overflow only if the system runs out of memory. |
| **Memory Utilization**| Can waste memory if the array is large but holds few elements. | **Efficient.** Memory is allocated only when an element is pushed. |

---

## Part C: Solved Exam and Tutorial Questions

### Question: Write an algorithm to convert an infix expression into its equivalent postfix expression.

**Answer:** The algorithm uses a stack to temporarily hold operators.
1.  Initialize an empty stack and an empty output string.
2.  Scan the infix expression from left to right.
3.  **Operand:** If the character is an operand, append it to the output.
4.  **Operator:** If the character is an operator, pop from the stack to the output as long as the stack is not empty, not a `(`, and has an operator of higher or equal precedence. Then push the current operator.
5.  **`(`:** If the character is an opening bracket, push it to the stack.
6.  **`)`:** If the character is a closing bracket, pop from the stack to the output until a `(` is found. Discard the parentheses.
7.  **End:** After scanning, pop all remaining operators to the output.

### Tutorial Problem 1: Convert `a/b^c-d` to postfix.

*(Note: The `^` operator has the highest precedence and is **Right-Associative**.)*

| Symbol | Stack | Output | Reason |
| :--- | :--- | :--- | :--- |
| `a` | | `a` | Operand to output |
| `/` | `/` | `a` | Push operator |
| `b` | `/` | `ab` | Operand to output |
| `^` | `/^` | `ab` | `^` has higher precedence than `/`, push |
| `c` | `/^` | `abc` | Operand to output |
| `-` | `-` | `abc^/` | `-` has lower precedence, so pop `^` and `/`. Then push `-` |
| `d` | `-` | `abc^/d` | Operand to output |
| *End* | | **`abc^/d-`** | Pop remaining `-` |

### Tutorial Problem 2: Convert `(A+B)^C–(D*E)/F` to postfix.

| Symbol | Stack | Output | Reason |
| :--- | :--- | :--- | :--- |
| `(` | `(` | | Push `(` |
| `A` | `(` | `A` | Operand to output |
| `+` | `(+` | `A` | Push `+` |
| `B` | `(+` | `AB` | Operand to output |
| `)` | | `AB+` | Pop until `(`, append `+` |
| `^` | `^` | `AB+` | Push `^` |
| `C` | `^` | `AB+C` | Operand to output |
| `–` | `–` | `AB+C^` | `-` has lower precedence, pop `^`, push `-` |
| `(` | `-(` | `AB+C^` | Push `(` |
| `D` | `-(` | `AB+C^D` | Operand to output |
| `*` | `-(*` | `AB+C^D` | Push `*` |
| `E` | `-(*` | `AB+C^DE` | Operand to output |
| `)` | `-` | `AB+C^DE*` | Pop until `(`, append `*` |
| `/` | `-/` | `AB+C^DE*` | `/` has higher precedence than `-`, push |
| `F` | `-/` | `AB+C^DE*F` | Operand to output |
| *End* | | **`AB+C^DE*F/-`** | Pop remaining `/` and `-` |

### Tutorial Problem 3: Convert `a+(b*c*(d/e^f)*g)*h`

*(Note: Assuming the expression was `a+(b*c*(d/e^f)*g)*h`)*

| Symbol | Stack | Output |
| :--- | :--- | :--- |
| `a` | | `a` |
| `+` | `+` | `a` |
| `(` | `+(` | `a` |
| `b` | `+(` | `ab` |
| `*` | `+(*` | `ab` |
| `c` | `+(*` | `abc` |
| `*` | `+(*` | `abc*` |
| `(` | `+(*(` | `abc*` |
| `d` | `+(*(` | `abc*d` |
| `/` | `+(*( /` | `abc*d` |
| `e` | `+(*( /` | `abc*de` |
| `^` | `+(*( /^` | `abc*de` |
| `f` | `+(*( /^` | `abc*def` |
| `)` | `+(*` | `abc*def^/` |
| `*` | `+(*` | `abc*def^/*` |
| `g` | `+(*` | `abc*def^/*g` |
| `)` | `+` | `abc*def^/*g*` |
| `*` | `+*` | `abc*def^/*g*` |
| `h` | `+*` | `abc*def^/*g*h` |
| *End* | | **`abc*def^/*g*h*+`** |
