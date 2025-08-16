
## **1.7 Performance and Error Analysis (Simple Numerical Problems)**

Performance and error analysis involves using the concepts of measurement error to quantify the uncertainty in a measurement or a calculated result. When we combine multiple measurements, their individual errors propagate and contribute to the total error in the final result.

### **1. Combination of Errors (Error Propagation)**

When a final calculated quantity depends on several individual measurements, the error in the final quantity can be estimated based on the errors in the individual measurements.

#### **a) Sum of Quantities (Addition)**

If a quantity `X` is the sum of two or more measurements, e.g., `X = x₁ + x₂ + x₃ + ...`, then the **absolute error** in `X` is the **sum of the absolute errors** in the individual measurements.

*   **Formula for Absolute Error:** **δX = δx₁ + δx₂ + δx₃ + ...**

**Example:**
Two resistors `R₁ = 100 ± 5 Ω` and `R₂ = 150 ± 2 Ω` are connected in series. What is the total resistance?
*   Nominal Resistance: `R = R₁ + R₂ = 100 + 150 = 250 Ω`
*   Absolute Error: `δR = δR₁ + δR₂ = 5 + 2 = 7 Ω`
*   Total Resistance: `R = 250 ± 7 Ω`

#### **b) Difference of Quantities (Subtraction)**

If a quantity `X` is the difference between two measurements, e.g., `X = x₁ - x₂`, the **absolute error** in `X` is **still the sum of the absolute errors** in the individual measurements. Errors are always additive in a worst-case analysis.

*   **Formula for Absolute Error:** **δX = δx₁ + δx₂**

**Example:**
The initial temperature is `T₁ = (50 ± 0.5) °C` and the final temperature is `T₂ = (80 ± 0.5) °C`. Find the change in temperature and its error.
*   Nominal Change: `ΔT = T₂ - T₁ = 80 - 50 = 30 °C`
*   Absolute Error: `δ(ΔT) = δT₂ + δT₁ = 0.5 + 0.5 = 1.0 °C`
*   Change in Temperature: `ΔT = 30 ± 1.0 °C`

#### **c) Product of Quantities (Multiplication)**

If a quantity `X` is the product of two or more measurements, e.g., `X = x₁ ⋅ x₂ ⋅ x₃ ⋅ ...`, then the **relative error** in `X` is the **sum of the relative errors** in the individual measurements.

*   **Formula for Relative Error:** **ε<sub>X</sub> = ε<sub>x₁</sub> + ε<sub>x₂</sub> + ε<sub>x₃</sub> + ...**
    *   Where `ε = δx / x`
*   **Formula in terms of percentage errors:** **%ε<sub>X</sub> = %ε<sub>x₁</sub> + %ε<sub>x₂</sub> + ...**

**Example:**
The voltage across a resistor is `V = 100 ± 2 V` and the current is `I = 10 ± 0.2 A`. Calculate the power `P = V ⋅ I` and its error.
1.  Nominal Power: `P = 100 V × 10 A = 1000 W`
2.  Calculate Percentage Errors:
    *   `%ε_V = (2 / 100) × 100% = 2%`
    *   `%ε_I = (0.2 / 10) × 100% = 2%`
3.  Add Percentage Errors:
    *   `%ε_P = %ε_V + %ε_I = 2% + 2% = 4%`
4.  Calculate Absolute Error in Power:
    *   `δP = 4% of 1000 W = 0.04 × 1000 = 40 W`
5.  Final Result: `P = 1000 ± 40 W`

#### **d) Division of Quantities**

If a quantity `X` is the result of a division, e.g., `X = x₁ / x₂`, the **relative error** in `X` is **still the sum of the relative errors** of the individual quantities.

*   **Formula for Relative Error:** **ε<sub>X</sub> = ε<sub>x₁</sub> + ε<sub>x₂</sub>**

**Example:**
From the previous example, calculate the resistance `R = V / I`.
1.  Nominal Resistance: `R = 100 V / 10 A = 10 Ω`
2.  Percentage Errors (from before): `%ε_V = 2%`, `%ε_I = 2%`
3.  Add Percentage Errors: `%ε_R = %ε_V + %ε_I = 2% + 2% = 4%`
4.  Calculate Absolute Error in Resistance:
    *   `δR = 4% of 10 Ω = 0.04 × 10 = 0.4 Ω`
5.  Final Result: `R = 10 ± 0.4 Ω`

---

### **2. Numerical Problems from Documents**

Let's solve the numerical problems provided in your materials.

#### **Problem 1 (From CO Assessment Questions)**

**A meter reads 127.50 V and the true value of the voltage is 127.43 V. Determine the static error and static correction of this instrument.**

*   **Given:**
    *   Measured Value (A<sub>m</sub>) = 127.50 V
    *   True Value (A<sub>t</sub>) = 127.43 V
*   **Static Error (δA):**
    *   `δA = A_m - A_t = 127.50 - 127.43`
    *   **`δA = +0.07 V`**
*   **Static Correction (δC):**
    *   `δC = -δA`
    *   **`δC = -0.07 V`**

#### **Problem 2 (From Handwritten Notes / Question Bank)**

**Two resistors, R₁(100 ± 3) Ω and R₂(150 ± 2) Ω, are connected in series. What is their equivalent resistance?** (Slightly different values than my example above, so we'll solve it again).

*   **Given:**
    *   `R₁ = 100 Ω`, `δR₁ = 3 Ω`
    *   `R₂ = 150 Ω`, `δR₂ = 2 Ω`
*   **Rule:** For addition, add the nominal values and add the absolute errors.
*   **Nominal Resistance (R<sub>eq</sub>):**
    *   `R_eq = R₁ + R₂ = 100 + 150 = 250 Ω`
*   **Absolute Error (δR<sub>eq</sub>):**
    *   `δR_eq = δR₁ + δR₂ = 3 + 2 = 5 Ω`
*   **Result:** The equivalent resistance is **`250 ± 5 Ω`**.

#### **Problem 3 (From Handwritten Notes / Question Bank)**

**The voltage across a wire is (100 ± 5) V and the current passing through it is (10 ± 0.2) A. Find the resistance of the wire.**

*   **Given:**
    *   `V = 100 V`, `δV = 5 V`
    *   `I = 10 A`, `δI = 0.2 A`
*   **Rule:** For division (`R = V / I`), add the relative/percentage errors.
*   **Nominal Resistance (R):**
    *   `R = V / I = 100 / 10 = 10 Ω`
*   **Percentage Errors:**
    *   `%ε_V = (δV / V) × 100% = (5 / 100) × 100% = 5%`
    *   `%ε_I = (δI / I) × 100% = (0.2 / 10) × 100% = 2%`
*   **Total Percentage Error in Resistance (%ε<sub>R</sub>):**
    *   `%ε_R = %ε_V + %ε_I = 5% + 2% = 7%`
*   **Absolute Error in Resistance (δR):**
    *   `δR = 7% of 10 Ω = 0.07 × 10 = 0.7 Ω`
*   **Result:** The resistance is **`10 ± 0.7 Ω`**.

---
### **Main Causes for Errors in a Sensor & Performance Improvement**

**Q20. State the main causes for errors in a sensor?**
*   **Manufacturing Imperfections:** Variations during the manufacturing process.
*   **Aging:** Component properties changing over time (causes drift).
*   **Environmental Factors:** Temperature, humidity, vibration, and electromagnetic interference.
*   **Loading Effect:** The sensor itself altering the quantity it is trying to measure.
*   **Non-linearity:** Inherent physical properties of the sensing material.
*   **Hysteresis:** Internal friction or magnetic effects.
*   **Improper Calibration:** Incorrect initial setup and calibration.

**Q21. Illustrate the various performance improvement strategies for sensors.**
*   **Calibration:** Regularly calibrating the sensor against a known standard to correct for systematic errors.
*   **Compensation:** Using secondary sensors to measure environmental factors (like temperature) and mathematically correct the primary sensor's output.
*   **Filtering:** Using analog or digital filters to remove noise from the output signal.
*   **Shielding and Grounding:** Using proper electrical shielding and grounding techniques to minimize interference from external sources.
*   **Signal Averaging:** Taking multiple readings and averaging them to reduce the effect of random errors.
*   **Smart Sensors:** Using microprocessors to perform self-calibration, self-diagnosis, and linearization in real-time.

