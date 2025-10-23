### **File: `lab-q3-polynomial-calculator.md`**

#### **Lab Question 3: Polynomial Calculator**

**Problem Statement:**
Implement a polynomial calculator using arrays and linked lists that supports addition and multiplication.

**Concept Overview:**

This problem asks for two distinct implementations of a polynomial calculator. A polynomial like `3x² + 5x + 7` consists of terms, each with a **coefficient** and an **exponent**.

**1. Array Representation:**
A simple way to represent a polynomial is to use an array where the index of the array corresponds to the exponent of a term, and the value at that index is the coefficient.
*   **Example**: `3x² + 5x + 7` could be stored in an array `P` as `P[0]=7`, `P[1]=5`, `P[2]=3`.
*   **Pros**: Addition is very simple (just add coefficients at the same index).
*   **Cons**: This is highly inefficient for **sparse polynomials** (e.g., `x^100 + 1`), as it requires a large array with many zero entries, wasting significant memory.

**2. Linked List Representation:**
This is a more memory-efficient approach, especially for sparse polynomials. Each **node** in the linked list represents one term of the polynomial. The node stores the coefficient, the exponent, and a pointer to the next term.
*   **Example**: `3x² + 5x + 7` would be a linked list of three nodes: `(7, 0) -> (5, 1) -> (3, 2)` (or stored in descending order of exponents, which is more common and efficient for operations).
*   **Pros**: Only non-zero terms need to be stored, saving memory. The size is dynamic.
*   **Cons**: Operations like addition and multiplication are more complex as they involve traversing and merging lists.

---

### **Part A: Polynomial Calculator using Arrays**

**Algorithm (Array-based):**

```
// ASSUMPTION: The maximum possible exponent is known (MAX_DEGREE).
// A polynomial is represented by an array `poly[MAX_DEGREE+1]`.

// ADDITION (poly1, poly2)
1. Initialize a result array `sum[MAX_DEGREE+1]` to all zeros.
2. Determine the larger degree between poly1 and poly2. Let it be `max_deg`.
3. FOR i = 0 TO max_deg:
4.   sum[i] = poly1[i] + poly2[i]
5. END FOR
6. RETURN `sum`

// MULTIPLICATION (poly1, poly2)
1. Initialize a result array `product[2*MAX_DEGREE+1]` to all zeros.
2. FOR i = 0 TO degree of poly1:
3.   FOR j = 0 TO degree of poly2:
4.     product[i+j] = product[i+j] + (poly1[i] * poly2[j])
5.   END FOR
6. END FOR
7. RETURN `product`
```

**C Code (Array-based):**

```c
#include <stdio.h>

#define MAX_DEGREE 100 // Maximum degree of the polynomial

// Function to read a polynomial from the user
void readPolynomial(int poly[], int* degree) {
    printf("Enter the degree of the polynomial: ");
    scanf("%d", degree);
    printf("Enter the coefficients from exponent 0 to %d:\n", *degree);
    for (int i = 0; i <= *degree; i++) {
        printf("Coefficient for x^%d: ", i);
        scanf("%d", &poly[i]);
    }
}

// Function to print a polynomial
void printPolynomial(int poly[], int degree) {
    if (degree < 0) {
        printf("0\n");
        return;
    }
    for (int i = degree; i >= 0; i--) {
        if (poly[i] != 0) {
            if (i == degree) {
                 printf("%dx^%d", poly[i], i);
            } else {
                 printf(" + %dx^%d", poly[i], i);
            }
        }
    }
    printf("\n");
}

// Function to add two polynomials
void addPolynomials(int poly1[], int deg1, int poly2[], int deg2, int sum[], int* sum_deg) {
    *sum_deg = (deg1 > deg2) ? deg1 : deg2;
    for (int i = 0; i <= *sum_deg; i++) {
        sum[i] = (i <= deg1 ? poly1[i] : 0) + (i <= deg2 ? poly2[i] : 0);
    }
}

// Function to multiply two polynomials
void multiplyPolynomials(int poly1[], int deg1, int poly2[], int deg2, int prod[], int* prod_deg) {
    *prod_deg = deg1 + deg2;
    // Initialize product polynomial to zero
    for (int i = 0; i <= *prod_deg; i++) {
        prod[i] = 0;
    }

    for (int i = 0; i <= deg1; i++) {
        for (int j = 0; j <= deg2; j++) {
            prod[i + j] += poly1[i] * poly2[j];
        }
    }
}

void arrayImplementation() {
    int poly1[MAX_DEGREE] = {0}, poly2[MAX_DEGREE] = {0};
    int sum[MAX_DEGREE] = {0}, product[2 * MAX_DEGREE] = {0};
    int deg1, deg2, sum_deg, prod_deg;

    printf("\n--- Polynomial 1 (Array) ---\n");
    readPolynomial(poly1, &deg1);
    printf("Polynomial 1 is: ");
    printPolynomial(poly1, deg1);

    printf("\n--- Polynomial 2 (Array) ---\n");
    readPolynomial(poly2, &deg2);
    printf("Polynomial 2 is: ");
    printPolynomial(poly2, deg2);

    addPolynomials(poly1, deg1, poly2, deg2, sum, &sum_deg);
    printf("\nSum of polynomials: ");
    printPolynomial(sum, sum_deg);

    multiplyPolynomials(poly1, deg1, poly2, deg2, product, &prod_deg);
    printf("Product of polynomials: ");
    printPolynomial(product, prod_deg);
}
```

---

### **Part B: Polynomial Calculator using Linked Lists**

**Algorithm (Linked List-based):**
*This algorithm is identical to the one provided for Experiment 10.*

**C Code (Linked List-based):**
*This code is a reuse and slight adaptation from Experiment 10, structured for this problem.*

```c
#include <stdio.h>
#include <stdlib.h>

// Node structure for a polynomial term
struct Node {
    int coefficient;
    int exponent;
    struct Node* link;
};

// Function to insert a term into a polynomial (sorted by exponent)
void insertTerm(struct Node** poly, int coeff, int exp) {
    if (coeff == 0) return;
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->coefficient = coeff;
    newNode->exponent = exp;
    
    struct Node* current = *poly;
    struct Node* prev = NULL;

    while (current != NULL && current->exponent > exp) {
        prev = current;
        current = current->link;
    }

    if (current != NULL && current->exponent == exp) {
        current->coefficient += coeff;
        free(newNode);
        if (current->coefficient == 0) {
            if (prev == NULL) *poly = current->link;
            else prev->link = current->link;
            free(current);
        }
    } else {
        if (prev == NULL) {
            newNode->link = *poly;
            *poly = newNode;
        } else {
            newNode->link = prev->link;
            prev->link = newNode;
        }
    }
}

struct Node* createPolynomialLL() {
    struct Node* poly = NULL;
    int n, coeff, exp;
    printf("Enter the number of non-zero terms: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter coefficient and exponent for term %d: ", i + 1);
        scanf("%d %d", &coeff, &exp);
        insertTerm(&poly, coeff, exp);
    }
    return poly;
}

void displayPolynomialLL(struct Node* poly) {
    if (poly == NULL) {
        printf("0\n");
        return;
    }
    struct Node* temp = poly;
    while (temp != NULL) {
        printf("%dx^%d", temp->coefficient, temp->exponent);
        if (temp->link != NULL) printf(" + ");
        temp = temp->link;
    }
    printf("\n");
}

struct Node* addPolynomialsLL(struct Node* poly1, struct Node* poly2) {
    struct Node* result = NULL;
    while (poly1 != NULL && poly2 != NULL) {
        if (poly1->exponent > poly2->exponent) {
            insertTerm(&result, poly1->coefficient, poly1->exponent);
            poly1 = poly1->link;
        } else if (poly2->exponent > poly1->exponent) {
            insertTerm(&result, poly2->coefficient, poly2->exponent);
            poly2 = poly2->link;
        } else {
            insertTerm(&result, poly1->coefficient + poly2->coefficient, poly1->exponent);
            poly1 = poly1->link;
            poly2 = poly2->link;
        }
    }
    while (poly1 != NULL) { insertTerm(&result, poly1->coefficient, poly1->exponent); poly1 = poly1->link; }
    while (poly2 != NULL) { insertTerm(&result, poly2->coefficient, poly2->exponent); poly2 = poly2->link; }
    return result;
}

struct Node* multiplyPolynomialsLL(struct Node* poly1, struct Node* poly2) {
    struct Node* result = NULL;
    for (struct Node* p1 = poly1; p1 != NULL; p1 = p1->link) {
        for (struct Node* p2 = poly2; p2 != NULL; p2 = p2->link) {
            insertTerm(&result, p1->coefficient * p2->coefficient, p1->exponent + p2->exponent);
        }
    }
    return result;
}


void linkedListImplementation() {
    struct Node *poly1 = NULL, *poly2 = NULL, *sum = NULL, *product = NULL;

    printf("\n\n--- Polynomial 1 (Linked List) ---\n");
    poly1 = createPolynomialLL();
    printf("Polynomial 1 is: ");
    displayPolynomialLL(poly1);

    printf("\n--- Polynomial 2 (Linked List) ---\n");
    poly2 = createPolynomialLL();
    printf("Polynomial 2 is: ");
    displayPolynomialLL(poly2);

    sum = addPolynomialsLL(poly1, poly2);
    printf("\nSum of polynomials: ");
    displayPolynomialLL(sum);

    product = multiplyPolynomialsLL(poly1, poly2);
    printf("Product of polynomials: ");
    displayPolynomialLL(product);
}

// Main function to choose implementation
int main() {
    int choice;
    printf("--- POLYNOMIAL CALCULATOR ---\n");
    printf("1. Use Array Implementation\n");
    printf("2. Use Linked List Implementation\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        arrayImplementation();
    } else if (choice == 2) {
        linkedListImplementation();
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
```
