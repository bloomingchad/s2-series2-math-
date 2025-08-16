
## **2.5 Coriolis Mass Flow Sensor**

A **Coriolis mass flow sensor** (or Coriolis meter) is a device that measures **mass flow rate** directly, rather than inferring it from volumetric flow and density. This makes it one of the most accurate and versatile flow meters available. It can measure the flow of liquids, slurries, and even some gases.

### **1. The Core Principle: The Coriolis Effect**

The **Coriolis effect** is an inertial force that acts on an object moving within a rotating frame of reference. A simple example is feeling a sideways push when walking from the center to the edge of a spinning merry-go-round.

*   **In a Flow Meter:** Instead of a continuously rotating frame, the Coriolis meter uses one or more tubes that are continuously **vibrated** (oscillated) at their natural resonant frequency by an actuator (like an electromagnetic coil). This vibration creates the rotating frame of reference.

### **2. Working Principle of a Coriolis Meter**

1.  **Vibrating Tubes:** The meter contains one or more flow tubes (often U-shaped or straight) which are vibrated up and down in a sinusoidal motion by a drive coil located at the bend of the tube.
    *   [**Click here to see a diagram showing the oscillatory motion of the tubes**](https://www.google.com/search?tbm=isch&q=coriolis+meter+tube+oscillation)

2.  **Zero Flow Condition:** When there is no fluid flowing, the tubes vibrate symmetrically. Two sensors (pickoffs), one placed on the inlet side and one on the outlet side of the tube, detect this vibration. With no flow, the sinusoidal signals from both sensors are **in phase** with each other.

3.  **Flow Condition (Coriolis Effect in Action):**
    *   As fluid flows into the vibrating tube, it is forced to accelerate upwards during the upward half of the vibration cycle. This upward acceleration of the fluid mass exerts a downward reactive force (Coriolis force) on the **inlet side** of the tube, causing it to lag behind in the vibration.
    *   Simultaneously, the fluid flowing towards the outlet has to decelerate from its maximum vertical velocity back to zero. This deceleration exerts an upward reactive force on the **outlet side** of the tube, causing it to lead in the vibration.
    *   The result is a **twisting** of the flow tube. The inlet side lags, and the outlet side leads.
    *   [**Click here to see an animation of the tube twisting due to the Coriolis effect**](https://www.google.com/search?tbm=isch&q=coriolis+flow+meter+twisting+animation)

4.  **Measurement of Twist (Phase Shift):**
    *   This twisting causes the sinusoidal signals from the two pickoff sensors to become **out of phase**.
    *   The magnitude of this **time difference or phase shift (Δt)** between the two sensor signals is directly and linearly proportional to the **mass flow rate (ṁ)**.
    *   **Formula:** **ṁ ∝ Δt**
    *   A higher mass flow rate causes a greater twist and a larger phase shift.

### **3. Additional Measurement Capabilities**

Besides mass flow, Coriolis meters can measure other properties simultaneously:

*   **Density Measurement:** The natural frequency at which the tubes vibrate depends on the total mass of the tube and the fluid inside it. A denser fluid will cause the tubes to vibrate at a lower frequency. By precisely measuring this vibration frequency, the meter can calculate the fluid's **density** directly.
*   **Temperature Measurement:** An internal temperature sensor (like an RTD) is often included to monitor the tube's temperature. This can be used for process control or to compensate for temperature-induced changes in the tube's elasticity.
*   **Volumetric Flow Rate:** Since the meter measures both mass flow rate (ṁ) and density (ρ), it can calculate the **volumetric flow rate (Q)** using the formula `Q = ṁ / ρ`.

### **4. Advantages and Disadvantages**

| Advantages | Disadvantages / Limitations |
| :--- | :--- |
| **Direct Mass Flow Measurement:** The most significant advantage. It is independent of fluid properties. | **Pressure Drop:** The tube geometry can cause a higher pressure drop compared to non-intrusive meters, especially at high velocities. |
| **High Accuracy:** Typically the most accurate flow meter available (errors can be as low as 0.1% - 0.2%). | **Size and Installation:** Can be heavy and bulky. Requires proper installation to avoid issues from external vibrations. |
| **Versatile:** Measures a wide range of fluids including liquids, gases, slurries, and non-Newtonian fluids. | **Cost:** Generally more expensive than other types of flow meters. |
| **Multi-parameter Measurement:** Measures mass flow, density, temperature, and volumetric flow with a single instrument. | **Not Ideal for Low-Pressure Gases:** The low density of the gas may not produce a strong enough Coriolis effect for accurate measurement. |
| **No Moving Parts & Low Maintenance:** The only moving parts are the vibrating tubes, which do not wear out. | **Cavitation Risk:** Not recommended for liquids near their boiling point, as cavitation (formation of vapor bubbles) can interfere with the vibration. |
| **Unaffected by Fluid Properties:** Readings are not affected by changes in fluid viscosity, pressure, or conductivity. | |

### **Relevant Questions from Question Bank**

**Q18. Explain coriolis effect and how can it be used for sensing mass flow, Advantages, Working.**
*   **Coriolis Effect:** An inertial force experienced by a mass moving within a rotating or oscillating frame of reference.
*   **How it's Used for Mass Flow:** A Coriolis meter vibrates its flow tubes, creating an oscillating frame of reference. As mass flows through the tubes, it resists the vertical motion of the vibration, causing the tube to twist. The inlet side of the tube lags in the vibration, and the outlet side leads. The amount of this twist, measured as a phase shift between sensors on the inlet and outlet, is directly proportional to the mass flow rate.
*   **Working:** *(As detailed in section 2 above).*
*   **Advantages:** *(As detailed in the table in section 4 above, including direct mass flow measurement, high accuracy, versatility, and multi-parameter capability).*