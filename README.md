
### A PROJECT REPORT ON
# “IoT Based Factory Monitoring and Protection System”
                 UNIVERSITY OF RAJSHAHI
A project paper submitted to the department of Electrical and Electronic Engineering,
University of Rajshahi in partial fulfillment of the requirement for the B.Sc in EEE degree.

### SUBMITTED BY
## MD. Nafiul Haque
ID No: 1837822104
Registration No: 1837822104
Session: 2017-2018
Examination Year: 2021
Dept of Electrical and Electronic Engineering,
University of Rajshahi

## DECLARATION
DECLARATION
I declare that the dissertation hereby submitted to the Department of Electrical and Electronic
Engineering, University of Rajshahi, for degree of B.Sc. Engineering has not been submitted
by me for a degree at this or any other University that it is my work in design and execution.
This dissertation is a presentation of my project work. Wherever contributions of others are
involved, every effort is made to indicate this clearly, with due reference to the literature, and
acknowledgement of collaborative research and discussions.

Signature
…..........................
#### Md. Nafiul Haque
ID No. 1837822104
Department of EEE
University of Rajshahi.

Signature
…………………….

Supervised by
#### Rakesh Swarup Mandal
Assistant professor & Head Dept. of EEE,
TMSS Engineering College, Bogura.
## Acknowledgements
First of all, I thank the almighty Allah who is most merciful, with His kindness & bless, I am
completed my project. Now first I would like to express gratefulness & gratitude to my
supervisor Rakesh Swarup Mandal, Assistant Professor and Chairman, Department of
Electrical & Electronic Engineering of TMSS Engineering College (TEC) for his proper
guidance, valuable advices, suggestion & inspiration to achieve my goal. He helps me
inspecting by all means in every phase of the work and to critically review manuscript a
concerned books and various published project reports.
I would also express my gratitude to all other concerned respected teachers of EEE department
who directly or indirectly encouraged and helped me to complete my project. I also give thank
laboratory stuff & other of EEE department, for their help.
I also grateful my loving parents and brother for their unconditional love and support. Finally,
I a debt of gratitude and thanks to my friends for peaceful co-operation at critical moments of
my project.



## ABSTRACT
The proliferation of the Internet of Things (IoT) has revolutionized industries by enabling realtime
monitoring, data analysis, and intelligent decision-making. In this context, the "IoT Based
Factory Monitoring and Protection System" project presents an innovative solution to enhance
factory safety, operational efficiency, and environmental awareness. Leveraging the
capabilities of the ESP32-WROOM-32 module and an array of sensors including fire,
ultrasonic, temperature, and humidity sensors, the system offers a comprehensive and dynamic
approach to industrial monitoring.
The project's core objective is to develop an integrated platform that collects, processes, and
presents real-time data to factory personnel, empowering them with crucial insights into
various operational parameters. The system employs advanced algorithms for detecting
anomalies such as fires, abnormal temperature or humidity levels, and unauthorized access,
triggering timely alerts and appropriate responses. The user interface, embodied in an OLED
display, ensures intuitive and immediate access to critical information.
Through a meticulous hardware implementation, the project establishes a solid foundation for
data acquisition, while the software implementation adds intelligence and responsiveness to
the system. The ESP32-WROOM-32 module orchestrates sensor data acquisition, MQTT
communication, anomaly detection, and user interface management. A fire detection algorithm
enhances safety by promptly identifying fire hazards and activating countermeasures.
The project's significance lies in its potential to transform traditional factory environments into
smart, connected spaces that prioritize safety and efficiency. It contributes to the broader
discourse on Industry 4.0 by demonstrating how IoT technologies can revolutionize factory
operations. By bridging the gap between physical processes and digital insights, the IoT Based
Factory Monitoring and Protection System exemplifies the promise of IoT in reshaping
industries for a safer, smarter, and more sustainable future.
## CONTENTS
Page No.
DECLARATION i
ACKNOWLEDGMENTS ii
ABSTRACT iii
CONTENTS iv
Chapter 1: Introduction
1.1 Introduction 1
1.2 Background and Motivation 1
1.3 Problem Statement 1
1.4 Objectives 1
1.5 Scope and Limitations 2
Chapter 2: Project Details
2.1 Project Layout 3
2.2 Circuit Diagram of the Project 3
2.3 Components Required 4
Chapter 3: Components Description
3.1 ESP32-WROOM-32 development board 5
3.2 OLED Display 8
3.3 DHT-11 Temperature and Humidity Sensor 9
3.4 MQ-2 Gas Sensor Module 10
3.5 Relay module
3.6 Buzzer
3.7 LM35 Temperature sensor
3.8 Flame Sensor
3.9 Ultrasonic Sensor
3.10 Bulb holder
3.11 Electric led bulb
Chapter 4: Hardware Implementation
4.1 Introduction
4.2 ESP32-WROOM-32 Module Integration
4.3 OLED Display Interface
4.4 Relay Control for Actuation
4.5 PCB Design and Implementation
4.6 Final Project and Connections
v
Chapter 5: Software Implementation
5.1 Introduction
5.2 Setting Up Arduino IDE
5.3 Blynk Account and Project Setup
5.4 Deploying Code
5.5 Monitoring and Interaction
Chapter 6: Result and Discussion
6.1 Experimental Result
6.2 Advantages
6.3 Application Fields
6.4 Future Scope
6.5 Conclusion
REFERENCE
## CHAPTER 1
### Introduction
#### 1.1 Introduction:
In today's rapidly evolving industrial landscape, the integration of cutting-edge technologies
has become essential for ensuring operational efficiency, productivity, and safety [1]. The
advent of the Internet of Things (IoT) has brought forth a paradigm shift in how industries
monitor and manage their processes, enabling real-time data acquisition, analysis, and
decision-making. The focus of this project is to develop an IoT-based Factory Monitoring and
Protection System that leverages the capabilities of the ESP32-WROOM-32 module along with
various sensors to enhance factory safety and operational awareness.
#### 1.2 Background and Motivation:
Factories and industrial environments are characterized by complex operations, critical
machinery, and often hazardous conditions. Traditional methods of monitoring these
environments often fall short in providing timely information and alerts to prevent potential
mishaps or downtime. The rise of IoT technology offers a transformative solution by enabling
the collection and analysis of real-time data from a myriad of sensors. This data-driven
approach empowers factory operators and managers to make informed decisions, optimize
processes, and ensure the safety of personnel and assets.
#### 1.3 Problem Statement:
The existing methods of factory monitoring and protection often lack the ability to offer
comprehensive and real-time insights into the various operational parameters. Manual
monitoring can lead to delays in identifying anomalies, which may result in safety hazards,
equipment damage, or production interruptions [2]. Thus, there is a need for an advanced
system that seamlessly integrates sensors, data processing, and user-friendly interfaces to create
a comprehensive Factory Monitoring and Protection System.
#### 1.4 Objectives:
The primary objectives of this project are as follows:
 Design and Integration: Develop a robust IoT-based system that integrates multiple
sensors, including fire, ultrasonic, temperature, and humidity sensors, with the ESP32-
WROOM-32 module [3].
 Real-Time Monitoring: Enable real-time data acquisition from sensors placed
strategically within the factory environment to monitor key parameters affecting safety
and operations.
 Anomaly Detection: Implement algorithms for detecting anomalies such as fires,
abnormal temperature fluctuations, and unauthorized access, triggering immediate
alerts and appropriate actions.
2
 User Interface: Design an intuitive LCD display interface to present real-time sensor
data and alerts, providing factory personnel with actionable insights.
 Remote Accessibility: Explore the potential for remote monitoring and control via Wi-
Fi connectivity, allowing authorized personnel to access the system's data and controls
from remote locations.
 Enhanced Safety: Improve factory safety by providing early warnings for potential
fire hazards and adverse environmental conditions [4].
 Efficient Resource Management: Facilitate efficient use of resources by providing
insights into temperature and humidity conditions that may impact product quality or
machinery performance [5].
#### 1.5 Scope and Limitations:
While the IoT-based Factory Monitoring and Protection System offers substantial benefits, it's
important to acknowledge its scope and limitations. The system's scope encompasses the
integration of multiple sensors, data processing, and user interface design. However, the project
does not address complex issues such as advanced predictive maintenance algorithms or
integration with cloud platforms for extensive data analysis.
As we delve into the subsequent sections of this report, we will detail the methodology
employed to achieve the project objectives, the hardware and software components utilized,
the implementation process, data collection, analysis, and interpretation of results, challenges
encountered, future enhancements, and concluding reflections. Through this comprehensive
exploration, we aim to showcase the potential of IoT technology in revolutionizing factory
monitoring and protection, paving the way for safer, more efficient, and technologically
advanced industrial operations.
## CHAPTER 2
### Project Details
#### 2.1 Project Layout:
Figure 2.1 Block Diagram of the Project
The IoT Based Factory Monitoring and Protection System is structured around a dynamic and
interconnected framework that encompasses both hardware and software elements. The layout
is designed to seamlessly integrate various components, including the ESP32-WROOM-32
module, sensors (fire, ultrasonic, temperature, humidity), an OLED display, and many relay, to
create a comprehensive solution for enhancing factory safety and operational awareness.
2.2 Circuit Diagram of the Project:
Figure 2.2 Circuit Diagram of the Project
4
2.3 Components Required:
Components Name Quantity
1. ESP-32 WROOM-32 development board 1pc
2. OLED Display 1pc
3. Buzzer 1pc
4. DHT-11 Temperature and Humidity Sensor 1pc
8. switch 1pc
6. Flame Sensor 1pc
11. MQ‐2 Gas Sensor Module 1pc
12. LM35 Temperature Sensor 1pc
13. Water Pump 1pc
14. Water Tank 1pc
15. PCB Board 1pc
16. Connecting Wires As required
## CHAPTER 3
Component Description
3.1 ESP32-WROOM-32 development board:
The ESP32-WROOM-32 is a versatile and
widely used module developed by Espressif
Systems. It combines Wi-Fi and Bluetooth
connectivity with a powerful microcontroller,
making it an excellent choice for a wide range
of Internet of Things (IoT) applications.
"ESP32-WROOM-32E" comes with a PCB
antenna. [8]
Pin Specification`:
1. EN - Enable Pin (Reset)
2. GND - Ground
3. VBAT - Battery Voltage Input (if
using a battery)
4. 3V3 - 3.3V Output
5. GND - Ground
6. EN - Enable Pin (Reset)
7. GND - Ground
8. GND - Ground
9. IO34 - General-purpose I/O Pin
10. IO35 - General-purpose I/O Pin
11. IO32 - General-purpose I/O Pin
12. IO33 - General-purpose I/O Pin
13. IO25 - General-purpose I/O Pin
14. IO26 - General-purpose I/O Pin
15. IO27 - General-purpose I/O Pin
16. IO14 - General-purpose I/O Pin
17. IO12 - General-purpose I/O Pin
18. IO13 - General-purpose I/O Pin
19. IO15 - General-purpose I/O Pin
20. GND - Ground
21. IO22 - General-purpose I/O Pin
22. IO23 - General-purpose I/O Pin
23. IO19 - General-purpose I/O Pin
24. IO21 - General-purpose I/O Pin
25. IO18 - General-purpose I/O Pin
Figure 3.1 ESP32-WROOM-32 development board.
Figure 3.2 Pin Specification of ESP32-WROOM-32
development board
6
26. IO5 - General-purpose I/O Pin
27. IO17 - General-purpose I/O Pin
28. IO16 - General-purpose I/O Pin
29. IO4 - General-purpose I/O Pin
30. IO0 - General-purpose I/O Pin
31. IO2 - General-purpose I/O Pin
32. IO15 - General-purpose I/O Pin
33. IO14 - General-purpose I/O Pin
34. IO12 - General-purpose I/O Pin
35. IO13 - General-purpose I/O Pin
36. IO16 - General-purpose I/O Pin
37. GND - Ground
38. IO39 - General-purpose I/O Pin
Specification:
Drive Type Dual high-power H-bridge
Power Input(V) 4.5 to 9
Communication Interface Voltage(V) 3.3
Flash size (MB) 4
Operating Temperature (°C) -40 to 125
Transfer Rate (Kbps) 110 to 460800
AD0 1 channel ADC
Length (mm) 49
Width (mm) 24.5
Height (mm) 13
Shipment Weight 0.06 kg
Shipment Dimensions 6 × 4 × 2 cm
3.2 OLED Display:
OLED displays are available in a range of sizes (such as
128×64, 128×32) and colors (such as white, blue, and dualcolor
OLEDs). Some OLED displays have an I2C
interface, while others have an SPI interface.
One thing they all have in common, however, is that at their
core is a powerful single-chip CMOS OLED driver
controller – SSD1306, which handles all RAM buffering,
requiring very little work from your Arduino. [9]
.
Figure 3.3 OLED Display
7
Features of the 128×64 OLED display:
Display Technology OLED (Organic LED)
MCU Interface I2C / SPI
Screen Size 0.96 Inch Across
Resolution 128×64 pixels
Operating Voltage 3.3V – 5V
Operating Current 20mA max
Viewing Angle 160°
Characters Per Row 21
Number of Character Rows 7
Pin Specification`:
 GND is the ground pin.
 VCC is the power supply for the display, which we connect to the 5V pin on the
Arduino.
 D0 / CLK is the SPI Clock pin. It’s an input to the chip.
 D1 / MOSI is the Serial Data In pin, for data sent from your microcontroller to the
display.
 RES (Reset) pin resets the internal buffer of the OLED driver.
 DC (Data/Command) is used by the library to separate the commands (such as setting
the cursor to a specific location, clearing the screen, etc.) from the data.
 CS is the Chip Select pin.
3.3 DHT-11 Temperature and Humidity Sensor:
The DHT11 is a commonly used Temperature and humidity
sensor. The sensor comes with a dedicated NTC to measure
temperature and an 8-bit microcontroller to output the values of
temperature and humidity as serial data. The sensor is also factory
calibrated and hence easy to interface with other microcontrollers.
The sensor can measure temperature from 0°C to 50°C and humidity
from 20% to 90% with an accuracy of ±1°C and ±1%. So if you are
looking to measure in this range then this sensor might be the right
choice for you. [10]
Figure 3.4 DHT-11
Temperature and
Humidity Sensor
8
DHT11 Specifications:
Operating Voltage: 3.5V to 5.5V
Operating current: 0.3mA (measuring) 60uA (standby)
Output: Serial data
Temperature Range: 0°C to 50°C
Humidity Range: 20% to 90%
Resolution: Temperature and Humidity both are 16-bit
Accuracy: ±1°C and ±1%
Pin Specification`:
1 VCC Power supply 3.5V to 5.5V
2 Data Outputs both Temperature and Humidity through serial Data
3 Ground Connected to the ground of the circuit
3.4 MQ-2 Gas Sensor Module:
The MQ2 gas sensor is simple to use and has two different outputs.
It not only provides a binary indication of the presence of
combustible gasses, but also an analog representation of their
concentration in air.
The sensor’s analog output voltage (at the A0 pin) varies in
proportion to the concentration of smoke/gas. The higher the
concentration, the higher the output voltage; the lower the
concentration, the lower the output voltage. The animation below
shows the relationship between gas concentration and output
voltage.
MQ-2 Specifications:
Operating voltage 5V
Load resistance 20 KΩ
Heater resistance 33Ω ± 5%
Heating consumption <800mw
Sensing Resistance 10 KΩ – 60 KΩ
Concentration Range 200 – 10000ppm
Figure 3.5 MQ‐2 Gas
Sensor Module
9
Pin Specification`:
 VCC supplies power to the module. Connect it to the 5V output of your Arduino.
 GND is the ground pin.
 D0 indicates the presence of combustible gasses. D0 becomes LOW when the gas
concentration exceeds the threshold value (as set by the potentiometer), and HIGH
otherwise.
 A0 produces an analog output voltage proportional to gas concentration, so a higher
concentration results in a higher voltage and a lower concentration results in a lower
voltage.
3.5 Relay module:
A 5V relay module is a single or multi-channel relay module that works with a low-level trigger
voltage of 5V DC. The input voltage can be from
any microcontroller or logic chip that outputs a
digital signal. Like most other relays, the 5V
relay module is an electrically operated,
electromagnetic switch that can be used to turn
on or turn off a circuit. It consists of two parts:
the relay itself and the control module. The relay
contains the coil that creates the magnetic field,
the armature that move to complete or
disconnect a circuit, and contacts that open and
close to operate the load switch.
The relay control module is the interface or part
of the relay module that the user interacts with. It contains the input terminals for connecting
to the microcontroller, as well as the output terminals for connecting to the load. The control
module also contains LED indicators for power and status and other devices such as protection
diode, transistor, resistor, and other semiconductor devices necessary for its operation.
Relay Module Pinout
The 5V relay module pinout is composed of connections on the input side where it receives the
trigger signal, and the output side where it controls the load.
The input side, as shown in the above relay module circuit diagram, has 3 or 4 connections:
These are listed and explained below.
VCC – this is the power connection. It supplies 5V DC to the module and is normally
connected to the positive terminal of the power supply.
GND – this is the ground connection. It connects to the negative terminal of the power supply.
Figure 3.6 Relay Module
10
IN1, IN2 – these are the inputs where the trigger signal is applied. IN1 is for a single-channel
relay module, while IN2 is for a dual-channel relay module. The IN (Input) pin is connected to
the output of the microcontroller, sensor, or logic device.
The relay module output side has three connections:
 NO (Normally Open) – this is the load connection when the relay is ON. When the
relay is off, the NO maintains an open connection with the COM.
 COM (Common) – The relay module connection labeled “COM” is the common
connection for both the NO and NC (Normally Closed) pins.
 NC (Normally Closed) – this is the load connection. It connects to the COM terminal
by default, or when the relay is OFF.
Specifica􀆟on:
No. of Channel 4
Trigger Voltage (VDC) 5
Trigger Current (mA) 20
Switching Voltage (VAC) 250@10A
Switching Voltage (VDC) 30@10A
Length (mm) 75
Width (mm) 55
Height (mm) 18
Weight (gm) 55
Shipment Weight 0.059 kg
Shipment Dimensions 9 × 7 × 3 cm
3.6 Buzzer:
This buzzer is an active buzzer, which basically means that it will buzz at a predefined
frequency (2300 ±300 Hz) on its own even when you just apply steady DC power. If you are
looking for a buzzer can produce varied tones from an oscillating input signal, then take a look
at our buzzer. Some people prefer to get active buzzers since they can use them with steady DC
power but also be able to produce some variety of tones by applying
an oscillating signal. Some consider them to be more versatile than
their cousin, the passive buzzer, which is the type that requires an
oscillating signal to create any tone. It is possible, and often done,
to still create different tones through an active buzzer when you
apply an oscillating signal to the buzzer, but the spectrum of
possible different tones is very limited and not as crisp or clean of Figure 3.7 Buzzer
11
sound as can be produced with a buzzer. One advantage to an active buzzer is that you can still
produce a sound from the buzzer connected to a microcontroller, such as an Arduino, by just
driving a standard high output on the connected pin. The benefits of this are that you don't need
to use processing power, hardware timers, or additional code to produce sound.
Specifications:
Rated Voltage 5 V
Operating Voltage 4~8 V
Max Rated Current ≤32 mA
Min. Sound Output at 10cm 85 dB
Resonant Frequency 2300 ±300 Hz
Operating Temperature -20°C to 45°C
Dimensions (Excluding Pins)
Height 9.16 mm (0.36")
Diameter 11.78 mm (0.46")
Weight 1.6 g (0.057 oz)
3.7 LM35 Temperature Sensor:
LM35 is an integrated analog temperature sensor whose electrical output is proportional to
Degree Centigrade. LM35 Sensor does not require any external calibration or trimming to
provide typical accuracies. The LM35’s low output impedance, linear output, and precise
inherent calibration make interfacing to readout or control circuitry especially easy.
As such no extra components required to interface LM35 to ADC as the output of LM35 is
linear with 10mv/degree scale. It can be directly interfaced to any 10- or 12-bit ADC. But if
you are using an 8-bit ADC
like ADC0808 or ADC0804 an amplifier section
will be needed if you require to measure 1°C
change.
LM35 can also be directly connected to Arduino.
The output of LM35 temperature can also be
given to comparator circuit and can be used for
over temperature indication or by using a simple
relay can be used as a temperature controller.
The LM35 device is rated to operate over a −55°C
to 150°C temperature range, while the LM35C
device is rated for a −40°C to 110°C range (−10° with improved accuracy). The LM35-series
devices are available packaged in hermetic TO transistor packages, while the LM35C,
LM35CA, and LM35D devices are available in the plastic TO-92 transistor package. The
LM35D device is available in an 8-lead surface-mount small-outline package and a plastic TO-
220 package.
Figure 3.8 LM35 Temperature Sensor
12
This sealed analog temperature probe lets you precisely measure temperatures in wet
environments. The LM35 are precision integrated-circuit temperature sensors, with an output
voltage linearly proportional to the Centigrade temperature.
Features:
1. Temperature measuring range: 0...100°C
2. Operating Voltage: 4...30VDC
3. No. of Pins: 3
4. Case: TO92
5. Mounting: THT
6. Temperature measurement accuracy: 1%
Specification:
Package/Case TO-92-3
Mounting Type Through Hole
Sensor Type Temperature Sensor
Output Type Analog Voltage
Maximum Supply Voltage (V) 30
Minimum Supply Voltage (V) 400.00%
Operating Temperature Range (°C) -55 to 150
Shipment Weight 0.020 kg
Shipment Dimensions 12 × 8 × 2.5 cm
3.8 Flame Sensor:
A flame sensor is a device used to detect a fire. It is the most sensitive that can easily detect a
fire and activate a fire alarm. The detection range of a flame sensor is the wavelength in 760
nm to 1100 nm range of light source. High temperatures can damage the sensor so we should
place it at some distance. The detection distance is up to 100 cm. Its output is a digital or analog
signal. It can be used as a flame alarm or in the firefighting robots. It works by detecting
infrared radiation emitted from the fire. The detector detects this radiation and converts it into
the analog and digital signals for the microcontroller
to process.
Features:
 Indicator light: a green one for the switch, a
red one for power.
 Built in a potentiometer for sensitivity
control.
 Onboard signal output indication, output
effective signal is high, at the same time the
indicator lights up, the output signal can directly connect to microcontroller IO.
Figure 3.9 Flame Sensor
13
 Can detect fire or wavelength in 760 ~ 1100 nm nano within the scope of the light
source.
 Detection angle about 60 degrees, the flame spectrum especially sensitive.
 The flame of the most sensitive sensors flames, the regular light is also a response,
generally used for fire alarm purposes.
Specification:
Output Channel 1
Operating Voltage (VDC) 3.3 ~ 5
Mounting Hole(mm) 3
Length (mm) 32
Width (mm) 14
Weight (gm) 3
Shipment Weight 0.005 kg
Shipment Dimensions 4 × 2.5 × 2 cm
3.9 Ultrasonic Sensor:
Ultrasonic sensors are electronic devices that calculate the target’s distance by
emission of ultrasonic sound waves and convert those waves into electrical signals.
The speed of emitted ultrasonic waves traveling speed is faster than the audible
sound. There are mainly two essential elements
which are the transmitter and receiver. Using the
piezoelectric crystals, the transmitter generates
sound, and from there it travels to the target and
gets back to the receiver component.
To know the distance between the target and the
sensor, the sensor calculates the amount of time
required for sound emission to travel from
transmitter to receiver. The calculation is done
as follows:
D = 1/2 T * C
Where ‘T’ corresponds to time measured in seconds
‘C’ corresponds to sound speed = 343 measured in mts/sec
Features:
1. Measures the distance within a wide range of 2cm to 400cm
2. Stable performance
Figure 3.10 Ultrasonic Sensor
14
3. Accurate distance measurement
4. High-density
5. Small blind distance.
Specification:
Model HC-SR04
Operating Voltage (VDC) 5
Average Current Consumption (mA) 2
Frequency (Hz) 40000
Sensing Angle 15Â°
Max. Sensing Distance (cm) 450
Weight (gm) 9
Sensor Cover Dia. (mm) 16
PCB Size (L x W) mm 45 x 20
Shipment Weight 0.014 kg
Shipment Dimensions 5 × 4 × 3 cm
3.10 Bulb Holder:
Bulb holders are mechanical devices that support lamps and
connect them to electrical circuits. They hold light bulbs and
make electrical contact to provide a bulb with power. bulb
holders are used with most light sources for incandescent,
fluorescent, and compact fluorescent lamps (CFL).
Specification:
Product Type Bulb Holder
Voltage 250V.
Current 5A.
Frequency 50/60Hz
Plugging 5000+
Figure 3.11 Bulb Holder
15
3.11 Led Bulb:
The 18W LED light is a highly efficient and
environmentally friendly lighting solution that
offers both exceptional brightness and energy
savings. With its compact design, it provides a
powerful illumination suitable for various indoor
and outdoor applications. The light emits a bright,
crisp white light, ensuring excellent visibility and
enhancing the overall ambiance of any space. Its low
power consumption of significantly reduces
electricity costs compared to traditional
incandescent or fluorescent lights, making it an
economical choice for long-term use.
Additionally, the LED technology used in this
light ensures a longer lifespan, saving both maintenance efforts and expenses.
Specifica􀆟on:
Wattage 0.5 W
Lighting Color Red/Blue
Base Type B22
Shape Round
Type Aluminum LED Bulb
Figure 3.12 LED Bulb
## CHAPTER 4
Hardware Implementation
4.1 Introduction: The hardware implementation of the IoT Based Factory Monitoring and
Protection System entails a meticulous selection of components, their strategic placement,
interconnections, and considerations for power management and safety. [6] This section
provides a comprehensive exploration of each hardware element's role, the circuitry involved,
and the steps taken to establish a robust foundation for real-time data acquisition and
analysis.[7]
Figure 4.1 Testing phase of the project
4.2 ESP32-WROOM-32 Module Integration: The ESP32-WROOM-32 module
serves as the central nervous system of the system, orchestrating data acquisition, processing,
and communication. It is carefully integrated into the hardware setup, and its GPIO pins are
allocated to interface with other components.
Sensor Integration and Placement:
 Fire Sensor: Positioned in areas prone to fire hazards, the fire sensor is connected to a
digital input GPIO pin. Its placement is optimized for swift fire detection.
 Ultrasonic Sensor: Placed to monitor distances, the ultrasonic sensor's connections to
appropriate GPIO pins facilitate accurate distance measurements.
 Temperature and Humidity Sensors: These sensors are situated strategically to
capture environmental conditions. Their data connections to the ESP32's GPIO pins
enable real-time temperature and humidity monitoring.
17
 Gas Sensor: This sensor is used for sensing gas leakage. MQ-2 gas sensor has high
sensitivity to LPG, Propane, and Hydrogen, also could be used for Methane and other
combustible steam.
4.3 OLED Display Interface: The OLED display is seamlessly interfaced with the ESP32
module. Relevant GPIO pins are allocated for data and control signals. This display acts as the
user interface, conveying real-time data and alerts to factory personnel.
4.4 Relay Control for Actuation: The relay is integrated to control external devices or
trigger safety measures. Its connections to the ESP32's GPIO pins enable activation based on
detected anomalies.
4.5 PCB design and implementation: PCB (Printed Circuit Board) design and
implementation is a complex process that involves many steps and requires knowledge in
various fields such as engineering, material
science, chemistry, and more. The process
usually starts with creating a schematic that
shows how components are connected
throughout the circuit board. This is
followed by selecting the components,
placing them on the PCB, routing signals
and power planes. I am using easyEDA
software to design my PCB.
 PCB Layout Design: Use the schematic to create the physical layout of the PCB. Place
components on the board while considering factors like signal integrity, power
distribution, and thermal management. Route the traces to connect components,
ensuring proper spacing and impedance control.
 Design Rule Check (DRC): Run a DRC to catch potential errors in your design, such
as incorrect trace widths, spacing violations, or other manufacturing issues.
 Print and Etch the PCB: Once your design is ready, print it onto special PCB transfer
paper using a laser printer. Transfer the toner from the paper onto a copper-clad board
using heat .Etch the board using an appropriate etching solution to remove the excess
copper and reveal the traces.
Figure 4.2: 3-D view of the project
Figure 4.2 Bottom layout of the project Figure 4.3 Top layout of the project
18
 Drilling and Mounting Components: Drill holes for component leads and vias using
a small drill press or a handheld drill with a suitable bit. Mount the components onto
the board and solder them in place. Soldering requires skill and proper equipment, such
as a soldering iron, solder wire, flux, and solder wick.
 Testing: Before applying power, carefully inspect your solder joints and connections
.Use a multimeter and continuity tester to check for shorts, opens, and correct
connections .Apply power gradually and test the circuit's functionality.
4.6 Final Project and Connections: Detailed circuit diagrams visually represent the
interconnections among components. These diagrams serve as blueprints to ensure accurate
wiring and proper data flow.
Wiring Management and Insulation: Effective cable management techniques are employed to
organize and secure wiring, minimizing clutter and preventing interference. Insulation
measures are implemented to safeguard against short circuits and potential hazards.
Figure 4.4 Final Project-a
Figure 4.5 Final Project-b
## CHAPTER 5
Software Implementation
5.1 Software Implementation: The software implementation of the IoT Based Factory
Monitoring and Protection System involves configuring the ESP32-WROOM-32 module to
communicate with the Blynk IoT platform using the Arduino IDE software. This section
provides a step-by-step guide to setting up the software components, integrating Blynk, and
programming the ESP32 for effective data communication, analysis, and user interaction.
5.2 Setting Up Arduino IDE: Install the Arduino IDE software on my development
computer. Configure the IDE for ESP32 development by adding the appropriate board manager
URL and installing the ESP32 board package.
Figure 5.1 Arduino installation
5.3 Blynk Account and Project Setup:
Create an account on the Blynk platform
(https://blynk.io/) if you don't have one. Create
a new Blynk project and note down the Auth
Token provided.
 Blynk Library Installation: Within
the Arduino IDE, navigate to "Sketch"
> "Include Library" > "Manage
Libraries." Search for "Blynk" and
install the Blynk library.
 Blynk Initialization: Include the
Blynk library at the beginning of your code: #include <BlynkSimpleEsp32.h> Initialize
Blynk with your Auth Token: char auth[] = "MY_AUTH_TOKEN";
 Wi-Fi Connection: Connect the ESP32 to your Wi-Fi network by providing your
network SSID and password: WiFi.begin("SSID", "PASSWORD");
Figure 5.2 Blynk library Installation
20
 Sensor Data Acquisition: Use appropriate libraries to read data from sensors. For
instance, read fire sensor data, ultrasonic distance, temperature, and humidity using
GPIO pins or relevant communication protocols.
 Blynk Widget Setup: In your Blynk project, add widgets (Virtual Pins) to correspond
with each sensor and the LCD display. Configure the widgets' properties, such as their
type (Gauge, Value Display, LED, etc.) and data display settings.
 Blynk Connection and Data Transmission: Inside the void setup() function, initiate
the Blynk connection: Blynk. begin(auth, "SSID", "PASSWORD");In the void loop()
function, regularly call Blynk.run() to maintain the Blynk connection. Use Blynk's
virtualWrite() function to send sensor data to the corresponding virtual pins on the
Blynk app.
 User Interface (Blynk App): Download the Blynk app from your preferred app store.
Create a dashboard and add widgets that correspond to the virtual pins you used in your
code. Configure widget properties to visualize and monitor sensor data, such as
temperature, humidity, and distance.
5.4 Deploying Code: Compile my code in the Arduino IDE. Connect the ESP32 to my
computer, select the correct board and port, and upload the code.
//display
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels
// Declaration for SSD1306 display connected using software
SPI (default case):
#define OLED_MOSI 19
#define OLED_CLK 18
#define OLED_DC 22
#define OLED_CS 23
#define OLED_RESET 21
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT,
OLED_MOSI, OLED_CLK, OLED_DC, OLED_RESET, OLED_CS);
/* Fill-in information from Blynk Device Info here */
#define BLYNK_TEMPLATE_ID "TMPL6UGGdT3NM"
#define BLYNK_TEMPLATE_NAME "IoT Based Factory Monitoring"
#define BLYNK_AUTH_TOKEN "DnGBnIVrz4KhEaoIQPmsKj0qp6U-Htb6"
/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial
#include <WiFi.h>
21
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
// WiFi credentials.
char ssid[] = "Ranu Villa";
char pass[] = "12366111";
// DHT 11---------------------------------------------------
#include "DHT.h"
#define DHTPIN 13 // Digital pin connected to the DHT
sensor
// Uncomment whatever type you're using!
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
// DHT 11-------------x--------------x----------------------
//onewireTem------------------------------------------------
#include <OneWire.h>
#include <DallasTemperature.h>
#define ONE_WIRE_BUS 16
// Setup a oneWire instance to communicate with any OneWire
devices (not just Maxim/Dallas temperature ICs)
OneWire oneWire(ONE_WIRE_BUS);
// Pass our oneWire reference to Dallas Temperature.
DallasTemperature sensors(&oneWire);
//onewireTem----------x--------------x------------------------
//ultrasonic--------------------------------------
const int trigPin = 5;
const int echoPin = 17;
long duration;
int distance, distanceInch;
float oilLevel;
BLYNK_WRITE(V0){
if(param.asInt()==1){
digitalWrite(32,HIGH);
}else{
digitalWrite(32,LOW);
}
}
BLYNK_WRITE(V1){
if(param.asInt()==1){
digitalWrite(25,HIGH);
}else{
digitalWrite(25,LOW);
}
}
BLYNK_WRITE(V2){
if(param.asInt()==1){
22
digitalWrite(27,HIGH);
}else{
digitalWrite(27,LOW);
}
}
BLYNK_WRITE(V5){
if(param.asInt()==1){
digitalWrite(26,HIGH);
}else{
digitalWrite(26,LOW);
}
}
BlynkTimer timer;
float tempC=0;
int gas_value=0;
int flame_value=0;
double t=0;
double h=0;
const int buzzer=4;
void sendSensor(){
int value=analogRead(34);
gas_value = map(value, 0, 4096, 0, 100);
if (gas_value <= 55) {
digitalWrite(buzzer, LOW);
display.clearDisplay();
} else if (gas_value > 55) {
digitalWrite(buzzer, HIGH);
ledPrint("Gas Lekage!", gas_value);
}
Blynk.virtualWrite(V3,gas_value);
flame_value=digitalRead(14);
if(flame_value==0){
flame_value=1;
Buzzer();
ledPrint("Fire!",flame_value);
}else{
flame_value=0;
display.clearDisplay();
}
Blynk.virtualWrite(V4,flame_value);
h = dht.readHumidity();
23
// Read temperature as Celsius (the default)
t = dht.readTemperature();
Blynk.virtualWrite(V6,t);
Blynk.virtualWrite(V7,h);
//onewireTem
sensors.requestTemperatures(); // Send the command to get
temperatures
tempC = sensors.getTempCByIndex(0);
Blynk.virtualWrite(V8,tempC);
//onewireTem
//Ultrasonic
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
// distanceCm= duration*0.034/2;
// distanceInch = duration*0.0133/2;
distance = (duration/2) / 29.1;
const int maxdis=14;
const int mindis=2;
oilLevel=((maxdis-distance)*100)/(maxdis-mindis);
// Serial.print(distanceCm);
Blynk.virtualWrite(V9,oilLevel);
if(oilLevel<=10){
digitalWrite(26,HIGH);
}else if(oilLevel>=90){
digitalWrite(26,LOW);
}
//Ultrasonic
}
void Buzzer(){
digitalWrite(buzzer,HIGH);
delay(500);
digitalWrite(buzzer,LOW);
}
void setup()
{
// Debug console
Serial.begin(115200);
//display........
// SSD1306_SWITCHCAPVCC = generate display voltage from
3.3V internally
if(!display.begin(SSD1306_SWITCHCAPVCC)) {
Serial.println(F("SSD1306 allocation failed"));
for(;;); // Don't proceed, loop forever
24
}
// Show initial display buffer contents on the screen --
// the library initializes this with an Adafruit splash
screen.
display.display();
// Clear the buffer
display.clearDisplay();
//display........
dht.begin();
//onewireTem
sensors.begin();
pinMode(32,OUTPUT);
pinMode(25,OUTPUT);
pinMode(27,OUTPUT);
pinMode(26,OUTPUT);
pinMode(14,INPUT);
pinMode(34,INPUT);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
ledPrint("Connecting",0);
Buzzer();
pinMode(buzzer,OUTPUT);
Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
ledPrint("connected",1);
delay(2000);
timer.setInterval(500L, sendSensor);
}
void loop()
{
Blynk.run();
timer.run();
}
void ledPrint(char* text, int data) {
display.clearDisplay();
display.setTextSize(2); // Normal 1:1 pixel scale
display.setTextColor(SSD1306_WHITE); // Draw white text
display.setCursor(0,0); // Start at top-left corner
display.println(F(text));
display.setCursor(50,30);
display.setTextColor(SSD1306_BLACK, SSD1306_WHITE);
display.println(data);
display.display();
// delay(2000);
}
25
5.5 Monitoring and Interaction: Launch the Blynk app and log in with my Blynk
account. Access the dashboard I created and observe real-time sensor data and alerts. Interact
with widgets to visualize data and receive notifications.
By integrating Blynk with the ESP32-WROOM-32 module using the Arduino IDE, the
software implementation enables seamless data communication, user interaction, and
visualization. The Blynk platform serves as the bridge between the hardware components and
the user interface, allowing factory personnel to monitor critical parameters, receive alerts, and
ensure a safe and efficient factory environment.
## CHAPTER 6
Result and Discussion
6.1 Experimental Result:
My project has run successfully. It can read sensor data and show it to the Blynk app interface.
It can also be successfully controlled by an on or off-switch. Necessary automation works
finely and sends a notification when any kind of fault occurs. The interface of the Blynk app
on laptop and Android is shown Below
6.2 Advantages:
 Enhanced Safety: The system provides real-time monitoring of various parameters
such as temperature, humidity, air quality, and other environmental factors that can
impact worker safety. This information enables quick responses to prevent accidents
and ensure worker safety.
 Reduced Maintenance Costs: By monitoring critical aspects of the factory's
operations, the system can identify potential issues before they become major problems,
enabling quick and efficient responses. The system can use predictive maintenance
algorithms to analyze data and detect patterns that indicate equipment failure.
 Remote Monitoring and Control: The system provides a web-based interface that
allows remote monitoring and control of the factory systems, enabling quick responses
to issues from anywhere with an internet connection.
Figure 6.1 Blynk App interface in Laptop Display Figure 6.2 Blynk App
interface in Android
27
 Energy Efficiency: The system can monitor energy consumption and identify areas
where energy can be conserved, leading to reduced energy costs and a more sustainable
operation.
6.3 Application Fields:
 Manufacturing and Production Facilities: The system can be employed in
manufacturing plants to monitor machinery health, detect anomalies, and ensure
optimal operating conditions. Real-time data on temperature, humidity, and other
parameters can help maintain consistent product quality.
 Chemical and Petrochemical Industries: The system can provide early warning for
hazardous conditions such as abnormal temperature increases or gas leaks, enhancing
worker safety. Monitoring environmental factors ensures compliance with safety
regulations.
 Automotive Assembly Lines: Monitoring temperature and humidity levels can help
prevent humidity-related defects in electronic components. Immediate fire detection
can minimize risks in potentially flammable environments.
 Food and Beverage Processing Plants: Accurate temperature and humidity
monitoring ensures the preservation of perishable goods during production and storage.
Fire detection can safeguard facilities where flammable materials are present.
 Textile and Garment Industries: Monitoring humidity levels is crucial to prevent
damage to raw materials and finished products. Fire detection provides an additional
layer of safety in environments with combustible materials.
 Pharmaceutical Manufacturing: The system aids in maintaining controlled
environments required for drug production. Monitoring temperature and humidity
ensures product integrity and regulatory compliance.
 Energy Generation Facilities: The system can help monitor equipment health and
temperature fluctuations in power generation facilities. Fire detection contributes to the
safety of machinery and personnel.
 Electronics Manufacturing: Monitoring temperature and humidity levels is essential
to prevent electronic component damage. Fire detection helps safeguard sensitive
manufacturing areas.
 Heavy Machinery and Construction Sites: The system can monitor machinery
conditions, including temperature, vibration, and potential hazards. Immediate fire
detection can prevent equipment damage and downtime.
 Agricultural and Greenhouse Operations: Monitoring environmental conditions
such as temperature and humidity supports optimal plant growth. Fire detection can
prevent potential crop damage in case of fire outbreaks.
28
 Data Centers and Server Rooms: Monitoring temperature and humidity levels
ensures optimal conditions for electronic equipment. Fire detection prevents potential
hardware damage and data loss.
6.4 Future scope
 Predictive Maintenance: The system can be further developed to include predictive
maintenance features. This would involve analyzing historical data to predict when
maintenance is required, preventing equipment failures and reducing downtime.
 Integration with Other Systems: The system can be integrated with other industrial
systems such as SCADA (Supervisory Control and Data Acquisition) systems, allowing
for centralized monitoring and control of all industrial processes.
 Real-time Monitoring of Production Lines: The system can be expanded to monitor
the entire production line in real-time, enabling operators to detect and resolve issues
quickly and efficiently.
 Machine Learning and AI: The system can be enhanced using machine learning and
AI algorithms to improve its performance and decision-making capabilities.
 Autonomous Operation: The system can be developed to enable autonomous
operation of industrial equipment, minimizing the need for human intervention and
improving overall efficiency.
6.5 Conclusion:
The IoT-based factory monitoring and protection system is a project designed to enhance the
safety, security, and efficiency of manufacturing plants by incorporating various IoT
technologies. The project involves the installation of sensors, and other monitoring devices
throughout the factory to collect data on different parameters of the manufacturing process.
The system's web-based interface enables factory personnel to monitor and control the
manufacturing process and security system in real-time from any location with an internet
connection. This remote monitoring and control can improve operational efficiency and reduce
response time to any abnormalities or safety hazards.
The total cost of this project is about 4200tk.
29
REFERENCES
[1] Md. Ibne Joha & Md. Shafiul Islam (2021). "IoT-Based Smart Home Automation
Using NodeMCU: A Smart Multi-Plug with Overload and Over Temperature
Protection".2021 24th International Conference on Computer and Information
Technology (ICCIT)
[2] Alok Kumar Gupta & Rahul Johari (2019). "IOT based Electrical Device Surveillance
and Control System".2019 4th International Conference on Internet of Things: Smart
Innovation and Usages (IoT-SIU)
[3] D. Vasicek, J. Jalowiczor, L. Sevcik and M. Voznak, "IoT Smart Home Concept",
2018 26th Telecommunications Forum (TELFOR), pp. 1-4, 2018.
[4] T. D. Nguyen, V. K. Tran, T. D. Nguyen, N. T. Le and M. H. Le, "IoT-Based Smart
Plug-In Device for Home Energy Management System", 2018 4th International
Conference on Green Technology and Sustainable Development (GTSD), pp. 734-
738, 2018.
[5] L. Coetzee and J. Eksteen, "The Internet of Things - promise for the future? An
introduction", 2011 IST-Africa Conference Proceedings, pp. 1-9, 2011.
[6] T. Chaurasia and P. K. Jain, "Enhanced Smart Home Automation System based on
Internet of Things", 2019 Third International conference on I-SMAC (IoT in Social
Mobile Analytics and Cloud) (I-SMAC), pp. 709-713, 2019.
[7] T. Malche and P. Maheshwary, "Internet of Things (IoT) for building smart home
system", 2017 International Conference on I-SMAC (IoT in Social Mobile Analytics
and Cloud) (I-SMAC), pp. 65-70, 2017.
[8] ESP32-DevKitC V4 (2022). "ESP32-DevKit". [Online]. Available:
https://docs.espressif.com/projects/esp-idf/en/latest/esp32/hw-reference/esp32/getstarted-
devkitc.html
[9] SparkFun Electronics. (2021). "OLED Display 0.96" (Qwiic) ". [Online].
Available: https://learn.sparkfun.com/tutorials/qwiic-oled-display-hookup-guide
[10] Adafruit Industries. (2021). "DHT11 Basic Temperature and Humidity Sensor".
[Online]. Available: https://www.adafruit.com/product/386

## API Reference

#### Get all items

```http
  GET /api/items
```

| Parameter | Type     | Description                |
| :-------- | :------- | :------------------------- |
| `api_key` | `string` | **Required**. Your API key |

#### Get item

```http
  GET /api/items/${id}
```

| Parameter | Type     | Description                       |
| :-------- | :------- | :-------------------------------- |
| `id`      | `string` | **Required**. Id of item to fetch |

#### add(num1, num2)

Takes two numbers and returns the sum.

