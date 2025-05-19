## Q1. Reverse an Integer Using `reverse()` Function

```c
#include <stdio.h>

int reverse(int num) {
    int rev = 0;
    while (num != 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("Reversed number: %d\n", reverse(n));
    return 0;
}
```

---

## Q2. Check if Four-Digit Number is Armstrong

```c
#include <stdio.h>
#include <math.h>

int armstrg(int num) {
    int temp = num, sum = 0;
    while (temp != 0) {
        sum += pow(temp % 10, 4);
        temp /= 10;
    }
    return (sum == num);
}

int main() {
    int n;
    printf("Enter a 4-digit number: ");
    scanf("%d", &n);
    if (armstrg(n))
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);
    return 0;
}
```

---

## Q3. Print Prime Numbers Between 10-50

```c
#include <stdio.h>

int isPrime(int n) {
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int main() {
    printf("Prime numbers between 10 and 50:\n");
    for (int i = 10; i <= 50; i++)
        if (isPrime(i))
            printf("%d ", i);
    printf("\n");
    return 0;
}
```

---

## Q4. Fibonacci Series Using Iteration

```c
#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c;

    printf("How many terms? ");
    scanf("%d", &n);

    printf("Fibonacci series: ");
    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}
```

---

## Q5. Fibonacci Series Using Recursion

```c
#include <stdio.h>

int fib(int n) {
    if (n == 1 || n == 2)
        return n - 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci series: ");
    for (int i = 1; i <= n; i++)
        printf("%d ", fib(i));
    printf("\n");
    return 0;
}
```

---

## Q6. Check Palindrome Using Iteration

```c
#include <stdio.h>

int isPalindrome(int num) {
    int rev = 0, temp = num;
    while (temp != 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return (rev == num);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isPalindrome(n))
        printf("%d is a palindrome.\n", n);
    else
        printf("%d is not a palindrome.\n", n);
    return 0;
}
```

---

## Q7. Find First Two Largest Elements in Array

```c
#include <stdio.h>

int main() {
    int arr[10], first = 0, second = 0;

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first)
            second = arr[i];
    }

    printf("Largest: %d, Second Largest: %d\n", first, second);
    return 0;
}
```

---

## Q8. Calculate Final Pay with Deductions

```c
#include <stdio.h>

int main() {
    float basic, da, pf, net, finalPay;
    printf("Enter Basic Pay: ");
    scanf("%f", &basic);

    da = 0.08 * basic;
    pf = 0.09 * basic;
    net = basic + da - pf;

    if (net > 10000)
        finalPay = net - (0.02 * net);
    else
        finalPay = net;

    printf("Final Pay: %.2f\n", finalPay);
    return 0;
}
```

---

## Q9. Count Occurrence of a Digit in Array

```c
#include <stdio.h>

void readArray(int arr[], int size) {
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
}

int countDigit(int arr[], int size, int digit) {
    int count = 0;
    for (int i = 0; i < size; i++)
        if (arr[i] == digit)
            count++;
    return count;
}

int main() {
    int arr[10], d;
    readArray(arr, 10);
    printf("Enter digit to count: ");
    scanf("%d", &d);
    printf("Digit %d occurs %d times.\n", d, countDigit(arr, 10, d));
    return 0;
}
```

---

## Q10. Pattern Printing (*)

```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }
    return 0;
}
```

---

## Q11. Pattern Printing (1, 1 2, 1 2 3...)

```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }
    return 0;
}
```

---

## Q12. Sort Array in Descending Order Using Pointers

```c
#include <stdio.h>

int main() {
    int arr[5], *p = arr;

    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++)
        scanf("%d", p + i);

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (*(p + i) < *(p + j)) {
                int temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }

    printf("Sorted in descending order:\n");
    for (int i = 0; i < 5; i++)
        printf("%d ", *(p + i));
    printf("\n");

    return 0;
}
```


## Q13. Print Diagonal Elements of a Matrix

```c
#include <stdio.h>

void readMatrix(int mat[10][10], int size) {
    printf("Enter %d x %d matrix:\n", size, size);
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            scanf("%d", &mat[i][j]);
}

int main() {
    int mat[10][10], size;

    printf("Enter size of square matrix: ");
    scanf("%d", &size);

    readMatrix(mat, size);

    printf("Diagonal elements:\n");
    for (int i = 0; i < size; i++)
        printf("%d ", mat[i][i]);

    printf("\n");
    return 0;
}
```

---

## Q14. Find Smallest Element Using Pointer

```c
#include <stdio.h>

int main() {
    int arr[5], *p = arr, smallest;

    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++)
        scanf("%d", p + i);

    smallest = *p;
    for (int i = 1; i < 5; i++) {
        if (*(p + i) < smallest)
            smallest = *(p + i);
    }

    printf("Smallest element: %d\n", smallest);
    return 0;
}
```

---

## Q15. Check Identity Matrix

```c
#include <stdio.h>

void readMatrix(int mat[10][10], int size) {
    printf("Enter %d x %d matrix:\n", size, size);
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            scanf("%d", &mat[i][j]);
}

int isIdentity(int mat[10][10], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j && mat[i][j] != 1)
                return 0;
            if (i != j && mat[i][j] != 0)
                return 0;
        }
    }
    return 1;
}

int main() {
    int mat[10][10], size;

    printf("Enter size of matrix: ");
    scanf("%d", &size);

    readMatrix(mat, size);

    if (isIdentity(mat, size))
        printf("It is an identity matrix.\n");
    else
        printf("Not an identity matrix.\n");

    return 0;
}
```

---

## Q16. Average of Each Row in Matrix

```c
#include <stdio.h>

void readMatrix(int mat[10][10], int rows, int cols) {
    printf("Enter matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &mat[i][j]);
}

int main() {
    int mat[10][10], rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    readMatrix(mat, rows, cols);

    for (int i = 0; i < rows; i++) {
        float sum = 0;
        for (int j = 0; j < cols; j++)
            sum += mat[i][j];
        printf("Average of row %d: %.2f\n", i + 1, sum / cols);
    }

    return 0;
}
```

---

## Q17. Concatenate Two Strings Without Library Functions

```c
#include <stdio.h>

int main() {
    char str1[100], str2[100];

    printf("Enter first string ending with $: ");
    scanf("%[^$]s", str1); // Read until $ symbol
    getchar(); // To remove $

    printf("Enter second string ending with $: ");
    scanf("%[^$]s", str2); // Read until $
    getchar(); // To remove $

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

## Q18. Count Vowels, Consonants, Spaces in String

```c
#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, spaces = 0;

    printf("Enter string ending with $: ");
    scanf("%[^$]s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            vowels++;
        else if (ch >= 'a' && ch <= 'z')
            consonants++;
        else if (ch == ' ')
            spaces++;
    }

    printf("Vowels: %d\nConsonants: %d\nSpaces: %d\n", vowels, consonants, spaces);
    return 0;
}
```

---

## Q19. Evaluate Arithmetic Expression and Transpose Matrix

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
    for (int i = 0; i < result; i++)
        for (int j = 0; j < result; j++)
            scanf("%d", &mat[i][j]);

    for (int i = 0; i < result; i++)
        for (int j = 0; j < result; j++)
            transpose[j][i] = mat[i][j];

    printf("Transpose of matrix:\n");
    for (int i = 0; i < result; i++) {
        for (int j = 0; j < result; j++)
            printf("%d ", transpose[i][j]);
        printf("\n");
    }

    return 0;
}
```

---

## Q20. Calculate Net Amount Based on Discount

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

    if (total < 3000)
        discount = 0.10 * total;
    else
        discount = 0.12 * total;

    printf("Net amount after discount: %.2f\n", total - discount);
    return 0;
}
```

## Q21. Menu Driven Program for Matrix Operations (Sum, Difference, Transpose)

```c
#include <stdio.h>

void readMatrix(int mat[10][10], int r, int c) {
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);
}

void printMatrix(int mat[10][10], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("%d ", mat[i][j]);
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
                for (int i = 0; i < r; i++)
                    for (int j = 0; j < c; j++)
                        res[i][j] = mat1[i][j] + mat2[i][j];
                printf("Sum:\n");
                printMatrix(res, r, c);
                break;

            case 2:
                for (int i = 0; i < r; i++)
                    for (int j = 0; j < c; j++)
                        res[i][j] = mat1[i][j] - mat2[i][j];
                printf("Difference:\n");
                printMatrix(res, r, c);
                break;

            case 3:
                for (int i = 0; i < r; i++)
                    for (int j = 0; j < c; j++)
                        res[j][i] = mat1[i][j];
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

## Q22. Check Positive Number and Print Reverse

```c
#include <stdio.h>

int reverse(int num) {
    int rev = 0;
    while (num != 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 0)
        printf("Reverse of %d is %d\n", n, reverse(n));
    else
        printf("Number is not positive.\n");

    return 0;
}
```

---

## Q23. Sum of Each Column in Matrix

```c
#include <stdio.h>

void readMatrix(int mat[10][10], int r, int c) {
    printf("Enter matrix (%d x %d):\n", r, c);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);
}

int main() {
    int mat[10][10], rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    readMatrix(mat, rows, cols);

    int sum;
    for (int j = 0; j < cols; j++) {
        sum = 0;
        for (int i = 0; i < rows; i++)
            sum += mat[i][j];
        printf("Sum of column %d: %d\n", j+1, sum);
    }

    return 0;
}
```

---

## Q24. Sum of All Elements in Matrix

```c
#include <stdio.h>

void readMatrix(int mat[10][10], int r, int c) {
    printf("Enter matrix (%d x %d):\n", r, c);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);
}

int main() {
    int mat[10][10], rows, cols, total = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    readMatrix(mat, rows, cols);

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            total += mat[i][j];

    printf("Total sum of all elements: %d\n", total);
    return 0;
}
```

---

## Q25. Calculate n! / (n - r)! Using Factorial Function

```c
#include <stdio.h>

long factorial(int n) {
    long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
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

## Q26. Calculate n! / (n! * (n - r)!) Using Factorial Function

```c
#include <stdio.h>

long factorial(int n) {
    long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
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

## Q27. Linear Search for Key in Array

```c
#include <stdio.h>

int main() {
    int arr[10], key, found = 0;

    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    printf("Enter key to search: ");
    scanf("%d", &key);

    for (int i = 0; i < 10; i++) {
        if (arr[i] == key) {
            printf("Key found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Key not found.\n");

    return 0;
}
```

---

## Q28. Sort 10 Names Alphabetically

```c
#include <stdio.h>
#include <string.h>

int main() {
    char names[10][20], temp[20];

    printf("Enter 10 names (each at least 8 characters):\n");
    for (int i = 0; i < 10; i++)
        scanf("%s", names[i]);

    // Bubble sort
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
    for (int i = 0; i < 10; i++)
        printf("%s\n", names[i]);

    return 0;
}
```

---

## Q29. Compute TV Advertisement Bill

```c
#include <stdio.h>
#include <string.h>

int main() {
    char msg[200];
    int len;

    printf("Enter advertisement message: ");
    scanf(" %[^\n]", msg); // Read full line

    len = strlen(msg);

    if (len <= 50)
        printf("Bill: ₹%d\n", len * 50);
    else
        printf("Bill: ₹%d\n", 500 + (len - 50) * 70);

    return 0;
}
```

---

## Q30. Analyze 10 Integers (Sum, Average, Count Above/Below Avg)

```c
#include <stdio.h>

int main() {
    int nums[10], posSum = 0, negSum = 0, count = 0;
    float avg, total = 0;

    printf("Enter 10 integers (+ve, -ve or zero):\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &nums[i]);
        total += nums[i];
        if (nums[i] > 0) posSum += nums[i];
        else if (nums[i] < 0) negSum += nums[i];
    }

    avg = total / 10;
    int above = 0, below = 0;
    for (int i = 0; i < 10; i++) {
        if (nums[i] > avg) above++;
        else if (nums[i] < avg) below++;
    }

    printf("Positive sum: %d\nNegative sum: %d\nAverage: %.2f\nAbove average: %d\nBelow average: %d\n",
           posSum, negSum, avg, above, below);

    return 0;
}
```

