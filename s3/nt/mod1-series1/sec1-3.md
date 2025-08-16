

## **1.3 Elements of a Generalized Measurement System**

A measurement system is not a single unit but a chain of components or "elements" that work together to process a physical quantity and present it in a human-readable form. A generalized system can be broken down into several functional stages or elements.

[**Click here to see a block diagram of a Generalized Measurement System**](https://www.google.com/search?tbm=isch&q=generalized+measurement+system+block+diagram)

The main stages are:
1.  **Primary Sensing Element**
2.  **Variable Conversion Element**
3.  **Variable Manipulation Element**
4.  **Data Transmission Element**
5.  **Data Processing Element**
6.  **Data Presentation Element**

Let's break down the function of each element.

### **Stage I: Sensor-Transducer Stage**

This stage contains the first two elements which are in direct contact with the quantity being measured.

#### **1. Primary Sensing Element (Sensor)**

This is the first element of the system. It receives the input signal from the quantity being measured.

*   **Function:** It "senses" the physical quantity (the **measurand**) and produces an output. This output could be a change in a physical property like resistance, displacement, or voltage.
*   **Role:** It acts as the detector of the system.
*   **Example:** In a Bourdon tube pressure gauge, the Bourdon tube itself is the primary sensing element. It senses the pressure and converts it into a mechanical displacement (it tries to straighten out). In a mercury-in-glass thermometer, the mercury bulb is the primary sensor.

#### **2. Variable Conversion Element (Transducer)**

This element converts the output of the primary sensing element into a more suitable form, often electrical. It's important to note that sometimes the primary sensing element and the variable conversion element are the same device.

*   **Function:** To convert the sensed information into a different form (e.g., mechanical displacement to an electrical signal).
*   **Role:** Acts as the transducer of the system.
*   **Example:** In a pressure measurement system using a strain gauge, the diaphragm is the primary sensor (senses pressure and deflects), and the strain gauge is the variable conversion element (converts the diaphragm's strain into a change in electrical resistance).

### **Stage II: Signal Conditioning Stage**

This stage takes the low-level signal from the transducer and prepares it for the final output stage. It consists of the next two elements.

#### **3. Variable Manipulation Element**

This element manipulates the signal from the variable conversion element to make it suitable for further processing. "Manipulation" here means changing the numerical value of the signal, not its physical nature.

*   **Function:** The most common function is **amplification**. The signal from the transducer is often very weak (millivolts or microamps) and needs to be amplified to a level that can be easily processed. It may also perform filtering to remove unwanted noise.
*   **Role:** Acts as the amplifier or signal conditioner.
*   **Example:** An operational amplifier (Op-Amp) circuit used to amplify the small voltage output from a thermocouple.

#### **4. Data Transmission Element**

This element is required when different parts of the measurement system are physically separated.

*   **Function:** To transmit the signal from one location to another without loss of information.
*   **Role:** Acts as the communication link.
*   **Examples:** Data cables, optical fibers, radio transmitters and receivers (telemetry systems for remote measurement).

### **Stage III: Data Presentation Stage**

This is the final stage, where the processed measurement data is presented to an observer or a controller.

#### **5. Data Processing Element**

This element modifies the transmitted data before it is displayed. This is a crucial step for making the data more useful and correcting for known errors.

*   **Function:**
    *   **Calculations:** Performing computations on the data (e.g., calculating flow rate from a pressure difference).
    *   **Error Correction:** Applying corrections for known instrument errors (e.g., compensating for temperature effects).
    *   **Linearization:** Converting a non-linear sensor output into a linear scale.
*   **Role:** The "brain" of the system, often implemented using microprocessors or computers.
*   **Example:** A microcontroller that takes the amplified signal from a thermocouple, applies a linearization formula, and converts the voltage reading into a temperature value in degrees Celsius.

#### **6. Data Presentation Element**

This is the final element in the chain. It presents the measured value in a form that can be easily understood by a human observer or used by a control system.

*   **Function:** To display or record the final measured value.
*   **Role:** Acts as the output device.
*   **Examples:**
    *   **Display:** Analog pointer and scale, digital LED/LCD display.
    *   **Recorder:** Strip chart recorder, magnetic tape.
    *   **Controller:** The output might be fed directly into a control system (like a PLC) to take automatic action.

---

### **Example: Bourdon Thermometer**

Let's trace the measurement of temperature using a Bourdon thermometer through the generalized system elements.

[**Click here to see a diagram of a Bourdon Tube Thermometer**](https://www.google.com/search?tbm=isch&q=bourdon+tube+thermometer+diagram)

1.  **Quantity to be Measured:** Temperature.
2.  **Primary Sensing Element:** The fluid-filled bulb. It senses the temperature, causing the fluid inside to expand or contract.
3.  **Variable Conversion Element:** The capillary tube and the Bourdon tube. The expansion of the fluid (output from the sensor) is converted into a mechanical displacement as the curved Bourdon tube tries to straighten.
4.  **Variable Manipulation Element:** The system of links and gears attached to the Bourdon tube. It amplifies the small mechanical displacement of the tube's end into a larger, more visible rotation of the pointer.
5.  **Data Transmission Element:** The links and shafts that connect the Bourdon tube to the gearing system.
6.  **Data Processing Element:** This system is purely mechanical, so processing is minimal. The design of the gear ratio and scale markings inherently "processes" the displacement into a calibrated temperature reading.
7.  **Data Presentation Element:** The pointer and the calibrated scale. They display the final temperature reading for an observer.

---

### **Relevant Questions from Question Bank**

**Q8. Explain the function of a data processing element in a generalized measurement system.**
*   A data processing element modifies the measured signal to make it more accurate and useful. Its main functions are to perform calculations (like converting pressure to flow), apply corrections for known instrumental errors, and linearize non-linear sensor outputs before the value is displayed. It is often implemented with a microprocessor.

**Q9. Explain the working of a Bourdon thermometer as an example of a generalized measurement system.**
*   *(The detailed breakdown is provided in the example section above, covering each element from the sensing bulb to the final pointer and scale).*

**Q10. Differentiate between a variable conversion element and a variable manipulation element in a generalized measurement system.**
*   A **variable conversion element** changes the *nature* of the signal (e.g., from mechanical displacement to an electrical voltage). A **variable manipulation element** changes the *numerical value* or level of the signal without changing its nature (e.g., amplifying a small voltage to a larger voltage).

**Q25. With the help of a block diagram, elaborate the different elements of a generalized measurement system.**
*   *(The block diagram link and the detailed explanation of all six elements above provide a complete answer to this question).*