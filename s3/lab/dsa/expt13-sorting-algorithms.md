### **File: `expt13-sorting-algorithms.md`**

#### **Experiment 13: Implementation of Sorting Algorithms**

**Concept Overview:**

Sorting is the process of arranging elements in a collection (like an array) in a specific order (e.g., ascending or descending). Efficient sorting is a fundamental problem in computer science. This experiment covers three powerful sorting algorithms: Quick Sort, Merge Sort, and Heap Sort. All three have an average time complexity of O(n log n), making them much more efficient for large datasets than simpler algorithms like Bubble Sort or Insertion Sort (which are O(n²)).

1.  **Quick Sort**:
    *   **Strategy**: A "Divide and Conquer" algorithm.
    *   **How it works**: It picks an element as a **pivot** and partitions the array around the pivot. All elements smaller than the pivot are moved to its left, and all elements greater are moved to its right. This process is then applied recursively to the sub-arrays on the left and right of the pivot.
    *   **Performance**: Extremely fast on average (O(n log n)). However, its worst-case performance is O(n²) if the pivot selection is poor (e.g., always picking the smallest or largest element in a sorted or reverse-sorted array). It is an **in-place** sorting algorithm, meaning it requires minimal extra memory.

2.  **Merge Sort**:
    *   **Strategy**: Also a "Divide and Conquer" algorithm.
    *   **How it works**: It recursively divides the array into two halves until it is left with sub-arrays of size one (which are inherently sorted). Then, it repeatedly **merges** these sorted sub-arrays to produce new, larger sorted sub-arrays until the entire array is sorted. The merging process is the key step.
    *   **Performance**: Guarantees O(n log n) time complexity in all cases (worst, average, and best), making it very reliable. Its main drawback is that it is **not in-place**; it requires extra memory (O(n)) to store the merged sub-arrays.

3.  **Heap Sort**:
    *   **Strategy**: A comparison-based sorting algorithm that uses a binary heap data structure.
    *   **How it works**: It first converts the array into a **Max Heap** (a binary tree where the parent node is always greater than or equal to its children). Then, it repeatedly extracts the maximum element from the heap (which is always the root), places it at the end of the array, and reconstructs the heap.
    *   **Performance**: Has a worst-case time complexity of O(n log n). It is an **in-place** sorting algorithm.

---

### **Part A: Quick Sort**

**Algorithm:**

```
// PARTITION function takes an array, a low index, and a high index
PARTITION(array, low, high):
1. Choose the last element as the pivot: pivot = array[high]
2. Initialize partition index `i` = low - 1
3. FOR j from low to high - 1:
4.   IF array[j] < pivot THEN
5.     i = i + 1
6.     SWAP array[i] and array[j]
7.   END IF
8. END FOR
9. SWAP array[i + 1] and array[high] // Place pivot in correct position
10. RETURN (i + 1) // Return the pivot's final index

// QUICK_SORT function
QUICK_SORT(array, low, high):
1. IF low < high THEN
2.   pi = PARTITION(array, low, high) // Get partitioning index
3.   QUICK_SORT(array, low, pi - 1)   // Recursively sort left sub-array
4.   QUICK_SORT(array, pi + 1, high)  // Recursively sort right sub-array
5. END IF
```

### **Part B: Merge Sort**

**Algorithm:**

```
// MERGE function merges two sorted sub-arrays
MERGE(array, left, mid, right):
1. Create temporary arrays L[] and R[] for the left and right halves.
2. Copy data from array[left...mid] to L[] and array[mid+1...right] to R[].
3. Initialize indices i=0 for L[], j=0 for R[], and k=left for the main array.
4. WHILE i < size of L AND j < size of R:
5.   IF L[i] <= R[j] THEN
6.     array[k] = L[i]
7.     i = i + 1
8.   ELSE
9.     array[k] = R[j]
10.    j = j + 1
11.  END IF
12.  k = k + 1
13. END WHILE
14. Copy any remaining elements from L[] and R[] back into array[].

// MERGE_SORT function
MERGE_SORT(array, left, right):
1. IF left < right THEN
2.   mid = left + (right - left) / 2 // Find the middle point
3.   MERGE_SORT(array, left, mid)      // Sort first half
4.   MERGE_SORT(array, mid + 1, right) // Sort second half
5.   MERGE(array, left, mid, right)    // Merge the sorted halves
6. END IF
```

### **Part C: Heap Sort**

**Algorithm:**

```
// HEAPIFY function to maintain the heap property
HEAPIFY(array, size, i):
1. Initialize `largest` as root `i`.
2. `left_child` = 2*i + 1, `right_child` = 2*i + 2.
3. IF `left_child` < size AND array[left_child] > array[largest] THEN
4.   `largest` = `left_child`
5. END IF
6. IF `right_child` < size AND array[right_child] > array[largest] THEN
7.   `largest` = `right_child`
8. END IF
9. IF `largest` is not `i` THEN
10.  SWAP array[i] and array[largest]
11.  HEAPIFY(array, size, largest) // Recursively heapify the affected sub-tree
12. END IF

// HEAP_SORT function
HEAP_SORT(array, size):
1. // Build a max heap from the array
2. FOR i from (size / 2) - 1 down to 0:
3.   HEAPIFY(array, size, i)
4. END FOR
5. // Extract elements from heap one by one
6. FOR i from size - 1 down to 0:
7.   SWAP array[0] with array[i] // Move current root to end
8.   HEAPIFY(array, i, 0) // Call heapify on the reduced heap
9. END FOR
```

---

**C Code (All three algorithms in one program):**

```c
#include <stdio.h>

// Utility function to swap two elements
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// Utility function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// ---------- QUICK SORT IMPLEMENTATION ----------
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// ---------- MERGE SORT IMPLEMENTATION ----------
void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++) L[i] = arr[l + i];
    for (j = 0; j < n2; j++) R[j] = arr[m + 1 + j];

    i = 0; j = 0; k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

// ---------- HEAP SORT IMPLEMENTATION ----------
void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest]) largest = left;
    if (right < n && arr[right] > arr[largest]) largest = right;

    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n) {
    // Build max heap
    for (int i = n / 2 - 1; i >= 0; i--) heapify(arr, n, i);

    // Heap sort
    for (int i = n - 1; i >= 0; i--) {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0); // Heapify root element to get highest element at root again
    }
}

// ----- MAIN FUNCTION with Menu -----
int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int choice;
    
    // Create copies for each sort
    int arr_qs[n], arr_ms[n], arr_hs[n];
    for(int i=0; i<n; i++) {
        arr_qs[i] = arr_ms[i] = arr_hs[i] = arr[i];
    }

    printf("Original array is: ");
    printArray(arr, n);

    printf("\n--- CHOOSE A SORTING ALGORITHM ---\n");
    printf("1. Quick Sort\n");
    printf("2. Merge Sort\n");
    printf("3. Heap Sort\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            quickSort(arr_qs, 0, n - 1);
            printf("Array after Quick Sort: ");
            printArray(arr_qs, n);
            break;
        case 2:
            mergeSort(arr_ms, 0, n - 1);
            printf("Array after Merge Sort: ");
            printArray(arr_ms, n);
            break;
        case 3:
            heapSort(arr_hs, n);
            printf("Array after Heap Sort: ");
            printArray(arr_hs, n);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
```
