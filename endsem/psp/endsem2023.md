
### **TKM COLLEGE OF ENGINEERING, KOLLAM**
### **Second Semester B. Tech. Degree Examination, August 2023**
### **22EST209- PROGRAMMING IN C (2022 Scheme)**

---

### **PART - A**
**(Answer all questions. Each question carries 3 marks)**

**1. Differentiate between High level and Low level languages.**

**Answer:**

| Feature               | High-Level Language (HLL)                               | Low-Level Language (LLL)                                  |
| --------------------- | ------------------------------------------------------- | --------------------------------------------------------- |
| **Abstraction**       | High abstraction from machine hardware.                 | Little to no abstraction from hardware.                   |
| **Readability**       | Easy for humans to read and write (e.g., uses English-like syntax). | Difficult for humans to read and understand (e.g., uses mnemonics or binary). |
| **Machine Dependence** | Machine-independent (portable across different platforms). | Machine-dependent (written for a specific hardware architecture). |
| **Execution Speed**   | Slower, as it needs to be translated (compiled/interpreted) to machine code. | Faster, as it is closer to the native language of the processor. |
| **Examples**          | C, C++, Java, Python.                                   | Assembly Language, Machine Code.                          |

---

**2. List any 6 input output devices.**

**Answer:**
**Input Devices:**
1.  **Keyboard:** Used for typing text and commands.
2.  **Mouse:** Used for pointing, clicking, and navigating a graphical user interface.
3.  **Scanner:** Converts physical documents or images into digital format.

**Output Devices:**
4.  **Monitor:** Displays visual information to the user.
5.  **Printer:** Produces a hard copy of digital documents.
6.  **Speakers:** Output audio signals as sound.

---

**3. Write the size and range of any three data types in C.**

**Answer:**
*(Note: The size and range can be compiler and system dependent. The values below are typical for a 32/64-bit system.)*

| Data Type | Size (in bytes) | Range                                                              |
| :-------- | :-------------- | :----------------------------------------------------------------- |
| `char`    | 1               | -128 to 127                                                        |
| `int`     | 4               | -2,147,483,648 to 2,147,483,647                                    |
| `float`   | 4               | Approx. 1.2E-38 to 3.4E+38 with about 6-7 decimal digits of precision |

---

**4. Explain the working of `sizeof` operator.**

**Answer:**
The `sizeof` operator is a compile-time unary operator in C that returns the size, in bytes, of its operand. The operand can be a variable, a constant, or a data type.

*   **Working:** When the program is compiled, the compiler replaces each `sizeof` expression with a constant integer value representing the memory size of the operand.
*   **Usage with Data Type:** It is used to find the size of a data type. The type name must be enclosed in parentheses.
    *   `int size = sizeof(int);` // size will be 4 (typically)
*   **Usage with Variable:** It is used to find the size of a variable. Parentheses are optional but recommended.
    *   `char ch = 'a';`
    *   `int size = sizeof(ch);` // size will be 1

---

**5. Explain how string variables are declared and initialised with an example.**

**Answer:**
In C, a string is not a built-in data type but is represented as a one-dimensional array of characters terminated by a null character `\0`.

**Declaration:** A string is declared as a character array.
`char string_name[size];`
Example: `char my_name[50];` This allocates space for a string of up to 49 characters plus the null terminator.

**Initialization:** Strings can be initialized in several ways at the time of declaration.
1.  **Using a String Literal:** This is the most common method. The null character `\0` is automatically appended.
    ```c
    char greeting[] = "Hello";
    ```
2.  **Using an Initializer List:** You can initialize the array with individual characters. You must explicitly add the null terminator.
    ```c
    char greeting[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    ```

**Example:**
```c
#include <stdio.h>
int main() {
    // Declaration and initialization using a string literal
    char str1[] = "C Programming";
    printf("String: %s\n", str1);
    return 0;
}
```

---

**6. Explain how the declaration of an integer array differs from that of an integer variable.**

**Answer:**
The primary difference lies in their purpose and syntax.

*   **Integer Variable:**
    *   **Purpose:** Stores a single integer value.
    *   **Syntax:** `int variable_name;`
    *   **Example:** `int score = 95;`
    *   **Memory:** Allocates memory for one integer.

*   **Integer Array:**
    *   **Purpose:** Stores a collection of multiple integer values of the same type in contiguous memory locations.
    *   **Syntax:** `int array_name[size];` The square brackets `[]` and the size are essential.
    *   **Example:** `int scores[10];`
    *   **Memory:** Allocates a contiguous block of memory to hold 10 integers.

In essence, a variable holds one value, while an array holds a list of values.

---

**7. Write the syntax for function prototype declaration and function definition.**

**Answer:**

*   **Function Prototype Declaration:**
    A function prototype is a declaration that tells the compiler about the function's name, return type, and the types of its parameters. It ends with a semicolon.
    **Syntax:**
    `return_type function_name(parameter_type1, parameter_type2, ...);`
    **Example:**
    `int add(int a, int b);`

*   **Function Definition:**
    A function definition contains the actual code (the function body) that executes when the function is called. It does not end with a semicolon.
    **Syntax:**
    ```c
    return_type function_name(parameter_type1 param_name1, ...) {
        // Function body with statements
        return value; // Optional, depends on return_type
    }
    ```
    **Example:**
    ```c
    int add(int a, int b) {
        return a + b;
    }
    ```

---

**8. Write the syntax for defining a structure in C.**

**Answer:**
A structure is a user-defined data type that groups together related data items of different types. The `struct` keyword is used to define it.

**General Syntax:**
```c
struct structure_name {
    data_type member1;
    data_type member2;
    ...
    data_type memberN;
};
```
*   `struct` is the keyword.
*   `structure_name` is the name you give to the new data type.
*   `member1`, `member2`, etc., are the elements within the structure, each with its own data type.

**Example:**
```c
struct student {
    int roll_no;
    char name[50];
    float marks;
};
```
To use it, you declare a variable of this type: `struct student s1;`

---

**9. Explain the use of reference and dereference operators.**

**Answer:**
In C, the reference and dereference operators are fundamental for working with pointers.

*   **Reference Operator (`&`):** Also known as the "address-of" operator.
    *   **Use:** It is a unary operator that returns the memory address of its operand (a variable). This address can then be stored in a pointer variable.
    *   **Example:**
        ```c
        int x = 10;
        int *ptr;
        ptr = &x; // 'ptr' now holds the memory address of 'x'
        ```

*   **Dereference Operator (`*`):** Also known as the "indirection" or "value-at-address" operator.
    *   **Use:** It is a unary operator that accesses the value stored at the memory address held by a pointer.
    *   **Example:**
        ```c
        int y = *ptr; // 'y' gets the value stored at the address in 'ptr', so y becomes 10.
        printf("%d", *ptr); // Prints 10
        ```

---

**10. Write a C programme to open a file in read mode and close the file.**

**Answer:**
```c
#include <stdio.h>

int main() {
    FILE *file_pointer;

    // Open a file named "my_data.txt" in read mode ("r")
    file_pointer = fopen("my_data.txt", "r");

    // Check if the file was opened successfully
    if (file_pointer == NULL) {
        printf("Error: Could not open the file.\n");
        // It might not exist or there's a permission issue.
        return 1; // Indicate an error
    } else {
        printf("File opened successfully in read mode.\n");

        // ... you would perform read operations here ...

        // Close the file to free up system resources
        fclose(file_pointer);
        printf("File closed successfully.\n");
    }

    return 0; // Indicate success
}
```

---

### **PART - B**
**(Answer one full question from each module. Each full question carries 14 marks)**

### **Module 1**

**11. a) Explain the basic computer architecture with a block diagram.**
**Answer:**
The basic computer architecture, often referred to as the **Von Neumann architecture**, describes the design of a digital computer. It consists of a few key components that work together to execute programs.

**Block Diagram:**
```
      +---------------------------------+
      |        Input Devices            |  (Keyboard, Mouse)
      +---------------------------------+
                  |
                  v
+--------------------------------------------------------+
|          Central Processing Unit (CPU)                 |
|                                                        |
|   +-------------------+      +----------------------+  |         <-- Control Bus -->
|   |  Control Unit (CU)  |<---->| Arithmetic Logic     |  |         <-- Address Bus -->
|   |                     |      |    Unit (ALU)        |  |         <-- Data Bus ---->
|   +-------------------+      +----------------------+  |
|           ^                            ^               |
|           |                            |               |
+-----------|----------------------------|---------------+
            |                            |
            v                            v
+--------------------------------------------------------+
|                      Memory Unit (RAM)                 |<-----> Storage (HDD/SSD)
| (Stores both Data and Instructions)                    |
+--------------------------------------------------------+
                  |
                  v
      +---------------------------------+
      |        Output Devices           |  (Monitor, Printer)
      +---------------------------------+
```
**Components and their Functions:**
1.  **Central Processing Unit (CPU):** The "brain" of the computer. It fetches instructions from memory, decodes them, and executes them. It consists of:
    *   **Arithmetic Logic Unit (ALU):** Performs all arithmetic operations (addition, subtraction, etc.) and logical operations (AND, OR, NOT).
    *   **Control Unit (CU):** Directs the flow of data between the CPU and other devices. It interprets instructions and generates control signals to execute them.
2.  **Memory Unit:** Stores both the program instructions and the data being processed. It is typically RAM (Random Access Memory), which allows for fast, direct access to any memory location.
3.  **Input Devices:** Allow the user to enter data and instructions into the computer (e.g., keyboard, mouse, scanner).
4.  **Output Devices:** Display the results of the processing to the user (e.g., monitor, printer, speakers).
5.  **Buses:** These are the communication pathways connecting the components.
    *   **Address Bus:** Carries the memory address from the CPU to the memory unit to specify the location to read from or write to.
    *   **Data Bus:** Carries the actual data between the CPU, memory, and I/O devices.
    *   **Control Bus:** Carries control signals from the CU to other components, coordinating their activities.

---
**11. b) List and explain different types of registers used in the CPU.**
**Answer:**
Registers are small, extremely fast storage locations within the CPU used to temporarily hold data and instructions during processing.

1.  **Program Counter (PC):** Holds the memory address of the *next* instruction to be fetched and executed. After an instruction is fetched, the PC is automatically incremented to point to the next one in sequence.
2.  **Instruction Register (IR):** Stores the instruction that is *currently* being decoded and executed. The Control Unit reads the instruction from the IR to determine what operation to perform.
3.  **Memory Address Register (MAR):** Holds the memory address of the data or instruction that the CPU needs to access (read from or write to). The address is sent from the MAR to the memory unit via the address bus.
4.  **Memory Data Register (MDR) / Memory Buffer Register (MBR):** Acts as a buffer and holds the data that is being transferred to or from memory. For a read operation, it holds the data fetched from memory; for a write operation, it holds the data to be stored in memory.
5.  **Accumulator (AC):** A general-purpose register used to store intermediate results of arithmetic and logic operations performed by the ALU.
6.  **General Purpose Registers (GPRs):** A set of registers (like R0, R1, etc., or AX, BX in x86) that can be used for a variety of purposes, such as holding operands for operations or storing temporary results, providing flexible and fast storage for the programmer or compiler.
7.  **Flag Register / Status Register:** Contains a set of status bits (flags) that indicate the result of an operation, such as whether a result was zero (Zero Flag), negative (Sign Flag), or if a carry occurred (Carry Flag).

---

**12. a) Draw a flowchart to find the average of N numbers.**
**Answer:**
This flowchart describes the process of taking N as input, then reading N numbers, summing them up, and finally calculating and displaying their average.

```
                  +--------------+
                  |     START    |
                  +--------------+
                         |
                         v
            +------------------------+
            |  Input the total       |
            |  count of numbers, N   |
            +------------------------+
                         |
                         v
            +------------------------+
            | Initialize sum = 0,    |
            |        count = 1       |
            +------------------------+
                         |
                         v
            <--------------------------+
            |                          |
            |     +----------------+   |
            +---->| Is count <= N? |---+-----> YES
                  +----------------+   |
                         | NO          |
                         v             v
            +------------------------+ +------------------------+
            | Calculate average =    | | Input a number, 'num'  |
            |       sum / N          | +------------------------+
            +------------------------+             |
                         |                         v
                         v             +------------------------+
            +------------------------+ | sum = sum + num        |
            |   Print 'average'      | +------------------------+
            +------------------------+             |
                         |                         v
                         v             +------------------------+
            +------------------------+ | count = count + 1      |
            |       STOP             | +------------------------+
            +------------------------+             |
                                                 |
                  <------------------------------+
```
---
**12. b) Write an algorithm to find the largest value of any three numbers.**
**Answer:**
This algorithm takes three numbers as input and determines which one is the largest.

**Algorithm: Find Largest of Three Numbers**

*   **Step 1:** START
*   **Step 2:** Declare three integer variables: `num1`, `num2`, `num3`.
*   **Step 3:** Declare a variable to hold the result: `largest`.
*   **Step 4:** Prompt the user and read the values for `num1`, `num2`, and `num3`.
*   **Step 5:** Assume `num1` is the largest initially.
    *   Set `largest = num1`.
*   **Step 6:** Compare `num2` with `largest`.
    *   IF `num2` > `largest` THEN
        *   Set `largest = num2`.
*   **Step 7:** Compare `num3` with `largest`.
    *   IF `num3` > `largest` THEN
        *   Set `largest = num3`.
*   **Step 8:** Print the value of the `largest` variable.
*   **Step 9:** STOP

---

### **Module 2**

**13. a) Explain different types of operators in C with suitable examples.**
**Answer:**
Operators are symbols that perform operations on variables and values.

1.  **Arithmetic Operators:** Used to perform mathematical calculations.
    *   `+` (Addition), `-` (Subtraction), `*` (Multiplication), `/` (Division), `%` (Modulus - remainder of division).
    *   Example: `int result = 10 + 5;` // result is 15
2.  **Relational Operators:** Used to compare two values. They return `1` (true) or `0` (false).
    *   `==` (Equal to), `!=` (Not equal to), `>` (Greater than), `<` (Less than), `>=` (Greater than or equal to), `<=` (Less than or equal to).
    *   Example: `if (a > b) { ... }`
3.  **Logical Operators:** Used to combine two or more conditions.
    *   `&&` (Logical AND), `||` (Logical OR), `!` (Logical NOT).
    *   Example: `if (age > 18 && has_license == 1) { ... }`
4.  **Assignment Operators:** Used to assign values to variables.
    *   `=` (Simple assignment), `+=`, `-=`, `*=`, `/=`, `%=` (Compound assignment).
    *   Example: `x = 5;` and `x += 3;` (which is equivalent to `x = x + 3;`)
5.  **Increment/Decrement Operators:** Used to increase or decrease a value by 1.
    *   `++` (Increment), `--` (Decrement). Can be pre-fix (`++x`) or post-fix (`x++`).
    *   Example: `count++;`
6.  **Bitwise Operators:** Used to perform operations on individual bits of data.
    *   `&` (Bitwise AND), `|` (Bitwise OR), `^` (Bitwise XOR), `~` (Bitwise NOT), `<<` (Left shift), `>>` (Right shift).
    *   Example: `int result = 5 & 3;` // 0101 & 0011 -> 0001 (result is 1)
7.  **Conditional (Ternary) Operator:** A shorthand for an `if-else` statement.
    *   `condition ? expression_if_true : expression_if_false;`
    *   Example: `int max = (a > b) ? a : b;`

---
**13. b) Write a C programme to find the roots of a quadratic equation.**
**Answer:**
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

**14. a) Explain switch case statement with an example.**
**Answer:**
The `switch` statement in C is a multi-way branching control structure. It provides an efficient way to transfer control to different parts of a code block based on the value of an expression. It's often a more readable alternative to a long series of `if-else if` statements.

**Syntax:**
```c
switch (expression) {
    case constant_value1:
        // code to be executed if expression equals constant_value1
        break; // optional
    case constant_value2:
        // code to be executed if expression equals constant_value2
        break; // optional
    ...
    default:
        // code to be executed if expression matches no case
}
```
**Working:**
1.  The `expression` (which must evaluate to an integer or character type) is evaluated once.
2.  The value of the expression is compared with the `constant_value` of each `case`.
3.  If a match is found, the block of code associated with that `case` is executed.
4.  The `break` statement is crucial. It terminates the `switch` block. If `break` is omitted, execution "falls through" to the next `case` block until a `break` or the end of the `switch` is reached.
5.  The `default` case is optional and is executed if none of the `case` values match the expression.

**Example:** A simple program to print the day of the week.
```c
#include <stdio.h>

int main() {
    int day_num;
    printf("Enter a day number (1-7): ");
    scanf("%d", &day_num);

    switch (day_num) {
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        case 7:
            printf("Saturday\n");
            break;
        default:
            printf("Invalid day number!\n");
    }
    return 0;
}
```

---
**14. b) Write a C programme to find the sum of the series 1² + 2² + 3² + ... + n², where n should be given as the input.**
**Answer:**
```c
#include <stdio.h>

int main() {
    int n, i;
    long long int sum = 0; // Use long long to avoid overflow for large n

    // Get the value of n from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Check for valid input
    if (n < 1) {
        printf("Please enter a positive integer for n.\n");
        return 1;
    }

    // Loop from 1 to n to calculate the sum of squares
    for (i = 1; i <= n; i++) {
        sum = sum + (long long)i * i;
    }

    // Print the final sum
    printf("The sum of the series 1^2 + 2^2 + ... + %d^2 is: %lld\n", n, sum);

    return 0;
}
```

---

### **Module 3**

**15. a) Write a C programme to reverse a string without using string handling functions.**
**Answer:**
This can be done by swapping characters from the beginning of the string with characters from the end, moving inwards until the middle is reached.

```c
#include <stdio.h>

int main() {
    char str[100], temp;
    int i, len = 0;

    printf("Enter a string to reverse: ");
    scanf("%s", str);

    // First, find the length of the string
    while (str[len] != '\0') {
        len++;
    }

    // Swap characters
    // Loop from the start to the middle of the string
    for (i = 0; i < len / 2; i++) {
        // Swap character at start (i) with character at end (len - 1 - i)
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }

    printf("The reversed string is: %s\n", str);

    return 0;
}
```
---
**15. b) Write a C programme to read ten numbers in an array and sort them in ascending order.**
**Answer:**
This program uses the Bubble Sort algorithm to sort the numbers in ascending order.

```c
#include <stdio.h>

int main() {
    int numbers[10];
    int i, j, temp;

    // Read ten numbers from the user
    printf("Enter 10 integer numbers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }

    // Sort the array using Bubble Sort
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            // If the current element is greater than the next one, swap them
            if (numbers[j] > numbers[j + 1]) {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    // Print the sorted array
    printf("\nThe numbers in ascending order are:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
```
---

**16. a) Write a C programme to find the sum of the diagonal elements of a matrix.**
**Answer:**
This program calculates the sum of the main diagonal elements of a square matrix. The main diagonal elements are those where the row index is equal to the column index (e.g., `mat[0][0]`, `mat[1][1]`).

```c
#include <stdio.h>
#define SIZE 3

int main() {
    int matrix[SIZE][SIZE];
    int i, j, sum = 0;

    // Read the matrix elements
    printf("Enter the elements of the %dx%d matrix:\n", SIZE, SIZE);
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of the main diagonal elements
    for (i = 0; i < SIZE; i++) {
        sum = sum + matrix[i][i];
    }

    // Print the matrix for verification
    printf("\nThe entered matrix is:\n");
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nThe sum of the main diagonal elements is: %d\n", sum);

    return 0;
}
```
---
**16. b) Explain various string handling functions with examples.**
**Answer:**
String handling functions are part of the `<string.h>` library in C. They are used to manipulate strings (character arrays).

1.  **`strlen()` - String Length:**
    *   **Use:** Calculates the length of a string, excluding the null terminator (`\0`).
    *   **Syntax:** `size_t strlen(const char *str);`
    *   **Example:** `int len = strlen("hello");` // `len` will be 5.
2.  **`strcpy()` - String Copy:**
    *   **Use:** Copies a source string (including `\0`) to a destination buffer. The destination must be large enough to hold the source string.
    *   **Syntax:** `char *strcpy(char *dest, const char *src);`
    *   **Example:** `char dest[10]; strcpy(dest, "world");` // `dest` now contains "world".
3.  **`strcat()` - String Concatenation:**
    *   **Use:** Appends a copy of the source string to the end of the destination string. The destination string must have enough space for the result.
    *   **Syntax:** `char *strcat(char *dest, const char *src);`
    *   **Example:** `char dest[20] = "Hello "; strcat(dest, "World!");` // `dest` now contains "Hello World!".
4.  **`strcmp()` - String Comparison:**
    *   **Use:** Compares two strings lexicographically.
    *   **Syntax:** `int strcmp(const char *str1, const char *str2);`
    *   **Return Value:**
        *   Returns `0` if strings are equal.
        *   Returns a negative value if `str1` < `str2`.
        *   Returns a positive value if `str1` > `str2`.
    *   **Example:** `int result = strcmp("apple", "apply");` // `result` will be negative.

---

### **Module 4**

**17. a) Write a C programme with a function to find the factorial of a number.**
**Answer:**
This program uses an iterative (non-recursive) function to calculate the factorial.

```c
#include <stdio.h>

// Function to calculate the factorial of a number
long long int findFactorial(int n) {
    long long int fact = 1;
    int i;

    // Factorial is not defined for negative numbers
    if (n < 0) {
        return -1; // Return an error code
    }

    // Loop from 1 to n to calculate factorial
    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int num;
    long long int result;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    result = findFactorial(num);

    if (result == -1) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        printf("Factorial of %d = %lld\n", num, result);
    }

    return 0;
}
```
---
**17. b) Differentiate structure and union in C.**
**Answer:**
*(This is a fundamental concept also asked in the previous paper. The answer remains consistent.)*

The main difference between a `structure` and a `union` in C lies in how they store their members in memory.

| Feature         | Structure (`struct`)                                                                      | Union (`union`)                                                                                                 |
| --------------- | ----------------------------------------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------- |
| **Memory**      | Each member is allocated its own unique memory space.                                     | All members share the same single memory location.                                                              |
| **Size**        | The total size is the sum of the sizes of all its members (plus any padding bytes).       | The size is equal to the size of its largest member.                                                            |
| **Value Storage**| Can store values for all of its members simultaneously.                                   | Can only store a value for **one** member at any given time. Writing to one member overwrites the others.      |
| **Purpose**     | To group different but related data items that are used together (e.g., an employee record).| To save memory when only one of many possible data types is needed at any single point in time.                |
---

**18. a) Explain any two storage classes in C with examples.**
**Answer:**
Storage classes in C determine the scope (visibility), lifetime (duration), and initial value of a variable.

1.  **`auto` (Automatic Storage Class):**
    *   **Scope:** Local to the block or function where it is defined.
    *   **Lifetime:** Exists only while the block in which it is declared is being executed. It is created when the block is entered and destroyed upon exit.
    *   **Default Value:** Garbage value.
    *   **Usage:** This is the default storage class for all local variables, so the `auto` keyword is rarely used explicitly.
    *   **Example:**
        ```c
        void myFunction() {
            auto int count = 10; // 'auto' is optional here
            printf("%d ", count); // Prints 10
        } // 'count' is destroyed here
        ```
2.  **`static` (Static Storage Class):**
    *   **Scope:** Like `auto`, it is local to the block where it is defined.
    *   **Lifetime:** Exists for the entire duration of the program's execution. It is initialized only once (to 0 if not explicitly initialized) and retains its value between function calls.
    *   **Default Value:** Zero.
    *   **Usage:** Used when a variable's value needs to be preserved across multiple calls to a function.
    *   **Example:**
        ```c
        #include <stdio.h>
        void counterFunc() {
            static int count = 0; // Initialized only once
            count++;
            printf("Count is: %d\n", count);
        }

        int main() {
            counterFunc(); // Prints: Count is: 1
            counterFunc(); // Prints: Count is: 2
            counterFunc(); // Prints: Count is: 3
            return 0;
        }
        ```
---
**18. b) Explain the classification of functions based on input parameters and return type.**
**Answer:**
Functions in C can be classified into four categories based on whether they accept arguments (input parameters) and whether they return a value.

1.  **Function with no arguments and no return value:**
    *   This type of function does not take any input from the calling function and does not return any value back. It is self-contained.
    *   **Example:**
        ```c
        void printHello() {
            printf("Hello, World!");
        }
        ```
2.  **Function with no arguments but returns a value:**
    *   This function takes no input but performs some calculation or operation and returns a value to the calling function.
    *   **Example:**
        ```c
        int getNumber() {
            int num = 100;
            return num;
        }
        ```
3.  **Function with arguments but no return value:**
    *   This function takes one or more arguments as input but does not return a value. It typically performs an action based on the input, like printing.
    *   **Example:**
        ```c
        void printSum(int a, int b) {
            printf("Sum is %d", a + b);
        }
        ```
4.  **Function with arguments and a return value:**
    *   This is the most common type. The function takes arguments, processes them, and returns a result to the calling function.
    *   **Example:**
        ```c
        int add(int a, int b) {
            return a + b;
        }
        ```
---

### **Module 5**

**19. a) Explain any four file handling functions in C.**
**Answer:**
File handling functions are part of the `<stdio.h>` library and allow programs to read from and write to files on the disk.

1.  **`fopen()`:**
    *   **Use:** To open a file. It takes the filename and a mode (like "r" for read, "w" for write, "a" for append) as arguments.
    *   **Return:** It returns a `FILE` pointer if the file is opened successfully, otherwise it returns `NULL`.
    *   **Syntax:** `FILE *fopen(const char *filename, const char *mode);`
2.  **`fclose()`:**
    *   **Use:** To close a file that was opened with `fopen()`. This is important to ensure all data is written to the disk and to free up system resources.
    *   **Return:** Returns `0` on success and `EOF` (End Of File) on failure.
    *   **Syntax:** `int fclose(FILE *stream);`
3.  **`fprintf()`:**
    *   **Use:** To write formatted output to a file, similar to how `printf()` writes to the console.
    *   **Syntax:** `int fprintf(FILE *stream, const char *format, ...);`
    *   **Example:** `fprintf(fptr, "Name: %s, Age: %d", name, age);`
4.  **`fscanf()`:**
    *   **Use:** To read formatted input from a file, similar to how `scanf()` reads from the console.
    *   **Syntax:** `int fscanf(FILE *stream, const char *format, ...);`
    *   **Example:** `fscanf(fptr, "%s %d", name, &age);`
---
**19. b) Write a C programme to add data to a file using `fwrite()` function.**
**Answer:**
The `fwrite()` function is used for binary file writing, which is ideal for writing structured data like `structs`. This program defines a `student` struct and appends a record to a binary file.

```c
#include <stdio.h>
#include <stdlib.h> // for exit()

// Define a structure to hold student data
struct student {
    int roll_no;
    char name[50];
};

int main() {
    FILE *file_ptr;
    struct student s1;

    // Open "students.dat" in append binary mode ("ab")
    // "ab" adds data to the end of the file without deleting existing content.
    file_ptr = fopen("students.dat", "ab");

    if (file_ptr == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    // Get data from the user
    printf("Enter student roll number: ");
    scanf("%d", &s1.roll_no);
    printf("Enter student name: ");
    scanf("%s", s1.name);

    // Write the student structure to the file
    // fwrite(&source, size_of_one_element, number_of_elements, file_pointer)
    fwrite(&s1, sizeof(struct student), 1, file_ptr);

    printf("Record added successfully to the file.\n");

    // Close the file
    fclose(file_ptr);

    return 0;
}
```
---

**20. a) Explain the use of pointers in C and explain pointer declaration with an example.**
**Answer:**
A **pointer** is a special variable that stores the memory address of another variable.

**Use of Pointers:**
1.  **Dynamic Memory Allocation:** Pointers are essential for allocating memory at runtime using functions like `malloc()` and `calloc()`.
2.  **Passing Arguments by Reference:** They allow a function to modify the value of a variable passed to it from another function.
3.  **Efficient Array Handling:** Pointers provide a fast and efficient way to access and manipulate array elements.
4.  **Creating Data Structures:** They are the foundation for creating complex data structures like linked lists, trees, and graphs.
5.  **Returning Multiple Values from a Function:** A function can return multiple values by modifying data at addresses passed via pointers.

**Pointer Declaration and Initialization:**
A pointer is declared by specifying the data type of the variable it will point to, followed by an asterisk (`*`).

**Syntax:** `data_type *pointer_name;`

**Example:**
This example shows how to declare a pointer, store the address of a variable in it, and use it to access the variable's value.
```c
#include <stdio.h>

int main() {
    int number = 50; // A normal integer variable

    // 1. Pointer Declaration
    int *p; // 'p' is a pointer that can store the address of an integer

    // 2. Pointer Initialization (storing the address)
    p = &number; // The '&' operator gets the address of 'number'

    printf("Address of 'number' variable is: %p\n", &number);
    printf("Address stored in 'p' pointer is: %p\n", p);
    
    // 3. Dereferencing (accessing the value at the address)
    // The '*' operator gets the value at the address stored in 'p'
    printf("Value of 'number' accessed via pointer 'p' is: %d\n", *p);

    return 0;
}
```
---
**20. b) Explain how arrays can be accessed using pointers with an example.**
**Answer:**
In C, there is a very close relationship between arrays and pointers. The name of an array, by itself, acts as a constant pointer to the memory address of its first element.

This means:
*   `arr` is equivalent to `&arr[0]`
*   `arr + i` is the address of the `i`-th element (`&arr[i]`)
*   `*(arr + i)` is the value of the `i`-th element (`arr[i]`)

**Example:**
This program demonstrates accessing and printing array elements using both standard array indexing and pointer arithmetic.

```c
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int i;
    
    // We can also create a separate pointer to the array
    int *ptr = arr; // ptr now points to arr[0]

    printf("Accessing array elements using standard indexing:\n");
    for (i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    printf("\nAccessing array elements using pointer arithmetic:\n");
    for (i = 0; i < 5; i++) {
        // *(arr + i) is the value at the address (arr + i)
        // *(ptr + i) also works because ptr points to the start of arr
        printf("*(arr + %d) = %d\n", i, *(arr + i));
    }

    return 0;
}
```
As shown in the example, `arr[i]` and `*(arr + i)` are two different syntaxes for referring to the exact same element in memory.
