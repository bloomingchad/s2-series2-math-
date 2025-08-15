# Module 1: DSA Fundamentals (ECE Focused - Final Version)

## 1. Introduction to Data Structures

### What is a Data Structure?
A **Data Structure** is a specific way of organizing data in a computer so it can be used effectively. Think of it as a container designed for a specific purpose. For example, an array is a container that stores items in a sequence.

### The Need for Data Structures
We use data structures to write efficient programs. A good choice can make a program run instantly, while a bad choice can make it run for hours. They help us with:
*   **Searching Data:** Finding information quickly.
*   **Processing Speed:** Handling large amounts of data without slowing down.
*   **Managing Data:** Simplifying complex problems by organizing the data logically.

### Cost-Benefit Analysis
Choosing a data structure is about making **trade-offs**. No structure is perfect for everything.
*   **Cost:** The time (Time Complexity) and memory (Space Complexity) an operation takes.
*   **Benefit:** How fast and efficient the structure is for the task you need.

---

## 2. Abstract Data Types (ADT)

An **Abstract Data Type (ADT)** is the blueprint or idea for a data structure. It defines **WHAT** operations can be done, but not **HOW** they are implemented.

*   **ADT:** The logical concept.
    *   *Example:* The ADT "Stack" specifies operations like `push`, `pop`, `peek`.
*   **Data Structure:** The physical implementation.
    *   *Example:* You can implement the Stack ADT using an `Array` or a `Linked List`.

---

## 3. Algorithm Analysis & Complexity

We analyze algorithms to predict their performance. The most common way is through **Asymptotic Analysis**, which focuses on how an algorithm behaves as the input size (`n`) gets very large.

### Asymptotic Notations

These are the main notations used to describe time complexity.

1.  **Big-O Notation (O):**
    *   **Represents:** The **Upper Bound** or **Worst-Case** complexity.
    *   **Meaning:** It gives a guarantee that the algorithm will be **no slower than** this time. This is the most important one.

2.  **Omega Notation (Ω):**
    *   **Represents:** The **Lower Bound** or **Best-Case** complexity.
    *   **Meaning:** The algorithm will be **at least this fast**.

3.  **Theta Notation (Θ):**
    *   **Represents:** A **Tight Bound**.
    *   **Meaning:** The algorithm's worst-case and best-case are the same.

### Core Complexities for Your Exam: O(1), O(n), and O(n²)

As per your instructor, master these.

#### **`O(1)` – Constant Time**
The runtime does **not** change with the input size `n`.

*   **How to Spot It:** A simple statement without loops that depend on `n`.
*   **Example:** `int value = arr[3];`

#### **`O(n)` – Linear Time**
The runtime grows linearly with the input size `n`.

*   **How to Spot It:** A single `for` loop that runs up to `n`.
*   **Example:**
    ```c
    for (int i = 0; i < n; i++) { /* ... */ }
    ```

#### **`O(n²)` – Quadratic Time**
The runtime grows with the square of the input size `n`.

*   **How to Spot It:** A loop nested inside another loop (a double loop).
*   **Example:**
    ```c
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) { /* ... */ }
    }
    ```
---

## Module 1: Solved Questions from Exam Papers

### Question 1: Explain the different notations used for representing the time complexity of algorithms. (From both papers)

**Answer:**
The three main asymptotic notations are:
1.  **Big-O (O):** Describes the **worst-case** running time (an upper bound).
2.  **Omega (Ω):** Describes the **best-case** running time (a lower bound).
3.  **Theta (Θ):** Describes the **tight bound** on the running time.

---

### Question 2: Analyse the following code snippets and obtain the time complexity.

**a) Snippet (i):**
```c
void fun(int a, int b){
  while (a != b) {
    if (a > b) a = a - b;
    else b = b - a;
  }
}
```
*   **Analysis:** This is a loop where the variables `a` and `b` decrease in value with each iteration. The number of steps depends on the input values, not a simple counter `n`. Since it is not a simple linear or quadratic loop, it falls outside the scope of `O(n)` and `O(n²)`. *(This is sufficient explanation for your exam level).*

**b) Snippet (ii):**
```c
void fun(int n){
  int i = 1, s = 1;
  while (s < n) {
    s = s + i;
    i++;
  }
}
```
*   **Analysis:** The loop variable `s` increases at a growing rate (`s` is incremented by `i`, and `i` itself increases). This means the loop will finish faster than a standard linear loop. It is not `O(n)`. *(This is a clear way to show you understand it's not linear, without needing to specify the exact complex function).*

**c) Snippet (iii):**
```c
void fun(int n){
  int i,j,k;
  for (i = n/2; i<=n; i++)
    for (j=1; j<=n/2; j++)
      for (k=1; k<=n; k=k*2)
        printf("hello");
}
```
*   **Analysis:** We analyze the loops to find the dominant part.
    *   The outer `for` loop (for `i`) runs approximately `n/2` times, which is **`O(n)`**.
    *   The middle `for` loop (for `j`) also runs `n/2` times, which is **`O(n)`**.
    *   These two loops are nested. The combined complexity of just these two is `O(n) * O(n) = O(n²)`.
    *   The innermost loop (for `k`) is a more complex type that is not required for your syllabus. However, since it is inside the `O(n²)` loops, the overall complexity will be at least `O(n²)`.
*   **Time Complexity:** The dominant term is **`O(n²)`** due to the two nested linear loops.

---

### Question 3: Justify whether the following statement is true or not. `2^(n+1)` is in `O(2ⁿ)`.

**Answer:**
**The statement is TRUE.**
**Reason:**
In Big-O analysis, we ignore constant factors. The function `2^(n+1)` can be rewritten as `2 * 2ⁿ`. The `2` at the front is a constant multiplier. After dropping the constant, the function's growth rate is simply `2ⁿ`. Therefore, `2^(n+1)` is in `O(2ⁿ)`.
