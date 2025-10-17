# CALCULUS.md

# 2. Calculus with SymPy

This section demonstrates how to perform common calculus operations using the `SymPy` library. Because `SymPy` is a symbolic mathematics library, it can compute exact, analytical solutions for derivatives and integrals, just as you would by hand.

## 2.1 Differentiation

Differentiation is the process of finding the instantaneous rate of change of a function. `SymPy`'s `diff()` function makes this straightforward.

### Finding the Derivative of a Function

To find the derivative of a function `f` with respect to a variable `x`, you use `sp.diff(f, x)`.

**Code:**
```python
import sympy as sp

# Define the symbolic variable and the function
x = sp.symbols('x')
f = x**4 + 3*x**2 - 2*x + 1

# Differentiate f with respect to x
derivative_f = sp.diff(f, x)

print("Original function f(x):")
display(f)
print("\nDerivative df/dx:")
display(derivative_f)
```

**Output:**
```
Original function f(x):
x**4 + 3*x**2 - 2*x + 1
(Rendered: 𝑥⁴+3𝑥²−2𝑥+1)

Derivative df/dx:
4*x**3 + 6*x - 2
(Rendered: 4𝑥³+6𝑥−2)
```

### Evaluating a Derivative at a Point

After finding the symbolic derivative, you can evaluate it at a specific point using the `.subs()` method to substitute a numerical value for the variable.

**Code:**
```python
import sympy as sp

x = sp.symbols('x')
f = x**4 + 3*x**2 - 2*x + 1

# First, find the derivative expression
derivative_f = sp.diff(f, x)
print(f"The derivative is: {derivative_f}")

# Now, substitute x=5 into the derivative expression
value_at_5 = derivative_f.subs(x, 5)

print(f"The value of the derivative at x=5 is: {value_at_5}")
```

**Output:**
```
The derivative is: 4*x**3 + 6*x - 2
The value of the derivative at x=5 is: 528
```

---

## 2.2 Partial Differentiation

For functions with multiple variables, partial differentiation finds the derivative with respect to one variable while treating all other variables as constants. The `diff()` function is used here as well, simply by specifying which variable to differentiate with respect to.

**Code:**
```python
from sympy import symbols, cos, sin

# Define multiple symbolic variables
x, y = symbols('x y')
g = (x**2)*(y**2) + sin(x)*cos(y)

print("Original function g(x, y):")
display(g)

# Calculate the partial derivative with respect to x
par_x = g.diff(x)
print("\nPartial derivative ∂g/∂x:")
display(par_x)

# Calculate the partial derivative with respect to y
par_y = g.diff(y)
print("\nPartial derivative ∂g/∂y:")
display(par_y)
```

**Output:**
```
Original function g(x, y):
x**2*y**2 + sin(x)*cos(y)
(Rendered: 𝑥²𝑦² + sin(𝑥)cos(𝑦))

Partial derivative ∂g/∂x:
2*x*y**2 + cos(x)*cos(y)
(Rendered: 2𝑥𝑦² + cos(𝑥)cos(𝑦))

Partial derivative ∂g/∂y:
2*x**2*y - sin(x)*sin(y)
(Rendered: 2𝑥²𝑦 − sin(𝑥)sin(𝑦))
```

---

## 2.3 Integration

Integration is the process of finding the antiderivative of a function or the area under a curve. `SymPy`'s `integrate()` function can perform both indefinite and definite integration.

### Indefinite Integration

This finds the general antiderivative of a function. Note that `SymPy` does not add the constant of integration `+ C`.

**Code:**
```python
from sympy import symbols, exp, integrate

x = symbols('x')
h = exp(2*x) + x**3

# Integrate h with respect to x
antiderivative_h = integrate(h, x)

print("Function h(x):")
display(h)
print("\nIndefinite integral ∫h(x)dx:")
display(antiderivative_h)
```

**Output:**
```
Function h(x):
exp(2*x) + x**3
(Rendered: 𝑒²ˣ + 𝑥³)

Indefinite integral ∫h(x)dx:
x**4/4 + exp(2*x)/2
(Rendered: 𝑥⁴/4 + 𝑒²ˣ/2)
```

### Definite Integration

This calculates the integral of a function over a specific interval, representing the net area under the curve between the bounds. The interval is passed as a tuple: `(variable, lower_bound, upper_bound)`.

**Code:**
```python
from sympy import integrate, symbols

x = symbols('x')
f = x**2

# Integrate f from x=0 to x=3
definite_integral_result = integrate(f, (x, 0, 3))

print(f"The definite integral of {f} from 0 to 3 is:")
display(definite_integral_result)
```

**Output:**
```
The definite integral of x**2 from 0 to 3 is:
9
```

### Double Integration

Double integration calculates the volume under a surface defined by a function `f(x, y)` over a rectangular region. The limits for each variable are provided as separate tuples.

**Code:**
```python
from sympy import integrate, symbols

x, y = symbols('x y')
f = x*y

# Define the integration limits
x_limits = (x, 0, 1)  # Integrate x from 0 to 1
y_limits = (y, 0, 2)  # Integrate y from 0 to 2

# The order of integration is from left to right (first x, then y)
double_integral_result = integrate(f, x_limits, y_limits)

print(f"The double integral of f(x,y) = {f} for x in [0,1] and y in [0,2] is:")
display(double_integral_result)
```

**Output:**
```
The double integral of f(x,y) = x*y for x in [0,1] and y in [0,2] is:
1
```
