

## **1.6 Overview of Sensors: Performance Characteristics**

The performance of a sensor is defined by a set of parameters or characteristics that describe how well it measures a physical quantity. These characteristics are crucial for selecting the appropriate sensor for a specific application. They are divided into two main categories: **Static Characteristics** and **Dynamic Characteristics**.

### **1. Static Characteristics**

Static characteristics describe the performance of a sensor when the input quantity is **constant** or changing very slowly. They are determined by **static calibration**, where a known input is applied to the sensor and the output is recorded.

[**Click here to see a graph illustrating linearity, range, and hysteresis**](https://www.google.com/search?tbm=isch&q=sensor+static+characteristics+graph)

| Characteristic | Explanation |
| :--- | :--- |
| **Accuracy** | The degree of closeness between the sensor's measured value and the true, actual value. It is a measure of the total error of the instrument. High accuracy means low error. Often expressed as a percentage of the full-scale output (%FSO). |
| **Precision** | The ability of a sensor to consistently reproduce the same output reading when the same input is applied repeatedly under the same conditions. A sensor can be precise but not accurate. For example, if a scale consistently reads 1.05 kg for a 1.00 kg weight, it is precise but inaccurate. |
| **Range (or Span)**| The minimum and maximum values of the input quantity that the sensor is designed to measure reliably. For example, a temperature sensor might have a range of -50°C to +150°C. The span is the difference between the maximum and minimum values (in this case, 200°C). |
| **Sensitivity** | The ratio of the change in the sensor's output to the corresponding change in its input. It represents how responsive the sensor is. A higher sensitivity means a small change in input causes a large change in output. It is the **slope of the calibration curve**. **Formula: Sensitivity = ΔOutput / ΔInput**. |
| **Linearity** | How well the sensor's output follows a straight line with respect to the input over its operating range. A perfectly linear sensor has a constant sensitivity. In reality, most sensors have some degree of **non-linearity**, which is the maximum deviation of the output from the ideal straight line. |
| **Resolution** | The smallest detectable change in the input quantity that will cause a change in the sensor's output. For a digital sensor, this is often the value of the least significant bit (LSB). For example, if a temperature sensor can only show changes in 0.1°C increments, its resolution is 0.1°C. |
| **Threshold** | The minimum input stimulus required to produce a detectable output. Below the threshold, the sensor will not respond, and the output will be zero. |
| **Hysteresis** | The difference in the sensor's output when the same input value is approached first with an increasing input and then with a decreasing input. It is caused by effects like friction or magnetic history. The output "lags" behind the input. |
| **Repeatability** | The ability of a sensor to produce the same output when the same input is applied repeatedly over a short period of time, under the same conditions, and approached from the same direction. It is a measure of consistency. |
| **Drift** | A gradual change in the sensor's output over a long period of time, even when the input remains constant. It can be caused by aging of components, temperature changes, or other environmental factors. |
| **Isolation and Grounding** | **Isolation** refers to the electrical separation between the sensor's input (the physical world) and its output circuitry. It's crucial for safety and for preventing ground loops, where unwanted currents flow between different ground points in a system, causing noise and errors. Proper **grounding** provides a stable reference point for the electrical signal. |

### **2. Dynamic Characteristics**

Dynamic characteristics describe the performance of a sensor when the input quantity is **changing rapidly with time**. They define how fast a sensor can respond to changes.

| Characteristic | Explanation |
| :--- | :--- |
| **Response Time**| The time taken by the sensor's output to reach a certain percentage (e.g., 95% or 99%) of its final steady-state value after a sudden step change in the input. A faster response time is crucial for measuring rapidly changing signals. |
| **Time Constant (τ)** | For a first-order system, this is the time it takes for the output to reach **63.2%** of its final value in response to a step input. It is a key parameter that defines the sensor's speed of response. A smaller time constant means a faster sensor. |
| **Frequency Response** | The ability of a sensor to accurately measure an input that is varying sinusoidally. It is specified by the range of frequencies over which the sensor's output remains within a specified limit of the true value. It indicates the sensor's usable **bandwidth**. |
| **Fidelity** | A measure of how faithfully a sensor reproduces its input signal at its output. A sensor with high fidelity will have an output waveform that is an exact replica of the input waveform in terms of shape and time relationship, though the amplitude may be different. Dynamic error determines the fidelity. |
| **Lag** | The time delay between a change in the input and the corresponding change appearing at the sensor's output. |

---

### **Relevant Questions from Question Bank**

**Q14. Differentiate between accuracy and precision of a sensor.**

| Basis | Accuracy | Precision |
| :--- | :--- | :--- |
| **Definition**| Closeness to the true value. | Closeness of repeated readings to each other. |
| **Indicates** | How correct the measurement is. | How consistent or reproducible the measurement is. |
| **Relation to Error** | Related to systematic errors. High accuracy implies low systematic error. | Related to random errors. High precision implies low random error. |
| **Example**| A target shooter whose shots are all centered around the bullseye is **accurate**. | A target shooter whose shots are all tightly clustered in one spot (even if it's not the bullseye) is **precise**. |

[**Click here for the classic accuracy vs. precision target diagram**](https://www.google.com/search?tbm=isch&q=accuracy+vs+precision+target)

**Q15. Explain the static characteristics, selectivity and sensitivity of a sensor.**
*   **Static Characteristics:** *See the detailed table above.*
*   **Sensitivity:** The ratio of change in output to the change in input (ΔOutput / ΔInput). It indicates how much the output changes for a unit change in the measured quantity.
*   **Selectivity:** (Also called Specificity) The ability of a sensor to respond only to the specific quantity it is designed to measure, while being insensitive to other quantities present in the environment. For example, a good CO₂ sensor should not be affected by the presence of oxygen or nitrogen.

**Q16. Differentiate between resolution and threshold of a sensor.**
*   **Threshold** is the *minimum input required to get any output at all*. Below this value, the output is zero.
*   **Resolution** is the *smallest change in input that can be detected* once the output is already non-zero. It's the "step size" of the measurement.

**Q17 & Q18. Elaborate on the significance of dynamic characteristics of a sensor? State the two important parameters of dynamic characteristics that need to be considered in the case of a sensor?**
*   **Significance:** Dynamic characteristics are significant because they determine a sensor's ability to measure time-varying signals. If a sensor's response is too slow, it will not be able to accurately capture rapid changes, leading to distorted or incorrect measurements. They are crucial in applications like vibration analysis, acoustic measurement, or monitoring fast chemical reactions.
*   **Two Important Parameters:** The most important dynamic parameters are:
    1.  **Response Time (or Speed of Response):** Indicates how quickly the sensor can react to a change.
    2.  **Frequency Response (or Bandwidth):** Defines the range of frequencies the sensor can accurately measure.

**Q19. Explain the static characteristics, non-linearity and isolation and grounding of a sensor.**
*   **Static Characteristics:** *See the detailed table above.*
*   **Non-linearity:** The maximum deviation of a sensor's actual output from an ideal straight-line relationship between input and output. It is a measure of how much the sensor's sensitivity varies over its range.
*   **Isolation and Grounding:** *See the detailed table above.* Proper isolation prevents dangerous voltages from reaching the measurement system and avoids ground loops. Proper grounding ensures a stable signal reference, minimizing noise.