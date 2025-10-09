### **Supplemental Notes: Other Sorting Algorithms in Module 4**

These algorithms are fundamental. While `Quick Sort`, `Merge Sort`, and `Heap Sort` are more efficient for large datasets, these simpler algorithms are often used as teaching tools and can be very effective for small datasets.

#### **1. Simpler Sorting Algorithms**

**a) Insertion Sort**

This algorithm builds the final sorted array one item at a time. It's very intuitive and works the way you might sort a hand of playing cards.

[Visual Concept: Insertion Sort](https://www.google.com/search?q=insertion+sort+visualization&tbm=isch)

**How it Works:**
1.  Assume the first element of the array is a "sorted" sub-list.
2.  Pick the next element from the "unsorted" part of the array.
3.  Compare this element with the elements in the sorted sub-list, moving from right to left.
4.  Shift all elements in the sorted sub-list that are greater than the picked element one position to the right.
5.  **Insert** the picked element into the correct open spot.
6.  Repeat steps 2-5 until the entire array is sorted.

**Example: Insertion Sort**
Let's sort the array: `[14, 33, 27, 10, 35]`

*   **Initial Step**: `[14]` is the sorted sub-list. Unsorted is `[33, 27, 10, 35]`.

*   **Pass 1**: Pick `33`. Compare with `14`. `33 > 14`, so it's already in the correct place.
    *   Sorted sub-list: `[14, 33]`

*   **Pass 2**: Pick `27`.
    *   Compare `27` with `33`. `27 < 33`, so shift `33` to the right.
    *   Insert `27` in the gap.
    *   Sorted sub-list: `[14, 27, 33]`

*   **Pass 3**: Pick `10`.
    *   Compare `10` with `33`. `10 < 33`, shift `33`.
    *   Compare `10` with `27`. `10 < 27`, shift `27`.
    *   Compare `10` with `14`. `10 < 14`, shift `14`.
    *   Insert `10` at the beginning.
    *   Sorted sub-list: `[10, 14, 27, 33]`

*   **Pass 4**: Pick `35`. Compare with `33`. `35 > 33`, so it's in the correct place.
    *   Sorted sub-list: `[10, 14, 27, 33, 35]`

**Final Array:** `[10, 14, 27, 33, 35]`

---

**b) Selection Sort**

This algorithm repeatedly finds the minimum element from the unsorted portion of the list and puts it at the beginning of the unsorted portion.

[Visual Concept: Selection Sort](https://www.google.com/search?q=selection+sort+visualization&tbm=isch)

**How it Works:**
1.  Find the smallest element in the entire array.
2.  Swap it with the element at the first position (index 0).
3.  Now, the first element is sorted.
4.  Find the smallest element in the rest of the array (from the second position onwards).
5.  Swap it with the element at the second position (index 1).
6.  Repeat this process, moving the boundary of the sorted sub-list by one, until the entire array is sorted.

**Example: Selection Sort**
Let's sort the array: `[33, 14, 27, 10, 35]`

*   **Pass 1**:
    *   Find the minimum element in `[33, 14, 27, 10, 35]`. The minimum is `10`.
    *   Swap `10` with the first element `33`.
    *   Array becomes: `[**10**, 14, 27, 33, 35]`. The `10` is now sorted.

*   **Pass 2**:
    *   Find the minimum in the unsorted part `[14, 27, 33, 35]`. The minimum is `14`.
    *   It's already in the correct position, so no swap is needed.
    *   Array remains: `[**10, 14**, 27, 33, 35]`.

*   **Pass 3**:
    *   Find the minimum in `[27, 33, 35]`. The minimum is `27`.
    *   No swap needed.
    *   Array remains: `[**10, 14, 27**, 33, 35]`.

*   **Pass 4**:
    *   Find the minimum in `[33, 35]`. The minimum is `33`.
    *   No swap needed. The array is now fully sorted.

**Final Array:** `[10, 14, 27, 33, 35]`

---

#### **2. Linear Sorting**

The term "Linear Sorting" in your syllabus (`4.1 Sorting - Linear Sorting`) refers to a class of sorting algorithms that do **not** use comparisons between elements. Because of this, they are not limited by the Ω(n log n) lower bound of comparison sorts and can be faster under specific conditions. They are also called **integer sorts**.

**Counting Sort** is a great example of a linear sorting algorithm.

**How Counting Sort Works:**
It works by counting the number of occurrences of each distinct element in the input array. This count information is then used to place the elements into their correct sorted positions.

**Prerequisite**: This algorithm works best when the range of input data (e.g., numbers from 0 to 9, or 1 to 100) is not significantly larger than the number of elements.

[Visual Concept: Counting Sort](https://www.google.com/search?q=counting+sort+algorithm+step+by+step&tbm=isch)

**Example: Counting Sort**
Let's sort the array: `[4, 2, 2, 8, 3, 3, 1]`

1.  **Find the Range**: The maximum element is `8`. So we need a "count" array of size 9 (indices 0 to 8).
    *   `count_array = [0, 0, 0, 0, 0, 0, 0, 0, 0]`

2.  **Store Counts**: Go through the input array and store the count of each element.
    *   After counting, `count_array` becomes: `[0, 1, 2, 2, 1, 0, 0, 0, 1]`
    *   (There is one `1`, two `2`s, two `3`s, one `4`, and one `8`).

3.  **Build the Sorted Array**: Now, iterate through the `count_array` and place the elements into the original array.
    *   The count for `1` is 1 -> add `1` to the output. Output: `[1]`
    *   The count for `2` is 2 -> add `2` twice. Output: `[1, 2, 2]`
    *   The count for `3` is 2 -> add `3` twice. Output: `[1, 2, 2, 3, 3]`
    *   The count for `4` is 1 -> add `4` once. Output: `[1, 2, 2, 3, 3, 4]`
    *   The count for `8` is 1 -> add `8` once. Output: `[1, 2, 2, 3, 3, 4, 8]`

**Final Array:** `[1, 2, 2, 3, 3, 4, 8]`
