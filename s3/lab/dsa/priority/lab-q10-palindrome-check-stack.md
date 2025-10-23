### **File: `lab-q10-palindrome-check-stack.md`**

#### **Lab Question 10: Palindrome Check using a Stack**

**Problem Statement:**
Write a program to check if a given string is a palindrome using a stack.

**Concept Overview:**

A **palindrome** is a word, phrase, or sequence that reads the same backward as forward (e.g., "madam", "racecar"). While this can be checked with two pointers moving towards the center of a string, this problem specifically requires using a **stack** to demonstrate its LIFO (Last-In, First-Out) property.

The core idea is to use the stack to reverse the string.
1.  **Push Phase**: Traverse the input string from left to right and push each character onto the stack.
2.  **Pop Phase**: Once all characters are pushed, a new string is built by popping characters from the stack one by one. Because of the stack's LIFO nature, the resulting string will be the reverse of the original.
3.  **Comparison**: Finally, compare the original string with the reversed string. If they are identical, the original string is a palindrome.

A more space-efficient variation involves pushing only the first half of the string and then comparing it with the second half by popping from the stack. The code below implements the more straightforward "reverse-the-whole-string" method.

---

**Algorithm:**

```
// FUNCTION IS_PALINDROME(inputString)
1. Initialize an empty stack.
2. Get the length of `inputString`, let it be `len`.
3. // Push phase
4. FOR i = 0 TO len - 1:
5.   PUSH `inputString[i]` onto the stack.
6. END FOR
7. // Pop phase and compare
8. FOR i = 0 TO len - 1:
9.   poppedChar = POP from the stack.
10.  IF poppedChar != inputString[i] THEN
11.    PRINT "The string is not a palindrome."
12.    RETURN false
13.  END IF
14. END FOR
15. // If the loop completes, all characters matched
16. PRINT "The string is a palindrome."
17. RETURN true
```

---

**C Code:**

```c
#include <stdio.h>
#include <string.h>
#include <ctype.h> // For isalnum() and tolower() to handle complex cases

#define MAX_SIZE 100

char stack[MAX_SIZE];
int top = -1;

// Basic stack operations
void push(char item) {
    if (top < MAX_SIZE - 1) {
        stack[++top] = item;
    }
}

char pop() {
    if (top > -1) {
        return stack[top--];
    }
    return '\0'; // Return null character on underflow
}

// Function to check if a string is a palindrome
void isPalindrome(char str[]) {
    int length = strlen(str);
    
    // Reset the stack
    top = -1; 

    // 1. Push all characters of the string onto the stack
    for (int i = 0; i < length; i++) {
        push(str[i]);
    }

    // 2. Pop characters and compare with the original string
    for (int i = 0; i < length; i++) {
        if (pop() != str[i]) {
            printf("The string \"%s\" is NOT a palindrome.\n", str);
            return;
        }
    }

    printf("The string \"%s\" IS a palindrome.\n", str);
}

// ---- Optional: Advanced Palindrome Check (Ignores case and non-alphanumeric chars) ----
void isPalindromeAdvanced(char str[]) {
    char cleanStr[MAX_SIZE];
    int j = 0;

    // Create a "clean" version of the string (lowercase, no spaces/punctuation)
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalnum(str[i])) { // Check if it's an alphabet or a number
            cleanStr[j++] = tolower(str[i]);
        }
    }
    cleanStr[j] = '\0';

    // Now, check if the clean string is a palindrome
    isPalindrome(cleanStr);
}


int main() {
    char inputStr[MAX_SIZE];

    printf("--- Palindrome Checker using Stack ---\n");
    printf("Enter a string: ");
    scanf(" %[^\n]", inputStr);

    // Call the function to check
    isPalindrome(inputStr);

    // Example with the advanced function
    char complexStr[] = "A man, a plan, a canal: Panama";
    printf("\n--- Advanced Check ---\n");
    printf("Checking the string: \"%s\"\n", complexStr);
    isPalindromeAdvanced(complexStr);

    return 0;
}
```
