
### **Module 3: Trees and Graphs (Part 1: Trees)**

This section covers the fundamental concepts of tree data structures, focusing on Binary Trees and Binary Search Trees (BSTs), which are high-priority topics for your exam.

#### **1. Introduction to Trees**

A tree is a non-linear data structure that organizes data in a hierarchical way. Unlike arrays or linked lists, which store data sequentially, a tree consists of a root node and subtrees of children, forming a parent-child relationship.

[Visual Concept: Tree Data Structure Terminology](https://www.google.com/search?q=tree+data+structure+terminology&tbm=isch)

**Key Terminology:**

*   **Node**: The basic unit of a tree that stores data.
*   **Root**: The topmost node in the tree. A tree has only one root.
*   **Edge**: The connecting link between two nodes. A tree with 'n' nodes has exactly 'n-1' edges.
*   **Parent**: A node that has child nodes connected to it.
*   **Child**: A node that is a descendant of another node.
*   **Siblings**: Nodes that share the same parent.
*   **Leaf Node (or External Node)**: A node that has no children.
*   **Internal Node**: A node that has at least one child.
*   **Height of a Node**: The length of the longest path (number of edges) from that node to a leaf node. The height of a leaf is 0.
*   **Depth of a Node**: The length of the path (number of edges) from the root to that node. The depth of the root is 0.
*   **Subtree**: A portion of a tree that can be viewed as a complete tree in itself, starting from a child node.

---

#### **2. Binary Trees**

A **Binary Tree** is a specific type of tree where every node can have **at most two** children. These children are referred to as the **left child** and the **right child**.

[Visual Concept: Binary Tree Example](https://www.google.com/search?q=binary+tree+example&tbm=isch)

**Types of Binary Trees:**

*   **Full (or Strictly) Binary Tree**: A tree in which every node has either 0 or 2 children. No node has only one child.
*   **Complete Binary Tree**: A tree in which all levels are completely filled except possibly the last level, and the last level has its nodes filled from left to right.
*   **Skewed Binary Tree**: A tree where every node has only one child (either all left or all right), resembling a linked list.

---

#### **3. Binary Tree Representation**

There are two primary methods for representing a binary tree in memory:

**a) Array Representation**

*   A simple one-dimensional array is used to store the nodes sequentially.
*   The root is usually stored at index `0`.
*   For any node at index `i`:
    *   Its **left child** is at index `2*i + 1`.
    *   Its **right child** is at index `2*i + 2`.
*   This method is efficient for full or complete trees but wastes significant space for sparse or skewed trees.

[Visual Concept: Array Representation of a Binary Tree](https://www.google.com/search?q=array+representation+of+binary+tree&tbm=isch)

**b) Linked List Representation**

*   This is the most common and flexible approach.
*   Each node is a structure (or object) containing three fields:
    1.  A pointer to the left child (`left`).
    2.  The data value itself (`data`).
    3.  A pointer to the right child (`right`).
*   If a child does not exist, the corresponding pointer is set to `NULL`.

[Visual Concept: Linked List Representation of a Binary Tree](https://www.google.com/search?q=linked+list+representation+of+binary+tree&tbm=isch)

---

#### **4. Binary Tree Traversal**

Traversal is the process of visiting each node in a tree exactly once in a systematic way. There are three main depth-first traversal methods:

[Visual Concept: Binary Tree Traversal Methods](https://www.google.com/search?q=binary+tree+traversal+preorder+inorder+postorder&tbm=isch)

**a) In-order Traversal (LNR: Left - Node - Right)**

1.  Recursively traverse the left subtree.
2.  Visit the current node (e.g., print its data).
3.  Recursively traverse the right subtree.
*   **Key Use**: For a Binary Search Tree, this traversal visits the nodes in ascending sorted order.

**b) Pre-order Traversal (NLR: Node - Left - Right)**

1.  Visit the current node.
2.  Recursively traverse the left subtree.
3.  Recursively traverse the right subtree.
*   **Key Use**: Often used to create a copy of the tree or to get the prefix expression of an expression tree.

**c) Post-order Traversal (LRN: Left - Right - Node)**

1.  Recursively traverse the left subtree.
2.  Recursively traverse the right subtree.
3.  Visit the current node.
*   **Key Use**: Used for deleting the tree from memory (as you delete children before the parent) or getting the postfix expression.

---

#### **5. Binary Search Trees (BST)**

A **Binary Search Tree** is a node-based binary tree data structure which has the following properties. This is a crucial topic for your exams.

**BST Properties:**

1.  The left subtree of a node contains only nodes with keys **lesser** than the node’s key.
2.  The right subtree of a node contains only nodes with keys **greater** than the node’s key.
3.  The left and right subtrees must also be binary search trees.
4.  There must be **no duplicate** keys.

[Visual Concept: Binary Search Tree Properties](https://www.google.com/search?q=binary+search+tree+properties&tbm=isch)

---

#### **6. Operations on Binary Search Trees**

This is a core "application-level" concept. You must understand how to search for, insert, and delete nodes.

**a) Searching in a BST**

*   Start at the root.
*   Compare the value you are searching for with the current node's value.
*   If the search value is **less than** the node's value, move to the **left child**.
*   If the search value is **greater than** the node's value, move to the **right child**.
*   If the values are equal, the node is found.
*   If you reach a `NULL` pointer, the value does not exist in the tree.

**b) Insertion into a BST**

*   The process starts like a search to find the correct position for the new node.
*   You will always insert the new node as a **leaf node**.
*   Traverse the tree until you find a `NULL` spot where the new node should be placed, and then connect it to its parent.

**c) Deletion from a BST**

This is the most complex operation, divided into three cases based on the number of children the node to be deleted has:

*   **Case 1: Deleting a Leaf Node (0 Children)**
    *   This is the simplest case. Just remove the node and update its parent's child pointer to `NULL`.

*   **Case 2: Deleting a Node with One Child** (Part 1: Searching & Intro to Sorting)
This section covers the fundamental algorithms fo
    *   Remove the node and connect its single child directly to its grandparent.

*   **Case 3: Deleting a Node with Two Children**
    *   You cannot simply remove the node as it would break the tree structure.
    *   **Step 1**: Find the **in-order successor** of the node. The in-order successor is the smallest node in the node's right subtree (go right once, then traverse as far left as possible).
    *   **Step 2**: **Copy the value** of the in-order successor to the node you intend to delete.
    *   **Step 3**: **Delete the original in-order successor node**. The successor will have at most one child (a right child), so deleting it becomes a simple Case 1 or Case 2 deletion.

[Visual Concept: Binary Search Tree Deletion Cases](https://www.google.com/search?q=binary+search+tree+deletion+cases&tbm=isch)

---

### **Solved Previous Year Questions (Module 3)**

Here are detailed solutions to the relevant Module 3 questions from your provided papers.

#### **Question 1: (TKM Q Paper - Q5)**

> Show the structure of the binary search tree after adding each of the following values in that order: `25, 55, 71, 10, 9, 11, 6, 67, 45, 23`. What is the height of the created tree?

**Solution:**

We will insert each element one by one, following the BST insertion rule (smaller values go left, larger values go right).

1.  **Insert 25**: `25` becomes the root.
    ```
      25
    ```

2.  **Insert 55**: `55 > 25`, so it goes to the right of 25.
    ```
      25
       \
        55
    ```

3.  **Insert 71**: `71 > 25` (go right), `71 > 55` (go right).
    ```
      25
       \
        55
         \
          71
    ```

4.  **Insert 10**: `10 < 25`, so it goes to the left of 25.
    ```
        25
       /  \
      10   55
            \
             71
    ```

5.  **Insert 9**: `9 < 25` (left), `9 < 10` (left).
    ```
        25
       /  \
      10   55
     /      \
    9        71
    ```

6.  **Insert 11**: `11 < 25` (left), `11 > 10` (right).
    ```
        25
       /  \
      10   55
     / \    \
    9  11    71
    ```

7.  **Insert 6**: `6 < 25` (left), `6 < 10` (left), `6 < 9` (left).
    ```
          25
         /  \
        10   55
       / \    \
      9  11    71
     /
    6
    ```

8.  **Insert 67**: `67 > 25` (right), `67 > 55` (right), `67 < 71` (left).
    ```
          25
         /  \
        10   55
       / \    \
      9  11    71
     /        /
    6        67
    ```

9.  **Insert 45**: `45 > 25` (right), `45 < 55` (left).
    ```
          25
         /  \
        10   55
       / \   / \
      9  11 45  71
     /          /
    6          67
    ```

10. **Insert 23**: `23 < 25` (left), `23 > 10` (right), `23 > 11` (right).

    **Final Structure:**
    ```
              25
             /  \
            /    \
           10     55
          / \    /  \
         9  11  45   71
        /     \      /
       6      23    67
    ```

**Height of the Tree:**
The height is the number of edges in the longest path from the root to a leaf.
The longest path from the root `25` is to the leaf `23` (`25 -> 10 -> 11 -> 23`), which involves **3 edges**.
Another path of the same length is `25 -> 10 -> 9 -> 6`.
**Answer: The height of the created tree is 3.**

---

#### **Question 2: (KTU Paper - Q8 from 08000CST201122201)**
> Write the output of inorder, preorder and postorder traversals on the following tree:
> ```
>      F
>     / \
>    B   G
>   / \   \
>  A   D   I
>     / \   /
>    C   E H
> ```
**Solution:**

Let's apply the traversal rules to the given tree.

*   **Pre-order (Node-Left-Right):** `F, B, A, D, C, E, G, I, H`
    1.  Visit **F**.
    2.  Go Left to B's subtree: Visit **B**, Visit **A**, Go to D's subtree (Visit **D**, Visit **C**, Visit **E**).
    3.  Go Right to G's subtree: Visit **G**, Go to I's subtree (Visit **I**, Visit **H**).

*   **In-order (Left-Node-Right):** `A, B, C, D, E, F, G, H, I`
    1.  Go Left to B's subtree: Go Left to **A** (visit), visit **B**, Go Right to D's subtree (Go Left to **C** (visit), visit **D**, Go Right to **E** (visit)).
    2.  Visit **F**.
    3.  Go Right to G's subtree: Go Left (null), visit **G**, Go Right to I's subtree (Go Left to **H** (visit), visit **I**, Go Right (null)).

*   **Post-order (Left-Right-Node):** `A, C, E, D, B, H, I, G, F`
    1.  Go Left to B's subtree: Go Left to **A** (visit), Go Right to D's subtree (Go Left to **C** (visit), Go Right to **E** (visit), visit **D**), visit **B**.
    2.  Go Right to G's subtree: Go Left (null), Go Right to I's subtree (Go Left to **H** (visit), Go Right (null), visit **I**), visit **G**.
    3.  Visit **F**.
