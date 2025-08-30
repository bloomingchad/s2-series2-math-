# Inductive Coupling AC Voltage Live Wire Detector - Component List and Circuit Design

## Overview

This handheld non-contact AC voltage detector uses inductive coupling to detect electromagnetic fields around live AC wires without requiring direct contact. The circuit includes signal amplification, voltage comparison for different alert levels, and LED indicators with power management.

## Core Components Required

### 1. Inductive Coupling Antenna/Sensor

**Primary Coil (Sensing Antenna):**
- **Copper wire**: 10-12 cm insulated copper wire (22-24 AWG)[1][2]
- **Alternative**: Small ferrite core with coil winding for improved sensitivity[3][4]
- **Configuration**: Can be spiral-shaped or straight wire antenna[2][5]
- **Specifications**: Acts as electromagnetic field pickup antenna[1][2]

### 2. Signal Amplification Circuit

**Transistor-Based Amplifier (Darlington Configuration):**
- **BC547 NPN Transistors**: 2-3 pieces for high gain amplification[6][7][2][1]
- **Gain**: Combined gain of 40,000 to 8,000,000 with multiple transistors[2]
- **Purpose**: Amplifies weak induced signal from antenna[5][2]

**Alternative IC-Based Amplification:**
- **LM358 Dual Op-Amp**: For precise signal conditioning[1]
- **Configuration**: Non-inverting amplifier with adjustable gain[8]

### 3. Voltage Comparator Circuit for Multi-Level Detection

**Main Comparator IC:**
- **LM339 Quad Comparator IC**: Provides 4 independent voltage comparators[9][10][11][12]
- **Specifications**: 
  - Supply voltage: 2V to 36V[10][9]
  - Low power consumption: 1.1mA typical[10]
  - Open collector output[9][10]

**Reference Voltage Generation:**
- **Voltage divider resistors**: Multiple precision resistors for threshold setting[13][14][15]
- **Zener diodes**: For stable reference voltages (3.3V, 5.1V, etc.)[16][17][18]

### 4. LED Indicator System

**Multi-Color LED Setup:**
- **Green LED**: Low voltage/safe indication[19][20][16]
- **Yellow/Amber LED**: Medium voltage warning[20][16][19]
- **Red LED**: High voltage danger alert[16][19][20]
- **Current limiting resistors**: 220Ω to 1kΩ for LED protection[21][19]

### 5. Power Supply System

**Battery Options:**
- **4x AA Batteries**: Provides ~6V supply (4 × 1.5V)[22][23][24]
- **9V Battery**: Single battery option for compact design[25][26][22]
- **Voltage regulation**: Optional LM317 or similar for stable supply[22]

**Power Management:**
- **Power switch**: SPST switch for on/off control[19][20]
- **Low power design**: Circuit designed for battery operation[9][10]

## Detailed Circuit Configuration

### Stage 1: Inductive Coupling Sensor
- Antenna wire connected to base of first BC547 transistor[2][1]
- High impedance input to detect weak electromagnetic fields[1][2]
- Optional ferrite core for improved sensitivity[4][3]

### Stage 2: Signal Amplification  
- **First amplifier**: BC547 in common emitter configuration[6][2]
- **Second amplifier**: BC547 for additional gain (Darlington pair)[5][2]
- **Total gain**: 200 × 200 = 40,000 typical[2]
- **Biasing resistors**: 1MΩ, 100kΩ for proper DC bias[27]

### Stage 3: Multi-Level Voltage Detection
- **LM339 comparators**: Four independent comparators for different thresholds[12][9]
- **Window comparator configuration**: Multiple voltage levels[14][15][13]
- **Reference voltages**: 
  - Low threshold: ~1.5V (Green LED)[14]
  - Medium threshold: ~3V (Yellow LED)[14]
  - High threshold: ~5V (Red LED)[14]

### Stage 4: Output Indication
- **LED drivers**: Transistor switches for LED control[7][6]
- **Current limiting**: 220Ω resistors for LED protection[21][19]
- **Visual indication**: Progressive lighting based on detected voltage[16][19]

## Complete Component List

| Component | Quantity | Specification | Purpose |
|-----------|----------|---------------|---------|
| BC547 NPN Transistor | 3 | General purpose, TO-92 package | Signal amplification |
| LM339 Quad Comparator | 1 | 14-pin DIP, 2-36V supply | Voltage level detection |
| Copper Wire (Antenna) | 1 | 10-12cm, 22-24 AWG insulated | EM field pickup |
| LEDs | 3 | Red, Yellow, Green 5mm | Status indication |
| Resistors (1kΩ) | 5 | 1/4W, 5% tolerance | Biasing and current limiting |
| Resistors (100kΩ) | 2 | 1/4W, 5% tolerance | High impedance biasing |
| Resistors (220Ω) | 3 | 1/4W, 5% tolerance | LED current limiting |
| Resistors (10kΩ) | 6 | 1/4W, 5% tolerance | Voltage divider network |
| Zener Diode (5.1V) | 1 | 0.5W | Reference voltage |
| AA Battery Holder | 1 | 4-cell holder | Power supply |
| Power Switch | 1 | SPST toggle/slide | Power control |
| PCB/Perfboard | 1 | Small size for handheld | Circuit mounting |
| Case/Enclosure | 1 | Plastic handheld size | Protection and portability |

## Circuit Advantages

- **No microcontroller required**: Uses only discrete components and ICs[9][1][2]
- **Battery powered**: Efficient design for portable operation[23][24][22]
- **Multiple threshold detection**: Progressive warning system[15][13][19]
- **High sensitivity**: Darlington amplification provides excellent detection[5][2]
- **Safety focused**: Non-contact detection prevents electrical hazards[28][1][2]

This design provides a complete solution for a handheld inductive coupling AC voltage detector with multi-level indication capabilities using only standard electronic components without requiring microcontrollers.

[1](https://diyelectrix.com/non-contact-ac-voltage-tester-circuit/)
[2](https://www.jameco.com/Jameco/workshop/JamecoFavorites/non-contact-AC-voltage-detector.html)
[3](https://www.jocm.us/uploadfile/2013/0927/20130927043742253.pdf)
[4](https://www.jpier.org/ac_api/download.php?id=19090911)
[5](https://www.instructables.com/Wireless-AC-Current-Detector/)
[6](https://www.utmel.com/components/bc547-npn-transistor-pinout-datasheet-and-circuit?id=277)
[7](https://reversepcb.com/bc547-transistor/)
[8](https://cmosedu.com/jbaker/students/eric/monahan_finalreport_ee498_1001.pdf)
[9](https://www.eleccircuit.com/lm339-quad-comparator-ic-datasheet/)
[10](https://ifuturetech.org/product/lm339-low-power-offset-voltage-quad-comparator/)
[11](https://www.bristolwatch.com/ele/vc.htm)
[12](https://www.electroduino.com/lm339-voltage-comparator-ic-pinout-working-principle-parameters/)
[13](https://www.linkedin.com/pulse/window-comparator-definition-circuit-examples-kuke-electronics-npi4c)
[14](https://www.tifr.res.in/~icfa2023/assets/doc/Comparator_and_Window_Selection.pdf)
[15](https://www.ti.com/lit/pdf/sboa221)
[16](https://www.scribd.com/document/517256435/Voltage-Level-Indicator-Circuit-Envirementalb-com)
[17](https://www.eleccircuit.com/simple-voltage-indicator-by-led-and-zener-diode/)
[18](https://www.youtube.com/watch?v=tv9S0lC4WGQ)
[19](https://www.electronicsforu.com/electronics-projects/hardware-diy/24v-12v-battery-voltage-level-indicator)
[20](https://cecas.clemson.edu/cvel/auto/AuE835_Projects_2011/Krithivasan_project.html)
[21](https://circuitdigest.com/electronic-circuits/simple-battery-level-indicator-using-op-amp)
[22](https://www.instructables.com/Convert-Battery-Powered-Electronics-to-Run-on-AC/)
[23](https://botland.store/converters-step-up/2985-dfrobot-step-up-voltage-regulator-v30-with-aa-battery-connector-dfr0250-5v-1a-6959420902279.html)
[24](https://www.monolithicpower.com/en/learning/resources/mp3424-single-aa-battery-boost-solution)
[25](https://ebhoot.in/shop-2/power-supply/battery-battery-holder/9v-original-hw-high-quality-battery/)
[26](https://www.instructables.com/Pocket-Size-Power-Supply/)
[27](https://www.instructables.com/Non-Contact-AC-Voltage-Detector-Circuit-Diagram/)
[28](https://www.mecoinst.com/meco-product-details/noncontact-voltage-detector)
[29](https://en.wikipedia.org/wiki/Inductive_coupling)
[30](https://quartzcomponents.com/products/zmpt101b-single-phase-ac-voltage-sensor-module)
[31](https://pmc.ncbi.nlm.nih.gov/articles/PMC7085681/)
[32](https://kitsguru.com/products/non-contact-voltage-tester)
[33](https://www.youtube.com/watch?v=xhVfhPhf0So)
[34](https://www.smar.com.br/en/technical-article/inductive-coupling-and-how-to-minimize-their-effects-in-industrial-installations)
[35](https://www.eleccircuit.com/simple-non-contact-ac-mains-voltage-detector/)
[36](https://robu.in/product/ac-voltage-sensor-module-zmpt101b-single-phase/)
[37](https://www.youtube.com/watch?v=5g9_JNoXrSg)
[38](https://pmc.ncbi.nlm.nih.gov/articles/PMC9659014/)
[39](https://www.melexis.com/en/product/mlx81116/multi-channel-melibu-led-driver)
[40](https://www.melexis.com/en/product/mlx81143/smart-multi-channel-rgb-led-controller-with-21-drivers)
[41](https://www.kinet-ic.com/display-power/rgb-led-driver-ics/)
[42](https://quartzcomponents.com/products/bc547-npn-amplifier-transistor)
[43](https://www.ti.com/power-management/led-drivers/rgb-led-drivers/overview.html)
[44](https://thinkrobotics.com/blogs/learn/bc547-transistor-an-in-depth-guide)
[45](https://www.dnatechindia.com/lm-311-comparator.html)
[46](https://www.st.com/en/power-management/led-drivers.html)
[47](https://www.infineon.com/dgdl/Infineon-AN219207_Inductive_Sensing_Design_Guide-ApplicationNotes-v04_00-EN.pdf?fileId=8ac78c8c7cdc391c017d0d358bd5662c)
[48](https://pmc.ncbi.nlm.nih.gov/articles/PMC6309894/)
[49](https://www.emworks.com/de/application/understanding-inductive-proximity-sensors-detecting-conductive-targets)
[50](https://patents.google.com/patent/US6268723B1/en)
[51](https://robu.in/inductive-proximity-sensor-working-principle/)
[52](https://www.jetir.org/papers/JETIR1903B17.pdf)
[53](https://www.ti.com/lit/pdf/snva832)
[54](https://www.instructables.com/LED-voltage-range-indicator/)
[55](https://www.hackatronic.com/lm3915-led-battery-voltage-level-indicator-circuit-diagram/)
[56](https://www.jameco.com/Jameco/workshop/JamecoBuilds/led-circuit-battery-level-indicator.html)
[57](https://www.ti.com/lit/pdf/slua376)
[58](https://www.analog.com/en/resources/analog-dialogue/raqs/raq-issue-218.html)
[59](https://www.synopsys.com/glossary/what-is-a-battery-management-system.html)
[60](https://forum.arduino.cc/t/power-regulators-question/383421)
[61](https://www.youtube.com/watch?v=ccK5aDgwPrY)
[62](https://www.pololu.com/product/796)
[63](https://www.youtube.com/watch?v=N25Q2d_PYDE)




For simulation and schematics in **Proteus Design Suite**, all the components listed previously can be directly selected and used from the Proteus library. Here’s how the design is translated for Proteus:

## Proteus-Compatible Component List

**All components below are standard and found in Proteus libraries. They are used for schematic design, simulation, and PCB layout.**

| Component                    | Proteus Library Name         | Schematic Symbol                           |
|------------------------------|-----------------------------|--------------------------------------------|
| BC547 NPN Transistor         | TRANSISTORS                 | Q (generic NPN)                            |
| LM339 Quad Comparator IC     | IC's/ANALOG_IC/COMPARATOR   | IC (LM339)                                 |
| Copper Wire/Receiving Coil   | PASSIVE/COILS               | L (Coil/Inductive Pickup)                  |
| LED (Red, Yellow, Green)     | OPTO DEVICES, LEDS          | LED (3 different colors)                   |
| Resistors (various values)   | PASSIVE/RESISTORS           | R (adjust values as per previous answer)   |
| Zener Diode                  | PASSIVE/ZENER DIODES        | D (Zener, set reference voltage)           |
| AA Battery or 9V Battery     | POWER SOURCES/BATTERY       | BAT                                       |
| SPST Power Switch            | SWITCHES/MECHANICAL         | SW (toggle or slide switch)                |
| PCB/Perfboard                | Not needed for schematics   | (PCB for layout, not schematic)            |
| Enclosure/Case               | Not modeled in Proteus      | (Physical only, not simulation)            |

## Proteus Schematic Steps

### 1. Sensor/Antenna
- Place a **Coil (L1)** or a short wire representing the inductive pickup close to “live” simulated AC.[1][2]
- Connect L1 to transistor base.

### 2. Amplifier Stage
- Use **BC547 NPN transistors** (Q1, Q2, possibly Q3 for Darlington).
- Configure resistors for biasing and signal gain.

### 3. Comparator Stage
- Add **LM339** (IC1).
- Design voltage divider networks with resistors and Zener diode for reference voltages to create multiple thresholds.
- Connect comparators’ outputs to respective LEDs (Green, Yellow, Red).

### 4. Output Indicator
- Place **LEDs** (LED1 Green, LED2 Yellow, LED3 Red).
- Connect outputs from LM339 with current-limiting resistors.

### 5. Power Supply
- Add a **battery** (4xAA or 9V).
- Use a **switch** for ON/OFF.

## Proteus Simulation Tips

- Use the **Signal Generator** block in Proteus to simulate AC voltage near the sensor coil.
- All active and passive components should be chosen from the Proteus standard library.
- All voltage thresholds in LM339 can be easily changed by adjusting the corresponding resistor networks or reference zener values.
- LEDs will change color based on simulated induced voltage changes.

## Summary Table (for Proteus)

| Block          | Library               | Key Part Names for Proteus  | Notes           |
|----------------|-----------------------|-----------------------------|-----------------|
| Antenna        | Passive/Coils         | L1                          | Set inductance  |
| Amplifier      | Transistors           | Q1, Q2 (BC547)              | Common Emitter  |
| Comparator     | Analog IC/Comparator  | IC1 (LM339)                 | Window config   |
| Indicators     | Opto/LEDs             | LED1, LED2, LED3            | RGB or mono     |
| Resistors      | Passive/Resistors     | R1–R7                       | Values as prev. |
| Zener Diode    | Passive/Zener Diodes  | D1                          | Voltage ref.    |
| Battery        | Power Sources/Battery | BAT1                        | 6V or 9V        |
| Switch         | Switches/Mech         | SW1                         | On/Off          |

All parts above can be found in Proteus; select values and configure connections according to your designed thresholds and schematic.[2][3][4][5][6][7][8]

[1](https://diyelectrix.com/non-contact-ac-voltage-tester-circuit/)
[2](https://www.infineon.com/dgdl/Infineon-AN219207_Inductive_Sensing_Design_Guide-ApplicationNotes-v04_00-EN.pdf?fileId=8ac78c8c7cdc391c017d0d358bd5662c)
[3](https://www.eleccircuit.com/lm339-quad-comparator-ic-datasheet/)
[4](https://www.electroduino.com/lm339-voltage-comparator-ic-pinout-working-principle-parameters/)
[5](https://www.utmel.com/components/bc547-npn-transistor-pinout-datasheet-and-circuit?id=277)
[6](https://www.linkedin.com/pulse/window-comparator-definition-circuit-examples-kuke-electronics-npi4c)
[7](https://www.ti.com/lit/pdf/sboa221)
[8](https://www.instructables.com/Convert-Battery-Powered-Electronics-to-Run-on-AC/)
