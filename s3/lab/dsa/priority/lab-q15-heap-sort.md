### **File: `lab-q15-heap-sort.md`**

#### **Lab Question 15: Heap Sort Algorithm**

**Problem Statement:**
Develop a Heap Sort algorithm to arrange elements in ascending order.

**Concept Overview:**

**Heap Sort** is a sophisticated comparison-based sorting algorithm that leverages the properties of a **Binary Heap** data structure. It consistently achieves a time complexity of **O(n log n)** in all cases (best, average, and worst).

The algorithm works in two main phases:
1.  **Build Max Heap**: The first step is to rearrange the input array to conform to the properties of a **Max Heap**. A Max Heap is a complete binary tree where the value of each node is greater than or equal to the values of its children. This ensures that the largest element in the array is always at the root of the heap (index 0). This process is called "heapifying" and is efficiently done by starting from the last non-leaf node and working upwards to the root.

2.  **Sort by Extraction**: Once the Max Heap is built, the sorting begins.
    *   The largest element is at the root (`array[0]`). Swap it with the last element of the heap.
    *   The size of the heap is then reduced by one (the largest element is now in its final sorted position at the end of the array).
    *   The new root element may violate the Max Heap property. To fix this, call `heapify` on the root of the reduced heap.
    *   Repeat this process of swapping the root with the last element and heapifying the reduced heap until the heap size becomes 1.

The result is an array sorted in ascending order. Heap sort is an **in-place** algorithm, meaning it does not require significant extra memory.

---

**Algorithm:**

```
// HEAPIFY function to maintain the max-heap property for a subtree rooted at `i`.
// `n` is the size of the heap.
HEAPIFY(array, n, i):
1. Initialize `largest` as the root `i`.
2. Calculate left child index: `left = 2*i + 1`.
3. Calculate right child index: `right = 2*i + 2`.
4. IF `left < n` AND `array[left] > array[largest]` THEN
5.   `largest = left`
6. END IF
7. IF `right < n` AND `array[right] > array[largest]` THEN
8.   `largest = right`
9. END IF
10. // If the largest element is not the root, swap them and recursively heapify.
11. IF `largest != i` THEN
12.  SWAP `array[i]` and `array[largest]`.
13.  HEAPIFY(array, n, largest).
14. END IF

// HEAP_SORT main function
HEAP_SORT(array, n):
1. // PHASE 1: Build the initial max heap.
2. // Start from the last non-leaf node and go up to the root.
3. FOR i from (n / 2) - 1 down to 0:
4.   HEAPIFY(array, n, i)
5. END FOR

6. // PHASE 2: Extract elements from the heap one by one.
7. FOR i from n - 1 down to 0:
8.   // Move the current root (the largest element) to the end of the array.
9.   SWAP `array[0]` with `array[i]`.
10.  // Call heapify on the reduced heap of size `i`.
11.  HEAPIFY(array, i, 0).
12. END FOR
```

---

**C Code:**

```c
#include <stdio.h>

// Utility function to swap two elements
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// The main function to heapify a subtree rooted with node i
// n is the size of the heap
void heapify(int arr[], int n, int i) {
    int largest = i; // Initialize largest as root
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    // If left child is larger than root
    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }

    // If right child is larger than the largest so far
    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }

    // If the largest is not the root, swap and recursively heapify the affected sub-tree
    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}

// The main function to do heap sort
void heapSort(int arr[], int n) {
    // 1. Build a max heap from the array
    // We start from the last non-leaf node (n/2 - 1)
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }

    // 2. One by one extract an element from the heap
    for (int i = n - 1; i > 0; i--) {
        // Move the current root (max element) to the end
        swap(&arr[0], &arr[i]);

        // Call max heapify on the reduced heap (size i)
        heapify(arr, i, 0);
    }
}

// Function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("--- Heap Sort Algorithm ---\n");
    printf("Original array: ");
    printArray(arr, n);

    heapSort(arr, n);

    printf("Sorted array in ascending order: ");
    printArray(arr, n);
    
    return 0;
}
```
