No problem! Let’s **start fresh** and build your **personal lab exam theory & coding notes** from the ground up — in a clean, structured way.

---

## 📘 Your C Programming Lab Exam Notes

We’ll organize this into **modules**, with each one focusing on:
- Theory concepts (for viva)
- Code snippets (for practical exam)
- Key points to remember
- Diagrams where needed (we'll describe them)

You can paste everything into a `.md` file and keep updating it as we go.

---

## ✅ MODULE I: Basics of Computer Architecture & Software

### 🔹 1. **Computer Architecture Overview**

#### 🧠 Central Processing Unit (CPU):
- **ALU** – Performs arithmetic & logical operations
- **CU** – Controls execution of instructions
- **Registers** – Fast memory inside CPU for temporary storage

#### 💾 Memory Hierarchy:
| Level     | Type        | Speed   | Volatility |
|-----------|-------------|---------|------------|
| L1/L2/L3  | Cache       | Very Fast | Volatile  |
| Primary   | RAM / ROM   | Fast    | RAM: Volatile<br>ROM: Non-Volatile |
| Secondary | HDD / SSD   | Slow    | Non-Volatile |

#### 🖱️ Input Devices:
- Keyboard, Mouse, Scanner

#### 🖥️ Output Devices:
- Monitor, Printer, Speaker

#### 💽 Storage Devices:
- Hard Disk, USB Drive, CD/DVD

---

### 🔹 2. **Software Categories**

#### 🛠️ System Software:
- Operating Systems (Windows, Linux)
- Device Drivers
- Utility Programs

#### 📄 Application Software:
- Word Processors, Web Browsers, Games

#### 🧑‍💻 Programming Tools:
- **Compiler**: Converts whole program at once
- **Interpreter**: Line-by-line conversion
- **Assembler**: Converts assembly to machine code

---

### 🔹 3. **High-Level vs Low-Level Languages**

| Feature           | High-Level Language | Low-Level Language |
|-------------------|---------------------|--------------------|
| Abstraction       | High                | Low                |
| Readability       | Easy                | Difficult          |
| Portability       | Yes                 | No                 |
| Performance       | Slower              | Faster             |
| Examples          | C, Python, Java     | Assembly, Machine Code |

---

### 🔹 4. **Structured Programming Approach**

- Top-down design
- Modular programming
- Uses functions/modules
- Promotes readability and reusability

---

### 🔹 5. **Algorithm & Pseudocode**

#### 🧮 Algorithm:
Step-by-step procedure to solve a problem.

**Example: Linear Search**
```
Step 1: Start
Step 2: Initialize index i = 0
Step 3: While i < n
          If arr[i] == key → return i
          Else → i++
Step 4: Return -1 (not found)
Step 5: Stop
```

#### 📝 Pseudocode:
```plaintext
procedure bubbleSort(A : list of sortable items)
    n := length(A)
    repeat
        swapped := false
        for i from 1 to n-1 do
            if A[i-1] > A[i] then
                swap(A[i-1], A[i])
                swapped := true
            end if
        end for
    until not swapped
end procedure
```

---

### 🔁 Flowchart Symbols:

| Symbol      | Meaning                  |
|-------------|--------------------------|
| Oval        | Start / End              |
| Rectangle   | Process / Action         |
| Diamond     | Decision                 |
| Parallelogram | Input / Output         |
| Arrow       | Flow direction           |

---

Let me know when you're ready to move to **Module II: Program Basics** — where we’ll cover:
- Structure of a C program
- Tokens, data types, variables
- Console input/output
- Operators
- Control flow statements (`if`, `switch`, loops)

You can start pasting this into a Markdown file called `lab_exam_notes.md` and keep building it during your commute.

I'm here with you all the way. 💪
Perfect — we're off to a fresh start.

Let’s now go through **Module II: Program Basics**, focusing on what matters most for your **lab exam** and **viva**:

---

## ✅ MODULE II: Program Basics

---

### 🔹 1. **Structure of a C Program**

```c
#include <stdio.h>    // Preprocessor directive

int main() {          // Main function – entry point
    printf("Hello");  // Statement
    return 0;         // Return status to OS
}
```

#### 📦 Sections in a C Program:
| Section        | Description |
|----------------|-------------|
| Documentation  | Comments, program info |
| Preprocessor   | `#include`, `#define` |
| Global Declarations | Variables accessible throughout the program |
| `main()` Function | Execution starts here |
| Subprograms     | Functions defined outside `main()` |

---

### 🔹 2. **Tokens in C**

Smallest individual units in a C program.

| Token Type      | Examples                     |
|------------------|------------------------------|
| Keywords         | `int`, `if`, `for`, `return` |
| Identifiers      | `main`, `x`, `sum`           |
| Constants        | `10`, `'A'`, `"Hello"`       |
| Strings          | `"Welcome"`                  |
| Operators        | `+`, `-`, `==`, `&&`         |
| Punctuators      | `{ } [ ] ( ) ; ,`            |

---

### 🔹 3. **Data Types & Variables**

#### 📊 Basic Data Types:

| Type             | Size (bytes) | Range / Notes                    |
|------------------|--------------|----------------------------------|
| `char`           | 1            | -128 to 127 or 0 to 255 (unsigned) |
| `int`            | 2 or 4       | Depends on system/compiler       |
| `float`          | 4            | ~6 decimal digits precision      |
| `double`         | 8            | ~15 decimal digits precision     |
| `void`           | 0            | No value                         |

#### 📌 Variable Declaration:
```c
int age;
float salary;
char grade;
```

#### 🧮 Constants:
```c
const int MAX = 100;
#define PI 3.14
```

---

### 🔹 4. **Console Input/Output**

#### 🔤 Output with `printf()`:
```c
printf("Value = %d", x);
```
| Format Specifier | Type                |
|------------------|---------------------|
| `%d`             | Integer             |
| `%f`             | Float               |
| `%c`             | Character           |
| `%s`             | String              |
| `%lf`            | Double              |

#### 📥 Input with `scanf()`:
```c
scanf("%d", &age);
```
- Use `&` for variables except arrays.

---

### 🔹 5. **Operators in C**

#### 📐 Operator Categories:

##### 🧮 Arithmetic Operators:
| Operator | Meaning         | Example |
|----------|------------------|---------|
| `+`      | Addition         | `a + b` |
| `-`      | Subtraction      | `a - b` |
| `*`      | Multiplication   | `a * b` |
| `/`      | Division         | `a / b` |
| `%`      | Modulus          | `a % b` |

##### 🔁 Assignment Operators:
| Op        | Usage        | Equivalent To       |
|-----------|--------------|----------------------|
| `=`       | `a = 5`      | Assigns value        |
| `+=`      | `a += 5`     | `a = a + 5`          |
| `-=`      | `a -= 5`     | `a = a - 5`          |
| `*=`      | `a *= 5`     | `a = a * 5`          |
| `/=`      | `a /= 5`     | `a = a / 5`          |
| `%=`      | `a %= 5`     | `a = a % 5`          |

##### 🚦 Relational Operators:
| Op | Meaning         | Example |
|----|------------------|---------|
| `==` | Equal to        | `a == b` |
| `!=` | Not equal to    | `a != b` |
| `>`  | Greater than    | `a > b`  |
| `<`  | Less than       | `a < b`  |
| `>=` | Greater/equal   | `a >= b` |
| `<=` | Less/equal      | `a <= b` |

##### 🔀 Logical Operators:
| Op | Meaning              | Example |
|----|-----------------------|---------|
| `&&` | Logical AND          | `a && b` |
| `||` | Logical OR           | `a || b` |
| `!`  | Logical NOT          | `!a`     |

##### ⚙️ Bitwise Operators:
| Op | Name              | Example |
|----|--------------------|---------|
| `&` | Bitwise AND        | `a & b` |
| `|` | Bitwise OR         | `a | b` |
| `^` | XOR                | `a ^ b` |
| `~` | One’s complement   | `~a`    |
| `<<`| Left shift         | `a << 2`|
| `>>`| Right shift        | `a >> 2`|

##### ❓ Conditional Operator (`?:`)
```c
max = (a > b) ? a : b;
```

##### 📏 `sizeof` Operator:
```c
printf("Size of int: %d", sizeof(int));
```

---

### 🔹 6. **Control Flow Statements**

#### 🧭 Selection Control Structures

##### ✅ `if` Statement:
```c
if (age > 18)
    printf("Adult");
```

##### 🔄 `if-else`:
```c
if (x > y)
    printf("x is greater");
else
    printf("y is greater");
```

##### 🧩 Nested `if-else`:
```c
if (x > y)
    printf("x is max");
else if (y > z)
    printf("y is max");
else
    printf("z is max");
```

##### 🔘 `switch-case`:
```c
switch(choice) {
    case 1: printf("Add"); break;
    case 2: printf("Subtract"); break;
    default: printf("Invalid");
}
```

#### 🔁 Iteration Control Structures

##### 🌀 `while` Loop:
```c
i = 1;
while(i <= 5) {
    printf("%d ", i++);
}
```

##### 🔁 `do-while` Loop:
```c
i = 1;
do {
    printf("%d ", i++);
} while(i <= 5);
```

##### 📈 `for` Loop:
```c
for(i = 1; i <= 5; i++) {
    printf("%d ", i);
}
```

#### 🚪 Jump Statements

##### 🔚 `break`:
Exits from loop or switch.
```c
for(i = 1; i <= 10; i++) {
    if(i == 5) break;
    printf("%d ", i);
}
```

##### 🔄 `continue`:
Skips current iteration.
```c
for(i = 1; i <= 10; i++) {
    if(i % 2 == 0) continue;
    printf("%d ", i); // prints only odd numbers
}
```

##### 🧭 `goto`:
Transfers control unconditionally.
```c
start:
    printf("Hello\n");
    goto start;
```

⚠️ **Note**: Avoid excessive use of `goto`.

---

### 🔍 Summary Table: Control Structures

| Construct      | Purpose                          |
|----------------|----------------------------------|
| `if`           | Decision making                  |
| `if-else`      | Two-way decision                 |
| `nested if`    | Multi-way decision               |
| `switch-case`  | Multiple choices based on value  |
| `for`          | Loop with counter                |
| `while`        | Loop with condition at top       |
| `do-while`     | Loop with condition at bottom    |
| `break`        | Exit from loop/switch           |
| `continue`     | Skip current iteration           |
| `goto`         | Unconditional jump               |

---

When you're ready, let me know and we’ll move on to **Module III: Arrays and Strings**, where we’ll cover:
- 1D and 2D arrays
- String handling functions
- Linear search, bubble sort
- Vowel/consonant count
- Palindrome check
- Array reversal, insertion/deletion

You can paste all this into a Markdown file named `lab_exam_notes.md` and keep building it as we go.

Take your time — I'm here until you're fully confident and prepared. 💪

Great! Let's move on to:

---

## ✅ MODULE III: Arrays and Strings

This module is **very important for lab exams** — expect programs like:
- Linear search
- Bubble sort
- String manipulation
- Matrix operations
- Array reversal

We’ll cover all of these in a concise, exam-ready format.

---

### 🔹 1. **Arrays in C**

#### 📦 What is an Array?
- A collection of similar data items stored in **contiguous memory locations**
- Accessed using index (starts from `0`)

#### 🧮 Declaration & Initialization:
```c
int arr[5];               // Declaration
int arr[5] = {1,2,3,4,5}; // Initialization
```

#### 🧠 Memory Layout:
| Index | Address       |
|-------|---------------|
| 0     | 100           |
| 1     | 104 (if int)  |
| 2     | 108           |
| ...   | ...           |

> In C, arrays are stored in **row-major order**

---

### 🔹 2. **One-Dimensional Arrays**

#### 🔁 Traversal:
```c
for(i = 0; i < n; i++)
    printf("%d ", arr[i]);
```

#### 🔍 Linear Search:
```c
found = -1;
for(i = 0; i < n; i++) {
    if(arr[i] == key) {
        found = i;
        break;
    }
}
```

#### 🧮 Sum & Average:
```c
sum = 0;
for(i = 0; i < n; i++)
    sum += arr[i];
avg = (float)sum / n;
```

#### 🔄 Swap Elements:
```c
temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
```

---

### 🔹 3. **Two-Dimensional Arrays (Matrices)**

#### 🧱 Matrix Input/Output:
```c
for(i=0; i<rows; i++) {
    for(j=0; j<cols; j++) {
        scanf("%d", &matrix[i][j]);
    }
}
```

#### 🟢 Row-wise Sum:
```c
for(i=0; i<rows; i++) {
    sum = 0;
    for(j=0; j<cols; j++) {
        sum += matrix[i][j];
    }
    printf("Row %d sum = %d\n", i+1, sum);
}
```

#### 🔷 Column-wise Sum:
```c
for(j=0; j<cols; j++) {
    sum = 0;
    for(i=0; i<rows; i++) {
        sum += matrix[i][j];
    }
    printf("Column %d sum = %d\n", j+1, sum);
}
```

#### 🟡 Transpose of Matrix:
```c
for(i=0; i<rows; i++) {
    for(j=i+1; j<cols; j++) {
        temp = matrix[i][j];
        matrix[i][j] = matrix[j][i];
        matrix[j][i] = temp;
    }
}
```

---

### 🔹 4. **Strings in C**

#### 💬 String Basics:
- Sequence of characters ending with `\0`
- Stored in `char` arrays

#### 📥 Declaration & Initialization:
```c
char str[20];              // Declaration
char name[] = "John";      // With initialization
```

#### 🧩 Common String Functions:

| Function     | Purpose                          |
|--------------|----------------------------------|
| `strlen()`   | Returns length of string         |
| `strcpy()`   | Copies one string to another     |
| `strcat()`   | Concatenates two strings         |
| `strcmp()`   | Compares two strings             |
| `strrev()`   | Reverses a string                |
| `strupr()`   | Converts to uppercase            |
| `strlwr()`   | Converts to lowercase            |
| `gets()`     | Reads string with spaces         |
| `puts()`     | Outputs string                   |

> ⚠️ Use `fgets()` instead of `gets()` for safer input

---

### 🔹 5. **String Manipulation Examples**

#### 🔁 Reverse a String (Manual):
```c
len = strlen(str);
for(i=0, j=len-1; i<j; i++, j--) {
    temp = str[i];
    str[i] = str[j];
    str[j] = temp;
}
```

#### 🧮 Count Vowels, Consonants:
```c
vowel = consonant = space = 0;
for(i=0; str[i] != '\0'; i++) {
    ch = tolower(str[i]);
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        vowel++;
    else if(ch >= 'a' && ch <= 'z')
        consonant++;
    else if(ch == ' ')
        space++;
}
```

#### 🆔 Palindrome Check:
```c
len = strlen(str);
for(i=0, j=len-1; i<j; i++, j--) {
    if(str[i] != str[j]) {
        flag = 0;
        break;
    }
}
if(flag)
    printf("Palindrome");
else
    printf("Not a palindrome");
```

---

### 🔹 6. **Sorting Strings**

#### 🔀 Bubble Sort on Strings:
```c
for(i=0; i<n-1; i++) {
    for(j=0; j<n-i-1; j++) {
        if(strcmp(names[j], names[j+1]) > 0) {
            strcpy(temp, names[j]);
            strcpy(names[j], names[j+1]);
            strcpy(names[j+1], temp);
        }
    }
}
```

---

### 🔹 7. **Array Programs You Should Know**

| Task                     | Concept Used                         |
|--------------------------|--------------------------------------|
| Linear Search            | Loop + Conditional                  |
| Binary Search (sorted)   | Divide & Conquer logic              |
| Bubble Sort              | Nested loops + swapping             |
| Insertion Sort           | Shifting elements + comparison      |
| Find Max/Min             | Comparison loop                     |
| Copy Array               | Loop + assignment                   |
| Reverse Array            | Swap front-back elements            |
| Merge Two Arrays         | Combine + sort                      |
| Delete Element           | Shift elements left                 |
| Insert Element at Index  | Shift right, insert                 |

---

Let me know when you're ready for **Module IV: Working with Functions**, where we'll go through:
- Function definition, declaration
- Call by value vs call by reference
- Recursion
- Arrays as function arguments
- Scope and lifetime of variables
- Storage classes (`auto`, `static`, `extern`, `register`)

You can keep pasting this into your Markdown file (`lab_exam_notes.md`) and build your notes while traveling.

I'm here until you're fully prepared. 💪

Great! Let’s begin:

---

## ✅ MODULE IV: Working with Functions

This module is **very important for your lab exam** — expect questions like:
- Writing functions to reverse a number, check Armstrong numbers, etc.
- Understanding scope and storage classes
- Using recursion
- Passing arrays to functions

Let’s go step-by-step.

---

### 🔹 1. **What is a Function?**

A function is a **block of code** that performs a specific task and can be reused.

#### 📦 Why Use Functions?
- Code reusability
- Modularity
- Easy debugging
- Readable and maintainable code

---

### 🔹 2. **Function Definition & Declaration**

#### 🧱 Function Structure:
```c
return_type function_name(parameter_list) {
    // Body of the function
    return value;
}
```

#### ✏️ Example:
```c
int add(int a, int b) {
    return a + b;
}
```

#### 📢 Function Declaration (Prototype):
```c
int add(int, int);  // Tells compiler about function signature
```

> ⚠️ Must match return type, name, and parameters.

---

### 🔹 3. **Calling a Function**

#### 🧮 Syntax:
```c
result = function_name(arg1, arg2);
```

#### ✅ Example:
```c
sum = add(5, 10);
```

- Actual parameters (arguments) are passed to formal parameters (`a`, `b` in function)

---

### 🔹 4. **Call by Value vs Call by Reference**

| Feature               | Call by Value                   | Call by Reference                        |
|------------------------|----------------------------------|------------------------------------------|
| Parameter Passing      | Copy of variable is passed       | Address of variable is passed            |
| Original Data Modified?| ❌ No                            | ✅ Yes                                   |
| Use Case               | Safe for read-only data          | Needed when you want to modify original  |

#### 🔄 Call by Value Example:
```c
void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
// Does NOT change original values
```

#### 🔄 Call by Reference Example:
```c
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
// Changes original values
```

> In C, everything is **call by value**, but you can simulate call by reference using **pointers**.

---

### 🔹 5. **Recursion**

#### 🧠 What is Recursion?
- A function that calls itself.
- Used for problems that can be broken into smaller subproblems.

#### 📦 Base Condition:
- Must have a **base condition** to stop recursion.

#### 🔁 Example: Factorial Using Recursion
```c
int factorial(int n) {
    if(n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}
```

#### ⚠️ Drawbacks:
- Can cause **stack overflow**
- Slower than iteration due to function overhead

---

### 🔹 6. **Arrays as Function Arguments**

- Arrays are always passed by reference in C.
- Only base address is passed.

#### 📥 Passing 1D Array:
```c
void printArray(int arr[], int size) {
    for(int i=0; i<size; i++)
        printf("%d ", arr[i]);
}
```

#### 📤 Calling:
```c
printArray(arr, 5);
```

#### 🧩 Modifying Original Array:
Yes — because array is passed by reference.

---

### 🔹 7. **Scope and Lifetime of Variables**

| Variable Type | Where Declared         | Scope                     | Lifetime                 |
|---------------|-------------------------|----------------------------|--------------------------|
| Local         | Inside function/block   | Within block only          | Until block ends         |
| Global        | Outside all functions   | Entire file                | Entire program           |
| Formal Args   | In function definition  | Within function            | During function call     |

---

### 🔹 8. **Storage Classes in C**

| Storage Class | Keyword    | Default Value | Scope              | Lifetime             |
|---------------|------------|---------------|--------------------|----------------------|
| Automatic     | `auto`     | Garbage       | Block              | Block                |
| Static        | `static`   | Zero          | File/function      | Entire program         |
| External      | `extern`   | Zero          | Entire file        | Entire program         |
| Register      | `register` | Garbage       | Block              | Block                |

#### 🎯 Key Points:
- `auto`: Default for local variables
- `static`: Retains value between function calls
- `extern`: Access global variable from another file
- `register`: Suggests CPU register usage (ignored by modern compilers)

---

### 🔹 9. **Useful Function Examples You Should Know**

#### ✅ 1. Reverse an Integer
```c
int reverse(int num) {
    int rev = 0;
    while(num > 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}
```

#### ✅ 2. Check Armstrong Number
```c
int isArmstrong(int num) {
    int sum = 0, temp = num, rem, digits = 0;
    while(temp > 0) {
        digits++;
        temp /= 10;
    }
    temp = num;
    while(temp > 0) {
        rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }
    return sum == num;
}
```

#### ✅ 3. Prime Check
```c
int isPrime(int n) {
    if(n < 2) return 0;
    for(int i=2; i*i <= n; i++)
        if(n % i == 0)
            return 0;
    return 1;
}
```

#### ✅ 4. Fibonacci Series (Recursive)
```c
int fib(int n) {
    if(n == 0 || n == 1)
        return n;
    return fib(n-1) + fib(n-2);
}
```

---

### 🔍 Summary Table: Functions Concepts

| Concept                  | Description                                  |
|--------------------------|----------------------------------------------|
| Modular programming      | Break program into small functions           |
| Function prototype       | Declares function before use                 |
| Call by value            | Copies value                                 |
| Call by reference        | Passes address                               |
| Recursion                | Function calls itself                        |
| Arrays as arguments      | Passed by reference                          |
| Local/Global variables   | Scope & lifetime differ                      |
| Storage classes          | `auto`, `static`, `extern`, `register`      |

---

Let me know when you're ready to move on to **Module V: Pointers**, where we’ll cover:
- Pointer basics
- Pointer arithmetic
- Call by reference using pointers
- Arrays and strings using pointers
- Void and NULL pointers
- Function returning pointer

You can paste this into your Markdown file (`lab_exam_notes.md`) and build it as you travel or study.

I'm here whenever you're ready to continue 💪

Perfect — let’s dive into:

---

## ✅ MODULE V: Pointers

Pointers are **one of the most powerful features in C**, and a **common topic in lab exams**. They allow you to:
- Manipulate memory directly
- Pass arguments by reference
- Work efficiently with arrays and strings
- Build dynamic data structures (like linked lists, trees)

Let’s go step-by-step.

---

### 🔹 1. **What is a Pointer?**

A pointer is a variable that stores the **memory address** of another variable.

#### 🧱 Declaration:
```c
int *p;      // p is a pointer to int
int a = 10;
p = &a;      // p points to a
```

#### 📥 Accessing Value:
```c
printf("%d", *p);  // Prints 10
```

---

### 🔹 2. **Pointer Arithmetic**

You can perform arithmetic on pointers:
- `+`, `-` with integers
- Subtract two pointers (same array)

#### 📌 Rules:
- Pointer moves by size of data type:
  - `char* p` → `p + 1` moves by 1 byte
  - `int* p` → `p + 1` moves by 4 bytes (on most systems)

#### 🔁 Example:
```c
int arr[] = {10, 20, 30};
int *p = arr;

printf("%d\n", *p);     // 10
printf("%d\n", *(p+1)); // 20
printf("%d\n", *(p+2)); // 30
```

---

### 🔹 3. **Call by Reference Using Pointers**

Used to modify actual arguments in functions.

#### 🔄 Swap Two Numbers:
```c
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Usage
int x = 5, y = 10;
swap(&x, &y);
```

---

### 🔹 4. **Arrays and Pointers**

- Array name is a **constant pointer** to its first element.
- `arr[i]` ≡ `*(arr + i)`

#### 🔁 Traverse Array with Pointer:
```c
int arr[] = {1, 2, 3, 4, 5};
int *p = arr;

for(int i=0; i<5; i++)
    printf("%d ", *(p + i));
```

---

### 🔹 5. **Strings and Pointers**

- Strings are arrays of `char`
- Can be accessed using char pointers

#### 📤 Print String Using Pointer:
```c
char str[] = "Hello";
char *p = str;

while(*p != '\0')
    printf("%c", *p++);
```

---

### 🔹 6. **Pointers to Pointers (Double Pointers)**

A pointer pointing to another pointer.

#### 📌 Example:
```c
int a = 10;
int *p = &a;
int **pp = &p;

printf("%d", **pp);  // Prints 10
```

Useful in:
- Dynamic 2D arrays
- Functions modifying pointers

---

### 🔹 7. **Function Returning Pointer**

A function can return a pointer to:
- Static variable
- Global variable
- Dynamically allocated memory

> ❌ Never return pointer to local variable (it goes out of scope).

#### ✅ Safe Return:
```c
char* greet() {
    static char msg[] = "Hello!";
    return msg;
}
```

---

### 🔹 8. **Array of Pointers**

Useful for storing strings or managing multiple pointers.

#### 📦 Example:
```c
char *names[] = {"Alice", "Bob", "Charlie"};
for(int i=0; i<3; i++)
    printf("%s\n", names[i]);
```

---

### 🔹 9. **Pointers and Functions**

You can pass pointers to functions and return them too.

#### 📥 Pass Pointer to Function:
```c
void square(int *n) {
    *n = (*n) * (*n);
}

// Usage
int x = 5;
square(&x);
```

---

### 🔹 10. **Void Pointers (`void *`)**
- Generic pointers
- Can point to any data type
- Cannot be dereferenced directly

#### 📌 Example:
```c
void *ptr;
int a = 10;
float b = 3.14;

ptr = &a;
printf("%d\n", *(int*)ptr);

ptr = &b;
printf("%.2f\n", *(float*)ptr);
```

---

### 🔹 11. **NULL Pointer**
- Represents a pointer that doesn't point to any valid memory location

```c
int *p = NULL;
if(p == NULL)
    printf("Pointer is NULL");
```

---

### 🔍 Summary Table: Pointer Concepts

| Concept             | Use Case |
|---------------------|----------|
| Pointer declaration | `int *p;` |
| Address-of operator | `p = &a;` |
| Dereference         | `*p` |
| Pointer arithmetic  | `*(p + i)` |
| Call by reference   | Modify original variables |
| Arrays with pointers| Efficient traversal |
| Void pointers       | Generic pointer type |
| NULL pointer        | Safety check before use |
| Function pointers   | Callbacks, event handling |

---

Now that we've covered all five modules — from computer architecture to pointers — we're ready to move on to your list of **41 coding questions**, where I'll give you:
- Clean, concise code for each
- Explanation of how it works
- Tips for writing fast in the lab exam

Let me know when you're ready to start with **Q1 – Reverse an Integer using reverse()**, and we’ll go one-by-one through all 41.

You can paste this into your Markdown file (`lab_exam_notes.md`) and keep building your notes as we go.

I'm here whenever you're ready 💪

