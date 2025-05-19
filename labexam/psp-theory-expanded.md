Okay, I understand! You want the **full, expanded depth** for **all modules** in a single, comprehensive Markdown block, ready to be copied and pasted.

Here is the complete, in-depth content for all five modules, formatted in Markdown with code blocks where appropriate.

```markdown
## 📘 Your C Programming Lab Exam Notes (Full Expanded Depth)

These notes cover all five modules of your course structure, providing deeper theory, practical implications, key points, and code snippets relevant to your lab exam and viva.

---

## ✅ MODULE I: Basics of Computer Architecture & Software (Expanded Depth)

### 🔹 1. **Basics of Computer Architecture: Processor**

#### 🧠 Central Processing Unit (CPU): The Brain
- **ALU (Arithmetic Logic Unit):** This is where the actual computation happens. It performs basic arithmetic operations (addition, subtraction, multiplication, division) and logical operations (AND, OR, NOT, comparisons like equal to, greater than). Think of it as the calculator and decision-maker within the CPU.
- **CU (Control Unit):** This is the conductor of the orchestra. It fetches instructions from memory, decodes them, and directs the other components (ALU, memory, I/O) on what to do and when. It manages the flow of data and instructions throughout the system.
- **Registers:** These are tiny, high-speed storage locations *inside* the CPU itself. They hold data and instructions that the CPU is currently working on. Accessing data in registers is much faster than accessing data in main memory (RAM). Examples include the Program Counter (PC), which holds the address of the next instruction, and the Instruction Register (IR), which holds the current instruction being executed.

#### 🔄 The Fetch-Decode-Execute Cycle:
- This is the fundamental process the CPU follows:
    1. **Fetch:** The CU retrieves the next instruction from memory (address specified by the PC).
    2. **Decode:** The CU interprets the instruction to figure out what operation needs to be performed.
    3. **Execute:** The CU directs the ALU and other components to perform the operation specified by the instruction.
- This cycle repeats continuously, driving the program execution.

#### 💡 Practical Implication:
- Understanding the CPU helps you appreciate why some operations are faster than others (e.g., register access vs. memory access).
- It provides context for how your C code instructions are ultimately processed by the hardware.

#### ⚠️ Common Pitfall:
- Confusing the roles of the ALU and CU. The ALU *does* the math/logic, the CU *tells* it what to do and when.

---

### 🔹 2. **Basics of Computer Architecture: Memory**

#### 💾 Memory Hierarchy: Speed vs. Capacity vs. Cost
- **Cache (L1, L2, L3):** The fastest and smallest memory, located closest to the CPU. It stores frequently accessed data and instructions to reduce the time the CPU spends waiting for data from main memory. L1 is the fastest and smallest, L3 is the slowest and largest among caches. **Volatile:** Data is lost when power is off.
- **Primary Memory (RAM - Random Access Memory, ROM - Read-Only Memory):**
    - **RAM:** The main working memory of the computer. Programs and data currently in use are loaded here. It's much larger than cache but slower. **Volatile:** Data is lost when power is off.
    - **ROM:** Stores essential boot-up instructions (BIOS/UEFI). It's non-volatile, meaning data persists even when power is off.
- **Secondary Memory (HDD - Hard Disk Drive, SSD - Solid State Drive):** Large capacity, slower, and non-volatile storage. Used for long-term storage of programs and data. Data is transferred to RAM when needed.

#### 🧠 How Memory Works with the CPU:
- The CPU interacts directly with cache and RAM.
- When the CPU needs data, it first checks the cache. If not found (a "cache miss"), it goes to RAM. If not in RAM, it's loaded from secondary storage.
- This hierarchy is designed to balance speed and cost.

#### 💡 Practical Implication:
- Understanding memory helps explain why accessing elements in an array sequentially is often faster than accessing them randomly (due to cache locality).
- It's crucial for understanding concepts like pointers and dynamic memory allocation in C.

#### ⚠️ Common Pitfall:
- Thinking of RAM as permanent storage. It's temporary workspace for the CPU.

---

### 🔹 3. **Basics of Computer Architecture: Input & Output Devices**

#### 🖱️ Input Devices: Getting Data In
- Devices that allow users or other systems to send data *into* the computer.
- **Keyboard:** Sends character input.
- **Mouse:** Sends positional and click input.
- **Scanner:** Converts physical documents/images into digital data.
- **Microphone:** Converts sound waves into digital audio data.

#### 🖥️ Output Devices: Getting Data Out
- Devices that allow the computer to send data *out* to the user or other systems.
- **Monitor:** Displays visual output.
- **Printer:** Produces hard copies of digital documents.
- **Speaker:** Produces audio output.

#### 💽 Storage Devices: Both Input and Output
- Devices that store data for later retrieval. They act as both input (reading data) and output (writing data).
- **Hard Disk Drive (HDD):** Magnetic storage.
- **Solid State Drive (SSD):** Flash memory storage (faster than HDD).
- **USB Drive, CD/DVD:** Removable storage.

#### 🔄 How I/O Works:
- I/O devices communicate with the CPU and memory via the system bus and I/O controllers.
- Data is transferred between I/O devices and memory, often using techniques like DMA (Direct Memory Access) to reduce CPU overhead.

#### 💡 Practical Implication:
- In C, functions like `scanf()` and `printf()` interact with standard input (keyboard) and standard output (monitor) devices.
- File I/O operations involve reading from and writing to storage devices.

#### ⚠️ Common Pitfall:
- Forgetting that storage devices are both input *and* output devices.

---

### 🔹 4. **Application Software & System Software: Compilers, Interpreters, High level and low level languages**

#### 🛠️ System Software: Managing the Hardware
- Software that manages and controls the computer hardware and provides a platform for application software to run.
- **Operating Systems (OS):** The core system software (Windows, macOS, Linux, Android). Manages resources (CPU, memory, I/O), provides a user interface, and runs applications.
- **Device Drivers:** Software that allows the OS to communicate with specific hardware devices.
- **Utility Programs:** Tools for system maintenance (disk cleanup, antivirus, file managers).

#### 📄 Application Software: For User Tasks
- Software designed to perform specific tasks for the end-user.
- Examples: Word processors (Microsoft Word), web browsers (Chrome, Firefox), games, media players, accounting software.

#### 🧑‍💻 Programming Tools: Bridging the Gap
- Software used to write, translate, and execute computer programs.
- **Compiler:** Translates the *entire* source code of a high-level language program into machine code *before* execution. If there are errors, compilation fails. **Output:** Executable file. (e.g., GCC for C)
- **Interpreter:** Translates and executes the source code *line by line*. If an error is found, execution stops at that line. **Output:** Executes directly. (e.g., Python interpreter)
- **Assembler:** Translates assembly language (a low-level language) into machine code.

#### 💡 Practical Implication:
- You use a C compiler (like GCC) to turn your `.c` source code into an executable program.
- Understanding the difference between compilers and interpreters helps explain why compiled languages (like C) are generally faster than interpreted languages (like Python) for execution.

#### ⚠️ Common Pitfall:
- Confusing the role of the OS with application software. The OS is the foundation, applications run *on* the OS.

---

### 🔹 5. **Introduction to structured approach to programming, Flow chart**

#### 🏗️ Structured Programming Approach: Order and Clarity
- A programming paradigm that emphasizes breaking down a program into smaller, manageable, and logical units (modules or functions).
- Relies on three basic control structures:
    1. **Sequence:** Instructions are executed in order.
    2. **Selection:** `if`, `if-else`, `switch` statements for decision making.
    3. **Iteration:** `for`, `while`, `do-while` loops for repetition.
- **Benefits:** Improves code readability, maintainability, and reduces complexity. Makes debugging easier.

#### 📊 Flowchart: Visualizing the Logic
- A graphical representation of an algorithm or process.
- Uses standard symbols to depict different types of actions and the flow of control.

#### 🔁 Flowchart Symbols (Expanded):

| Symbol      | Shape         | Meaning                  | Description                                     |
|-------------|---------------|--------------------------|-------------------------------------------------|
| Oval        | ![Oval Symbol](https://upload.wikimedia.org/wikipedia/commons/thumb/d/d1/Flowchart_Terminator.svg/50px-Flowchart_Terminator.svg.png) | Start / End              | Represents the beginning or end of a process.   |
| Rectangle   | ![Rectangle Symbol](https://upload.wikimedia.org/wikipedia/commons/thumb/d/d1/Flowchart_Process.svg/50px-Flowchart_Process.svg.png) | Process / Action         | Represents an operation or action (e.g., calculation, assignment). |
| Diamond     | ![Diamond Symbol](https://upload.wikimedia.org/wikipedia/commons/thumb/d/d1/Flowchart_Decision.svg/50px-Flowchart_Decision.svg.png) | Decision                 | Represents a point where a decision is made (usually a yes/no or true/false question). Flow lines branch out from here. |
| Parallelogram | ![Parallelogram Symbol](https://upload.wikimedia.org/wikipedia/commons/thumb/d/d1/Flowchart_Input_Output.svg/50px-Flowchart_Input_Output.svg.png) | Input / Output         | Represents data entering or leaving the system (e.g., reading from keyboard, printing to screen). |
| Arrow       | ![Arrow Symbol](https://upload.wikimedia.org/wikipedia/commons/thumb/d/d1/Flowchart_Arrow.svg/50px-Flowchart_Arrow.svg.png) | Flow direction           | Indicates the direction of the process flow.    |
| Cylinder    | ![Cylinder Symbol](https://upload.wikimedia.org/wikipedia/commons/thumb/d/d1/Flowchart_Data.svg/50px-Flowchart_Data.svg.png) | Data / Database          | Represents stored data.                         |
| Circle      | ![Circle Symbol](https://upload.wikimedia.org/wikipedia/commons/thumb/d/d1/Flowchart_Connector.svg/50px-Flowchart_Connector.svg.png) | Connector                | Used to connect different parts of a flowchart, especially when it spans multiple pages. |

#### 💡 Practical Implication:
- Drawing a flowchart or writing pseudocode *before* coding helps you plan the logic and avoid errors.
- Structured programming principles are fundamental to writing good C code.

#### ⚠️ Common Pitfall:
- Trying to write code without first planning the algorithm or logic.

---

### 🔹 6. **Algorithms, Pseudo code**

#### 🧮 Algorithm: The Recipe
- A finite set of well-defined instructions for accomplishing a task or solving a problem.
- Characteristics of a good algorithm:
    - **Finite:** Must terminate after a finite number of steps.
    - **Well-defined:** Each step must be clear and unambiguous.
    - **Effective:** Each step must be executable.
    - **Input:** Zero or more inputs.
    - **Output:** One or more outputs.

#### 📝 Pseudocode: Algorithm in Plain English
- An informal high-level description of an algorithm.
- It's not actual code but uses a mix of natural language and programming-like constructs.
- Helps in designing and communicating algorithms before writing code.

#### ✏️ Example: Linear Search (Expanded Pseudocode)
```plaintext
procedure linearSearch(array, size, key)
    // Input: array (list of items), size (number of items), key (item to find)
    // Output: index of key if found, -1 otherwise

    for each element at index i from 0 to size - 1 do
        if array[i] is equal to key then
            return i  // Key found at index i
        end if
    end for

    return -1 // Key not found in the array

end procedure
```

#### ✏️ Example: Bubble Sort (Expanded Pseudocode)
```plaintext
procedure bubbleSort(array)
    // Input: array (list of sortable items)
    // Output: array sorted in ascending order

    n := length(array)
    swapped := true // Flag to check if any swaps occurred in a pass

    while swapped is true do
        swapped := false // Assume no swaps in this pass
        for i from 0 to n - 2 do // Iterate through the array
            // Compare adjacent elements
            if array[i] > array[i+1] then
                // Swap elements if they are in the wrong order
                swap(array[i], array[i+1])
                swapped := true // Indicate that a swap occurred
            end if
        end for
        // After each pass, the largest unsorted element is at the end
        // We could optimize by reducing the upper bound of the inner loop (n-1-pass_number)
    end while

end procedure
```

#### 💡 Practical Implication:
- Writing pseudocode helps you think through the logic of your program without getting bogged down in C syntax.
- It's a good way to explain your algorithm to others.

#### ⚠️ Common Pitfall:
- Writing pseudocode that is too vague or too close to actual code. It should be a balance.

---

### 🔹 7. **Bubble sort, linear search - algorithms and pseudocode**

#### 🔍 Linear Search: Simple but Inefficient for Large Data
- **Algorithm:** Iterate through the array from the beginning, comparing each element with the target value (key). If a match is found, return the index. If the end of the array is reached without a match, the key is not present.
- **Time Complexity:** O(n) in the worst case (key is at the end or not present).
- **Space Complexity:** O(1) (constant extra space).
- **Best Use Case:** Small arrays or unsorted arrays.

#### 🧮 Bubble Sort: Simple but Inefficient for Large Data
- **Algorithm:** Repeatedly step through the list, compare adjacent elements and swap them if they are in the wrong order. The pass through the list is repeated until no swaps are needed, which indicates that the list is sorted.
- **Time Complexity:** O(n^2) in the worst and average cases. O(n) in the best case (already sorted).
- **Space Complexity:** O(1) (constant extra space for swapping).
- **Best Use Case:** Small arrays or for educational purposes to understand sorting concepts. Not practical for large datasets.

#### 💡 Practical Implication:
- You will likely be asked to implement these algorithms in your lab exam.
- Understanding their time complexity helps you appreciate why more advanced algorithms (like binary search or quicksort) are needed for larger datasets.

#### ⚠️ Common Pitfall:
- Off-by-one errors in loop conditions or array indexing when implementing these algorithms.

---

## ✅ MODULE II: Program Basics (Expanded Depth)

---

### 🔹 1. **Basic structure of C program: Character set, Tokens, Identifiers in C**

#### 🧱 Structure of a C Program: The Blueprint
- A C program is organized into several sections, though not all are mandatory in every program.
```c
#include <stdio.h>    // Preprocessor directive: Includes standard input/output library

// Global Declarations (Optional): Variables or functions declared here are accessible throughout the program

int main() {          // Main function: The entry point of execution
    // Local Declarations (Optional): Variables declared here are local to main()

    // Statements: Instructions to be executed
    printf("Hello, World!\n");  // Example statement

    return 0;         // Return status to the operating system (0 typically means success)
}

// User-defined Functions (Optional): Other functions called from main() or other functions
/*
int add(int a, int b) {
    return a + b;
}
*/
```
- **Preprocessor Directives:** Lines starting with `#`. Processed *before* compilation. `#include` brings in code from header files.
- **Global Declarations:** Variables or function prototypes declared outside any function.
- **`main()` Function:** Every executable C program must have a `main()` function. Execution begins here.
- **Local Declarations:** Variables declared inside a function or block.
- **Statements:** Instructions that perform actions, ending with a semicolon `;`.
- **Comments:** Used to explain code (`//` for single-line, `/* ... */` for multi-line). Ignored by the compiler.

#### 🅰️ Character Set: The Building Blocks
- The set of valid characters that can be used in a C program.
- Includes:
    - Uppercase letters (A-Z)
    - Lowercase letters (a-z)
    - Digits (0-9)
    - Special characters (`+`, `-`, `*`, `/`, `=`, `<`, `>`, `(`, `)`, `{`, `}`, `[`, `]`, `;`, `,`, `.`, `:`, `'`, `"`, `\`, `_`, `#`, `&`, `|`, `~`, `!`, `%`, `^`, `@`, `$`, `?`, space, tab, newline).

#### 📦 Tokens: The Smallest Units
- The smallest individual units in a C program that are meaningful to the compiler.
- The compiler breaks down the source code into tokens.
- **Types of Tokens:**
    - **Keywords:** Reserved words with predefined meanings (e.g., `int`, `if`, `for`, `while`, `return`, `void`, `const`). Cannot be used as identifiers.
    - **Identifiers:** Names given to variables, functions, arrays, structures, etc. Created by the programmer.
    - **Constants:** Fixed values that do not change during program execution (e.g., `10`, `3.14`, `'A'`, `"Hello"`).
    - **Strings:** Sequence of characters enclosed in double quotes (`"..."`). Treated as an array of characters ending with a null terminator (`\0`).
    - **Operators:** Symbols that perform operations on operands (e.g., `+`, `-`, `*`, `/`, `==`, `&&`, `!`).
    - **Punctuators (Separators):** Symbols used to separate or group code elements (e.g., `{ }`, `[ ]`, `( )`, `;`, `,`).

#### 🆔 Identifiers: Naming Conventions
- Names given to programming elements like variables, functions, etc.
- **Rules for creating Identifiers:**
    - Can contain letters (A-Z, a-z), digits (0-9), and the underscore (`_`).
    - Must start with a letter or an underscore.
    - Cannot start with a digit.
    - Cannot be a keyword.
    - Case-sensitive (`myVar` is different from `myvar`).
    - No spaces allowed.

#### 💡 Practical Implication:
- Understanding tokens is fundamental to how the compiler parses your code.
- Following identifier rules is essential for writing valid C code.

#### ⚠️ Common Pitfall:
- Using keywords as identifiers.
- Starting an identifier with a digit.
- Forgetting that C is case-sensitive.

---

### 🔹 2. **Basic structure of C program: Variables and Data Types , Constants, Console IO Operations, printf and scanf**

#### 📊 Data Types: Defining the Kind of Data
- Specify the type of data a variable can hold and the amount of memory it occupies.
- **Basic Data Types:**
    | Type             | Description                                  | Size (bytes) | Range / Notes                                   |
    |------------------|----------------------------------------------|--------------|-------------------------------------------------|
    | `char`           | Single character                             | 1            | -128 to 127 or 0 to 255 (unsigned). Used for ASCII characters. |
    | `int`            | Integer (whole number)                       | 2 or 4       | Depends on system/compiler architecture. Typically 4 bytes on modern systems. |
    | `float`          | Single-precision floating-point number       | 4            | Approx. 6 decimal digits precision.             |
    | `double`         | Double-precision floating-point number       | 8            | Approx. 15 decimal digits precision. More accurate than `float`. |
    | `void`           | Represents the absence of type. Used for functions that don't return a value or generic pointers. | 0            | No value.                                       |
- **Derived Data Types:** Arrays, Pointers, Structures, Unions.
- **User-Defined Data Types:** `enum`, `typedef`.

#### 📌 Variables: Named Memory Locations
- A variable is a name given to a memory location where data can be stored and retrieved.
- The value of a variable can change during program execution.
- **Declaration:** Reserves memory for the variable.
```c
int age;         // Declares an integer variable named age
float salary;    // Declares a float variable named salary
char grade;      // Declares a char variable named grade
```
- **Initialization:** Assigning an initial value to a variable during declaration.
```c
int count = 0;
float pi = 3.14159;
char initial = 'J';
```

#### 🧮 Constants: Fixed Values
- Values that cannot be changed during program execution.
- **Types of Constants:**
    - **Literal Constants:** Values written directly in the code (e.g., `10`, `3.14`, `'A'`, `"Hello"`).
    - **Defined Constants (`#define`):** Created using the preprocessor directive `#define`. No memory is allocated for `#define` constants; the preprocessor replaces the name with the value before compilation.
    ```c
    #define PI 3.14159
    #define MAX_SIZE 100
    ```
    - **`const` Keyword:** Declares a variable whose value cannot be changed after initialization. Memory is allocated.
    ```c
    const int MAX = 100;
    const float GRAVITY = 9.8;
    ```

#### ⌨️ Console I/O Operations: Interacting with the User
- Functions used to get input from the user (keyboard) and display output to the user (screen).
- Standard library for console I/O is `<stdio.h>`.

#### 🔤 Output with `printf()`: Formatted Output
- Used to display output on the console.
- Syntax: `printf("format string", arg1, arg2, ...);`
- **Format Specifiers:** Used within the format string to indicate the type of data being printed.
    | Format Specifier | Type                | Notes                                       |
    |------------------|---------------------|---------------------------------------------|
    | `%d` or `%i`     | Signed Integer      |                                             |
    | `%u`             | Unsigned Integer    |                                             |
    | `%f`             | Float               | Default precision is 6 decimal places.      |
    | `%lf`            | Double              | Use with `scanf` for double. `printf` often uses `%f` for double due to default argument promotion. |
    | `%c`             | Character           |                                             |
    | `%s`             | String              | Prints characters until `\0` is encountered. |
    | `%p`             | Pointer Address     |                                             |
    | `%%`             | Prints a literal `%` |                                             |
- **Escape Sequences:** Special characters used in format strings (e.g., `\n` for newline, `\t` for tab, `\"` for double quote).

```c
int num = 123;
float pi_val = 3.14;
char initial = 'K';
char name[] = "Alice";

printf("Integer: %d\n", num);
printf("Float: %.2f\n", pi_val); // Print with 2 decimal places
printf("Character: %c\n", initial);
printf("String: %s\n", name);
```

#### 📥 Input with `scanf()`: Formatted Input
- Used to read input from the console and store it in variables.
- Syntax: `scanf("format string", &var1, &var2, ...);`
- **Important:** Use the **address-of operator (`&`)** before the variable name (except for arrays and strings, which are already addresses).
- Returns the number of items successfully read.

```c
int age;
float height;
char initial;

printf("Enter your age: ");
scanf("%d", &age);

printf("Enter your height: ");
scanf("%f", &height); // Use %f for float

printf("Enter your initial: ");
scanf(" %c", &initial); // Note the space before %c to consume any leftover newline character

printf("You entered: Age = %d, Height = %.2f, Initial = %c\n", age, height, initial);
```
- **Reading Strings with Spaces:** `scanf("%s", str)` stops reading at the first whitespace. Use `fgets()` for reading lines with spaces.

#### 💡 Practical Implication:
- Data types are fundamental to allocating memory correctly and performing operations.
- `printf` and `scanf` are your primary tools for interacting with the user in simple C programs.

#### ⚠️ Common Pitfall:
- Forgetting the `&` in `scanf` (except for strings/arrays).
- Using the wrong format specifier in `printf` or `scanf`.
- Not handling leftover newline characters when reading characters after numbers.

---

### 🔹 3. **Operators and Expressions: Expressions and Arithmetic Operators, Relational and Logical Operators.**

#### 🧮 Operators: Performing Actions
- Symbols that tell the compiler to perform specific mathematical, relational, logical, or bitwise operations on operands.
- **Operands:** The values or variables on which operators act.

#### 📐 Expressions: Combinations of Operators and Operands
- A combination of operators, operands, and function calls that evaluates to a single value.
- Examples: `a + b`, `x > 5`, `(a + b) * c`.

#### 🧮 Arithmetic Operators: Mathematical Calculations
- Used to perform arithmetic operations.
| Operator | Meaning         | Example | Result (if a=10, b=5) |
|----------|------------------|---------|-----------------------|
| `+`      | Addition         | `a + b` | 15                    |
| `-`      | Subtraction      | `a - b` | 5                     |
| `*`      | Multiplication   | `a * b` | 50                    |
| `/`      | Division         | `a / b` | 2 (Integer division if both operands are int) |
| `%`      | Modulus (Remainder) | `a % b` | 0                     |

- **Integer Division:** When both operands of `/` are integers, the result is an integer (the fractional part is truncated).
- **Type Casting:** Use type casting to get floating-point division: `(float)a / b`.

#### 🚦 Relational Operators: Comparisons
- Used to compare two operands. The result is either `true` (non-zero, typically 1) or `false` (0).
| Operator | Meaning         | Example | Result (if a=10, b=5) |
|----------|------------------|---------|-----------------------|
| `==`     | Equal to        | `a == b` | 0 (false)             |
| `!=`     | Not equal to    | `a != b` | 1 (true)              |
| `>`      | Greater than    | `a > b`  | 1 (true)              |
| `<`      | Less than       | `a < b`  | 0 (false)             |
| `>=`     | Greater than or equal to | `a >= b` | 1 (true)              |
| `<=`     | Less than or equal to | `a <= b` | 0 (false)             |

#### 🔀 Logical Operators: Combining Conditions
- Used to combine or negate relational expressions. The result is `true` (non-zero) or `false` (0).
| Operator | Meaning              | Example (if x=5, y=10) | Result |
|----------|-----------------------|------------------------|--------|
| `&&`     | Logical AND          | `(x > 0) && (y < 20)`  | 1 (true) |
| `||`     | Logical OR           | `(x == 0) || (y > 5)`  | 1 (true) |
| `!`      | Logical NOT          | `!(x == 5)`            | 0 (false)|

- **Short-Circuit Evaluation:**
    - `&&`: If the first operand is false, the second operand is not evaluated.
    - `||`: If the first operand is true, the second operand is not evaluated.

#### 💡 Practical Implication:
- Operators are the core of performing calculations and making decisions in your code.
- Relational and logical operators are essential for control flow statements (`if`, `while`, etc.).

#### ⚠️ Common Pitfall:
- Using `=` (assignment) instead of `==` (equality comparison) in conditional statements.
- Misunderstanding integer division.

---

### 🔹 4. **Operators and Expressions: Conditional operator, size of operator, Assignment operators and Bitwise Operators. Operators Precedence**

#### ❓ Conditional Operator (`?:`): Ternary Operator
- A shorthand for a simple `if-else` statement.
- Syntax: `condition ? expression_if_true : expression_if_false;`
- Evaluates `condition`. If true, the result is `expression_if_true`. If false, the result is `expression_if_false`.

```c
int age = 20;
char* status = (age >= 18) ? "Adult" : "Minor";
printf("Status: %s\n", status); // Output: Status: Adult
```

#### 📏 `sizeof` Operator: Determining Size
- A unary operator that returns the size (in bytes) of a variable, data type, or expression.
- Useful for dynamic memory allocation and understanding memory usage.

```c
int num;
printf("Size of int: %zu bytes\n", sizeof(int)); // Use %zu for size_t
printf("Size of num: %zu bytes\n", sizeof(num));
printf("Size of float: %zu bytes\n", sizeof(float));
```

#### 🔁 Assignment Operators: Shorthand for Assignments
- Combine an arithmetic or bitwise operation with assignment.
| Op        | Usage        | Equivalent To       | Example (if a=10, b=5) | Result (a becomes) |
|-----------|--------------|----------------------|------------------------|--------------------|
| `=`       | `a = 5`      | Assigns value        | `a = 5`                | 5                  |
| `+=`      | `a += 5`     | `a = a + 5`          | `a += 5`               | 15                 |
| `-=`      | `a -= 5`     | `a = a - 5`          | `a -= 5`               | 5                  |
| `*=`      | `a *= 5`     | `a = a * 5`          | `a *= 5`               | 50                 |
| `/=`      | `a /= 5`     | `a = a / 5`          | `a /= 5`               | 2                  |
| `%=`      | `a %= 5`     | `a = a % 5`          | `a %= 5`               | 0                  |
| `&=`      | `a &= 5`     | `a = a & 5`          | `a &= 5`               | 0 (1010 & 0101 = 0000) |
| `|=`      | `a |= 5`     | `a = a | 5`          | `a |= 5`               | 15 (1010 | 0101 = 1111) |
| `^=`      | `a ^= 5`     | `a = a ^ 5`          | `a ^= 5`               | 15 (1010 ^ 0101 = 1111) |
| `<<=`     | `a <<= 2`    | `a = a << 2`         | `a <<= 2`              | 40 (1010 << 2 = 101000) |
| `>>=`     | `a >>= 2`    | `a = a >> 2`         | `a >>= 2`              | 2 (1010 >> 2 = 0010) |

#### ⚙️ Bitwise Operators: Operating on Bits
- Perform operations on individual bits of integer operands.
| Op | Name              | Description                                  | Example (if a=10 (1010), b=5 (0101)) | Result (Decimal) |
|----|--------------------|----------------------------------------------|--------------------------------------|------------------|
| `&` | Bitwise AND        | Sets bit to 1 if both bits are 1.            | `a & b` (1010 & 0101)                | 0 (0000)         |
| `|` | Bitwise OR         | Sets bit to 1 if at least one bit is 1.      | `a | b` (1010 | 0101)                | 15 (1111)        |
| `^` | Bitwise XOR        | Sets bit to 1 if bits are different.         | `a ^ b` (1010 ^ 0101)                | 15 (1111)        |
| `~` | One’s complement   | Inverts all bits (0 becomes 1, 1 becomes 0). | `~a` (~1010)                         | -11 (depends on representation) |
| `<<`| Left shift         | Shifts bits left, fills with 0s on right.    | `a << 2` (1010 << 2)                 | 40 (101000)      |
| `>>`| Right shift        | Shifts bits right. Fills with sign bit (signed) or 0 (unsigned) on left. | `a >> 2` (1010 >> 2)                 | 2 (0010)         |

#### 🏆 Operators Precedence and Associativity: Order of Operations
- **Precedence:** Determines the order in which operators are evaluated in an expression (like BODMAS/PEMDAS in math). Higher precedence operators are evaluated first.
- **Associativity:** Determines the order of evaluation when operators have the same precedence (left-to-right or right-to-left).

| Category          | Operators                                                                 | Associativity |
|-------------------|---------------------------------------------------------------------------|---------------|
| Postfix           | `() [] -> . ++ --`                                                        | Left-to-Right |
| Unary             | `+ - ! ~ ++ -- (type)* & sizeof`                                          | Right-to-Left |
| Multiplicative    | `* / %`                                                                   | Left-to-Right |
| Additive          | `+ -`                                                                     | Left-to-Right |
| Shift             | `<< >>`                                                                   | Left-to-Right |
| Relational        | `< <= > >=`                                                               | Left-to-Right |
| Equality          | `== !=`                                                                   | Left-to-Right |
| Bitwise AND       | `&`                                                                       | Left-to-Right |
| Bitwise XOR       | `^`                                                                       | Left-to-Right |
| Bitwise OR        | `|`                                                                       | Left-to-Right |
| Logical AND       | `&&`                                                                      | Left-to-Right |
| Logical OR        | `||`                                                                      | Left-to-Right |
| Conditional       | `?:`                                                                      | Right-to-Left |
| Assignment        | `= += -= *= /= %= &= \|= ^= <<= >>=`                                      | Right-to-Left |
| Comma             | `,`                                                                       | Left-to-Right |

#### 💡 Practical Implication:
- Understanding precedence and associativity is crucial for writing expressions that evaluate correctly. Use parentheses `()` to force a specific order of evaluation if unsure.
- Bitwise operators are used in low-level programming, embedded systems, and for efficient manipulation of flags or settings.

#### ⚠️ Common Pitfall:
- Relying too heavily on operator precedence rules; use parentheses for clarity.
- Misunderstanding the behavior of bitwise operators.

---

### 🔹 5. **Control Flow Statements: If Statement, Unconditional Branching using goto statement.(Simple programs covering control flow)**

#### 🧭 Control Flow: Directing Execution
- Determines the order in which statements are executed.
- C provides control flow statements for decision making (selection) and repetition (iteration).

#### ✅ `if` Statement: Simple Decision
- Executes a block of code only if a specified condition is true.
- Syntax:
```c
if (condition) {
    // Code to execute if condition is true
}
```
- The `condition` is an expression that evaluates to non-zero (true) or zero (false).

```c
int score = 75;
if (score >= 60) {
    printf("Passed!\n");
}
```

#### 🔄 `if-else` Statement: Two-Way Decision
- Executes one block of code if the condition is true, and another block if the condition is false.
- Syntax:
```c
if (condition) {
    // Code to execute if condition is true
} else {
    // Code to execute if condition is false
}
```

```c
int age = 16;
if (age >= 18) {
    printf("Eligible to vote.\n");
} else {
    printf("Not eligible to vote yet.\n");
}
```

#### 🧩 Nested `if-else` (if-else if-else): Multi-Way Decision
- Used to handle multiple conditions sequentially.
- Syntax:
```c
if (condition1) {
    // Code if condition1 is true
} else if (condition2) {
    // Code if condition1 is false AND condition2 is true
} else if (condition3) {
    // Code if condition1 and condition2 are false AND condition3 is true
} else {
    // Code if all conditions are false
}
```

```c
int marks = 85;
if (marks >= 90) {
    printf("Grade A\n");
} else if (marks >= 80) {
    printf("Grade B\n");
} else if (marks >= 70) {
    printf("Grade C\n");
} else {
    printf("Grade D\n");
}
```

#### 🧭 `goto` Statement: Unconditional Jump
- Transfers control unconditionally to a labeled statement within the same function.
- Syntax: `goto label;`
- The `label` is an identifier followed by a colon `:`.

```c
int i = 1;
start:
    printf("%d ", i);
    i++;
    if (i <= 5) {
        goto start; // Jump back to the 'start' label
    }
printf("\nEnd of program.\n");
```
- **Use with Caution:** `goto` can make code difficult to read, understand, and debug (often referred to as "spaghetti code"). It's generally discouraged in favor of structured control flow statements.

#### 💡 Practical Implication:
- `if` statements are fundamental for making decisions in your programs.
- `goto` should be used very sparingly, if at all, in modern C programming.

#### ⚠️ Common Pitfall:
- Forgetting the semicolon after the `goto` statement.
- Creating complex, hard-to-follow logic using `goto`.

---

### 🔹 6. **Control Flow Statements: Switch Statement, Break statement.(Simple programs covering control flow)**

#### 🔘 `switch` Statement: Multiple Choice Selection
- Provides an alternative to long `if-else if` chains when you need to select one block of code to execute based on the value of a single expression.
- The expression must evaluate to an integer type (including `char`).
- Syntax:
```c
switch (expression) {
    case constant1:
        // Code block 1
        break; // Exit the switch
    case constant2:
        // Code block 2
        break;
    ...
    default: // Optional
        // Code block if expression doesn't match any case
}
```
- **`case` labels:** Must be constant integer expressions.
- **`break` statement:** Essential to exit the `switch` after a matching case is executed. Without `break`, execution "falls through" to the next case.
- **`default` label:** Optional. Executed if the expression's value doesn't match any `case` constant.

```c
char grade = 'B';
switch (grade) {
    case 'A':
        printf("Excellent!\n");
        break;
    case 'B':
        printf("Very Good!\n");
        break;
    case 'C':
        printf("Good.\n");
        break;
    default:
        printf("Needs Improvement.\n");
}
```

#### 🚪 `break` Statement: Exiting Loops and Switch
- Used to terminate the execution of the nearest enclosing `switch` statement or loop (`for`, `while`, `do-while`).
- Control is transferred to the statement immediately following the terminated structure.

```c
// Example in a loop
for (int i = 1; i <= 10; i++) {
    if (i == 5) {
        break; // Exit the loop when i is 5
    }
    printf("%d ", i); // Prints 1 2 3 4
}
printf("\nLoop ended.\n");
```

#### 💡 Practical Implication:
- `switch` is ideal for menu-driven programs or handling different options based on a single value.
- `break` is crucial for controlling the flow within `switch` and for early exit from loops.

#### ⚠️ Common Pitfall:
- Forgetting the `break` statement in `switch` cases, leading to unintended fall-through.
- Using `break` outside of a `switch` or loop (compiler error).

---

### 🔹 7. **Control Flow Statements: While Loop, Do While Loop (Simple programs covering control flow)**

#### 🔁 Iteration (Loops): Repeating Code
- Allows a block of code to be executed repeatedly based on a condition.

#### 🌀 `while` Loop: Entry-Controlled Loop
- The condition is checked *before* executing the loop body.
- If the condition is initially false, the loop body will never execute.
- Syntax:
```c
while (condition) {
    // Code to execute as long as condition is true
    // Must include something that eventually makes the condition false
}
```

```c
int count = 1;
while (count <= 5) {
    printf("%d ", count);
    count++; // Important: Update the loop control variable
} // Prints 1 2 3 4 5
printf("\nLoop finished.\n");
```

#### 🔁 `do-while` Loop: Exit-Controlled Loop
- The loop body is executed *at least once*, and then the condition is checked *after* executing the body.
- Syntax:
```c
do {
    // Code to execute at least once
    // Must include something that eventually makes the condition false
} while (condition); // Note the semicolon
```

```c
int i = 1;
do {
    printf("%d ", i);
    i++;
} while (i <= 5); // Prints 1 2 3 4 5
printf("\nLoop finished.\n");

// Example where condition is initially false
int j = 10;
do {
    printf("This will print once.\n");
    j++;
} while (j < 10); // Prints "This will print once."
```

#### 💡 Practical Implication:
- `while` loops are suitable when you don't know in advance how many times the loop will run (e.g., reading input until a specific value is entered).
- `do-while` loops are used when you need to execute the loop body at least once (e.g., prompting the user for input until valid input is given).

#### ⚠️ Common Pitfall:
- Infinite loops: Forgetting to update the loop control variable inside the loop body.
- Forgetting the semicolon after the `while` condition in a `do-while` loop.

---

### 🔹 8. **Control Flow Statements: For Loop, Continue statement.(Simple programs covering control flow)**

#### 📈 `for` Loop: Counter-Controlled Loop
- Ideal for situations where you know in advance how many times you need to iterate.
- Combines initialization, condition checking, and update in a single line.
- Syntax:
```c
for (initialization; condition; update) {
    // Code to execute
}
```
- **Initialization:** Executed once at the beginning of the loop.
- **Condition:** Checked before each iteration. If true, the body executes. If false, the loop terminates.
- **Update:** Executed after each iteration of the loop body.

```c
// Print numbers from 1 to 5
for (int i = 1; i <= 5; i++) {
    printf("%d ", i); // Prints 1 2 3 4 5
}
printf("\nLoop finished.\n");

// Loop with multiple initializations/updates (using comma operator)
for (int i = 0, j = 10; i <= j; i++, j--) {
    printf("i=%d, j=%d\n", i, j);
}
```

#### 🔄 `continue` Statement: Skipping Iterations
- Used to skip the rest of the current iteration of a loop (`for`, `while`, `do-while`) and proceed to the next iteration.
- In a `for` loop, `continue` jumps to the update expression.
- In `while` and `do-while` loops, `continue` jumps to the condition check.

```c
// Print odd numbers from 1 to 10
for (int i = 1; i <= 10; i++) {
    if (i % 2 == 0) {
        continue; // Skip even numbers
    }
    printf("%d ", i); // Prints 1 3 5 7 9
}
printf("\nLoop finished.\n");
```

#### 💡 Practical Implication:
- `for` loops are very common for iterating over arrays or when the number of iterations is known.
- `continue` is useful for skipping specific cases within a loop without exiting the loop entirely.

#### ⚠️ Common Pitfall:
- Infinite loops: Incorrect condition or update expression in a `for` loop.
- Misunderstanding where `continue` jumps in different loop types.

---

## ✅ MODULE III: Arrays and Strings (Expanded Depth)

This module is **very important for lab exams** — expect programs like:
- Linear search
- Bubble sort
- String manipulation
- Matrix operations
- Array reversal

We’ll cover all of these in a concise, exam-ready format.

---

### 🔹 1. **Arrays Declaration and Initialization, 1-Dimensional Array, Simple programs covering 1 – Dimensional Array**

#### 📦 What is an Array?
- A collection of elements of the **same data type** stored in **contiguous (adjacent) memory locations**.
- Elements are accessed using an **index** or **subscript**, which starts from `0` for the first element.

#### 🧠 Why Use Arrays?
- To store and manage a large number of related data items under a single variable name.
- Efficient for accessing elements randomly using their index.

#### 🧮 Declaration:
- Specifies the data type of the elements and the size (number of elements) of the array.
```c
dataType arrayName[arraySize];
```
- Example:
```c
int scores[5];         // Declares an integer array named scores that can hold 5 elements
float temperatures[7]; // Declares a float array for 7 temperatures
char name[20];         // Declares a character array (can hold a string up to 19 chars + '\0')
```
- The `arraySize` must be a positive integer constant or a constant expression (in C99 and later, Variable Length Arrays (VLAs) are allowed, where size can be a variable).

#### 📌 Initialization:
- Assigning initial values to array elements.
- **During Declaration:**
```c
int numbers[5] = {10, 20, 30, 40, 50}; // Initializes all 5 elements
float prices[] = {1.99, 2.50, 0.75}; // Size is automatically determined (3 elements)
char vowels[6] = {'a', 'e', 'i', 'o', 'u', '\0'}; // Character array initialized as a string
char city[] = "London"; // String literal initialization (size is 7 including '\0')
```
- If you provide fewer initializers than the size, the remaining elements are initialized to 0 (for numeric types) or null characters (for char arrays).
```c
int arr[5] = {1, 2}; // arr will be {1, 2, 0, 0, 0}
```
- **After Declaration:** You must assign values to elements individually using their index.
```c
int data[3];
data[0] = 100;
data[1] = 200;
data[2] = 300;
```

#### 🧠 Memory Layout (1D Array):
- Elements are stored sequentially in memory.
- If `arr` is an `int` array and the base address (address of `arr[0]`) is 1000, and `sizeof(int)` is 4 bytes:
    - `arr[0]` is at address 1000
    - `arr[1]` is at address 1004
    - `arr[2]` is at address 1008
    - ...
    - `arr[i]` is at address `base_address + i * sizeof(dataType)`

#### 🔁 Accessing Elements:
- Using the array name and index within square brackets `[]`.
```c
int myArr[3] = {10, 20, 30};
printf("%d\n", myArr[0]); // Accessing the first element (10)
myArr[2] = 35;           // Modifying the third element
```
- **Array Index Out of Bounds:** Accessing an element using an index that is less than 0 or greater than or equal to the array size. This is a common and serious error in C, as it does **not** cause a compile-time or run-time error by default. It leads to **undefined behavior**, which can cause crashes or corrupt data.

#### 🚶 Traversal:
- Iterating through all elements of the array, typically using a loop.
```c
int numbers[5] = {10, 20, 30, 40, 50};
int size = 5;

printf("Array elements: ");
for(int i = 0; i < size; i++) {
    printf("%d ", numbers[i]); // Accessing element at index i
}
printf("\n");
```

#### 💡 Practical Implication:
- Arrays are essential for storing lists of data (e.g., student scores, temperatures, names).
- Understanding indexing and memory layout is crucial for efficient array manipulation.

#### ⚠️ Common Pitfall:
- Array index out of bounds errors. Always ensure your loop conditions and index calculations are correct.
- Forgetting that array indexing starts at 0.

---

### 🔹 2. **Arrays Declaration and Initialization, 2-Dimensional Array , Simple programs covering 2 – Dimensional Array**

#### 🧱 What is a 2D Array?
- An array of arrays. Conceptually represented as a table with rows and columns (a matrix).
- Elements are accessed using two indices: one for the row and one for the column.

#### 🧠 Why Use 2D Arrays?
- To represent data that has a natural row/column structure (e.g., matrices, grids, tables, images).

#### 🧮 Declaration:
- Specifies the data type, number of rows, and number of columns.
```c
dataType arrayName[rows][columns];
```
- Example:
```c
int matrix[3][4]; // Declares a 2D integer array with 3 rows and 4 columns
float scores[5][2]; // 5 students, 2 scores each
```

#### 📌 Initialization:
- **During Declaration:**
    - Using nested braces:
    ```c
    int matrix[2][3] = {
        {1, 2, 3}, // Row 0
        {4, 5, 6}  // Row 1
    };
    ```
    - Without inner braces (elements are filled row by row):
    ```c
    int matrix[2][3] = {1, 2, 3, 4, 5, 6}; // Same as above
    ```
    - Omitting the number of rows (compiler calculates it):
    ```c
    int matrix[][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    }; // Compiler determines 3 rows
    ```
    - You **must** specify the number of columns.
- **After Declaration:** Assign values using both indices.
```c
int grid[2][2];
grid[0][0] = 1;
grid[0][1] = 2;
grid[1][0] = 3;
grid[1][1] = 4;
```

#### 🧠 Memory Layout (2D Array):
- In C, 2D arrays are stored in **row-major order**. This means all elements of the first row are stored contiguously, followed by all elements of the second row, and so on.
- If `matrix` is a `int` array `matrix[rows][cols]` and the base address is 2000, and `sizeof(int)` is 4 bytes:
    - `matrix[0][0]` is at address 2000
    - `matrix[0][1]` is at address 2004
    - `matrix[0][2]` is at address 2008
    - `matrix[1][0]` is at address 2000 + `cols` * `sizeof(int)` = 2000 + 4 * 4 = 2016
    - `matrix[i][j]` is at address `base_address + (i * cols + j) * sizeof(dataType)`

#### 🔁 Accessing Elements:
- Using the array name and two indices `[row][column]`.
```c
int table[2][2] = {{10, 11}, {12, 13}};
printf("%d\n", table[0][1]); // Accessing element at row 0, column 1 (11)
table[1][0] = 15;           // Modifying element at row 1, column 0
```

#### 🚶 Traversal (Nested Loops):
- Typically requires nested loops: the outer loop for rows and the inner loop for columns.
```c
int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
int rows = 2;
int cols = 3;

printf("Matrix elements:\n");
for(int i = 0; i < rows; i++) { // Outer loop for rows
    for(int j = 0; j < cols; j++) { // Inner loop for columns
        printf("%d ", matrix[i][j]); // Accessing element at [i][j]
    }
    printf("\n"); // Newline after each row
}
```

#### 💡 Practical Implication:
- 2D arrays are used for problems involving grids, tables, or matrices (e.g., matrix addition, multiplication, transpose).
- Understanding row-major order is important when working with pointers and 2D arrays.

#### ⚠️ Common Pitfall:
- Forgetting to specify the number of columns when initializing without specifying rows.
- Array index out of bounds errors (checking both row and column indices).

---

### 🔹 3. **Arrays -2- Programs covering 1 and 2 – Dimensional Arrays**

This section focuses on common programs you might encounter in a lab exam involving 1D and 2D arrays.

#### ✅ 1. Sum of 1D Array Elements:
```c
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate size dynamically
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    printf("Sum of array elements: %d\n", sum); // Output: 150
    return 0;
}
```

#### ✅ 2. Find Maximum Element in 1D Array:
```c
#include <stdio.h>

int main() {
    int arr[] = {15, 8, 25, 12, 30};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0]; // Assume first element is max initially

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max if current element is greater
        }
    }

    printf("Maximum element: %d\n", max); // Output: 30
    return 0;
}
```

#### ✅ 3. Matrix Addition (2D Arrays):
```c
#include <stdio.h>

int main() {
    int matrix1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int matrix2[2][3] = {{7, 8, 9}, {10, 11, 12}};
    int result[2][3];
    int rows = 2;
    int cols = 3;

    printf("Matrix 1:\n");
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("Matrix 2:\n");
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    // Add matrices
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Resultant Matrix (Sum):\n");
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
```

#### ✅ 4. Matrix Transpose (2D Arrays):
```c
#include <stdio.h>

int main() {
    int original[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int transpose[3][2]; // Transpose will have cols rows and rows columns
    int rows = 2;
    int cols = 3;

    printf("Original Matrix:\n");
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            printf("%d ", original[i][j]);
        }
        printf("\n");
    }

    // Compute transpose
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            transpose[j][i] = original[i][j];
        }
    }

    printf("Transpose Matrix:\n");
    for(int i=0; i<cols; i++) { // Iterate through columns of original (rows of transpose)
        for(int j=0; j<rows; j++) { // Iterate through rows of original (columns of transpose)
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
```

#### 💡 Practical Implication:
- Be prepared to write code for basic array operations like sum, average, finding min/max, and matrix operations.
- Pay attention to loop bounds and indexing for both 1D and 2D arrays.

#### ⚠️ Common Pitfall:
- Swapping row and column indices incorrectly in matrix operations (especially transpose).
- Hardcoding array sizes instead of using `sizeof` or variables where appropriate.

---

### 🔹 4. **String processing: In built String handling functions(strlen, strcpy, strcat and strcmp, puts, gets)**

#### 💬 Strings in C: Character Arrays
- A string in C is a sequence of characters stored in a `char` array, terminated by a **null character (`\0`)**.
- The `\0` character marks the end of the string.

#### 📥 Declaration & Initialization:
```c
char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'}; // Explicit null termination
char greeting[] = "Hello"; // String literal - compiler adds '\0' automatically
char name[20]; // Array to hold a string up to 19 characters + '\0'
```

#### 🧩 Standard String Functions (`<string.h>`):
- The `<string.h>` header file provides a set of useful functions for manipulating strings.

| Function Signature        | Purpose                                     | Example                                     | Notes                                       |
|---------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|
| `size_t strlen(const char *str);` | Returns the length of the string (number of characters *before* `\0`). | `int len = strlen("hello");` // len is 5    | Does not count the null terminator.         |
| `char *strcpy(char *dest, const char *src);` | Copies the string pointed to by `src` to the buffer pointed to by `dest`. | `char dest[20]; strcpy(dest, "world");`    | Includes the null terminator. **Danger:** No bounds checking, can cause buffer overflow if `dest` is too small. |
| `char *strncpy(char *dest, const char *src, size_t n);` | Copies at most `n` characters from `src` to `dest`. | `char dest[5]; strncpy(dest, "world", 4); dest[4] = '\0';` | Safer version, but requires manual null termination if `src` is longer than `n`. |
| `char *strcat(char *dest, const char *src);` | Appends the `src` string to the end of the `dest` string. | `char s1[20] = "Hello "; strcat(s1, "World");` // s1 is "Hello World" | **Danger:** No bounds checking, can cause buffer overflow. `dest` must have enough space. |
| `char *strncat(char *dest, const char *src, size_t n);` | Appends at most `n` characters from `src` to `dest`. | `char s1[10] = "Hi "; strncat(s1, "there", 2);` // s1 is "Hi th" | Safer version.                               |
| `int strcmp(const char *str1, const char *str2);` | Compares two strings lexicographically. | `strcmp("apple", "banana");` // Returns < 0 | Returns 0 if strings are equal, < 0 if `str1` comes before `str2`, > 0 if `str1` comes after `str2`. Case-sensitive. |
| `int strncmp(const char *str1, const char *str2, size_t n);` | Compares at most `n` characters of two strings. | `strncmp("apple", "apply", 4);` // Returns 0 |                                             |
| `char *strstr(const char *haystack, const char *needle);` | Finds the first occurrence of the substring `needle` in the string `haystack`. | `strstr("hello world", "world");` // Returns pointer to "world" | Returns a pointer to the first character of the found substring, or `NULL` if not found. |
| `char *strchr(const char *str, int c);` | Finds the first occurrence of the character `c` in the string `str`. | `strchr("hello", 'l');` // Returns pointer to the first 'l' | Returns a pointer to the first occurrence of the character, or `NULL` if not found. |

#### ⌨️ Console String I/O (`<stdio.h>`):

| Function Signature        | Purpose                                     | Example                                     | Notes                                       |
|---------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|
| `char *gets(char *str);`  | Reads a line from standard input into the buffer pointed to by `str` until a newline or EOF is encountered. | `char input[100]; gets(input);`            | **Danger:** Deprecated and unsafe! Does not check buffer size, can cause buffer overflow. **Avoid using `gets()`!** |
| `char *fgets(char *str, int n, FILE *stream);` | Reads at most `n-1` characters from `stream` into `str`. Stops at newline, EOF, or after `n-1` chars. Includes the newline character if read. | `char input[100]; fgets(input, sizeof(input), stdin);` | **Safer alternative to `gets()`**. Reads from a specified file stream (`stdin` for keyboard). Includes the newline character. |
| `int puts(const char *str);` | Writes the string pointed to by `str` to standard output, followed by a newline character. | `puts("Hello!");`                          | Simpler than `printf("%s\n", str);`.       |

#### 💡 Practical Implication:
- You will frequently use string functions for tasks like copying names, concatenating messages, or comparing user input.
- Be aware of the security risks associated with `strcpy` and `strcat` and prefer their safer `strncpy` and `strncat` counterparts or ensure destination buffers are large enough. **Absolutely avoid `gets()`**.

#### ⚠️ Common Pitfall:
- Forgetting the `\0` null terminator, leading to incorrect string length or unexpected behavior.
- Buffer overflows when using `strcpy` or `strcat` with insufficient destination buffer size.
- Using `gets()` instead of `fgets()`.

---

### 5. **Linear search program- Implementation**

#### 🔍 Linear Search Implementation:
- Searching for a specific element (key) in an array by checking each element one by one from the beginning.

```c
#include <stdio.h>

int main() {
    int arr[] = {10, 5, 20, 15, 25, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    int found_index = -1; // Initialize to -1 (not found)

    printf("Array elements: ");
    for(int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Perform Linear Search
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            found_index = i; // Element found, store index
            break;           // Exit the loop as soon as found
        }
    }

    // Output result
    if (found_index != -1) {
        printf("Element %d found at index %d.\n", key, found_index);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
```

#### 💡 Practical Implication:
- This is a fundamental search algorithm and a common lab exercise.
- The `break` statement is used efficiently to stop searching once the element is found.

#### ⚠️ Common Pitfall:
- Forgetting to initialize `found_index` or using an incorrect initial value.
- Incorrect loop bounds.

---

### 6. **Bubble sort program- Implementation**

#### 🧮 Bubble Sort Implementation:
- A simple sorting algorithm that repeatedly steps through the list, compares adjacent elements and swaps them if they are in the wrong order.

```c
#include <stdio.h>

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    int temp; // For swapping
    int swapped; // Flag to optimize

    printf("Original array: ");
    for(int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Perform Bubble Sort
    for (int i = 0; i < size - 1; i++) { // Outer loop for passes
        swapped = 0; // Reset swapped flag for each pass
        // Inner loop for comparisons and swaps
        // size - 1 - i because the last i elements are already in place
        for (int j = 0; j < size - 1 - i; j++) {
            // Compare adjacent elements
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1; // Indicate that a swap occurred
            }
        }
        // If no two elements were swapped by inner loop, then break
        if (swapped == 0) {
            break;
        }
    }

    printf("Sorted array: ");
    for(int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
```

#### 💡 Practical Implication:
- Another fundamental algorithm for lab exams.
- The optimization using the `swapped` flag can improve performance if the array is already sorted or becomes sorted early.

#### ⚠️ Common Pitfall:
- Incorrect loop bounds in the inner loop (`size - 1 - i` is important).
- Errors in the swapping logic.

---

### 7. **Simple programs covering arrays and strings**

This section provides more examples combining array and string concepts.

#### ✅ 1. Count Vowels and Consonants in a String:
```c
#include <stdio.h>
#include <string.h>
#include <ctype.h> // For tolower()

int main() {
    char str[100];
    int vowels = 0, consonants = 0, others = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Safer input

    // Remove trailing newline character from fgets
    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); // Convert to lowercase for easier checking

        if (ch >= 'a' && ch <= 'z') { // Check if it's an alphabet
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        } else {
            others++; // Count non-alphabetic characters (including spaces, digits, etc.)
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Others: %d\n", others);

    return 0;
}
```

#### ✅ 2. Reverse a String (Manual Implementation):
```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char temp;
    int i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline character from fgets
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);

    // Reverse the string using two pointers
    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
```

#### ✅ 3. Check if a String is a Palindrome:
```c
#include <stdio.h>
#include <string.h>
#include <ctype.h> // For tolower()

int main() {
    char str[100];
    int i, j;
    int is_palindrome = 1; // Assume it's a palindrome initially

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline character from fgets
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);

    // Compare characters from start and end
    for (i = 0, j = len - 1; i < j; i++, j--) {
        // Optional: Ignore case and non-alphanumeric characters for a more robust check
        // while (i < j && !isalnum(str[i])) i++;
        // while (i < j && !isalnum(str[j])) j--;
        // if (tolower(str[i]) != tolower(str[j])) { ... }

        if (str[i] != str[j]) {
            is_palindrome = 0; // Found a mismatch
            break;             // No need to check further
        }
    }

    if (is_palindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
```

#### 💡 Practical Implication:
- These examples demonstrate common string manipulation tasks using loops and basic logic.
- Be comfortable using `strlen`, `strcpy`, `strcmp`, and `fgets` in your programs.

#### ⚠️ Common Pitfall:
- Not handling the newline character when using `fgets`.
- Forgetting the null terminator `\0` when manually creating or manipulating strings.
- Incorrect loop conditions when iterating through strings.

---

## ✅ MODULE IV: Working with Functions (Expanded Depth)

This module is **very important for your lab exam** — expect questions like:
- Writing functions to reverse a number, check Armstrong numbers, etc.
- Understanding scope and storage classes
- Using recursion
- Passing arrays to functions

Let’s go step-by-step.

---

### 🔹 1. **Introduction to modular programming - writing functions**

#### 📦 Modular Programming: Breaking Down Complexity
- A software design technique that emphasizes dividing a program into smaller, independent, and interchangeable modules (functions).
- Each module performs a specific task.

#### 🧠 Why Use Functions (Modular Programming)?
- **Code Reusability:** Write a function once and call it multiple times from different parts of the program.
- **Modularity:** Breaks down a large problem into smaller, manageable subproblems. Makes the program easier to understand and develop.
- **Easy Debugging:** If an error occurs, you can isolate the problem to a specific function.
- **Readability and Maintainability:** Well-defined functions make the code easier to read, understand, and modify.
- **Abstraction:** Hide the implementation details of a task within a function, allowing the user to focus on *what* the function does rather than *how* it does it.

#### 🧱 Function Structure:
- A function consists of:
    - **Return Type:** The data type of the value the function returns (e.g., `int`, `float`, `void`). `void` means the function does not return a value.
    - **Function Name:** A unique identifier for the function.
    - **Parameter List (Arguments):** A comma-separated list of variables and their data types that the function accepts as input. Can be empty (`void` or just `()`).
    - **Function Body:** The block of code that performs the function's task, enclosed in curly braces `{}`.
    - **`return` Statement:** (Optional, depending on return type) Used to send a value back to the caller and exit the function.

```c
return_type function_name(parameter_list) {
    // Function body
    // ...
    return value; // If return_type is not void
}
```

#### ✏️ Example: A Simple Function
```c
#include <stdio.h>

// Function Definition
int add(int a, int b) { // return_type: int, name: add, parameters: int a, int b
    int sum = a + b; // Function body
    return sum;      // return statement
}

int main() {
    int num1 = 10, num2 = 20;
    int result;

    // Function Call
    result = add(num1, num2); // Calling the add function

    printf("Sum: %d\n", result); // Output: Sum: 30

    return 0;
}
```

#### 💡 Practical Implication:
- Almost every non-trivial C program uses functions.
- Breaking your lab exam programs into functions makes them easier to write, test, and debug.

#### ⚠️ Common Pitfall:
- Forgetting to define or declare a function before calling it.
- Mismatching the number or types of arguments in the function call and definition/declaration.

---

### 🔹 2. **Writing functions with formal parameters and actual parameters**

#### 🤝 Parameters: Passing Data to Functions
- Parameters are variables used to pass data between the calling code and the function.

#### 📝 Formal Parameters: In the Function Definition
- Variables declared in the parameter list of the function definition.
- They are placeholders for the values that will be passed when the function is called.
- They receive copies of the actual parameter values (in call by value).

```c
// 'a' and 'b' are formal parameters
int add(int a, int b) {
    int sum = a + b;
    return sum;
}
```

#### 📊 Actual Parameters (Arguments): In the Function Call
- The actual values or variables passed to the function when it is called.
- These values are copied into the formal parameters.

```c
int num1 = 10, num2 = 20;
int result;

// num1 and num2 are actual parameters (arguments)
result = add(num1, num2);
```

#### 🔄 Parameter Passing Mechanism:
- C primarily uses **Call by Value**.

#### 💡 Practical Implication:
- Understanding the difference between formal and actual parameters is crucial for understanding how data is passed to functions.
- In call by value, changes made to formal parameters inside the function do **not** affect the actual parameters outside the function.

#### ⚠️ Common Pitfall:
- Mismatching the data types or number of actual parameters with the formal parameters.
- Expecting changes to formal parameters to affect actual parameters in call by value.

---

### 🔹 3. **Writing functions with Pass by Value and Recursion**

#### 🔄 Pass by Value (Call by Value): Copying Values
- When a function is called by value, the values of the actual parameters are copied into the formal parameters.
- The function works with these copies.
- Changes made to the formal parameters inside the function do **not** affect the original actual parameters in the calling code.

```c
#include <stdio.h>

void modifyValue(int num) { // 'num' is a copy of the actual argument
    num = num * 2; // Changes only the local copy of num
    printf("Inside function: num = %d\n", num);
}

int main() {
    int value = 10;
    printf("Before function call: value = %d\n", value); // Output: 10

    modifyValue(value); // Pass by value

    printf("After function call: value = %d\n", value);  // Output: 10 (original value unchanged)

    return 0;
}
```

#### 🧠 Recursion: Functions Calling Themselves
- A function is recursive if it calls itself directly or indirectly.
- Used to solve problems that can be broken down into smaller, self-similar subproblems.

#### 📦 Key Components of Recursion:
1. **Base Case:** A condition that stops the recursion. Without a base case, the recursion would continue indefinitely, leading to a stack overflow.
2. **Recursive Step:** The part of the function that calls itself, usually with modified arguments that move closer to the base case.

#### 🔁 Example: Factorial Using Recursion
- Factorial of n (n!) is the product of all positive integers up to n.
- n! = n * (n-1)!
- Base case: 0! = 1

```c
#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) {
    // Base Case: Stop recursion when n is 0
    if (n == 0) {
        return 1;
    }
    // Recursive Step: Call factorial for n-1
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num = 5;
    int result = factorial(num); // Call the recursive function
    printf("Factorial of %d is %d\n", num, result); // Output: Factorial of 5 is 120
    return 0;
}
```
- **How it works for factorial(5):**
    - `factorial(5)` calls `factorial(4)`
    - `factorial(4)` calls `factorial(3)`
    - `factorial(3)` calls `factorial(2)`
    - `factorial(2)` calls `factorial(1)`
    - `factorial(1)` calls `factorial(0)`
    - `factorial(0)` returns 1 (Base Case)
    - `factorial(1)` returns 1 * 1 = 1
    - `factorial(2)` returns 2 * 1 = 2
    - `factorial(3)` returns 3 * 2 = 6
    - `factorial(4)` returns 4 * 6 = 24
    - `factorial(5)` returns 5 * 24 = 120

#### ⚠️ Drawbacks of Recursion:
- **Stack Overflow:** If the recursion is too deep (many nested calls), it can exhaust the call stack memory.
- **Performance:** Can be slower than iterative solutions due to the overhead of function calls.
- **Complexity:** Can be harder to understand and debug than iterative solutions for some problems.

#### 💡 Practical Implication:
- Call by value is the default way to pass basic data types to functions.
- Recursion is useful for problems with recursive structures (e.g., tree traversals, certain mathematical sequences). Be sure to identify the base case.

#### ⚠️ Common Pitfall:
- Missing or incorrect base case in recursion, leading to infinite recursion and stack overflow.
- Expecting call by value to modify the original variable.

---

### 4. **Writing functions with arrays as Function Parameters**

#### 📦 Passing Arrays to Functions: By Reference (Effectively)
- When you pass an array to a function in C, you are actually passing the **address of the first element** of the array.
- This means that changes made to the array elements inside the function **do affect** the original array in the calling code. This behaves like call by reference, even though technically the address itself is passed by value.

#### 📥 Function Signature for Array Parameters:
- You can declare the array parameter in several ways:
    - Using square brackets (most common): `dataType arrayName[]`
    - Using a pointer: `dataType *arrayName`

- You typically also pass the size of the array as a separate parameter, as the function cannot determine the size of the array from the passed address alone.

```c
#include <stdio.h>

// Function to print array elements (using [] notation)
void printArray(int arr[], int size) {
    printf("Array elements inside function: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to modify array elements (using pointer notation)
void modifyArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        *(arr + i) = *(arr + i) * 2; // Modify element using pointer arithmetic
        // Equivalent to arr[i] = arr[i] * 2;
    }
}

int main() {
    int myArr[] = {1, 2, 3, 4, 5};
    int size = sizeof(myArr) / sizeof(myArr[0]);

    printf("Original array in main: ");
    for(int i=0; i<size; i++) printf("%d ", myArr[i]);
    printf("\n");

    printArray(myArr, size); // Pass the array and its size

    modifyArray(myArr, size); // Pass the array and its size

    printf("Array after modifyArray in main: ");
    for(int i=0; i<size; i++) printf("%d ", myArr[i]); // Original array is modified
    printf("\n");

    return 0;
}
```

#### 🧱 Passing 2D Arrays to Functions:
- When passing a 2D array, you must specify the number of columns in the function parameter declaration. The number of rows is optional.
```c
void printMatrix(int matrix[][3], int rows) { // Must specify columns (3)
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int myMatrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    printMatrix(myMatrix, 2);
    return 0;
}
```

#### 💡 Practical Implication:
- Passing arrays to functions is essential for writing modular code that operates on collections of data.
- Remember that changes inside the function *will* affect the original array.

#### ⚠️ Common Pitfall:
- Forgetting to pass the size of the 1D array to the function.
- Not specifying the number of columns when passing a 2D array.
- Expecting the original array *not* to be modified when passing it to a function.

---

### 5. **Structure and union**

#### 🏗️ Structures (`struct`): Grouping Different Data Types
- A user-defined data type that allows you to group variables of **different data types** under a single name.
- Members of a structure are stored in contiguous memory locations (though padding might be added by the compiler).

#### 🧱 Declaration:
```c
struct structureName {
    dataType member1;
    dataType member2;
    // ...
}; // Note the semicolon
```

#### ✏️ Example:
```c
struct Student {
    char name[50];
    int roll_no;
    float marks;
}; // Declares the structure template
```

#### 📌 Creating Structure Variables:
```c
struct Student s1; // Creates a variable of type struct Student
struct Student s2, s3; // Creates multiple variables
struct Student s4 = {"Alice", 101, 85.5}; // Initialization during declaration
```

#### 📥 Accessing Members:
- Use the **dot operator (`.`)** for structure variables.
- Use the **arrow operator (`->`)** for pointers to structures.

```c
s1.roll_no = 102;
strcpy(s1.name, "Bob"); // Use strcpy for strings
s1.marks = 90.0;

printf("Student Name: %s\n", s1.name);
printf("Roll No: %d\n", s1.roll_no);

struct Student *ptr_s1 = &s1;
printf("Marks (using pointer): %.2f\n", ptr_s1->marks);
```

#### 💡 Practical Implication:
- Structures are used to represent real-world entities with multiple attributes (e.g., a student, a book, a point in 2D space).
- They are fundamental for organizing related data.

#### ⚠️ Common Pitfall:
- Forgetting the semicolon after the closing brace `}` in the structure definition.
- Using the wrong operator (`.` vs `->`) to access members.
- Trying to assign strings directly (`s1.name = "Bob";`) instead of using `strcpy`.

---

#### 🗃️ Unions (`union`): Sharing Memory
- A user-defined data type that allows you to store variables of **different data types** in the **same memory location**.
- At any given time, a union variable can hold a value of **only one** of its members.
- The size of a union is equal to the size of its largest member.

#### 🧱 Declaration:
```c
union unionName {
    dataType member1;
    dataType member2;
    // ...
}; // Note the semicolon
```

#### ✏️ Example:
```c
union Data {
    int i;
    float f;
    char str[20];
}; // Declares the union template
```

#### 📌 Creating Union Variables:
```c
union Data data1; // Creates a variable of type union Data
```

#### 📥 Accessing Members:
- Use the **dot operator (`.`)** for union variables.
- Use the **arrow operator (`->`)** for pointers to unions.
- **Important:** You should only access the member that was most recently assigned a value. Accessing other members will result in undefined behavior.

```c
union Data data1;

data1.i = 10;
printf("data1.i: %d\n", data1.i); // Output: 10
// printf("data1.f: %f\n", data1.f); // Undefined behavior!

data1.f = 22.5;
printf("data1.f: %.2f\n", data1.f); // Output: 22.5
// printf("data1.i: %d\n", data1.i); // Undefined behavior!

strcpy(data1.str, "Hello");
printf("data1.str: %s\n", data1.str); // Output: Hello
// printf("data1.i: %d\n", data1.i); // Undefined behavior!
```

#### 💡 Practical Implication:
- Unions are used for memory optimization when you know that only one of several data types will be needed at a time.
- They are less common than structures in general programming but useful in specific scenarios (e.g., embedded systems, low-level programming).

#### ⚠️ Common Pitfall:
- Forgetting the semicolon after the closing brace `}` in the union definition.
- Accessing a union member that was not the last one assigned a value.

---

#### 🔍 Structure vs. Union Summary:

| Feature       | Structure (`struct`)                 | Union (`union`)                      |
|---------------|--------------------------------------|--------------------------------------|
| Memory Usage  | Each member gets its own memory.     | All members share the same memory.   |
| Size          | Sum of sizes of all members (plus padding). | Size of the largest member.          |
| Data Storage  | Can store values for all members simultaneously. | Can store value for only one member at a time. |
| Purpose       | Group related data of different types. | Save memory by sharing storage.      |

---

### 6. **Storage Classes, Scope and life time of variables**

#### 📦 Storage Classes: How Variables are Stored
- Determine the **scope**, **lifetime**, **initial value**, and **storage location** of a variable.
- There are four storage classes in C: `auto`, `static`, `extern`, and `register`.

#### 🎯 Scope: Where a Variable is Accessible
- The region of the program where a variable can be accessed and used.
- **Block Scope:** Variables declared inside a block `{}` (including function bodies). Accessible only within that block.
- **Function Scope:** Labels used with `goto`. Accessible throughout the function.
- **File Scope:** Variables declared outside any function. Accessible from the point of declaration to the end of the file. Also called global scope.
- **Function Prototype Scope:** Variables declared in function prototypes. Their scope ends at the end of the prototype declaration.

#### ⏳ Lifetime: How Long a Variable Exists
- The period during which a variable exists in memory.

#### 📊 Storage Class Details:

| Storage Class | Keyword    | Storage Location | Default Value | Scope              | Lifetime             | Notes                                       |
|---------------|------------|------------------|---------------|--------------------|----------------------|---------------------------------------------|
| Automatic     | `auto`     | Stack            | Garbage       | Block              | Block                | Default for local variables.                |
| Static        | `static`   | Data Segment     | Zero          | File or Block      | Entire program         | Retains value between function calls (if block scope). |
| External      | `extern`   | Data Segment     | Zero          | Entire program (across files) | Entire program         | Declares a variable defined elsewhere.      |
| Register      | `register` | CPU Registers    | Garbage       | Block              | Block                | Suggests storage in CPU register for speed (compiler may ignore). |

#### ✏️ Examples:

```c
#include <stdio.h>

int global_var = 10; // File scope, static lifetime, default 0 (explicitly initialized here)

void myFunction() {
    auto int local_auto = 20; // Block scope, automatic lifetime, garbage default
    static int local_static = 0; // Block scope, static lifetime, default 0

    local_static++; // Value persists between calls
    local_auto++;   // Value is reset on each call

    printf("Inside myFunction: global_var = %d, local_auto = %d, local_static = %d\n",
           global_var, local_auto, local_static);
}

int main() {
    // printf("%d", local_auto); // Error: local_auto is out of scope

    myFunction(); // Call 1
    myFunction(); // Call 2
    myFunction(); // Call 3

    extern int another_global; // Declares a global variable defined elsewhere (e.g., in another_file.c)
    // printf("Another global: %d\n", another_global); // Would print its value if linked

    return 0;
}

// In another_file.c
// int another_global = 50; // Definition of another_global
```

- **`auto`:** Variables are created when the block is entered and destroyed when the block is exited. Their value is not preserved.
- **`static`:**
    - If declared inside a function (block scope), the variable is created and initialized only once when the program starts. It retains its value between function calls. Its scope is still limited to the function/block.
    - If declared outside a function (file scope), it has file scope but its visibility is limited to the file it's declared in. Other files cannot access it using `extern`.
- **`extern`:** Used to declare a variable that is defined in another file or later in the same file. It doesn't allocate memory but tells the compiler that the variable exists elsewhere.
- **`register`:** A hint to the compiler to store the variable in a CPU register for faster access. The compiler may ignore this hint if registers are not available or if it deems it unnecessary. Cannot take the address of a `register` variable.

#### 💡 Practical Implication:
- Understanding scope and lifetime is crucial for managing variables and avoiding errors.
- `static` variables are useful for maintaining state within a function across multiple calls.
- `extern` is necessary when working with multiple source files.

#### ⚠️ Common Pitfall:
- Accessing a local variable outside its scope.
- Expecting a local `auto` variable to retain its value between function calls.
- Misunderstanding the difference between `static` variables with block scope and file scope.

---

### 7. **Simple programs using functions**

This section provides examples of common programs implemented using functions.

#### ✅ 1. Function to Calculate Factorial (Iterative):
```c
#include <stdio.h>

// Function to calculate factorial iteratively
long long calculateFactorial(int n) {
    if (n < 0) {
        return -1; // Indicate error for negative input
    }
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    long long result = calculateFactorial(num);

    if (result != -1) {
        printf("Factorial of %d is %lld\n", num, result);
    } else {
        printf("Factorial is not defined for negative numbers.\n");
    }

    return 0;
}
```

#### ✅ 2. Function to Check if a Number is Prime:
```c
#include <stdio.h>
#include <stdbool.h> // For bool type

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) {
        return false; // Numbers less than or equal to 1 are not prime
    }
    // Check for factors from 2 up to the square root of n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false; // Found a factor, not prime
        }
    }
    return true; // No factors found, it's prime
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
```

#### ✅ 3. Function to Reverse an Integer:
```c
#include <stdio.h>

// Function to reverse an integer
int reverseInteger(int num) {
    int reversed_num = 0;
    int remainder;

    while (num != 0) {
        remainder = num % 10; // Get the last digit
        reversed_num = reversed_num * 10 + remainder; // Add to reversed number
        num /= 10; // Remove the last digit
    }
    return reversed_num;
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    int reversed = reverseInteger(num);
    printf("Reversed number: %d\n", reversed);

    return 0;
}
```

#### ✅ 4. Function to Calculate Power using Recursion:
```c
#include <stdio.h>

// Recursive function to calculate base^exponent
double power(double base, int exp) {
    if (exp == 0) {
        return 1; // Base case: any number to the power of 0 is 1
    } else if (exp > 0) {
        return base * power(base, exp - 1); // Recursive step for positive exponent
    } else { // exp < 0
        return 1 / (base * power(base, -exp - 1)); // Recursive step for negative exponent
    }
}

int main() {
    double base;
    int exp;
    printf("Enter base and exponent: ");
    scanf("%lf %d", &base, &exp);

    double result = power(base, exp);
    printf("%.2f raised to the power of %d is %.2f\n", base, exp, result);

    return 0;
}
```

#### 💡 Practical Implication:
- Practice writing functions for common mathematical or logical tasks.
- Pay attention to the function signature (return type, parameters) and the logic within the function body.

#### ⚠️ Common Pitfall:
- Incorrectly handling return values or parameter types.
- Infinite recursion (for recursive functions).

---

## ✅ MODULE V: Pointers (Expanded Depth)

Pointers are **one of the most powerful features in C**, and a **common topic in lab exams**. They allow you to:
- Manipulate memory directly
- Pass arguments by reference
- Work efficiently with arrays and strings
- Build dynamic data structures (like linked lists, trees)

Let’s go step-by-step.

---

### 🔹 1. **Basics of Pointers: declaring pointers**

#### 🧠 What is a Pointer?
- A pointer is a variable that stores the **memory address** of another variable.
- Instead of holding a data value directly, it holds the location (address) where a data value is stored.

#### 🧱 Declaration:
- To declare a pointer variable, you use the asterisk `*` symbol before the pointer name.
- The data type before the `*` indicates the type of data the pointer *points to*.

```c
dataType *pointerName;
```
- Example:
```c
int *ptr_int;       // Declares a pointer to an integer
float *ptr_float;   // Declares a pointer to a float
char *ptr_char;     // Declares a pointer to a character
```
- The `*` is part of the declaration syntax, not the pointer name itself. `ptr_int` is the name of the pointer variable.

#### 📍 Address-of Operator (`&`): Getting an Address
- The unary `&` operator is used to get the memory address of a variable.

```c
int num = 10;
int *ptr_num;

ptr_num = &num; // Assigns the memory address of 'num' to 'ptr_num'
```

#### 💡 Practical Implication:
- Pointers are essential for dynamic memory allocation, working with arrays and strings efficiently, and implementing call by reference.
- Understanding that a pointer holds an address, not the value itself, is fundamental.

#### ⚠️ Common Pitfall:
- Forgetting the `*` during declaration (declares a regular variable).
- Trying to assign a data value directly to a pointer variable without using the address-of operator.

---

### 🔹 2. **Pointers: accessing data though pointers, NULL pointer, simple programs**

#### ➡️ Dereference Operator (`*`): Accessing the Value
- The unary `*` operator (when used with a pointer variable) is used to access the value stored at the memory address pointed to by the pointer. This is called **dereferencing** the pointer.

```c
int num = 10;
int *ptr_num = &num;

printf("Value of num: %d\n", num);       // Accessing directly
printf("Address of num: %p\n", &num);    // Printing the address
printf("Value of ptr_num (address): %p\n", ptr_num); // Printing the address stored in ptr_num
printf("Value pointed to by ptr_num: %d\n", *ptr_num); // Dereferencing ptr_num to get the value (10)

*ptr_num = 25; // Modify the value at the address pointed to by ptr_num
printf("New value of num: %d\n", num); // Output: New value of num: 25
```
- The `*` symbol has two meanings: declaration (`int *p;`) and dereferencing (`*p`). The context determines its meaning.

#### 🚫 NULL Pointer: Pointing to Nothing
- A pointer that does not point to any valid memory location.
- It's a good practice to initialize pointers to `NULL` if they are not immediately assigned a valid address.
- The `NULL` macro is defined in `<stdio.h>`, `<stdlib.h>`, and `<stddef.h>`.

```c
int *ptr = NULL;

if (ptr == NULL) {
    printf("Pointer is NULL.\n");
}
```
- Dereferencing a `NULL` pointer is **undefined behavior** and will likely cause a program crash (segmentation fault). Always check if a pointer is `NULL` before dereferencing it.

#### ✅ Simple Program Example: Using Pointers
```c
#include <stdio.h>

int main() {
    int data = 100;
    int *data_ptr = &data; // data_ptr stores the address of data

    printf("Value of data: %d\n", data);
    printf("Address of data: %p\n", &data);
    printf("Value of data_ptr (address): %p\n", data_ptr);
    printf("Value pointed to by data_ptr: %d\n", *data_ptr); // Accessing data via pointer

    *data_ptr = 200; // Changing data's value via pointer
    printf("New value of data: %d\n", data);

    int *null_ptr = NULL;
    if (null_ptr == NULL) {
        printf("null_ptr is a NULL pointer.\n");
    }
    // printf("%d", *null_ptr); // DANGER: Dereferencing a NULL pointer

    return 0;
}
```

#### 💡 Practical Implication:
- The dereference operator is how you use a pointer to work with the actual data it points to.
- `NULL` pointers are important for indicating that a pointer is not currently pointing to anything valid, and checking for `NULL` is a crucial safety measure.

#### ⚠️ Common Pitfall:
- Dereferencing a pointer that has not been initialized or is `NULL`.
- Confusing the pointer variable itself (which holds an address) with the value it points to.

---

### 🔹 3. **Pointers: Array access using pointers, pass by reference effect, simple programs**

#### 📦 Array Access Using Pointers:
- In C, the name of an array is a **constant pointer** to its first element.
- `arrayName` is equivalent to `&arrayName[0]`.
- You can use pointer arithmetic to access array elements.

```c
int arr[] = {10, 20, 30, 40, 50};
int *ptr = arr; // ptr points to the first element (arr[0])

printf("arr[0] = %d\n", arr[0]);
printf("*ptr = %d\n", *ptr); // Same as arr[0]

printf("arr[1] = %d\n", arr[1]);
printf("*(ptr + 1) = %d\n", *(ptr + 1)); // Accessing the second element using pointer arithmetic

printf("arr[2] = %d\n", arr[2]);
printf("*(ptr + 2) = %d\n", *(ptr + 2)); // Accessing the third element

// You can also use array-like syntax with a pointer
printf("ptr[3] = %d\n", ptr[3]); // Same as *(ptr + 3)
```
- `ptr + i` calculates the memory address of the `i`-th element after the element pointed to by `ptr`. The compiler automatically scales `i` by the size of the data type.

#### 🚶 Traversing Arrays with Pointers:
```c
int arr[] = {1, 2, 3, 4, 5};
int size = sizeof(arr) / sizeof(arr[0]);
int *ptr = arr; // Pointer to the first element

printf("Array elements using pointer traversal: ");
for (int i = 0; i < size; i++) {
    printf("%d ", *(ptr + i)); // Accessing element using pointer arithmetic
    // Or: printf("%d ", ptr[i]);
}
printf("\n");

// Alternative traversal by incrementing the pointer
printf("Array elements by incrementing pointer: ");
ptr = arr; // Reset pointer to the beginning
for (int i = 0; i < size; i++) {
    printf("%d ", *ptr); // Dereference the current pointer location
    ptr++;             // Move the pointer to the next element
}
printf("\n");
```

#### 🔄 Pass by Reference Effect Using Pointers:
- While C uses call by value, you can achieve the effect of call by reference by passing the **address** of a variable to a function.
- The function receives a copy of the address (call by value for the pointer), but it can use this address to access and modify the original variable's value using the dereference operator `*`.

```c
#include <stdio.h>

// Function to swap two integers using pointers (pass by reference effect)
void swap(int *a, int *b) { // 'a' and 'b' are pointers to integers
    int temp = *a; // Dereference 'a' to get the value it points to
    *a = *b;       // Dereference 'a' and 'b' to swap the values they point to
    *b = temp;
}

int main() {
    int x = 10, y = 20;

    printf("Before swap: x = %d, y = %d\n", x, y); // Output: 10, 20

    // Pass the addresses of x and y to the swap function
    swap(&x, &y); // &x is the address of x, &y is the address of y

    printf("After swap: x = %d, y = %d\n", x, y);  // Output: 20, 10 (original values are swapped)

    return 0;
}
```

#### 💡 Practical Implication:
- Using pointers for array access can sometimes be more efficient or concise.
- Passing pointers to functions is the standard way to modify variables in the calling code (achieving call by reference).

#### ⚠️ Common Pitfall:
- Incorrect pointer arithmetic (e.g., adding an incorrect offset).
- Forgetting to use the `&` operator when passing a variable's address for call by reference.
- Dereferencing a pointer that points outside the bounds of an array.

---

### 4. **File Operations: open, close, read, write, append**

#### 📂 File Handling: Working with External Files
- Allows your program to interact with files stored on the computer's storage devices (HDD, SSD, etc.).
- Standard library for file I/O is `<stdio.h>`.

#### 📌 File Pointer (`FILE *`):
- A pointer to a structure (`FILE`) that contains information about the file, such as its current position, buffer, and status flags.
- You need a `FILE` pointer to perform any file operation.

```c
FILE *file_ptr; // Declare a file pointer
```

#### 🔓 Opening a File (`fopen()`):
- Used to open a file and associate it with a file pointer.
- Syntax: `FILE *fopen(const char *filename, const char *mode);`
    - `filename`: The name (or path) of the file to open.
    - `mode`: A string specifying how the file should be opened.

| Mode String | Description                                  | If File Exists | If File Doesn't Exist |
|-------------|----------------------------------------------|----------------|-----------------------|
| `"r"`       | Read mode                                    | Opens          | Error (`NULL`)        |
| `"w"`       | Write mode                                   | Truncates (clears content) | Creates               |
| `"a"`       | Append mode                                  | Opens, writes to end | Creates               |
| `"r+"`      | Read and Write mode                          | Opens          | Error (`NULL`)        |
| `"w+"`      | Read and Write mode                          | Truncates      | Creates               |
| `"a+"`      | Read and Append mode                         | Opens, writes to end | Creates               |
| `"rb"`, `"wb"`, etc. | Binary modes (for non-text files) | Same as text modes | Same as text modes    |

- `fopen()` returns a `FILE` pointer on success, and `NULL` on failure (e.g., file not found in "r" mode). Always check if the returned pointer is `NULL`.

```c
FILE *file_ptr = fopen("example.txt", "w"); // Open for writing
if (file_ptr == NULL) {
    printf("Error opening file!\n");
    // Handle error (e.g., exit)
}
```

#### 🔒 Closing a File (`fclose()`):
- Used to close a file associated with a file pointer.
- Flushes any buffered data to the file and releases the resources used by the file.
- Syntax: `int fclose(FILE *stream);`
- Returns 0 on success, EOF on error.

```c
if (file_ptr != NULL) {
    fclose(file_ptr);
}
```
- **Important:** Always close files when you are finished with them to prevent data loss and resource leaks.

#### 📝 Writing to a File:
- **`fputc()`:** Writes a single character to a file. `int fputc(int char, FILE *stream);`
- **`fputs()`:** Writes a string to a file. `int fputs(const char *str, FILE *stream);`
- **`fprintf()`:** Writes formatted output to a file (like `printf` but to a file). `int fprintf(FILE *stream, const char *format, ...);`

```c
FILE *file_ptr = fopen("output.txt", "w");
if (file_ptr != NULL) {
    fputc('A', file_ptr);
    fputs("Hello, File!\n", file_ptr);
    fprintf(file_ptr, "Number: %d\n", 123);
    fclose(file_ptr);
}
```

#### 📖 Reading from a File:
- **`fgetc()`:** Reads a single character from a file. `int fgetc(FILE *stream);` Returns the character read, or `EOF` at the end of the file or on error.
- **`fgets()`:** Reads a line (or up to n-1 characters) from a file. `char *fgets(char *str, int n, FILE *stream);` Reads until newline, EOF, or n-1 chars. Returns `str` on success, `NULL` on error or EOF.
- **`fscanf()`:** Reads formatted input from a file (like `scanf` but from a file). `int fscanf(FILE *stream, const char *format, ...);`

```c
FILE *file_ptr = fopen("output.txt", "r");
if (file_ptr != NULL) {
    char ch;
    while ((ch = fgetc(file_ptr)) != EOF) {
        printf("%c", ch); // Print character to console
    }
    fclose(file_ptr);
}
```

#### ✍️ Appending to a File:
- Use the `"a"` or `"a+"` mode when opening the file. Data will be written at the end of the existing content.

```c
FILE *file_ptr = fopen("log.txt", "a");
if (file_ptr != NULL) {
    fprintf(file_ptr, "Log entry at %s\n", __TIME__); // Append timestamp
    fclose(file_ptr);
}
```

#### 💡 Practical Implication:
- File handling is essential for programs that need to store data persistently or read data from external sources.
- You'll use file operations for tasks like saving program output, reading configuration files, or processing data files.

#### ⚠️ Common Pitfall:
- Forgetting to check if `fopen` returned `NULL`.
- Forgetting to `fclose` the file, leading to data not being saved or resource leaks.
- Using the wrong file mode for the desired operation (e.g., using "w" when you mean to append with "a").
- Not handling the `EOF` condition when reading from a file.

---

### 5. **Programs using file operations**

This section provides examples of common file operation programs.

#### ✅ 1. Write Data to a File:
```c
#include <stdio.h>

int main() {
    FILE *file_ptr;
    char data[] = "This is some text to write to the file.\n";
    int num = 12345;

    // Open file in write mode ("w")
    file_ptr = fopen("my_output.txt", "w");

    if (file_ptr == NULL) {
        printf("Error opening file for writing!\n");
        return 1; // Indicate error
    }

    // Write string to file
    fputs(data, file_ptr);

    // Write formatted data to file
    fprintf(file_ptr, "The number is: %d\n", num);

    // Close the file
    fclose(file_ptr);

    printf("Data written to my_output.txt successfully.\n");

    return 0;
}
```

#### ✅ 2. Read Data from a File (Character by Character):
```c
#include <stdio.h>

int main() {
    FILE *file_ptr;
    char ch;

    // Open file in read mode ("r")
    file_ptr = fopen("my_output.txt", "r");

    if (file_ptr == NULL) {
        printf("Error opening file for reading!\n");
        return 1; // Indicate error
    }

    printf("Reading from file:\n");
    // Read character by character until end of file (EOF)
    while ((ch = fgetc(file_ptr)) != EOF) {
        printf("%c", ch); // Print the character to console
    }

    // Close the file
    fclose(file_ptr);

    return 0;
}
```

#### ✅ 3. Read Data from a File (Line by Line):
```c
#include <stdio.h>

int main() {
    FILE *file_ptr;
    char line[256]; // Buffer to hold a line

    // Open file in read mode ("r")
    file_ptr = fopen("my_output.txt", "r");

    if (file_ptr == NULL) {
        printf("Error opening file for reading!\n");
        return 1; // Indicate error
    }

    printf("Reading from file line by line:\n");
    // Read line by line until end of file (NULL returned by fgets)
    while (fgets(line, sizeof(line), file_ptr) != NULL) {
        printf("%s", line); // Print the line to console (fgets includes newline)
    }

    // Close the file
    fclose(file_ptr);

    return 0;
}
```

#### ✅ 4. Append Data to a File:
```c
#include <stdio.h>

int main() {
    FILE *file_ptr;
    char new_data[] = "This line is appended.\n";

    // Open file in append mode ("a")
    file_ptr = fopen("my_output.txt", "a");

    if (file_ptr == NULL) {
        printf("Error opening file for appending!\n");
        return 1; // Indicate error
    }

    // Append string to file
    fputs(new_data, file_ptr);

    // Close the file
    fclose(file_ptr);

    printf("Data appended to my_output.txt successfully.\n");

    return 0;
}
```

#### 💡 Practical Implication:
- Practice these basic file operations. You might be asked to read from or write to a file in your lab exam.
- Remember to handle potential errors (file not found, permission issues) by checking the return value of `fopen`.

#### ⚠️ Common Pitfall:
- Not closing the file after operations are complete.
- Using `gets` instead of `fgets` for reading lines (even from files).

---

### 6. **Sequential access and random access to files: In built file handling functions (rewind() ,fseek(), ftell(), feof(), fread(), fwrite()),**

#### 🚶 Sequential Access:
- Reading or writing data to a file in a linear fashion, from the beginning to the end.
- This is the default mode of operation for text files opened with "r", "w", "a" modes.
- Functions like `fgetc`, `fputc`, `fgets`, `fputs`, `fscanf`, `fprintf` perform sequential access.

#### 🎯 Random Access:
- Reading or writing data to a file at any arbitrary position, not necessarily in order.
- Requires functions to move the file position indicator.
- More common with binary files, but possible with text files (though character counting can be tricky due to varying character sizes and newline representations).

#### 🧠 File Position Indicator:
- An internal pointer maintained by the system for each opened file.
- It indicates the current position within the file where the next read or write operation will occur.

#### 🧩 Random Access Functions (`<stdio.h>`):

| Function Signature        | Purpose                                     | Example                                     | Notes                                       |
|---------------------------|---------------------------------------------|---------------------------------------------|---------------------------------------------|
| `void rewind(FILE *stream);` | Sets the file position indicator to the beginning of the file. | `rewind(file_ptr);`                         | Equivalent to `fseek(stream, 0, SEEK_SET);` |
| `int fseek(FILE *stream, long offset, int origin);` | Sets the file position indicator to a specific location. | `fseek(file_ptr, 10, SEEK_SET);`            | Returns 0 on success, non-zero on failure.  |
| `long ftell(FILE *stream);` | Returns the current value of the file position indicator. | `long pos = ftell(file_ptr);`               | Returns -1L on error.                       |
| `int feof(FILE *stream);` | Checks if the end-of-file indicator is set for the stream. | `if (feof(file_ptr)) { ... }`               | Returns non-zero if EOF is reached, 0 otherwise. Check *after* a read operation. |
| `size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream);` | Reads `nmemb` items of `size` bytes each from the stream into the memory block pointed to by `ptr`. | `fread(buffer, sizeof(int), 5, file_ptr);` | Returns the number of items successfully read. Useful for binary files. |
| `size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream);` | Writes `nmemb` items of `size` bytes each from the memory block pointed to by `ptr` to the stream. | `fwrite(&data, sizeof(data), 1, file_ptr);` | Returns the number of items successfully written. Useful for binary files. |

#### 📌 `fseek` Origins:
- `origin` specifies the reference point for the offset:
    - `SEEK_SET` (or 0): Beginning of the file.
    - `SEEK_CUR` (or 1): Current position of the file position indicator.
    - `SEEK_END` (or 2): End of the file.

```c
// Example using fseek and ftell
FILE *file_ptr = fopen("my_output.txt", "r");
if (file_ptr != NULL) {
    fseek(file_ptr, 5, SEEK_SET); // Move 5 bytes from the beginning
    char ch = fgetc(file_ptr);
    printf("Character at position 5: %c\n", ch); // Reads the 6th character

    long current_pos = ftell(file_ptr);
    printf("Current position: %ld\n", current_pos); // Should be 6

    fseek(file_ptr, -2, SEEK_CUR); // Move 2 bytes back from current position
    ch = fgetc(file_ptr);
    printf("Character after seeking back: %c\n", ch); // Reads the 5th character

    fseek(file_ptr, 0, SEEK_END); // Move to the end of the file
    current_pos = ftell(file_ptr);
    printf("Position at end of file: %ld\n", current_pos); // Total size of file

    fclose(file_ptr);
}
```

#### 💡 Practical Implication:
- Random access is necessary when you need to jump to specific parts of a file without reading the entire content (e.g., accessing records in a database file).
- `fread` and `fwrite` are crucial for working with binary files, where data is stored in its raw binary representation.

#### ⚠️ Common Pitfall:
- Using `feof()` to control a loop condition *before* attempting a read. `feof()` only becomes true *after* a read operation attempts to read past the end of the file. The correct way is usually `while ((ch = fgetc(file_ptr)) != EOF)`.
- Misunderstanding the `offset` and `origin` parameters of `fseek`.
- Using text mode functions (`fgetc`, `fprintf`) on binary files, which can lead to unexpected behavior due to newline conversions.

---

### 7. **Sequential access and random access to files: Simple programs**

This section provides simple programs demonstrating random access.

#### ✅ 1. Read a Specific Character from a File using `fseek`:
```c
#include <stdio.h>

int main() {
    FILE *file_ptr;
    char ch;
    long position = 10; // Position (byte offset) to read from

    file_ptr = fopen("my_output.txt", "r"); // Assuming my_output.txt exists

    if (file_ptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Move the file position indicator to the desired position
    if (fseek(file_ptr, position, SEEK_SET) == 0) {
        // Read the character at that position
        ch = fgetc(file_ptr);

        if (ch != EOF) {
            printf("Character at position %ld: %c\n", position, ch);
        } else {
            printf("Could not read character at position %ld (possibly beyond file end).\n", position);
        }
    } else {
        printf("Error seeking to position %ld.\n", position);
    }

    fclose(file_ptr);
    return 0;
}
```

#### ✅ 2. Get File Size using `fseek` and `ftell`:
```c
#include <stdio.h>

int main() {
    FILE *file_ptr;
    long file_size = -1;

    file_ptr = fopen("my_output.txt", "r"); // Assuming my_output.txt exists

    if (file_ptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Move the file position indicator to the end of the file
    if (fseek(file_ptr, 0, SEEK_END) == 0) {
        // Get the current position, which is the file size
        file_size = ftell(file_ptr);
        if (file_size != -1L) {
            printf("File size: %ld bytes\n", file_size);
        } else {
            printf("Error getting file size.\n");
        }
    } else {
        printf("Error seeking to end of file.\n");
    }

    fclose(file_ptr);
    return 0;
}
```

#### ✅ 3. Simple Binary File Read/Write using `fread` and `fwrite`:
```c
#include <stdio.h>

int main() {
    FILE *file_ptr;
    int numbers[] = {10, 20, 30, 40, 50};
    int read_numbers[5];
    int num_elements = 5;

    // --- Writing to a binary file ---
    file_ptr = fopen("numbers.bin", "wb"); // "wb" for write binary

    if (file_ptr == NULL) {
        printf("Error opening file for writing binary!\n");
        return 1;
    }

    // Write the entire array to the file
    size_t written_count = fwrite(numbers, sizeof(int), num_elements, file_ptr);
    if (written_count == num_elements) {
        printf("Successfully wrote %zu integers to numbers.bin\n", written_count);
    } else {
        printf("Error writing to numbers.bin. Wrote %zu out of %d.\n", written_count, num_elements);
    }

    fclose(file_ptr);

    // --- Reading from a binary file ---
    file_ptr = fopen("numbers.bin", "rb"); // "rb" for read binary

    if (file_ptr == NULL) {
        printf("Error opening file for reading binary!\n");
        return 1;
    }

    // Read the integers from the file into the read_numbers array
    size_t read_count = fread(read_numbers, sizeof(int), num_elements, file_ptr);
    if (read_count == num_elements) {
        printf("Successfully read %zu integers from numbers.bin\n", read_count);
        printf("Read numbers: ");
        for(int i=0; i<num_elements; i++) {
            printf("%d ", read_numbers[i]);
        }
        printf("\n");
    } else {
        printf("Error reading from numbers.bin. Read %zu out of %d.\n", read_count, num_elements);
    }

    fclose(file_ptr);

    return 0;
}
```

#### 💡 Practical Implication:
- These examples show how to use `fseek`, `ftell`, `fread`, and `fwrite` for non-sequential file access and binary data handling.
- Binary file I/O is important for storing data in a compact and efficient format.

#### ⚠️ Common Pitfall:
- Mixing text mode and binary mode operations on the same file stream.
- Incorrectly calculating the size or number of elements when using `fread` and `fwrite`.
- Not checking the return values of file I/O functions to detect errors.

---

This completes the expanded depth notes for all five modules of your course structure. You can now copy and paste this entire block into your Markdown file (`lab_exam_notes.md`).

Let me know if you have any questions about any of these topics or if you're ready to move on to the 41 coding questions! 💪
```
