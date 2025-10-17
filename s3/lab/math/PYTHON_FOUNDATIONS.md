# PYTHON_FOUNDATIONS.md

# 1. Python Foundations for Scientific Computing

Before diving into complex mathematical operations, it's essential to understand the fundamental tools we'll be using. This section provides a brief introduction to the key Python libraries that form the backbone of scientific and mathematical computing: `SymPy`, `NumPy`, and `Matplotlib`.

## 1.1 `SymPy`: For Symbolic Mathematics

**What is it?** `SymPy` is a Python library for symbolic mathematics. Unlike libraries that work with numbers, `SymPy` works with mathematical symbols and expressions. This allows you to perform exact, algebraic manipulations like finding derivatives or integrals in their symbolic form (e.g., the derivative of `x^2` is `2x`, not a numerical approximation).

**Key Concepts:**
-   **Symbols:** You must first declare any variable you want to use in a mathematical expression as a symbol.
-   **Expressions:** You can combine these symbols to create symbolic mathematical expressions.

### Example Code

```python
# Import the sympy library, commonly aliased as sp
import sympy as sp

# 1. Define 'x' as a mathematical symbol
x = sp.symbols('x')

# 2. Create a symbolic expression (a function of x)
f = x**2 + 3*x + 2

# 3. Display the expression. 
# In a Jupyter environment, display() renders it with proper mathematical formatting.
print("The symbolic expression is:")
display(f)

# You can even perform operations on it, like substituting a value
f_at_10 = f.subs(x, 10)
print(f"\nThe expression evaluated at x=10 is: {f_at_10}")
```

**Output:**
```
The symbolic expression is:
x**2 + 3*x + 2
(In Jupyter, this is nicely rendered: 𝑥²+3𝑥+2)

The expression evaluated at x=10 is: 132
```

---

## 1.2 `NumPy`: For Numerical Computing

**What is it?** `NumPy` (Numerical Python) is the core library for numerical computation in Python. Its central feature is the powerful N-dimensional array object, which is a highly efficient way to store and operate on numerical data. We use `NumPy` arrays to represent vectors and matrices.

**Key Concepts:**
-   **Array:** A grid of values, all of the same type.
-   **Vector:** A 1-dimensional `NumPy` array.
-   **Matrix:** A 2-dimensional `NumPy` array.

### Example Code

```python
# Import the numpy library, commonly aliased as np
import numpy as np

# 1. Create a 1D NumPy array to represent a vector
v = np.array([1, 2, 3])

# Print the vector and its shape (number of elements)
print("Vector:", v)
print("Shape of the vector:", v.shape)

# 2. Create a 2D NumPy array to represent a 2x3 matrix
M = np.array([[1, 2, 3], [4, 5, 6]])
print("\nMatrix:\n", M)
print("Shape of the matrix (rows, columns):", M.shape)

# 3. Perform fast element-wise operations
v_plus_5 = v + 5
print(f"\nVector v + 5 = {v_plus_5}")
```

**Output:**
```
Vector: [1 2 3]
Shape of the vector: (3,)

Matrix:
 [[1 2 3]
 [4 5 6]]
Shape of the matrix (rows, columns): (2, 3)

Vector v + 5 = [6 7 8]
```

---

## 1.3 `Matplotlib`: For Plotting and Visualization

**What is it?** `Matplotlib` is the most widely used library for creating static, animated, and interactive plots in Python. It's an essential tool for visualizing functions, data, and vectors to gain a better understanding of the underlying mathematics.

**Key Concepts:**
-   **`pyplot`:** The module within `Matplotlib` that provides a simple interface for creating plots.
-   **`plot()`:** A fundamental function to create a 2D line graph.
-   **Customization:** You can add titles, labels, grids, and more to make your plots clear and informative.

### Example Code

```python
# Import the pyplot module from matplotlib and numpy
import matplotlib.pyplot as plt
import numpy as np

# 1. Generate the data to be plotted
#    Create 100 x-values evenly spaced from -5 to 5 using np.linspace()
x_values = np.linspace(-5, 5, 100)
#    Generate the corresponding y-values for the function y = x^2 - 4
y_values = x_values**2 - 4

# 2. Create the plot
plt.plot(x_values, y_values)

# 3. Add labels and a title to make the plot understandable
plt.xlabel('x-axis')
plt.ylabel('y-axis')
plt.title('Graph of y = x^2 - 4')

# 4. Add a grid for better readability and display the final plot
plt.grid(True)
plt.show()
```

**Output:**
(This code cell generates and displays a 2D plot showing the parabola defined by the function y = x^2 - 4.)

---
