### **File: `expt10-polynomial-operations-ll.md`**

#### **Experiment 10: Representation and Operations on Polynomials using Linked List**

**Concept Overview:**

A polynomial is an expression consisting of variables and coefficients, such as `5x³ + 4x² + 2`. Representing polynomials using arrays can be inefficient, especially for sparse polynomials (where many coefficients are zero), as it would waste a lot of memory.

A **linked list** is an excellent data structure for representing polynomials. Each node in the linked list can represent a single term of the polynomial. A node would typically contain three parts:
1.  **Coefficient**: The numerical coefficient of the term.
2.  **Exponent**: The power to which the variable is raised.
3.  **Link**: A pointer to the next term (node) in the polynomial.

The terms in the linked list are usually stored in **descending order of their exponents**. This standard representation makes operations like addition and multiplication more straightforward.

**Key Operations:**
*   **Representation**: Reading coefficients and exponents from the user and creating a linked list where each node is a term, sorted by exponent.
*   **Addition**: To add two polynomials, traverse both lists simultaneously.
    *   If the exponents of the terms are the same, add their coefficients and create a new term for the result.
    *   If the exponents are different, the term with the higher exponent is added to the result list, and that list's pointer is advanced.
    *   This continues until both lists are fully traversed.
*   **Multiplication**: To multiply two polynomials, iterate through each term of the first polynomial and multiply it with every term of the second polynomial. For each pair of terms multiplied, the coefficients are multiplied, and the exponents are added. The resulting term is then inserted into a new result polynomial list, combining with any existing term of the same exponent.

---

**Algorithm:**

```
// Define Node structure
STRUCTURE TermNode:
  coefficient: integer
  exponent: integer
  link: pointer to TermNode

// CREATE POLYNOMIAL
// User inputs coefficient and exponent for each term.
// Insert each new term into the linked list in descending order of exponents.

// ADD POLYNOMIALS (poly1, poly2)
1. Initialize a result polynomial list `result = NULL`.
2. Initialize pointers p1 = poly1, p2 = poly2.
3. WHILE p1 != NULL AND p2 != NULL:
   a. IF p1.exponent > p2.exponent THEN
      i. Add term (p1.coefficient, p1.exponent) to `result`.
      ii. p1 = p1.link
   b. ELSE IF p2.exponent > p1.exponent THEN
      i. Add term (p2.coefficient, p2.exponent) to `result`.
      ii. p2 = p2.link
   c. ELSE // Exponents are equal
      i. sum_coeff = p1.coefficient + p2.coefficient
      ii. IF sum_coeff != 0 THEN
          - Add term (sum_coeff, p1.exponent) to `result`.
      iii. p1 = p1.link
      iv. p2 = p2.link
4. WHILE p1 != NULL: // Add remaining terms of poly1
   a. Add term (p1.coefficient, p1.exponent) to `result`.
   b. p1 = p1.link
5. WHILE p2 != NULL: // Add remaining terms of poly2
   a. Add term (p2.coefficient, p2.exponent) to `result`.
   b. p2 = p2.link
6. RETURN `result`

// MULTIPLY POLYNOMIALS (poly1, poly2)
1. Initialize a result polynomial list `result = NULL`.
2. FOR each term `p1` in poly1:
3.   FOR each term `p2` in poly2:
4.     a. new_coeff = p1.coefficient * p2.coefficient
5.     b. new_exp = p1.exponent + p2.exponent
6.     c. Insert the new term (new_coeff, new_exp) into `result`.
          // The insertion logic should handle adding coefficients if a term with the same exponent already exists.
7.   END FOR
8. END FOR
9. RETURN `result`
```

---

**C Code:**

```c
#include <stdio.h>
#include <stdlib.h>

// Node structure for a polynomial term
struct Node {
    int coefficient;
    int exponent;
    struct Node* link;
};

// Function to create a new term (node)
struct Node* createNode(int coeff, int exp) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->coefficient = coeff;
    newNode->exponent = exp;
    newNode->link = NULL;
    return newNode;
}

// Function to insert a term into a polynomial (sorted by exponent)
void insertTerm(struct Node** poly, int coeff, int exp) {
    if (coeff == 0) return; // Do not store terms with zero coefficient

    struct Node* newNode = createNode(coeff, exp);
    struct Node* current = *poly;
    struct Node* prev = NULL;

    // Find the correct position to insert
    while (current != NULL && current->exponent > exp) {
        prev = current;
        current = current->link;
    }

    // If a term with the same exponent exists, add coefficients
    if (current != NULL && current->exponent == exp) {
        current->coefficient += coeff;
        free(newNode);
        if (current->coefficient == 0) { // If coeff becomes 0, remove the node
            if (prev == NULL) *poly = current->link;
            else prev->link = current->link;
            free(current);
        }
    } else {
        // Insert the new node
        if (prev == NULL) { // Insert at the beginning
            newNode->link = *poly;
            *poly = newNode;
        } else { // Insert in the middle or at the end
            newNode->link = prev->link;
            prev->link = newNode;
        }
    }
}

// Function to create a polynomial by taking user input
struct Node* createPolynomial() {
    struct Node* poly = NULL;
    int n, coeff, exp;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter coefficient for term %d: ", i + 1);
        scanf("%d", &coeff);
        printf("Enter exponent for term %d: ", i + 1);
        scanf("%d", &exp);
        insertTerm(&poly, coeff, exp);
    }
    return poly;
}

// Function to display a polynomial
void display(struct Node* poly) {
    if (poly == NULL) {
        printf("0\n");
        return;
    }
    struct Node* temp = poly;
    while (temp != NULL) {
        printf("%dx^%d", temp->coefficient, temp->exponent);
        if (temp->link != NULL) {
            printf(" + ");
        }
        temp = temp->link;
    }
    printf("\n");
}

// Function to add two polynomials
struct Node* addPolynomials(struct Node* poly1, struct Node* poly2) {
    struct Node* result = NULL;
    struct Node* p1 = poly1;
    struct Node* p2 = poly2;

    while (p1 != NULL || p2 != NULL) {
        if (p1 == NULL) {
            insertTerm(&result, p2->coefficient, p2->exponent);
            p2 = p2->link;
        } else if (p2 == NULL) {
            insertTerm(&result, p1->coefficient, p1->exponent);
            p1 = p1->link;
        } else if (p1->exponent > p2->exponent) {
            insertTerm(&result, p1->coefficient, p1->exponent);
            p1 = p1->link;
        } else if (p2->exponent > p1->exponent) {
            insertTerm(&result, p2->coefficient, p2->exponent);
            p2 = p2->link;
        } else { // Exponents are equal
            insertTerm(&result, p1->coefficient + p2->coefficient, p1->exponent);
            p1 = p1->link;
            p2 = p2->link;
        }
    }
    return result;
}

// Function to multiply two polynomials
struct Node* multiplyPolynomials(struct Node* poly1, struct Node* poly2) {
    struct Node* result = NULL;
    struct Node* p1 = poly1;
    struct Node* p2;

    if (poly1 == NULL || poly2 == NULL) return NULL;

    while (p1 != NULL) {
        p2 = poly2;
        while (p2 != NULL) {
            int coeff = p1->coefficient * p2->coefficient;
            int exp = p1->exponent + p2->exponent;
            insertTerm(&result, coeff, exp);
            p2 = p2->link;
        }
        p1 = p1->link;
    }
    return result;
}

int main() {
    struct Node* poly1 = NULL;
    struct Node* poly2 = NULL;
    struct Node* sum = NULL;
    struct Node* product = NULL;
    
    printf("--- Enter First Polynomial ---\n");
    poly1 = createPolynomial();
    printf("Polynomial 1: ");
    display(poly1);

    printf("\n--- Enter Second Polynomial ---\n");
    poly2 = createPolynomial();
    printf("Polynomial 2: ");
    display(poly2);

    // Addition
    sum = addPolynomials(poly1, poly2);
    printf("\nResult of Addition: ");
    display(sum);

    // Multiplication
    product = multiplyPolynomials(poly1, poly2);
    printf("Result of Multiplication: ");
    display(product);

    return 0;
}
```
