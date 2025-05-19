## Q1). Write a C program to reverse an integer using a function reverse().

```c
#include <stdio.h>

int reverse(int num) {
    int reversed_num = 0;
    while (num != 0) {
        int digit = num % 10;
        reversed_num = reversed_num * 10 + digit;
        num /= 10;
    }
    return reversed_num;
}

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    printf("Reversed number: %d\n", reverse(number));
    return 0;
}
```

---

## Q2). Write a program in C to check whether a four digit integer is Armstrong number or not using a function armstrg().

```c
#include <stdio.h>
#include <math.h>

int armstrg(int num) {
    int original_num = num;
    int sum_of_powers = 0;
    while (num != 0) {
        int digit = num % 10;
        sum_of_powers += pow(digit, 4);
        num /= 10;
    }
    if (sum_of_powers == original_num) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int number;
    printf("Enter a 4-digit number: ");
    scanf("%d", &number);
    if (armstrg(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }
    return 0;
}
```

---

## Q3). Write a program in C to print all prime numbers between 10-50. Use function to check number is prime or not.

```c
#include <stdio.h>

int isPrime(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    printf("Prime numbers between 10 and 50:\n");
    for (int i = 10; i <= 50; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
```

---

## Q4). Write a program in C to print the Fibonacci series using iteration.

```c
#include <stdio.h>

int main() {
    int n, a = 0, b = 1, next_term;

    printf("How many terms? ");
    scanf("%d", &n);

    printf("Fibonacci series: ");

    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        next_term = a + b;
        a = b;
        b = next_term;
    }
    printf("\n");
    return 0;
}
```

---

## Q5). Write a program in C to print the Fibonacci series using recursion.

```c
#include <stdio.h>

int fib(int n) {
    if (n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    } else {
        return fib(n - 1) + fib(n - 2);
    }
}

int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci series: ");
    for (int i = 1; i <= n; i++) {
        printf("%d ", fib(i));
    }
    printf("\n");
    return 0;
}
```

---

## Q6). Write a program in C to check whether a number is palindrome or not using iteration.

```c
#include <stdio.h>

int isPalindrome(int num) {
    int original_num = num;
    int reversed_num = 0;
    while (num != 0) {
        int digit = num % 10;
        reversed_num = reversed_num * 10 + digit;
        num /= 10;
    }
    if (original_num == reversed_num) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (isPalindrome(number)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }
    return 0;
}
```

---

## Q7). C program to find first two largest elements of an array

```c
#include <stdio.h>

int main() {
    int arr[10];
    int first_largest = 0;
    int second_largest = 0;

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (arr[i] > first_largest) {
            second_largest = first_largest;
            first_largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != first_largest) {
            second_largest = arr[i];
        }
    }

    printf("Largest: %d, Second Largest: %d\n", first_largest, second_largest);
    return 0;
}
```

---

## Q8). Accept basic pay. Calculate DA at 8% and PF at 9%. (net pay=basic pay + da - pf). If net pay is more than Rs.10000, then a deduction of 2% on the net pay else no deduction. Calculate and print the final pay using a C program.

```c
#include <stdio.h>

int main() {
    float basic_pay, da, pf, net_pay, final_pay;

    printf("Enter Basic Pay: ");
    scanf("%f", &basic_pay);

    da = 0.08 * basic_pay;
    pf = 0.09 * basic_pay;
    net_pay = basic_pay + da - pf;

    if (net_pay > 10000) {
        final_pay = net_pay - (0.02 * net_pay);
    } else {
        final_pay = net_pay;
    }

    printf("Final Pay: %.2f\n", final_pay);
    return 0;
}
```

---

## 9). Program to count occurrence of a digit in an array. Use function to read the array.

```c
#include <stdio.h>

void readArray(int arr[], int size) {
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

int countDigit(int arr[], int size, int digit) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == digit) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[10];
    int digit_to_count;

    readArray(arr, 10);

    printf("Enter digit to count: ");
    scanf("%d", &digit_to_count);

    printf("Digit %d occurs %d times.\n", digit_to_count, countDigit(arr, 10, digit_to_count));

    return 0;
}
```

---

## 10). Write a C program to print the following pattern

```
*
* *
* * *
* * * *
```

```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
```

---

## 11). Write aC program to print the following pattern

```
1
1 2
1 2 3
1 2 3 4
```

```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
```

---

## 12). Write a C program to arrange the given array in descending order using pointers.

```c
#include <stdio.h>

int main() {
    int arr[5];
    int *ptr = arr;

    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", ptr + i);
    }

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (*(ptr + i) < *(ptr + j)) {
                int temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }

    printf("Sorted in descending order:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    return 0;
}
```

---

## 13). Write a C program to print Diagonal elements of a matrix. Use function to read the matrix.

```c
#include <stdio.h>

void readMatrix(int mat[10][10], int size) {
    printf("Enter %d x %d matrix:\n", size, size);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

int main() {
    int mat[10][10];
    int size;

    printf("Enter size of square matrix: ");
    scanf("%d", &size);

    readMatrix(mat, size);

    printf("Diagonal elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", mat[i][i]);
    }
    printf("\n");

    return 0;
}
```

---

## 14). Write a C program to find Smallest element of an array using pointer.

```c
#include <stdio.h>

int main() {
    int arr[5];
    int *ptr = arr;
    int smallest;

    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", ptr + i);
    }

    smallest = *ptr;
    for (int i = 1; i < 5; i++) {
        if (*(ptr + i) < smallest) {
            smallest = *(ptr + i);
        }
    }

    printf("Smallest element: %d\n", smallest);
    return 0;
}
```

---

## 15). Write a C program to Check whether given matrix is identity matrix or not. Use function to read the matrix.

```c
#include <stdio.h>

void readMatrix(int mat[10][10], int size) {
    printf("Enter %d x %d matrix:\n", size, size);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

int isIdentity(int mat[10][10], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j && mat[i][j] != 1) {
                return 0;
            }
            if (i != j && mat[i][j] != 0) {
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    int mat[10][10];
    int size;

    printf("Enter size of matrix: ");
    scanf("%d", &size);

    readMatrix(mat, size);

    if (isIdentity(mat, size)) {
        printf("It is an identity matrix.\n");
    } else {
        printf("Not an identity matrix.\n");
    }

    return 0;
}
```

---

## 16). Write a C program to find the average of elements in each row of the matrix. Use function to read the matrix.

```c
#include <stdio.h>

void readMatrix(int mat[10][10], int rows, int cols) {
    printf("Enter matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

int main() {
    int mat[10][10];
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    readMatrix(mat, rows, cols);

    for (int i = 0; i < rows; i++) {
        float sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += mat[i][j];
        }
        printf("Average of row %d: %.2f\n", i + 1, sum / cols);
    }

    return 0;
}
```

---

## 17). Read two strings (each one ending with a $ symbol), store them in arrays and concatenate them without using library functions.

```c
#include <stdio.h>

int main() {
    char str1[100], str2[100];

    printf("Enter first string ending with $: ");
    scanf("%[^$]s", str1);
    getchar();

    printf("Enter second string ending with $: ");
    scanf("%[^$]s", str2);
    getchar();

    int i = 0, j = 0;
    while (str1[i] != '\0') i++;
    while (str2[j] != '\0') {
        str1[i++] = str2[j++];
    }
    str1[i] = '\0';

    printf("Concatenated String: %s\n", str1);
    return 0;
}
```

---

## 18). Read a string (ending with a $ symbol), store it in an array and count the number of vowels, consonants and spaces in it.

```c
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, spaces = 0;

    printf("Enter string ending with $: ");
    scanf("%[^$]s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        } else if (ch >= 'a' && ch <= 'z') {
            consonants++;
        } else if (ch == ' ') {
            spaces++;
        }
    }

    printf("Vowels: %d\nConsonants: %d\nSpaces: %d\n", vowels, consonants, spaces);
    return 0;
}
```

---

## 19). Evaluate the arithmetic expression ((a -b / c * d + e) * (f+g)) and display its solution.Read the values of the variables from the user through console. Read a matrix of size equal to the solution and dsplay its transpose

```c
#include <stdio.h>

int main() {
    int a, b, c, d, e, f, g, result;
    printf("Enter values for a, b, c, d, e, f, g: ");
    scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g);

    result = ((a - b / c * d + e) * (f + g));
    printf("Result of expression: %d\n", result);

    int mat[result][result], transpose[result][result];

    printf("Enter matrix of size %dx%d:\n", result, result);
    for (int i = 0; i < result; i++) {
        for (int j = 0; j < result; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < result; i++) {
        for (int j = 0; j < result; j++) {
            transpose[j][i] = mat[i][j];
        }
    }

    printf("Transpose of matrix:\n");
    for (int i = 0; i < result; i++) {
        for (int j = 0; j < result; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
```

---

## 20). Input the name of the item, quantity and the price and calculate the net amount based on purchase price.

```
Amount purchased   Discount
Less than 3000     10%
else               12%
```

```c
#include <stdio.h>

int main() {
    char name[50];
    int qty;
    float price, total, discount;

    printf("Enter item name: ");
    scanf("%s", name);
    printf("Enter quantity: ");
    scanf("%d", &qty);
    printf("Enter price per unit: ");
    scanf("%f", &price);

    total = qty * price;

    if (total < 3000) {
        discount = 0.10 * total;
    } else {
        discount = 0.12 * total;
    }

    printf("Net amount after discount: %.2f\n", total - discount);
    return 0;
}
```

---

## 21). Write a menu driven program to find the sum, difference and transpose of given matrices.

```c
#include <stdio.h>

void readMatrix(int mat[10][10], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void printMatrix(int mat[10][10], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[10][10], mat2[10][10], res[10][10];
    int r, c, choice;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix 1:\n");
    readMatrix(mat1, r, c);

    printf("Enter matrix 2:\n");
    readMatrix(mat2, r, c);

    do {
        printf("\n--- MENU ---\n");
        printf("1. Sum\n2. Difference\n3. Transpose\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                for (int i = 0; i < r; i++) {
                    for (int j = 0; j < c; j++) {
                        res[i][j] = mat1[i][j] + mat2[i][j];
                    }
                }
                printf("Sum:\n");
                printMatrix(res, r, c);
                break;

            case 2:
                for (int i = 0; i < r; i++) {
                    for (int j = 0; j < c; j++) {
                        res[i][j] = mat1[i][j] - mat2[i][j];
                    }
                }
                printf("Difference:\n");
                printMatrix(res, r, c);
                break;

            case 3:
                for (int i = 0; i < r; i++) {
                    for (int j = 0; j < c; j++) {
                        res[j][i] = mat1[i][j];
                    }
                }
                printf("Transpose of matrix 1:\n");
                printMatrix(res, c, r);
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 4);

    return 0;
}
```

---

## 22). Write a C program to check if integer entered by user is positive or not. If integer is positive then print the reverse of the number.

```c
#include <stdio.h>

int reverse(int num) {
    int reversed_num = 0;
    while (num != 0) {
        int digit = num % 10;
        reversed_num = reversed_num * 10 + digit;
        num /= 10;
    }
    return reversed_num;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("Reverse of %d is %d\n", number, reverse(number));
    } else {
        printf("Number is not positive.\n");
    }

    return 0;
}
```

---

## 23). Write a C program to read matrix A (MXN) and find the Sum of elements of each of N columns. Use function to read the matrix.

```c
#include <stdio.h>

void readMatrix(int mat[10][10], int r, int c) {
    printf("Enter matrix (%d x %d):\n", r, c);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

int main() {
    int mat[10][10];
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    readMatrix(mat, rows, cols);

    int sum;
    for (int j = 0; j < cols; j++) {
        sum = 0;
        for (int i = 0; i < rows; i++) {
            sum += mat[i][j];
        }
        printf("Sum of column %d: %d\n", j+1, sum);
    }

    return 0;
}
```

---

## 24). Write a C program to read matrix A (MXN) and find the sum of all elements of the matrix. Use function to read the matrix.

```c
#include <stdio.h>

void readMatrix(int mat[10][10], int r, int c) {
    printf("Enter matrix (%d x %d):\n", r, c);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

int main() {
    int mat[10][10];
    int rows, cols, total_sum = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    readMatrix(mat, rows, cols);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            total_sum += mat[i][j];
        }
    }

    printf("Total sum of all elements: %d\n", total_sum);
    return 0;
}
```

---

## 25). Write a well-structured C program to read two integer numbers n and r. Write a function to calculate factorial of a number. Using the function calculate,

i) n!/((n-r)!)

```c
#include <stdio.h>

long factorial(int n) {
    long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n, r;
    printf("Enter values of n and r: ");
    scanf("%d %d", &n, &r);

    long result = factorial(n) / factorial(n - r);
    printf("Result: %ld\n", result);
    return 0;
}
```

---

## 26). Write a well-structured C program to read two integer numbers n and r. Write a function to calculate factorial of a number. Using the function calculate,

i) n!/(n!(n-r)!)

```c
#include <stdio.h>

long factorial(int n) {
    long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n, r;
    printf("Enter values of n and r: ");
    scanf("%d %d", &n, &r);

    long result = factorial(n) / (factorial(n) * factorial(n - r));
    printf("Result: %ld\n", result);
    return 0;
}
```

---

## 27). Write a well-structured C program to input N numbers, conduct a linear search for a given key number and report success or failure.

```c
#include <stdio.h>

int main() {
    int n, arr[100], key;

    printf("How many numbers? ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter key to search: ");
    scanf("%d", &key);

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Key found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Key not found.\n");
    }

    return 0;
}
```

---

## 28). Write a well-structured C program to input 10 names each of length at least 8 characters. Sort them in alphabetical order.

```c
#include <stdio.h>
#include <string.h>

int main() {
    char names[10][20], temp[20];

    printf("Enter 10 names (each at least 8 characters):\n");
    for (int i = 0; i < 10; i++) {
        scanf("%s", names[i]);
    }

    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("Sorted names:\n");
    for (int i = 0; i < 10; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
```

---

## 29). 22. Write a well-structured C program to accept a television scrolling advertisement message and compute the bill. If there are less than 50 characters (including space), then each character is charged *50 and if there are more than 50 characters then the advertisement charge will be ₹500 plus ₹70 for each extra character.

```c
#include <stdio.h>
#include <string.h>

int main() {
    char msg[200];
    int len;

    printf("Enter advertisement message: ");
    scanf(" %[^\n]", msg);

    len = strlen(msg);

    if (len <= 50) {
        printf("Bill: ₹%d\n", len * 50);
    } else {
        printf("Bill: ₹%d\n", 500 + (len - 50) * 70);
    }

    return 0;
}
```

---

## 30). Write a well-structured C program to accept 10 integers (+ve. -ve, zero). Find the sum of negative numbers, sum of positive numbers and print them. Also, find the average of all numbers and count of numbers above average and below average.

```c
#include <stdio.h>

int main() {
    int nums[10], posSum = 0, negSum = 0, count = 0;
    float avg, total = 0;

    printf("Enter 10 integers (+ve, -ve or zero):\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &nums[i]);
        total += nums[i];
        if (nums[i] > 0) {
            posSum += nums[i];
        } else if (nums[i] < 0) {
            negSum += nums[i];
        }
    }

    avg = total / 10;
    int above = 0, below = 0;
    for (int i = 0; i < 10; i++) {
        if (nums[i] > avg) {
            above++;
        } else if (nums[i] < avg) {
            below++;
        }
    }

    printf("Positive sum: %d\nNegative sum: %d\nAverage: %.2f\nAbove average: %d\nBelow average: %d\n",
           posSum, negSum, avg, above, below);

    return 0;
}
```

---

## 31). Write a well-structured C program to accept a matrix and interchange any two rows and columns of a matrix.

```c
#include <stdio.h>

void readMatrix(int mat[10][10], int r, int c) {
    printf("Enter matrix (%d x %d):\n", r, c);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void printMatrix(int mat[10][10], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat[10][10];
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    readMatrix(mat, rows, cols);

    int row1, row2;
    printf("Enter two row indices to swap (0-based): ");
    scanf("%d %d", &row1, &row2);

    for (int j = 0; j < cols; j++) {
        int temp = mat[row1][j];
        mat[row1][j] = mat[row2][j];
        mat[row2][j] = temp;
    }

    int col1, col2;
    printf("Enter two column indices to swap (0-based): ");
    scanf("%d %d", &col1, &col2);

    for (int i = 0; i < rows; i++) {
        int temp = mat[i][col1];
        mat[i][col1] = mat[i][col2];
        mat[i][col2] = temp;
    }

    printf("Matrix after swapping:\n");
    printMatrix(mat, rows, cols);

    return 0;
}
```

---

## 32).Write a well-structured C program to accept 2 positive integers and find all prime numbers between them using a function, isprime(), which returns 1 if the number is prime, otherwise, returns zero.

```c
#include <stdio.h>

int isprime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int a, b;

    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    printf("Prime numbers between %d and %d are:\n", a, b);
    for (int i = a; i <= b; i++) {
        if (isprime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
```

---

## 33). Write a well-structured C program to accept a one-dimensional array of integers and sort them in ascending order using function.

```c
#include <stdio.h>

void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int arr[5];

    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    sortArray(arr, 5);

    printf("Sorted array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
```

---

## 34). Write a well-structured C program to calculate the sum of following series using function.

e = 1 - x/1! + x²/2! - x³/3! + ...

```c
#include <stdio.h>
#include <math.h>

double factorial(int n) {
    double fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

double series_sum(double x, int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        double term = pow(-1, i) * pow(x, i) / factorial(i);
        sum += term;
    }
    return sum;
}

int main() {
    double x;
    int n;

    printf("Enter value of x: ");
    scanf("%lf", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Sum of series: %.6f\n", series_sum(x, n));
    return 0;
}
```

---

## 35). Write a well-structured C program to accept a list of N number of students with their names and roll numbers and sort it in alphabetical order.

```c
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
};

int main() {
    struct Student s[5], temp;

    printf("Enter 5 student records (name and roll number):\n");
    for (int i = 0; i < 5; i++) {
        scanf("%s %d", s[i].name, &s[i].roll);
    }

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(s[i].name, s[j].name) > 0) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("Students sorted alphabetically:\n");
    for (int i = 0; i < 5; i++) {
        printf("Name: %s, Roll: %d\n", s[i].name, s[i].roll);
    }

    return 0;
}
```

---

## 36). Write a well-structured C program to accept an array and to interchange its 3rd element with the 4th element and finally prints the resultant array using function.

```c
#include <stdio.h>

void interchange(int arr[], int size) {
    if (size >= 4) {
        int temp = arr[2];
        arr[2] = arr[3];
        arr[3] = temp;
    } else {
        printf("Array has less than 4 elements.\n");
    }
}

int main() {
    int arr[10];

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    interchange(arr, 10);

    printf("Array after interchange:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
```

---

## 37). Write a well-structured C program: to read a series of integer numbers. Read this numbers and then write all odd numbers to an array named ODD and all even numbers to an array EVEN. Use function to check even or odd.

```c
#include <stdio.h>

int isEven(int n) {
    return n % 2 == 0;
}

int main() {
    int num, odd[10], even[10], o = 0, e = 0;

    printf("Enter integers (enter negative to stop):\n");
    while (1) {
        scanf("%d", &num);
        if (num < 0) break;
        if (isEven(num)) {
            even[e++] = num;
        } else {
            odd[o++] = num;
        }
    }

    printf("Odd numbers: ");
    for (int i = 0; i < o; i++) printf("%d ", odd[i]);
    printf("\nEven numbers: ");
    for (int i = 0; i < e; i++) printf("%d ", even[i]);
    printf("\n");

    return 0;
}
```

---

## 38). Write a well-structured C program to calculate the value of sin(x) for different values of x in degrees, using a function

Sin(x) = x - x³/3! + x⁵/5! - x⁷/7! + ...

```c
#include <stdio.h>
#include <math.h>

double factorial(int n) {
    double fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

double sin_series(double x, int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        int exponent = 2 * i + 1;
        double term = pow(-1, i) * pow(x, exponent) / factorial(exponent);
        sum += term;
    }
    return sum;
}

int main() {
    double x_degrees, x_radians;
    int n;

    printf("Enter angle in degrees: ");
    scanf("%lf", &x_degrees);

    x_radians = x_degrees * M_PI / 180;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    double result = sin_series(x_radians, n);
    printf("Approximate value of sin(%.2f°) = %.6f\n", x_degrees, result);
    return 0;
}
```

---

## 39). Write a well-structured C program to calculate the value of cos(x) for different values of x in degrees, using a function

cos(x) = 1 - x²/2! + x⁴/4! - x⁶/6! + ...

```c
#include <stdio.h>
#include <math.h>

double factorial(int n) {
    double fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

double cos_series(double x, int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        int exponent = 2 * i;
        double term = pow(-1, i) * pow(x, exponent) / factorial(exponent);
        sum += term;
    }
    return sum;
}

int main() {
    double x_degrees, x_radians;
    int n;

    printf("Enter angle in degrees: ");
    scanf("%lf", &x_degrees);

    x_radians = x_degrees * M_PI / 180;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    double result = cos_series(x_radians, n);
    printf("Approximate value of cos(%.2f°) = %.6f\n", x_degrees, result);
    return 0;
}
```

---

## 40). Write a well-structured C program to generate prime numbers up to an integer N. Print also the number of prime numbers.

```c
#include <stdio.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n, count = 0;

    printf("Enter upper limit: ");
    scanf("%d", &n);

    printf("Prime numbers up to %d:\n", n);
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
            count++;
        }
    }

    printf("\nTotal primes: %d\n", count);
    return 0;
}
```

---

## 41).Write a well-structured C program to input N followed by N non-repeated numbers (real or int), sort the numbers in ascending order using bubble sort, conduct a search for a given number and report success or failure. In case of success report number of occurrences

```c
#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int linearSearch(int arr[], int n, int key) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            count++;
        }
    }
    return count;
}

int main() {
    int n, arr[100], key;

    printf("How many numbers? ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);

    printf("Enter number to search: ");
    scanf("%d", &key);

    int count = linearSearch(arr, n, key);
    if (count > 0) {
        printf("Found %d occurrence(s)\n", count);
    } else {
        printf("Not found\n");
    }

    return 0;
}
```
