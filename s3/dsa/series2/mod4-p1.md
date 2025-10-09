
### **Module 4: Searching and Sorting (Part 1: Searching Algorithms)**

This module covers essential methods for finding and arranging data. We'll start with searching, which is the process of finding a specific element within a data structure.

#### **1. Linear Search (Sequential Search)**

This is the most straightforward searching algorithm. It sequentially checks each element in a list until a match is found or the whole list has been searched.

[Visual Concept: Linear Search Process](https://www.google.com/search?q=linear+search+algorithm+step+by+step&tbm=isch)

**How it Works:**

1.  Start at the very first element of the list (index 0).
2.  Compare the current element with the target value you are looking for.
3.  If they match, the search is successful. Return the index of the element.
4.  If they do not match, move to the next element in the list.
5.  Repeat steps 2-4 until you either find the element or reach the end of the list.
6.  If you reach the end of the list without finding the element, the search is unsuccessful.

**Key Characteristics:**
*   It can be used on **any list**, whether it's sorted or unsorted.
*   It is simple to understand and implement.

**Example: Linear Search**

Let's say we have the following unsorted list of numbers: `[65, 20, 10, 55, 32, 12, 50, 99]`
We want to find the element `12`.

*   **Step 1:** Compare `12` with `list[0]` (which is `65`). No match.
*   **Step 2:** Compare `12` with `list[1]` (which is `20`). No match.
*   **Step 3:** Compare `12` with `list[2]` (which is `10`). No match.
*   **Step 4:** Compare `12` with `list[3]` (which is `55`). No match.
*   **Step 5:** Compare `12` with `list[4]` (which is `32`). No match.
*   **Step 6:** Compare `12` with `list[5]` (which is `12`). **Match found!**
*   **Result:** The element `12` is found at index `5`.

---

#### **2. Binary Search**

Binary Search is a much faster and more efficient searching algorithm, but it has one crucial requirement: **the list must be sorted.**

It works on the "divide and conquer" principle. In each step, it compares the target value with the middle element of the array. If they don't match, it eliminates half of the remaining elements and continues the search on the other half.

[Visual Concept: Binary Search Process](https://www.google.com/search?q=binary+search+algorithm+visualization&tbm=isch)

---**How it Works:**

1.  Start with a **sorted** list.
2.  Set two pointers, `low` at the first index (0) and `high` at the last index.
3.  Calculate the middle index: `mid = (low + high) / 2`.
4.  Compare the target value with the element at the `mid` index.
    *   **a) If they are equal**, the element is found. Return the `mid` index.
    *   **b) If the target value is *less than* the middle element**, it means the target must be in the left half of the list. So, update the `high` pointer to `mid - 1`.
    *   **c) If the target value is *greater than* the middle element**, it means the target must be in the right half. So, update the `low` pointer to `mid + 1`.
5.  Repeat steps 3 and 4 until the element is found or until `low` becomes greater than `high` (which means the element is not in the list).

**Example: Binary Search**

Let's use a **sorted** list: `[10, 12, 20, 32, 50, 55, 65, 80, 99]`
We want to find the element `12`.

**Iteration 1:**
*   `low = 0` (value 10), `high = 8` (value 99).
*   `mid = (0 + 8) / 2 = 4`. The middle element is `list[4]`, which is `50`.
*   Compare target `12` with `50`. Since `12 < 50`, we know the target must be in the left half.
*   Update `high = mid - 1 = 4 - 1 = 3`.

**Iteration 2:**
*   `low = 0` (value 10), `high = 3` (value 32).
*   `mid = (0 + 3) / 2 = 1` (integer division). The middle element is `list[1]`, which is `12`.
*   Compare target `12` with `12`. **Match found!**
*   **Result:** The element `12` is found at index `1`.

Notice how we found the element in just two steps, whereas linear search would have taken more comparisons for a larger list.
