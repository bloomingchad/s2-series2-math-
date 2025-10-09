### **Module 4: Searching and Sorting (Part 2: Sorting Algorithms)**

Sorting is the process of arranging elements of a list in a specific order (e.g., numerical or alphabetical). A sorted list is essential for efficient algorithms like Binary Search.

**Key Sorting Concepts:**
*   **In-place Sorting**: The algorithm sorts the elements within the original array, without using significant extra memory.
*   **Stable Sorting**: If two elements have equal values, their relative order in the original list is preserved in the sorted list.

---

#### **1. Quick Sort (High Priority)**

Quick Sort is a highly efficient sorting algorithm that follows the "divide and conquer" strategy. It works by selecting an element as a **pivot** and partitioning the other elements into two sub-arrays according to whether they are less than or greater than the pivot.

[Visual Concept: Quick Sort Partitioning](https://www.google.com/search?q=quick+sort+algorithm+visualization&tbm=isch)

**How it Works:**

1.  **Choose a Pivot**: Select an element from the array. This can be the first element, the last element, or a random element. Let's use the **last element** as the pivot for our example, as it's a common choice.
2.  **Partition**: Rearrange the array so that all elements smaller than the pivot are placed before it, and all elements greater than the pivot are placed after it. After this step, the pivot is in its final, sorted position.
3.  **Recurse**: Recursively apply the above steps to the sub-array of elements smaller than the pivot and the sub-array of elements greater than the pivot.

**Example: Quick Sort**

Let's sort the array: `[50, 20, 40, 10, 60, 30]`

**Pass 1:**
*   **Array**: `[50, 20, 40, 10, 60, 30]`
*   **Choose Pivot**: We pick the last element, `30`.
*   **Partition**: We need to move all elements less than `30` to its left and all greater elements to its right. We can use two pointers, `i` starting from the left and `j` from the right.
    *   After partitioning, the array becomes: `[10, 20, 30, 50, 60, 40]` (The exact arrangement of elements on either side can vary, but their relation to the pivot is fixed).
    *   The pivot `30` is now in its correct final sorted position.
*   **Result**: We have two sub-arrays to sort:
    *   Left sub-array (elements < 30): `[10, 20]`
    *   Right sub-array (elements > 30): `[50, 60, 40]`

**Pass 2 (Sort Left Sub-array):**
*   **Array**: `[10, 20]`
*   **Pivot**: `20`.
*   **Partition**: `10` is less than `20`, so it stays on the left. The array is partitioned. `20` is now in its correct place.
*   **Result**: The left side is now sorted: `[10, 20]`

**Pass 3 (Sort Right Sub-array):**
*   **Array**: `[50, 60, 40]`
*   **Pivot**: `40`.
*   **Partition**: After partitioning, the array becomes `[40, 60, 50]` (or similar). `40` is now in its correct place.
*   **Result**: We have a new sub-array to sort: `[60, 50]`. After another pass, this becomes `[50, 60]`.

**Final Combination:**
Combining all the sorted parts gives us the final sorted array: `[10, 20, 30, 40, 50, 60]`

---

#### **2. Merge Sort (High Priority)**

Merge Sort is another powerful "divide and conquer" algorithm. It works by repeatedly dividing the list in half until each sub-list contains only one element (which is inherently sorted). Then, it merges these sub-lists back together in a sorted manner.

[Visual Concept: Merge Sort Divide and Conquer](https://www.google.com/search?q=merge+sort+algorithm+visualization&tbm=isch)

**How it Works:**

1.  **Divide**: If the list has more than one element, divide it into two equal halves. Continue this process for each half until you are left with sub-lists containing only one element.
2.  **Conquer (Merge)**: Start merging the adjacent single-element lists, comparing their elements to create a new sorted list of two elements. Continue merging the sorted sub-lists until you have a single, fully sorted list.

**Example: Merge Sort**

Let's sort the array: `[33, 14, 27, 10, 35, 19, 42, 44]`

**1. Divide Phase:**
*   `[33, 14, 27, 10, 35, 19, 42, 44]`
*   Split into `[33, 14, 27, 10]` and `[35, 19, 42, 44]`
*   Split into `[33, 14]`, `[27, 10]`, `[35, 19]`, and `[42, 44]`
*   Split into `[33]`, `[14]`, `[27]`, `[10]`, `[35]`, `[19]`, `[42]`, `[44]`
Now, each element is in its own "sorted" sub-list.

**2. Merge Phase:**
*   Merge `[33]` and `[14]` -> `[14, 33]`
*   Merge `[27]` and `[10]` -> `[10, 27]`
*   Merge `[35]` and `[19]` -> `[19, 35]`
*   Merge `[42]` and `[44]` -> `[42, 44]`
*   Next, merge the two-element lists:
    *   Merge `[14, 33]` and `[10, 27]` -> `[10, 14, 27, 33]`
    *   Merge `[19, 35]` and `[42, 44]` -> `[19, 35, 42, 44]`
*   Finally, merge the last two lists:
    *   Merge `[10, 14, 27, 33]` and `[19, 35, 42, 44]` -> `[10, 14, 19, 27, 33, 35, 42, 44]`

**Final Result:** The array is now fully sorted. Unlike Quick Sort, Merge Sort requires extra space to store the merged lists.

---

#### **3. Heap Sort (High Priority)**

Heap Sort uses a binary heap data structure to sort elements. For sorting in ascending order, it uses a **Max-Heap**.

**What is a Max-Heap?**
A Max-Heap is a complete binary tree where the value of each parent node is greater than or equal to the values of its children. This means the largest element in the heap is always at the root.

[Visual Concept: Heap Sort using Max-Heap](https://www.google.com/search?q=heap+sort+algorithm+visualization&tbm=isch)

**How it Works (Two Main Phases):**

1.  **Build Max-Heap**: Convert the initial unsorted array into a Max-Heap. This rearrangement ensures the largest element is at the root of the heap (the first element of the array).
2.  **Sort the Heap**:
    *   **a.** Swap the root element (the largest value) with the last element of the heap.
    *   **b.** The largest element is now in its correct final position at the end of the array. "Remove" it from the heap by reducing the heap's size by one.
    *   **c.** The new root may violate the Max-Heap property. Perform a "heapify" operation on the root to restore the property.
    *   **d.** Repeat steps a-c until the heap is empty.

---

### **Solved Previous Year Question (Module 4)**

#### **Question: (TKM Q Paper - Q8)**

> Write the algorithm for heap sort. Sort the following sequence of numbers `{42, 24, 32, 12, 44, 33, 55, 65}` using heap sort.

**Algorithm for Heap Sort:**

1.  Build a Max-Heap from the input data.
    *   Start from the last non-leaf node and run a `heapify` process on each node up to the root.
2.  Repeat the following steps until the heap size is 1:
    *   Swap the root of the heap (the maximum element) with the last element of the heap.
    *   Reduce the heap's size by one.
    *   Call `heapify` on the root of the reduced heap to maintain the Max-Heap property.

**Step-by-Step Sorting Example:**

**Array:** `[42, 24, 32, 12, 44, 33, 55, 65]`

**Phase 1: Build Max-Heap**
After applying the heapify process to the array, it gets rearranged into a Max-Heap. The largest element, `65`, will be at the root.
**Heap after building:** `[65, 44, 55, 24, 42, 33, 32, 12]`

**Phase 2: Sorting**

1.  **Step 1:** Swap root `65` with last element `12`.
    *   Array becomes: `[12, 44, 55, 24, 42, 33, 32, **65**]`
    *   `65` is now sorted. Reduce heap size. Heapify the new root `12`.
    *   Heap becomes: `[55, 44, 32, 24, 42, 33, 12]`

2.  **Step 2:** Swap root `55` with last element `12`.
    *   Array becomes: `[12, 44, 32, 24, 42, 33, **55**, **65**]`
    *   `55` is sorted. Reduce heap size. Heapify the new root `12`.
    *   Heap becomes: `[44, 42, 33, 24, 12, 32]`

3.  **Step 3:** Swap root `44` with last element `32`.
    *   Array becomes: `[32, 42, 33, 24, 12, **44**, **55**, **65**]`
    *   `44` is sorted. Reduce heap size. Heapify `32`.
    *   Heap becomes: `[42, 32, 33, 24, 12]`

4.  **Step 4:** Swap root `42` with last element `12`.
    *   Array becomes: `[12, 32, 33, 24, **42**, **44**, **55**, **65**]`
    *   `42` is sorted. Reduce heap size. Heapify `12`.
    *   Heap becomes: `[33, 32, 12, 24]`

5.  **Step 5:** Swap root `33` with last element `24`.
    *   Array becomes: `[24, 32, 12, **33**, **42**, **44**, **55**, **65**]`
    *   `33` is sorted. Reduce heap size. Heapify `24`.
    *   Heap becomes: `[32, 24, 12]`

6.  **Step 6:** Swap root `32` with last element `12`.
    *   Array becomes: `[12, 24, **32**, **33**, **42**, **44**, **55**, **65**]`
    *   `32` is sorted. Reduce heap size. Heapify `12`.
    *   Heap becomes: `[24, 12]`

7.  **Step 7:** Swap root `24` with last element `12`.
    *   Array becomes: `[12, **24**, **32**, **33**, **42**, **44**, **55**, **65**]`
    *   `24` is sorted. Heap size is now 1 (`[12]`).

**Final Sorted Array:** `[12, 24, 32, 33, 42, 44, 55, 65]`
