# LINEAR_ALGEBRA_VECTOR_SPACES.md

# 4. Linear Algebra - Vector Spaces

This section delves into the more abstract concepts of linear algebra, focusing on vector spaces. We will explore what it means for vectors to be linearly independent, how to find a basis for a vector space, and how to visualize these concepts.

## 4.1 Linear Independence

A set of vectors is **linearly independent** if no vector in the set can be written as a linear combination of the others. A practical way to check this is to create a matrix whose columns (or rows) are the vectors in question.

**The Rule:** The vectors are linearly independent **if and only if the rank of the matrix equals the number of vectors**.

### Checking Linear Independence of Vectors

**Example 1: A Linearly Independent Set**
Here, we have 3 vectors in 4D space. We create a 3x4 matrix and check if its rank is 3.

**Code (`SymPy`):**
```python
from sympy import Matrix

# Check linear independence of the set of vectors:
# {(1, 2, 0, 5), (2, -1, 3, 0), (5, 5, -2, -1)}

# Form a matrix with the vectors as its rows
A = Matrix([[1, 2, 0, 5],
            [2, -1, 3, 0],
            [5, 5, -2, -1]])

rank = A.rank()
num_vectors = A.shape[0] # The number of rows is our number of vectors

print(f"Number of vectors: {num_vectors}")
print(f"Rank of the matrix: {rank}")

if rank == num_vectors:
    print("Conclusion: The vectors are linearly independent.")
else:
    print("Conclusion: The vectors are linearly dependent.")
```
**Output:**
```
Number of vectors: 3
Rank of the matrix: 3
Conclusion: The vectors are linearly independent.
```

**Example 2: A Linearly Dependent Set**
Here, we check the vectors `v1=(1,2,3)`, `v2=(4,5,6)`, and `v3=(7,8,9)`. Notice that `v3 = 2*v2 - v1`, so they are dependent. The rank should be less than 3.

**Code (`NumPy`):**
```python
import numpy as np

v1 = np.array([1, 2, 3])
v2 = np.array([4, 5, 6])
v3 = np.array([7, 8, 9])

# Create a matrix where each COLUMN is a vector
# .T transposes the matrix to achieve this
matrix = np.array([v1, v2, v3]).T 

rank = np.linalg.matrix_rank(matrix)
num_vectors = matrix.shape[1] # The number of columns is our number of vectors

print("Matrix with vectors as columns:\n", matrix)
print(f"\nNumber of vectors: {num_vectors}")
print(f"Rank of the matrix: {rank}")

if rank == num_vectors:
    print("Conclusion: The vectors are linearly independent.")
else:
    print("Conclusion: The vectors are linearly dependent.")
```
**Output:**
```
Matrix with vectors as columns:
 [[1 4 7]
 [2 5 8]
 [3 6 9]]

Number of vectors: 3
Rank of the matrix: 2
Conclusion: The vectors are linearly dependent.
```

### Checking Linear Independence of Polynomials

We can determine if a set of polynomials is linearly independent by representing them as vectors of their coefficients. For a polynomial `a*x^2 + b*x + c`, the corresponding coefficient vector is `[c, b, a]` (or `[a, b, c]`, as long as the order is consistent).

**Example:** Check if `p1=1+2x`, `p2=x+x^2`, `p3=2+x+x^2` are independent.
- `p1` -> `[1, 2, 0]` (for constants, x, x^2)
- `p2` -> `[0, 1, 1]`
- `p3` -> `[2, 1, 1]`

**Code (`SymPy`):**
```python
from sympy import Matrix

# Coefficient vectors for p1, p2, and p3
v1 = Matrix([1, 2, 0])
v2 = Matrix([0, 1, 1])
v3 = Matrix([2, 1, 1])

# Create matrix with coefficient vectors as columns
matrix = Matrix([v1.T, v2.T, v3.T]).T
rank = matrix.rank()
num_vectors = matrix.shape[1]

print("Coefficient Matrix:")
display(matrix)
print(f"\nNumber of polynomials (vectors): {num_vectors}")
print(f"Rank of the coefficient matrix: {rank}")

if rank == num_vectors:
    print("Conclusion: The polynomials are linearly independent.")
else:
    print("Conclusion: The polynomials are linearly dependent.")
```
**Output:**
```
Coefficient Matrix:
Matrix([
[1, 0, 2],
[2, 1, 1],
[0, 1, 1]])

Number of polynomials (vectors): 3
Rank of the coefficient matrix: 3
Conclusion: The polynomials are linearly independent.
```

---

## 4.2 Basis and Dimension

A **basis** for a vector space is a set of linearly independent vectors that span the entire space. The **dimension** of a vector space is the number of vectors in its basis.

### Finding a Basis for Row and Column Spaces

The **row space** of a matrix is the space spanned by its row vectors. The **column space** is the space spanned by its column vectors. `SymPy` has convenient built-in methods to find a basis for these spaces.

**Code (`SymPy`):**
```python
import sympy as sp

A = sp.Matrix([[1, 2, 1], 
               [2, 4, 1], 
               [3, 6, 1]])

# Use the built-in .rowspace() and .columnspace() methods
row_basis = A.rowspace()
column_basis = A.columnspace()

print("Original Matrix:")
display(A)
print("\nA basis for the Row Space is:")
display(row_basis)
print(f"The dimension of the Row Space is: {len(row_basis)}")

print("\nA basis for the Column Space is:")
display(column_basis)
print(f"The dimension of the Column Space is: {len(column_basis)}")
```

**Output:**
```
Original Matrix:
Matrix([
[1, 2, 1],
[2, 4, 1],
[3, 6, 1]])

A basis for the Row Space is:
[Matrix([[1, 2, 1]]), Matrix([[0, 0, -1]])]
The dimension of the Row Space is: 2

A basis for the Column Space is:
[Matrix([
[1],
[2],
[3]]), Matrix([
[1],
[1],
[1]])]
The dimension of the Column Space is: 2
```
*Note: The dimension of the row space is always equal to the dimension of the column space, and this number is the rank of the matrix.*

### Checking if Vectors Form a Basis for a Space

A set of `n` vectors forms a basis for an `n`-dimensional space (like `R^n`) if and only if they are linearly independent. For a square matrix `A` formed by these vectors, this is true if the rank of the matrix is `n`.

**Code:**
```python
import sympy as sp

# Check if the columns of A form a basis for R^3
A = sp.Matrix([[1, 1, 1], 
               [1, 0, 0], 
               [0, 1, 1]])

rank = A.rank()
dimension = A.shape[0] # The space is R^3, so dimension is 3

print(f"Number of vectors: {dimension}")
print(f"Rank of the matrix: {rank}")

if A.is_square and rank == dimension:
    print("Conclusion: The vectors form a basis for R^3.")
else:
    print("Conclusion: The vectors do not form a basis for R^3.")
```

**Output:**
```
Number of vectors: 3
Rank of the matrix: 3
Conclusion: The vectors form a basis for R^3.
```

---

## 4.3 Visualization

Visualizing vectors helps build intuition. Here, we plot three 2D vectors. `v3` is the sum of `v1` and `v2`, demonstrating a linear combination visually.

**Code (`Matplotlib`):**
```python
import matplotlib.pyplot as plt
import numpy as np

# Define three 2D vectors
v1 = np.array([1, 0])
v2 = np.array([0, 1])
v3 = np.array([1, 1]) # Note that v3 = v1 + v2

# Set up the plot
fig, ax = plt.subplots()

# Use ax.quiver to draw arrows representing the vectors from the origin (0,0)
ax.quiver(0, 0, v1[0], v1[1], angles='xy', scale_units='xy', scale=1, color='red', label='v1 (1,0)')
ax.quiver(0, 0, v2[0], v2[1], angles='xy', scale_units='xy', scale=1, color='green', label='v2 (0,1)')
ax.quiver(0, 0, v3[0], v3[1], angles='xy', scale_units='xy', scale=1, color='blue', label='v3 (1,1)')

# Set plot limits and labels for clarity
ax.set_xlim([-1, 2])
ax.set_ylim([-1, 2])
ax.set_xlabel('X-axis')
ax.set_ylabel('Y-axis')
ax.set_title('Vector Visualization')
ax.grid()
ax.legend()

# Ensure the x and y axes have the same scale
ax.set_aspect('equal', adjustable='box')
plt.show()
```

**Output:**
(This code generates a 2D plot showing three vectors originating from (0,0): `v1` in red along the x-axis, `v2` in green along the y-axis, and `v3` in blue as their vector sum.)
