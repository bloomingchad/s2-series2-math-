# LINEAR_ALGEBRA_CORE.md

# 3. Linear Algebra - Core Concepts

This section covers the fundamental objects and operations in linear algebra. We will see how to create and manipulate vectors and matrices using both `SymPy` (for symbolic representation) and `NumPy` (for numerical computation).

## 3.1 Creating Vectors and Matrices

Vectors and matrices are the building blocks of linear algebra. A vector is a 1D array of numbers, and a matrix is a 2D array.

### Using `SymPy`

`SymPy` is used when you want to represent matrices with symbolic entries or perform exact rational arithmetic. The `Matrix` object is used.

**Code:**
```python
from sympy import Matrix

# Create SymPy column vectors
# A list of numbers creates a column vector by default.
u = Matrix([1, 2, 3])
v = Matrix([4, 5, 6])

# Create a SymPy matrix
# A list of lists defines the rows of the matrix.
A = Matrix([[1, 0, 1],
            [0, 1, 1]])

print("SymPy Vector u:")
display(u)
print("\nSymPy Matrix A:")
display(A)
```
**Output:**
```
SymPy Vector u:
Matrix([
[1],
[2],
[3]])

SymPy Matrix A:
Matrix([
[1, 0, 1],
[0, 1, 1]])
```

### Using `NumPy`

`NumPy` is the standard for numerical linear algebra. It's highly optimized for calculations with floating-point numbers.

**Code:**
```python
import numpy as np

# Create NumPy 1D arrays (vectors)
u_np = np.array([1, 2, 3])
v_np = np.array([7, 8, 9])

# Create a NumPy 2D array (matrix)
A_np = np.array([[1, 4, 7],
                 [2, 5, 8],
                 [3, 6, 9]])

print("NumPy vector u_np:", u_np)
print("\nNumPy matrix A_np:\n", A_np)
```
**Output:**
```
NumPy vector u_np: [1 2 3]

NumPy matrix A_np:
 [[1 4 7]
 [2 5 8]
 [3 6 9]]
```

---

## 3.2 Vector Operations

### Vector Cross Product

The cross product is an operation on two vectors in 3D space. The result is a vector that is perpendicular to both of the original vectors. This is typically done with `SymPy`.

**Code (`SymPy`):**
```python
from sympy import Matrix

u = Matrix([1, 2, 3])
v = Matrix([4, 5, 6])

# Calculate the cross product using the .cross() method
cross_product = u.cross(v)

print(f"The cross product of {u.T} and {v.T} is:")
display(cross_product)
```
**Output:**
```
The cross product of Matrix([[1, 2, 3]]) and Matrix([[4, 5, 6]]) is:
Matrix([
[-3],
[ 6],
[-3]])
```

### Vector Dot Product (Inner Product)

The dot product takes two vectors and returns a single scalar value. It's a fundamental operation used in calculating vector length and projections.

**Code (`SymPy`):**
```python
from sympy import Matrix

u = Matrix([3, -1, 2])
v = Matrix([4, 0, -3])

# Calculate the dot product using the .dot() method
inner_product = u.dot(v)

print(f"Inner product of u and v (SymPy): {inner_product}")
```
**Output:**
```
Inner product of u and v (SymPy): 6
```

**Code (`NumPy`):**
```python
import numpy as np

u_np = np.array([1, 2, 3])
v_np = np.array([7, 8, 9])

# Calculate the dot product using np.dot()
dot_product = np.dot(u_np, v_np)

print(f"Dot product of u_np and v_np (NumPy): {dot_product}")
```
**Output:**
```
Dot product of u_np and v_np (NumPy): 50
```

### Vector Norm (Length)

The norm (or length or magnitude) of a vector `v` is calculated as the square root of its dot product with itself: `||v|| = sqrt(v . v)`. `NumPy` provides a convenient function for this.

**Code (`NumPy`):**
```python
import numpy as np

g = np.array([1, 2, 3])

# Calculate the norm using np.linalg.norm()
norm_g = np.linalg.norm(g)

print(f"The norm (length) of vector {g} is: {norm_g}")
```
**Output:**
```
The norm (length) of vector [1 2 3] is: 3.7416573867739413
```

---

## 3.3 Core Matrix Properties

### Matrix Rank

The rank of a matrix is the dimension of the vector space spanned by its columns (or rows). It represents the maximum number of linearly independent columns (or rows) in the matrix.

**Code (`SymPy`):**
```python
from sympy import Matrix

A = Matrix([[1, 0, 1],
            [0, 1, 1],
            [0, 0, 0]])

# Get the rank using the .rank() method
rank = A.rank()
print("Matrix A:")
display(A)
print(f"The rank of matrix A is: {rank}")
```
**Output:**
```
Matrix A:
Matrix([
[1, 0, 1],
[0, 1, 1],
[0, 0, 0]])
The rank of matrix A is: 2
```

**Code (`NumPy`):**
```python
import numpy as np

matrix = np.array([[1, 4, 7],
                   [2, 5, 8],
                   [3, 6, 9]])

# Get the rank using np.linalg.matrix_rank()
rank = np.linalg.matrix_rank(matrix)
print("Matrix:\n", matrix)
print(f"The rank of the matrix is: {rank}")
```
**Output:**
```
Matrix:
 [[1 4 7]
 [2 5 8]
 [3 6 9]]
The rank of the matrix is: 2
```

### Reduced Row Echelon Form (RREF)

RREF is a simplified, unique form of a matrix obtained through elementary row operations. It is extremely useful for solving systems of linear equations and for finding the basis of a matrix's row and column spaces. The `SymPy` `.rref()` method is ideal for this.

The `.rref()` method returns two items: the RREF matrix itself and a tuple containing the indices of the pivot columns (the first non-zero entry in each row).

**Code (`SymPy`):**
```python
import sympy as sp

A = sp.Matrix([[1, 2, 3], 
               [4, 5, 6], 
               [7, 8, 9]])

# The rref() method returns the RREF matrix and the pivot column indices
rref_A, pivot_columns = A.rref()

print("Original Matrix A:")
display(A)
print("\nReduced Row Echelon Form of A:")
display(rref_A)
print(f"\nPivot columns are at indices: {pivot_columns}")
```
**Output:**
```
Original Matrix A:
Matrix([
[1, 2, 3],
[4, 5, 6],
[7, 8, 9]])

Reduced Row Echelon Form of A:
Matrix([
[1, 0, -1],
[0, 1,  2],
[0, 0,  0]])

Pivot columns are at indices: (0, 1)
```
