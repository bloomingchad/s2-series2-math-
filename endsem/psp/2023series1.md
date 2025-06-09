### **TKM COLLEGE OF ENGINEERING, KOLLAM-5**
### **2nd Semester B.Tech Degree Examination - I Series test (June 2023)**
### **EST 102 Programming in C**

---

### **PART A (Answer all questions, each question carries three marks)**

**1. What is the difference between high level language and machine language?**

**Answer:**

| Feature               | High-Level Language (HLL)                               | Machine Language (ML)                                     |
| --------------------- | ------------------------------------------------------- | --------------------------------------------------------- |
| **Human Readability** | Easy for humans to read, write, and understand (uses English-like syntax). | Extremely difficult for humans to read, as it consists of binary code (0s and 1s). |
| **Abstraction**       | High level of abstraction from the hardware details.    | Zero abstraction; it directly controls the hardware.      |
| **Portability**       | Machine-independent and portable across different computer architectures. | Machine-dependent; code written for one CPU will not run on another. |
| **Translation**       | Requires a compiler or interpreter to translate into machine code. | No translation needed; it is directly executed by the CPU. |

---

**2. Explain the different types of ROM.**

**Answer:**
ROM (Read-Only Memory) is a type of non-volatile memory used in computers. The main types are:
1.  **MROM (Masked ROM):** The data is programmed into the chip by the manufacturer during the fabrication process. It is the least expensive type for high-volume production but cannot be changed.
2.  **PROM (Programmable ROM):** It is manufactured as a blank chip and can be programmed once by the user with a special tool called a PROM programmer. After programming, the data cannot be erased.
3.  **EPROM (Erasable Programmable ROM):** This type can be erased and reprogrammed multiple times. Erasure is done by exposing the chip to strong ultraviolet (UV) light for a period of time.
4.  **EEPROM (Electrically Erasable Programmable ROM):** This can be programmed and erased electrically, byte by byte, without removing it from the circuit. This makes it much more convenient than EPROM. Flash memory is a type of EEPROM.

---

**3. Differentiate compilers and interpreters.**

**Answer:**

| Feature                | Compiler                                                         | Interpreter                                                 |
| ---------------------- | ---------------------------------------------------------------- | ----------------------------------------------------------- |
| **Translation Process**| Scans the entire program and translates it into machine code all at once. | Translates and executes the program line by line.           |
| **Output**             | Generates an executable file (`.exe` or object file).              | Does not generate an executable file.                       |
| **Execution Speed**    | The resulting executable runs faster.                            | Slower, as translation happens during execution.            |
| **Error Reporting**    | Displays all errors and warnings only after scanning the whole program. | Stops at the first error it encounters and reports it.      |
| **Example Languages**  | C, C++, Java (compiles to bytecode).                               | Python, JavaScript, Ruby.                                   |

---

**4. Consider the following C statements,**
`int a=1;`
`char b ='A';`
`printf ("%d %d", a, b);`
**Write the values of a and b. Justify your answer**

**Answer:**
**Output:** `1 65`

**Justification:**
1.  The variable `a` is an integer with the value `1`. The format specifier `%d` tells `printf` to print it as a decimal integer. So, `1` is printed.
2.  The variable `b` is a character with the value `'A'`. However, the format specifier used for it is also `%d`. When a `char` variable is printed using `%d`, its corresponding ASCII (American Standard Code for Information Interchange) value is displayed.
3.  The ASCII value for the character `'A'` is `65`. Therefore, `65` is printed for `b`.

---

**5. What are the rules to be followed while creating an identifier in C? Give one example each for legal and illegal identifiers.**

**Answer:**
An identifier is a name given to entities like variables, functions, and structures. The rules for creating an identifier are:
1.  An identifier can only contain alphabetic characters (a-z, A-Z), digits (0-9), and the underscore (`_`).
2.  The first character of an identifier must be an alphabet or an underscore. It cannot be a digit.
3.  Keywords (like `int`, `while`, `if`) cannot be used as identifiers.
4.  Identifiers are case-sensitive. For example, `total` and `Total` are treated as two different identifiers.
5.  There is no rule on how long an identifier can be, but only the first 31 characters are significant to most compilers.

*   **Legal Identifier Example:** `_student_age` or `totalSum`
*   **Illegal Identifier Example:** `2nd_place` (starts with a digit) or `int` (is a keyword).

---

### **PART B**
### **Module 1**

**6. Explain the functional units of a computer with a neat block diagram**

**Answer:**
The functional units of a computer describe its logical components and their interaction, commonly based on the Von Neumann architecture.

**Block Diagram:**
```
      +---------------------------------+
      |        Input Devices            |  (Keyboard, Mouse)
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
| (Stores both Data and Instructions)                    |
+--------------------------------------------------------+
                  |
                  v
      +---------------------------------+
      |        Output Devices           |  (Monitor, Printer)
      +---------------------------------+
```
**Functional Units:**
1.  **Input Unit:** This unit accepts data and instructions from the outside world. Examples: Keyboard, Mouse, Scanner.
2.  **Central Processing Unit (CPU):** It is the brain of the computer that processes all data and instructions. It has two main sub-units:
    *   **Arithmetic Logic Unit (ALU):** Performs all arithmetic operations (e.g., +, -, *, /) and logical operations (e.g., AND, OR, NOT).
    *   **Control Unit (CU):** Directs and coordinates the activities of all other units. It fetches instructions from memory, interprets them, and sends control signals to execute them.
3.  **Memory Unit:** This unit stores program instructions, data, and intermediate results. It is primarily Random Access Memory (RAM).
4.  **Output Unit:** This unit provides the processed results to the user. Examples: Monitor, Printer, Speakers.

---

**7. Write an algorithm and draw the flowchart to find the second largest element from a given set of numbers.**

**Answer:**

**Algorithm:**
1.  START
2.  Read the set of numbers into an array, `arr`.
3.  Initialize two variables, `largest` and `second_largest`, to a very small number (or to the first two elements, after comparing them). Let's use `largest = arr[0]` and `second_largest = arr[1]` (assuming at least two elements and swapping if `arr[1]` > `arr[0]`).
4.  Iterate through the array from the third element to the end.
5.  For each element `arr[i]`:
    a. IF `arr[i]` > `largest` THEN:
       i. `second_largest` = `largest`
       ii. `largest` = `arr[i]`
    b. ELSE IF `arr[i]` > `second_largest` AND `arr[i]` != `largest` THEN:
       i. `second_largest` = `arr[i]`
6.  Print the value of `second_largest`.
7.  STOP

**Flowchart:**
```
              +----------+
              |   START  |
              +----------+
                   |
                   v
    +------------------------------+
    | Read numbers into array 'arr'|
    +------------------------------+
                   |
                   v
    +------------------------------+
    | largest = arr[0]             |
    | second_largest = arr[1]      |
    | (handle initial comparison)  |
    +------------------------------+
                   |
                   v
    +------------------------------+
    | Initialize i = 2             |
    +------------------------------+
                   |
+------------------+-------------------+
|                  |                   |
|     +--------------------------+     |
+---->| Is i < number of elements? |-----+-----> YES
      +--------------------------+     |
                   | NO                |
                   v                   v
    +------------------------------+ <-------+
    | Print 'second_largest'       |         |
    +------------------------------+         |
                   |                         v
                   v               +-------------------+
              +----------+         | Is arr[i] > largest?|--YES->+-----------------------------+
              |   STOP   |         +-------------------+       | second_largest = largest    |
              +----------+                   | NO                | largest = arr[i]            |
                                             v                   +-----------------------------+
                                   +-------------------+                       |
                                   | Is arr[i] >       |                       |
                                   | second_largest?   |--YES->+-----------------------------+
                                   +-------------------+       | second_largest = arr[i]     |
                                             | NO              +-----------------------------+
                                             v                               |
                                   +-------------------+                       |
                                   |   i = i + 1       |<----------------------+
                                   +-------------------+
                                             |
                  <--------------------------+

```
---

**OR**

**8. Write an algorithm and draw the flowchart to find the sum of odd numbers from 1 to n.**

**Answer:**

**Algorithm:**
1.  START
2.  Read the integer value `n`.
3.  Initialize `sum = 0` and `i = 1`.
4.  Repeat steps 5 and 6 while `i <= n`.
5.  IF `i` is an odd number (i.e., `i % 2 != 0`) THEN, `sum = sum + i`.
6.  Increment `i` by 1.
7.  Print the value of `sum`.
8.  STOP

**Flowchart:**
```
                  +----------+
                  |  START   |
                  +----------+
                       |
                       v
            +--------------------+
            |   Read value n     |
            +--------------------+
                       |
                       v
            +--------------------+
            | Initialize sum = 0,|
            |       i = 1        |
            +--------------------+
                       |
                       v
            <--------------------+
            |                    |
            |   +--------------+ |
            +-->| Is i <= n ?  |---> YES
                +--------------+ |
                       | NO      |
                       v         v
            +--------------------+  +------------------+
            |  Print 'sum'       |  | Is i % 2 != 0 ?  |
            +--------------------+  +------------------+
                       |               | YES      | NO
                       v               v          |
                  +----------+   +----------------+ |
                  |   STOP   |   | sum = sum + i  | |
                  +----------+   +----------------+ |
                                         |          |
                                         v          v
                                     +--------------+
                                     |  i = i + 1   |
                                     +--------------+
                                           |
                  <------------------------+
```

---

**9. Develop an algorithm and a flowchart to reverse an integer given by the user.**

**Answer:**

**Algorithm:**
1.  START
2.  Read the integer `num`.
3.  Initialize `reversed_num = 0` and `digit = 0`.
4.  Repeat steps 5, 6, and 7 while `num > 0`.
5.  `digit = num % 10` (get the last digit).
6.  `reversed_num = (reversed_num * 10) + digit`.
7.  `num = num / 10` (remove the last digit).
8.  Print the value of `reversed_num`.
9.  STOP

**Flowchart:**
```
                  +----------+
                  |  START   |
                  +----------+
                       |
                       v
            +--------------------+
            |   Read integer num |
            +--------------------+
                       |
                       v
            +--------------------+
            | reversed_num = 0   |
            +--------------------+
                       |
                       v
            <--------------------+
            |                    |
            |   +--------------+ |
            +-->| Is num > 0 ? |---> YES
                +--------------+ |
                       | NO      |
                       v         v
            +--------------------+  +--------------------+
            | Print reversed_num |  | digit = num % 10   |
            +--------------------+  +--------------------+
                       |                     |
                       v                     v
                  +----------+   +------------------------------------+
                  |   STOP   |   | reversed_num = (reversed_num*10) + digit|
                  +----------+   +------------------------------------+
                                               |
                                               v
                                     +--------------------+
                                     | num = num / 10     |
                                     +--------------------+
                                               |
                  <----------------------------+
```
---

### **Module 2**

**10. What is the output of the following C codes? Justify your answer.**

**a)**
```c
#include <stdio.h>
void main()
{
    int a = 5;
    int b = 7;
    int a = 3;
    int c = 6;
    printf("%d %d %d",a, b, c);
}
```
**Answer:**
**Output:** This code will **not compile**.

**Justification:**
The variable `a` is declared twice within the same scope (the `main` function). In C, you cannot redeclare a variable in the same scope. The compiler will encounter the second declaration `int a = 3;` and generate a "redeclaration of 'a'" or "conflicting types for 'a'" error, preventing the program from being compiled and run.

**b)**
```c
#include <stdio.h>
void main()
{
    int a,b,c;
    scanf ("%d %d", &a, &b);
    a + b = c;
    printf ("%d %d %d", a, b, c);
}
```
**Answer:**
**Output:** This code will **not compile**.

**Justification:**
The line `a + b = c;` is a syntax error. The expression on the left-hand side of an assignment operator (`=`) must be a modifiable "l-value" (a location in memory, like a variable name). The expression `a + b` is an "r-value" (a temporary result of a calculation) and not a memory location where a value can be stored. The compiler will produce an error like **"lvalue required as left operand of assignment"**. The correct assignment would be `c = a + b;`.

---

**11. Write a C program to find the distance between two points, where the coordinates of two points are to be accepted from the user.**

**Answer:**
```c
#include <stdio.h>
#include <math.h> // for sqrt() and pow() functions

int main() {
    float x1, y1, x2, y2, distance;

    // Get coordinates for the first point
    printf("Enter coordinates for the first point (x1 y1): ");
    scanf("%f %f", &x1, &y1);

    // Get coordinates for the second point
    printf("Enter coordinates for the second point (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    // Calculate the distance using the distance formula
    // distance = sqrt((x2 - x1)^2 + (y2 - y1)^2)
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Display the result
    printf("The distance between the two points is: %f\n", distance);

    return 0;
}
```
---

**OR**

**12. Write a C program to find the roots of a quadratic equation.**

**Answer:**
*(This question is identical to Q13.b from the previous paper. The answer is the same.)*
```c
#include <stdio.h>
#include <math.h> // Required for sqrt()

int main() {
    double a, b, c, discriminant, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    // Condition for real and different roots
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different.\n");
        printf("root1 = %.2lf and root2 = %.2lf\n", root1, root2);
    }
    // Condition for real and equal roots
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal.\n");
        printf("root1 = root2 = %.2lf\n", root1);
    }
    // Condition for complex roots
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different.\n");
        printf("root1 = %.2lf + %.2lfi\n", realPart, imagPart);
        printf("root2 = %.2lf - %.2lfi\n", realPart, imagPart);
    }

    return 0;
}
```

---

**13. Explain various formatted I/O statements in C.**

**Answer:**
Formatted I/O (Input/Output) statements in C allow for reading and writing data in a specific format. They are part of the `<stdio.h>` library.

1.  **`printf()` (Formatted Output):**
    *   **Purpose:** Used to print formatted text and values to the standard output (usually the console).
    *   **Syntax:** `int printf(const char *format, ...);`
    *   **Working:** The `format` string contains regular text and **format specifiers** (like `%d`, `%f`, `%c`). For each format specifier, `printf` takes an additional argument and prints its value in the specified format. It also processes **escape sequences** (like `\n` for newline).
    *   **Example:** `printf("Age: %d, Grade: %c\n", 21, 'A');`

2.  **`scanf()` (Formatted Input):**
    *   **Purpose:** Used to read formatted input from the standard input (usually the keyboard).
    *   **Syntax:** `int scanf(const char *format, ...);`
    *   **Working:** The `format` string tells `scanf` what kind of data to expect. The subsequent arguments must be **pointers** (addresses of variables, obtained using the `&` operator) where the read data will be stored.
    *   **Example:** `scanf("%d %f", &age, &salary);`

**Common Format Specifiers:**

| Specifier | Data Type          |
| :-------- | :----------------- |
| `%d`      | Integer (`int`)      |
| `%f`      | Float (`float`)    |
| `%lf`     | Double (`double`)  |
| `%c`      | Character (`char`) |
| `%s`      | String (char array)|

---
### **Module 1 & 2**

**14. Write an algorithm and draw a flowchart to check whether the given number is a perfect number or not (A perfect number is a positive integer that is equal to the sum of its factors excluding the number itself).**

**Answer:**

**Algorithm:**
1.  START
2.  Read the integer `num`.
3.  Initialize `sum_of_factors = 0` and `i = 1`.
4.  Repeat steps 5 and 6 while `i < num`.
5.  IF `num % i == 0` (i is a factor of num), THEN `sum_of_factors = sum_of_factors + i`.
6.  Increment `i` by 1.
7.  IF `sum_of_factors == num` AND `num > 0`, THEN print "`num` is a Perfect Number".
8.  ELSE, print "`num` is not a Perfect Number".
9.  STOP

**Flowchart:**
```
                  +----------+
                  |  START   |
                  +----------+
                       |
                       v
            +--------------------+
            |   Read integer num |
            +--------------------+
                       |
                       v
            +--------------------+
            | sum_of_factors = 0 |
            |       i = 1        |
            +--------------------+
                       |
                       v
            <--------------------+
            |                    |
            |   +--------------+ |
            +-->| Is i < num ? |---> YES
                +--------------+ |
                       | NO      |
                       v         v
             +-----------------+ +------------------+
             | Is sum_of_f...  | | Is num % i == 0? |
             |   == num ?      | +------------------+
             +-----------------+     | YES       | NO
               | YES      | NO       v           |
               v          v      +----------------+ |
            +---------+ +---------+  | sum_of_f... =  | |
            | Print   | | Print   |  | sum_of_f... + i| |
            | "Perfect"| | "Not    |  +----------------+ |
            |         | | Perfect"|          |          |
            +---------+ +---------+          v          v
                       |                     +------------+
                       |                     | i = i + 1  |
                       v                     +------------+
                  +----------+                     |
                  |   STOP   |  <-------------------+
                  +----------+
```
---

**OR**

**15. Explain the four basic data types in C. How can we extend the range of values they represent?**

**Answer:**
C has several built-in data types. The four basic ones are:

1.  **`int`:** Used to store whole numbers (integers). Typically occupies 4 bytes. Example: `int age = 25;`
2.  **`char`:** Used to store a single character. Occupies 1 byte. The value is stored as its ASCII code. Example: `char grade = 'A';`
3.  **`float`:** Used to store single-precision floating-point numbers (numbers with a decimal point). Typically occupies 4 bytes. Example: `float price = 19.99;`
4.  **`double`:** Used to store double-precision floating-point numbers. It offers more precision and a larger range than `float`. Typically occupies 8 bytes. Example: `double pi = 3.1415926535;`

**Extending the Range of Values:**
The range and properties of these basic data types can be modified using **type qualifiers**:

*   **`short` and `long`:** These qualifiers modify the size of integer and double types.
    *   `short int`: Often uses less memory than a standard `int` (e.g., 2 bytes), thus having a smaller range.
    *   `long int`: Often uses more memory (e.g., 4 or 8 bytes), providing a larger range.
    *   `long double`: Provides even greater precision and range than a standard `double`.

*   **`signed` and `unsigned`:** These qualifiers apply to integer types (`char`, `int`).
    *   `signed` (the default): The variable can hold both positive and negative values. The most significant bit is used as a sign bit.
    *   `unsigned`: The variable can only hold non-negative (0 and positive) values. The sign bit is used for data, effectively doubling the maximum positive value the type can hold.
    *   **Example:** A `signed char` ranges from -128 to 127. An `unsigned char` ranges from 0 to 255.
