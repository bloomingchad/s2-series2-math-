### **File: `lab-q8-student-rank-binary-search.md`**

#### **Lab Question 8: Student Rank Search using Binary Search**

**Problem Statement:**
A list of sorted student ranks (ascending order) is given for admission. Use Binary Search to determine:
*   Whether a given rank is present, and
*   Its position in the merit list.

**Concept Overview:**

This problem is a direct and classic application of the **Binary Search** algorithm. The input is a list of student ranks already sorted in ascending order. The task is to find a specific rank and report its existence and its position (index).

Since the list is sorted, Binary Search is the most efficient method, offering an **O(log n)** time complexity. The algorithm works by repeatedly dividing the search interval in half.

1.  Compare the target rank with the middle element of the list.
2.  If they match, the rank is found, and its index (position) is returned.
3.  If the target rank is smaller than the middle element, the search continues in the left half of the list.
4.  If the target rank is larger, the search continues in the right half.

This process continues until the rank is found or the interval becomes empty, indicating the rank is not in the list. The "position in the merit list" directly corresponds to the index in the array (plus one, if the list is considered 1-indexed).

---

**Algorithm:**

```
// BINARY SEARCH function for a simple integer array
BINARY_SEARCH(rankArray[], count, targetRank):
1. Initialize `low = 0`, `high = count - 1`.
2. WHILE `low <= high`:
3.   `mid = low + (high - low) / 2`
4.   // Check if targetRank is present at mid
5.   IF rankArray[mid] == targetRank THEN
6.     PRINT "Rank ", targetRank, " is present in the merit list."
7.     PRINT "Its position in the list is ", mid + 1, "." // Assuming 1-based position
8.     RETURN mid // Return the 0-based index
9.   END IF
10.  // If targetRank is smaller, ignore the right half
11.  IF rankArray[mid] > targetRank THEN
12.    `high = mid - 1`
13.  // If targetRank is larger, ignore the left half
14.  ELSE
15.    `low = mid + 1`
16.  END IF
17. END WHILE
18. // If the loop finishes, the rank was not found
19. PRINT "Rank ", targetRank, " is not present in the merit list."
20. RETURN -1
```

---

**C Code:**

```c
#include <stdio.h>
#include <stdlib.h>

// Function to perform binary search on an array of ranks
void binarySearchRank(int ranks[], int count, int targetRank) {
    int low = 0;
    int high = count - 1;
    int position = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if the target rank is at the middle
        if (ranks[mid] == targetRank) {
            position = mid;
            break;
        }

        // If the target rank is smaller, search in the left half
        if (ranks[mid] > targetRank) {
            high = mid - 1;
        }
        // If the target rank is larger, search in the right half
        else {
            low = mid + 1;
        }
    }

    if (position != -1) {
        printf("\nResult:\n");
        printf("-> Rank %d IS present in the merit list.\n", targetRank);
        printf("-> Its position in the merit list is %d (index %d).\n", position + 1, position);
    } else {
        printf("\nResult:\n");
        printf("-> Rank %d IS NOT present in the merit list.\n", targetRank);
    }
}

int main() {
    // Example sorted list of student ranks
    int meritList[] = {4, 8, 15, 16, 23, 42, 55, 67, 81, 92, 105};
    int count = sizeof(meritList) / sizeof(meritList[0]);
    int targetRank;

    printf("--- Student Rank Admission System ---\n");
    printf("Current Merit List (Sorted Ranks):\n");
    for(int i = 0; i < count; i++) {
        printf("%d ", meritList[i]);
    }
    printf("\n");

    while (1) {
        printf("\nEnter a rank to search for (or -1 to exit): ");
        scanf("%d", &targetRank);

        if (targetRank == -1) {
            printf("Exiting program.\n");
            break;
        }
        
        binarySearchRank(meritList, count, targetRank);
    }

    return 0;
}
```
