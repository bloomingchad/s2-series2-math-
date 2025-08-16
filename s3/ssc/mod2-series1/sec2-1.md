

# **Module 2: Temperature and Flow Sensors**

## **Introduction to Temperature Sensors**

A **temperature sensor** is a device that measures the temperature or a temperature gradient of a system or environment and converts this input data into a readable form, usually an electrical signal. They are essential components in countless applications, from industrial process control to everyday home appliances.

### **Classification of Temperature Sensors**

Temperature sensors can be broadly classified based on several criteria:

1.  **Based on Contact with the Object:**
    *   **Contact Type Sensors:** These sensors must be in physical contact with the object being measured.
        *   *Examples:* Thermocouples, RTDs, Thermistors.
    *   **Non-Contact Type Sensors:** These sensors measure the thermal radiation (usually infrared) emitted by an object to determine its temperature without physical contact.
        *   *Examples:* Infrared (IR) Sensors, Thermal Cameras, Pyrometers.

2.  **Based on Working Principle:**
    *   **Thermo-Resistive:** Based on the change in electrical resistance with temperature. (RTDs, Thermistors)
    *   **Thermoelectric:** Based on the Seebeck effect, where a voltage is generated due to a temperature difference. (Thermocouples)
    *   **Semiconductor-Based:** Use the properties of a semiconductor PN junction. (Diode sensors, IC sensors like LM35)
    *   **Pyroelectric & Infrared:** Detect infrared radiation.

---

## **2.1 Thermo-Resistive & Thermoelectric Sensors**

### **A. Thermo-Resistive Sensors**

This class of sensors operates on the principle that the electrical resistance of certain materials changes in a predictable way as their temperature changes.

#### **1) RTD (Resistance Temperature Detector)**

An RTD leverages the fact that the resistance of a pure metal increases in a highly linear and repeatable manner with temperature.

*   **Working Principle:** As the temperature of the metal sensing element increases, its electrical resistance increases. This relationship is nearly linear over a wide temperature range.
*   **Material:** The most common and accurate material is **Platinum (Pt)**. "Pt100" is a very common type, meaning it has a resistance of 100 Ω at 0°C. Other materials include Nickel (Ni) and Copper (Cu).
*   **Construction:** An RTD consists of a fine coil of pure metal wire (e.g., platinum) either wound around a ceramic or glass core or deposited as a thin film on a ceramic substrate. This element is then enclosed in a protective sheath to shield it from the environment.
    *   [**Click here to see the construction of an RTD sensor**](https://www.google.com/search?tbm=isch&q=RTD+sensor+construction+diagram)
*   **Equation (Linear Approximation):**
    `R_t = R₀(1 + α ⋅ ΔT)`
    *   **R<sub>t</sub>**: Resistance at temperature T (°C).
    *   **R₀**: Resistance at a reference temperature (usually 0°C).
    *   **α**: Temperature coefficient of resistance for the material (for Platinum, α ≈ 0.00385 /°C).
    *   **ΔT**: The change in temperature from the reference (T - 0°C).

#### **2) Thermistor (Thermal Resistor)**

A thermistor is a type of resistor whose resistance is highly dependent on temperature, more so than in standard resistors. They are made from semiconductor oxides.

*   **Working Principle:** The resistance of the semiconductor material changes *exponentially* and non-linearly with temperature.
*   **Types:**
    *   **NTC (Negative Temperature Coefficient):** Most common type. Its resistance **decreases** as temperature increases.
    *   **PTC (Positive Temperature Coefficient):** Its resistance **increases** as temperature increases.
*   **Material:** Made from semiconductor oxides of metals like Manganese (Mn), Cobalt (Co), and Nickel (Ni).
*   **Construction:** Typically small beads, discs, or chips of semiconductor material encapsulated with two connecting leads.
    *   [**Click here to see different types of thermistors**](https://www.google.com/search?tbm=isch&q=NTC+thermistor+types)
*   **Characteristics:**
    *   **Advantages:** High sensitivity (large change in resistance for a small change in temp), fast response time, and low cost.
    *   **Disadvantage:** Highly non-linear, requiring linearization circuits or software lookup tables for accurate readings.

### **B. Thermoelectric Sensors (Thermocouple)**

A thermocouple is a passive sensor that generates a voltage in response to a temperature difference.

*   **Working Principle:** Based on the **Seebeck Effect**. This effect states that when two wires made of dissimilar metals are joined at two junctions, and these junctions are maintained at different temperatures, a small, predictable direct voltage (EMF) is generated. This voltage is proportional to the temperature difference between the junctions.
*   **Construction:**
    *   Two wires of different metals are welded together at one end. This is the **measuring junction** (or "hot" junction).
    *   The other ends of the wires are connected to the measurement device (e.g., a voltmeter). This point is the **reference junction** (or "cold" junction).
    *   The measured voltage depends on the temperature difference between these two junctions.
    *   [**Click here to see a basic thermocouple circuit diagram**](https://www.google.com/search?tbm=isch&q=thermocouple+working+principle+diagram)
*   **Materials:** Different combinations of metals are used for different temperature ranges and applications. These are designated by "types."
    *   **Type K:** Chromel–Alumel (very common, general-purpose).
    *   **Type J:** Iron–Constantan.
*   **Equation (Simple Form):**
    `V ≈ α ⋅ ΔT`
    *   **V**: Output voltage (EMF).
    *   **α**: Seebeck coefficient (depends on the pair of metals).
    *   **ΔT**: Temperature difference between the measuring and reference junctions (T<sub>hot</sub> - T<sub>ref</sub>).

---

### **Comparison of Thermo-Resistive and Thermoelectric Sensors**

| Feature | RTD (Pt100) | Thermistor (NTC) | Thermocouple |
| :--- | :--- | :--- | :--- |
| **Output** | Resistance | Resistance | Voltage |
| **Relationship** | **Highly Linear** | Highly Non-linear (Exponential) | Reasonably Linear |
| **Accuracy** | **Highest** | High (in narrow range) | Good |
| **Range** | Wide (-200°C to 600°C) | Limited (-50°C to 150°C) | **Widest** (-200°C to 1800°C+) |
| **Sensitivity** | Low | **Very High** | Low |
| **Response Time** | Slower | **Fastest** | Fast |
| **Cost** | Expensive | **Cheapest** | Cheap |
| **Power** | Active (needs external current) | Active (needs external current) | **Passive** (self-powered) |
| **Stability** | **Excellent (Best long-term)** | Fair (prone to drift) | Good |

---

### **Simple Numerical Problems**

Here are the solutions to the numerical problems from your provided documents.

#### **Problem 1: Find RTD Resistance**

**A platinum RTD has a resistance of 100 Ω at 0°C. The temperature coefficient (α) is 0.004/°C. What will be the RTD resistance at 60°C?**
*   **Formula:** `Rt = R₀(1 + αΔT)`
*   **Given:** `R₀ = 100 Ω`, `α = 0.004 /°C`, `T = 60°C`
*   **Calculation:** `ΔT = 60°C - 0°C = 60°C`
    `Rt = 100 × [1 + (0.004 × 60)]`
    `Rt = 100 × [1 + 0.24]`
    `Rt = 100 × 1.24`
*   **Answer:** **`Rt = 124 Ω`**

#### **Problem 2: Find Temperature from RTD Resistance**

**A PT100 RTD reads 128 Ω. Its R₀=100 Ω, and α=0.00385/°C. Find the temperature sensed by the RTD.**
*   **Formula:** `Rt = R₀(1 + αT)` (since reference is 0°C, ΔT = T)
*   **Rearranged Formula:** `T = (Rt - R₀) / (R₀α)`
*   **Given:** `Rt = 128 Ω`, `R₀ = 100 Ω`, `α = 0.00385 /°C`
*   **Calculation:**
    `T = (128 - 100) / (100 × 0.00385)`
    `T = 28 / 0.385`
*   **Answer:** **`T ≈ 72.7 °C`**

---

### **Relevant Questions from Question Bank**

**Q1. State the working of a RTD and thermistor.**
*   **RTD:** Works on the principle that the electrical resistance of a pure metal (like platinum) increases in a stable and nearly linear fashion as its temperature increases.
*   **Thermistor:** Works on the principle that the resistance of a semiconductor oxide changes significantly and non-linearly (usually decreasing for NTC) as its temperature increases.

**Q2. Describe the construction details and working principle of a resistance temperature detector?**
*   **Working Principle:** (As described above). The change in resistance is measured and converted to a temperature reading.
*   **Construction:** It consists of a coil of fine, pure metal wire (like platinum) wound on an inert ceramic or glass former. This assembly is placed inside a protective sheath (often stainless steel) to protect it from mechanical damage and environmental conditions.

**Q4. Explain the working principle of a thermocouple.**
*   A thermocouple works on the **Seebeck effect**. When two different conductive metals are joined to form two junctions, and a temperature difference exists between these junctions, a small DC voltage (EMF) is produced. This voltage is directly proportional to the temperature difference, allowing for temperature measurement.