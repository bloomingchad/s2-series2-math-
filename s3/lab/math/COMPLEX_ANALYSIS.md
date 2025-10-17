# COMPLEX_ANALYSIS.md

# 5. Complex Analysis with SymPy

This section explores how `SymPy`, a symbolic mathematics library, can be used to work with complex functions and verify fundamental theorems in complex analysis. We will cover finding the real and imaginary parts of complex functions, checking for analyticity using the Cauchy-Riemann equations, and verifying Cauchy's integral theorems.

## 5.1 Working with Complex Functions

A complex function `f(z)` can be expressed in terms of its real and imaginary parts, `f(z) = u(x,y) + i*v(x,y)`, where `z = x + iy`. `SymPy` can automatically separate these parts for us.

### Finding Real and Imaginary Parts

To do this, we first define `x` and `y` as real symbols. Then we substitute `z = x + I*y` into our complex function `f(z)`. The `re()` and `im()` functions can then extract the real and imaginary components.

**Code:**
```python
# I represents the imaginary unit in SymPy
from sympy import symbols, I, re, im, exp

# Define z as a general complex symbol
z = symbols('z')
# Define x and y as symbols that are explicitly real
x, y = symbols('x y', real=True)

# Define our complex function, e.g., f(z) = e^z
f_z = exp(z)

# Substitute z = x + I*y into the function
f_xy = f_z.subs(z, x + I*y)

# Use re() and im() to get the real and imaginary parts
real_part = re(f_xy)
imag_part = im(f_xy)

print(f"For the function f(z) = {f_z}:")

# .expand(complex=True) shows the full form using Euler's formula
print(f"f(x,y) = {f_xy.expand(complex=True)}")

print("\nReal part u(x,y):")
display(real_part)
print("\nImaginary part v(x,y):")
display(imag_part)
```

**Output:**
```
For the function f(z) = exp(z):
f(x,y) = exp(x)*cos(y) + I*exp(x)*sin(y)

Real part u(x,y):
exp(x)*cos(y)
(Rendered: 𝑒ˣcos(𝑦))

Imaginary part v(x,y):
exp(x)*sin(y)
(Rendered: 𝑒ˣsin(𝑦))
```

---

## 5.2 Analyticity and the Cauchy-Riemann Equations

A complex function `f(z) = u(x,y) + i*v(x,y)` is **analytic** (or holomorphic) in a region if it is differentiable at every point in that region. A function is analytic if and only if its real and imaginary parts satisfy the **Cauchy-Riemann equations**:

1.  `∂u/∂x = ∂v/∂y`
2.  `∂u/∂y = -∂v/∂x`

We can use `SymPy` to compute these partial derivatives and check if the equations hold.

**Code to check C-R equations for `f(z) = z^2`:**
```python
from sympy import symbols, I, re, im, diff

z = symbols('z')
x, y = symbols('x y', real=True)

f_z = z**2
f_xy = f_z.subs(z, x + I*y)

u = re(f_xy) # This becomes x**2 - y**2
v = im(f_xy) # This becomes 2*x*y

# Calculate all four partial derivatives
du_dx = diff(u, x)
dv_dy = diff(v, y)
du_dy = diff(u, y)
dv_dx = diff(v, x)

print(f"For f(z) = z^2, u(x,y) = {u} and v(x,y) = {v}")
print(f"  ∂u/∂x = {du_dx}")
print(f"  ∂v/∂y = {dv_dy}")
print(f"  ∂u/∂y = {du_dy}")
print(f"  -∂v/∂x = {-dv_dx}")

# Check if the Cauchy-Riemann equations are satisfied
cr_eq1_holds = (du_dx == dv_dy)
cr_eq2_holds = (du_dy == -dv_dx)

if cr_eq1_holds and cr_eq2_holds:
    print("\nConclusion: Both Cauchy-Riemann equations are satisfied. The function is analytic.")
else:
    print("\nConclusion: The Cauchy-Riemann equations are not satisfied. The function is not analytic.")
```

**Output:**
```
For f(z) = z^2, u(x,y) = x**2 - y**2 and v(x,y) = 2*x*y
  ∂u/∂x = 2*x
  ∂v/∂y = 2*x
  ∂u/∂y = -2*y
  -∂v/∂x = -2*y

Conclusion: Both Cauchy-Riemann equations are satisfied. The function is analytic.
```

---

## 5.3 Cauchy's Integral Theorem

**The Theorem:** If a function `f(z)` is analytic everywhere inside and on a simple closed contour `C`, then the contour integral of `f(z)` over `C` is zero.
`∮ f(z) dz = 0`

We can verify this by parameterizing a contour (like the unit circle) and computing the definite integral.

**Parameterization:** The unit circle `C` can be parameterized as `z(t) = e^(it)` for `t` from `0` to `2π`. Then `dz = i*e^(it) dt`.

**Code to verify for `f(z) = z^2` over the unit circle:**
```python
from sympy import symbols, integrate, exp, pi, I, diff

# Define symbols
z = symbols('z')
t = symbols('t', real=True)

# Define the function (which is analytic everywhere)
f = z**2

# 1. Parameterize the contour (unit circle)
z_t = exp(I*t)
# 2. Find the differential dz in terms of dt
dz_dt = diff(z_t, t)

# 3. The integral is ∫ f(z(t)) * z'(t) dt from 0 to 2*pi
integral_value = integrate(f.subs(z, z_t) * dz_dt, (t, 0, 2*pi))

print(f"The integral of f(z) = {f} over the unit circle is: {integral_value}")

if integral_value == 0:
    print("Result is 0, which verifies Cauchy's Integral Theorem.")
else:
    print("The theorem is not verified (something is wrong).")
```

**Output:**
```
The integral of f(z) = z^2 over the unit circle is: 0
Result is 0, which verifies Cauchy's Integral Theorem.
```

---

## 5.4 Cauchy's Integral Formula

**The Formula:** If `f(z)` is analytic inside and on a simple closed contour `C`, and `a` is any point inside `C`, then the value of the function at `a` is given by the integral:
`f(a) = (1 / 2πi) * ∮ f(z)/(z-a) dz`
Rearranging gives: `∮ f(z)/(z-a) dz = 2πi * f(a)`

We can verify this by computing both sides of the rearranged equation.

**Code to verify for `f(z) = z^2` with `a = 0.5` (inside the unit circle):**
```python
from sympy import symbols, integrate, exp, pi, I, diff

# Define symbols
z = symbols('z')
t = symbols('t', real=True)

# Define the function and the interior point 'a'
f = z**2
a_val = 0.5 # This point is inside the unit circle

# 1. Parameterize the contour (unit circle) and find dz
z_t = exp(I*t)
dz_dt = diff(z_t, t)

# 2. Set up the integrand for the left-hand side (LHS) of the formula
integrand = f.subs(z, z_t) / (z_t - a_val) * dz_dt

# 3. Calculate the integral
integral_result = integrate(integrand, (t, 0, 2*pi))

# 4. Calculate the expected result for the right-hand side (RHS): 2*pi*I * f(a)
expected_result = 2 * pi * I * f.subs(z, a_val)

print(f"LHS: The integral of f(z)/(z-a) is: {integral_result.evalf()}")
print(f"RHS: The value of 2*pi*i*f(a) is: {expected_result.evalf()}")

# Use sympy.simplify to check if the difference is zero
if (integral_result - expected_result).simplify() == 0:
    print("\nConclusion: The results match, verifying Cauchy's Integral Formula.")
else:
    print("\nConclusion: The results do not match.")
```

**Output:**
```
LHS: The integral of f(z)/(z-a) is: 1.57079632679490*I
RHS: The value of 2*pi*i*f(a) is: 1.57079632679490*I

Conclusion: The results match, verifying Cauchy's Integral Formula.
```
