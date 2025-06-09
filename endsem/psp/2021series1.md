### **TKM COLLEGE OF ENGINEERING, KOLLAM-5**
### **Second Semester B. Tech Degree examinations - First Series Test (August 2021)**
### **EST 102- PROGRAMMING IN C**

---

### **PART A (Answer All Questions- 5X4=20 marks)**

**1(a) Write the output of the following**
```c
#include <stdio.h>
int main()
{
    int i=0, j=5;
    printf("Hello ");
    for (i; i >j; i++)
        printf("%d ", i);
    printf("Students ");
    return 0;
}
```
**Answer:**
**Output:** `Hello Students `

**Justification:**
1.  The program first prints "Hello ".
2.  It then enters the `for` loop. The initial values are `i=0` and `j=5`.
3.  The loop's condition is `i > j`, which evaluates to `0 > 5`.
4.  This condition is `false` from the very first check.
5.  Therefore, the body of the `for` loop (`printf("%d ", i);`) is never executed.
6.  The program continues after the loop and prints "Students ".

---
**1(b) Write the output of the following**
```c
#include <stdio.h>
int main()
{
    int i;
    for(i=65;i<70;i++)
        printf("%c ",i);
    return 0;
}
```
**Answer:**
**Output:** `A B C D E `

**Justification:**
1.  The `for` loop initializes the integer `i` to 65 and continues as long as `i` is less than 70. The loop will iterate for `i = 65, 66, 67, 68, 69`.
2.  The `printf` function uses the format specifier `%c`, which instructs it to print the character corresponding to the given integer's ASCII value.
3.  The ASCII values are:
    *   65 is 'A'
    *   66 is 'B'
    *   67 is 'C'
    *   68 is 'D'
    *   69 is 'E'
4.  Each character is printed followed by a space.

---

**2. Compare Machine language with Assembly language and High-level language**

**Answer:**

| Feature               | Machine Language                               | Assembly Language                                  | High-Level Language (HLL)                            |
| --------------------- | ---------------------------------------------- | -------------------------------------------------- | ---------------------------------------------------- |
| **Form**              | Consists of binary code (0s and 1s).           | Uses mnemonic codes (e.g., `ADD`, `MOV`, `SUB`).   | Uses English-like statements (e.g., `if`, `for`).    |
| **Human Readability** | Extremely difficult to read and understand.    | Difficult, but more readable than machine language.| Easy to read and understand.                         |
| **Machine Dependence**| Machine-dependent; specific to a CPU.          | Machine-dependent; specific to a CPU architecture. | Machine-independent; portable across platforms.      |
| **Translation**       | No translation needed; executed directly.      | Requires an Assembler to convert to machine code.  | Requires a Compiler or Interpreter to convert to machine code. |
| **Execution Speed**   | Fastest possible execution.                    | Slower than machine language due to translation.   | Slowest of the three due to higher abstraction levels and translation. |

---

**3. Differentiate keywords and identifiers with examples.**

**Answer:**

| Feature            | Keywords                                                                 | Identifiers                                                                |
| ------------------ | ------------------------------------------------------------------------ | -------------------------------------------------------------------------- |
| **Definition**     | Pre-defined, reserved words that have a special meaning to the compiler. | User-defined names given to entities like variables, functions, arrays, etc. |
| **Purpose**        | Used to define the structure and syntax of the C language.               | Used to name program elements for unique identification.                   |
| **Composition**    | Consist of lowercase letters only.                                       | Can consist of letters (a-z, A-Z), digits (0-9), and underscore (`_`). |
| **Rule**           | Cannot be used as a variable name.                                       | Must not be a keyword. Must start with a letter or underscore.             |
| **Total Number**   | Fixed number (e.g., 32 keywords in ANSI C).                              | Can be created as needed by the programmer.                                |
| **Example**        | `int`, `if`, `while`, `return`, `for`                                    | `sum`, `student_name`, `calculate_Area`, `_value`                          |

---

**4. Evaluate the above expressions and find the value of X and y?**
**(i) `x=2*3+5%4-2;`**
**(ii) `y=(1>2+3&&4);`**

**Answer:**

**(i) Evaluation of `x`:**
The expression is `x = 2*3 + 5%4 - 2;`
1.  Following operator precedence, `*` and `%` have higher priority than `+` and `-`. They are evaluated from left to right.
2.  `2 * 3` evaluates to `6`. Expression becomes: `x = 6 + 5%4 - 2;`
3.  `5 % 4` (remainder of 5 divided by 4) evaluates to `1`. Expression becomes: `x = 6 + 1 - 2;`
4.  `+` and `-` have the same priority. They are evaluated from left to right.
5.  `6 + 1` evaluates to `7`. Expression becomes: `x = 7 - 2;`
6.  `7 - 2` evaluates to `5`.
**Value of x is 5.**

**(ii) Evaluation of `y`:**
The expression is `y = (1 > 2+3 && 4);`
1.  The expression inside the parentheses is evaluated first.
2.  Inside the parentheses, `+` has higher precedence than `>`. `2 + 3` evaluates to `5`. Expression becomes: `y = (1 > 5 && 4);`
3.  `>` has higher precedence than `&&`. `1 > 5` is false, which evaluates to `0`. Expression becomes: `y = (0 && 4);`
4.  The logical AND (`&&`) operator performs short-circuit evaluation. Since the left operand is `0` (false), the entire expression is false without evaluating the right operand. The result is `0`.
**Value of y is 0.**

---

**5. Rima was preparing a document in word, but she forgot to save a file, and suddenly the power is turned off. After that, she checked the file in the system, but the file is missing. What is the reason behind this?**

**Answer:**
The reason the file is missing is because of the nature of the computer's primary memory, **RAM (Random Access Memory)**.

1.  **RAM is Volatile:** When Rima was working on the document, all the data was being held in RAM. RAM is volatile memory, which means it requires continuous power to retain its data.
2.  **Power Outage:** When the power was turned off, the contents of the RAM were completely erased.
3.  **Saving Process:** The act of "saving" a file is the process of copying data from the volatile RAM to a non-volatile storage device, such as a Hard Disk Drive (HDD) or a Solid-State Drive (SSD). These devices retain data even when the power is off.
4.  **Conclusion:** Since Rima forgot to save the file, the data only existed in the volatile RAM. When the power went out, the data was lost permanently before it could be written to non-volatile storage.

---

### **PART B (Answer any 3 questions 3*10=30 marks)**

**6(a) (i) Explain computer architecture with a neat diagram? Also, list out any three latest input and output devices?**

**Answer:**
**(i) Computer Architecture (Von Neumann Architecture)**
This architecture describes a computer design where program instructions and data are stored in the same memory.

**Diagram:**
```
      +---------------------------------+
      |        Input Devices            |
      +---------------------------------+
                  |
                  v
+--------------------------------------------------------+
|          Central Processing Unit (CPU)                 |
|   +-------------------+      +----------------------+  |
|   |  Control Unit (CU)  |<---->| Arithmetic Logic     |  |
|   |                     |      |    Unit (ALU)        |  |
|   +-------------------+      +----------------------+  |
+-----------^----------------------------^---------------+
            |                            |
            v                            v
+--------------------------------------------------------+
|                      Memory Unit (RAM)                 |
+--------------------------------------------------------+
                  |
                  v
      +---------------------------------+
      |        Output Devices           |
      +---------------------------------+
```
**Functional Units:**
1.  **CPU (Central Processing Unit):** The "brain" of the computer.
    *   **ALU (Arithmetic Logic Unit):** Performs arithmetic (+, -, *, /) and logical (AND, OR, NOT) operations.
    *   **CU (Control Unit):** Directs the operation of all other units by fetching, decoding, and executing instructions.
2.  **Memory Unit:** Stores instructions and data. RAM is the primary memory used for this.
3.  **Input Unit:** Accepts data and instructions from the user (e.g., keyboard, mouse).
4.  **Output Unit:** Displays the processed results to the user (e.g., monitor, printer).

**(ii) Three Latest Input and Output Devices:**
*   **Input Devices:**
    1.  **VR Controllers / Haptic Gloves:** Allow for intuitive interaction in virtual reality environments.
    2.  **High-Resolution Webcam (4K):** Provides high-quality video for streaming and video conferencing.
    3.  **Biometric Scanners (Iris/Facial Recognition):** Used for secure authentication.
*   **Output Devices:**
    1.  **3D Printer:** Creates physical three-dimensional objects from a digital model.
    2.  **OLED/QLED Monitors:** Offer superior color accuracy, contrast, and response times for display.
    3.  **VR Headsets (e.g., Oculus Quest, Valve Index):** Provide immersive visual and auditory output for virtual reality experiences.

---

**6(b) (ii) Define header files, and give two examples?**

**Answer:**
**Definition:** A header file in C (with a `.h` extension) is a file that contains C function declarations, macro definitions, and type definitions. They are included in a source file using the `#include` preprocessor directive. Their purpose is to share common functionalities across multiple source files, promoting code reusability and modularity.

**Examples:**
1.  **`stdio.h` (Standard Input/Output):** This is one of the most common header files. It contains declarations for standard input and output functions.
    *   **Functions:** `printf()`, `scanf()`, `fopen()`, `fclose()`.
2.  **`math.h` (Mathematical Functions):** This header file provides declarations for common mathematical functions.
    *   **Functions:** `sqrt()` (square root), `pow()` (power), `sin()` (sine), `cos()` (cosine).

---

**7(a) (ii) Write a C program to evaluate the series x - x³/3! + x⁵/5! - x⁷/7! + . . . . . . . . .**

**Answer:**
This is the Taylor series expansion for `sin(x)`. The input `x` should be in radians.

```c
#include <stdio.h>
#include <math.h>

int main() {
    float x, term, sum;
    int i, n;

    // Get input from user
    printf("Enter the value of x in degrees: ");
    scanf("%f", &x);
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    // Convert degrees to radians
    x = x * (3.14159 / 180.0);

    // Initialize sum and the first term
    term = x;
    sum = x;

    // Loop to calculate the rest of the terms
    for (i = 1; i < n; i++) {
        // Calculate the next term from the previous one for efficiency
        term = -term * x * x / ((2 * i + 1) * (2 * i));
        sum = sum + term;
    }

    printf("The sum of the series (sin(%.2f)) is: %f\n", x, sum);
    printf("Value using library function sin(x) is: %f\n", sin(x));

    return 0;
}
```

---

**7(b) (ii) Differentiate break and continue statements?**

**Answer:**

| Feature            | `break` Statement                                             | `continue` Statement                                     |
| ------------------ | ------------------------------------------------------------- | -------------------------------------------------------- |
| **Purpose**        | To terminate the execution of a loop or `switch` statement immediately. | To skip the current iteration of a loop and move to the next iteration. |
| **Effect**         | Control is transferred to the statement immediately following the loop or `switch`. | Control is transferred to the beginning of the loop for the next iteration. |
| **Applies To**     | `for`, `while`, `do-while` loops, and `switch` statements.      | Only `for`, `while`, and `do-while` loops.               |
| **Code Example**   | ```c for(i=1; i<=5; i++){ if(i==3) break; printf("%d",i); } // Output: 12 ``` | ```c for(i=1; i<=5; i++){ if(i==3) continue; printf("%d",i); } // Output: 1245 ``` |

---

**8. Write a C program to find the solution of a quadratic equation using a switch statement, taking into account all possible roots. Draw the flow chart also.**

**Answer:**

**C Program:**
```c
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    int condition;

    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    // Set an integer condition based on the discriminant
    if (discriminant > 0) {
        condition = 1;
    } else if (discriminant == 0) {
        condition = 0;
    } else {
        condition = -1;
    }

    // Use a switch statement based on the condition
    switch (condition) {
        case 1: // Roots are real and different
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Roots are real and different.\n");
            printf("root1 = %.2lf and root2 = %.2lf\n", root1, root2);
            break;

        case 0: // Roots are real and equal
            root1 = root2 = -b / (2 * a);
            printf("Roots are real and equal.\n");
            printf("root1 = root2 = %.2lf\n", root1);
            break;

        case -1: // Roots are complex
            realPart = -b / (2 * a);
            imagPart = sqrt(-discriminant) / (2 * a);
            printf("Roots are complex and different.\n");
            printf("root1 = %.2lf + %.2lfi\n", realPart, imagPart);
            printf("root2 = %.2lf - %.2lfi\n", realPart, imagPart);
            break;
    }
    return 0;
}
```

**Flowchart:**
```
              +----------+
              |  START   |
              +----------+
                   |
                   v
    +------------------------------+
    | Read coefficients a, b, c    |
    +------------------------------+
                   |
                   v
    +------------------------------+
    | D = b*b - 4*a*c              |
    +------------------------------+
                   |
                   v
         +-------------------+
         |     Is D > 0 ?    |--YES-->+---------------------+
         +-------------------+       | Calculate real,     |
                   | NO              | distinct roots      |
                   v                 +---------------------+
         +-------------------+                 |
         |    Is D == 0 ?    |--YES-->+---------------------+
         +-------------------+       | Calculate real,     |
                   | NO              | equal roots         |
                   v                 +---------------------+
    +------------------------------+           |
    | Calculate complex roots      |           |
    | (real and imaginary parts)   |<----------+
    +------------------------------+           |
                   |                           |
                   v                           v
    +------------------------------+<----------+
    | Print the calculated roots   |
    +------------------------------+
                   |
                   v
              +----------+
              |   STOP   |
              +----------+
```
---

**9(a) Read the following code**
```c
#include<stdio.h>
void main()
{
    int a=2, b=3, c;
    c=a+b;
    print("\n\t sum is"+c)
}
```
**i) Identify keywords, identifiers, operators, and escape sequences?**
**ii) Identify errors in the above program?**

**Answer:**
**i) Identification:**
*   **Keywords:** `void`, `int`
*   **Identifiers:** `main`, `a`, `b`, `c`
*   **Operators:** `=`, `+`
*   **Escape Sequences:** `\n` (newline), `\t` (horizontal tab)

**ii) Errors:**
1.  **Incorrect Function Name:** The function `print()` is used. The standard C function for printing to the console is `printf()`. This will cause a "function not defined" compilation error.
2.  **Incorrect String Concatenation:** The expression `"\n\t sum is" + c` is incorrect in C. This is not how you print a variable's value. This attempts to perform pointer arithmetic on the string literal, which results in undefined behavior and will likely cause a crash or print garbage.
    *   **Correction:** The line should be `printf("\n\t sum is %d", c);` to correctly print the value of the integer `c`.

---

**9(b) Write a program to print all prime numbers between two limits?**

**Answer:**
```c
#include <stdio.h>

int main() {
    int start, end, i, j, isPrime;

    // Get the limits from the user
    printf("Enter the starting limit: ");
    scanf("%d", &start);
    printf("Enter the ending limit: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    // Loop through each number in the given range
    for (i = start; i <= end; i++) {
        // Skip 0 and 1 as they are not prime
        if (i <= 1) {
            continue;
        }

        // Assume the number is prime initially
        isPrime = 1;

        // Check for factors from 2 up to i/2
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                // If a factor is found, it's not a prime number
                isPrime = 0;
                break; // No need to check further
            }
        }

        // If isPrime is still 1, then the number is prime
        if (isPrime == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
```
