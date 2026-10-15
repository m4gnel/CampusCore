# Robotics Laboratory

### Arduino · Embedded Systems · Sensors · Actuators · LCD Interfaces

[![Platform](https://img.shields.io/badge/Platform-Arduino-00979D?style=for-the-badge&logo=arduino&logoColor=white)](https://www.arduino.cc/)
[![Language](https://img.shields.io/badge/Language-Arduino%20C%2FC%2B%2B-00599C?style=for-the-badge&logo=cplusplus&logoColor=white)](https://docs.arduino.cc/)
[![Part of CampusCore](https://img.shields.io/badge/Part%20of-CampusCore-181717?style=for-the-badge&logo=github)](https://github.com/m4gnel/CampusCore)

Welcome to the **Robotics Laboratory** section of CampusCore.

This folder contains Arduino-based laboratory exercises that introduce embedded programming and hardware interaction. The examples explore keypad input, password checking, LCD displays, servo motor control, touch-sensor input, ultrasonic distance measurement, and basic decision-making using sensor data.

These exercises connect programming concepts with physical components, helping learners understand how microcontrollers receive input, process information, and control external devices.

> **Connect the hardware. Write the logic. Observe the result.**

---

## Quick Navigation

| Program | Description |
|---|---|
| [`Keypad_Password.c`](./Keypad_Password.c) | Read keypad input and compare it with a preset password |
| [`LCD_Display.c`](./LCD_Display.c) | Display text and elapsed time on a character LCD |
| [`Palindrome_Detect_LCD.c`](./Palindrome_Detect_LCD.c) | Check whether serial input is a palindrome and display the result on an LCD |
| [`Servo_Motor.c`](./Servo_Motor.c) | Control a servo motor according to serial input |
| [`Touchpin_Motor.c`](./Touchpin_Motor.c) | Use touch-sensor input to control output pins |
| [`Ultrasonic_Motor_Control.c`](./Ultrasonic_Motor_Control.c) | Measure distance using an ultrasonic sensor and adjust motor-control output |

**Important:** Although these source files use the `.c` extension, they contain Arduino C++ code. They should be treated as Arduino sketches and compiled using the Arduino IDE or Arduino CLI, not as ordinary standalone C programs.

---

## Table of Contents

- [What's Inside](#whats-inside)
- [Hardware and Software Requirements](#hardware-and-software-requirements)
- [Arduino Libraries](#arduino-libraries)
- [Getting Started](#getting-started)
- [Program Details](#program-details)
- [Wiring Reference](#wiring-reference)
- [Testing and Troubleshooting](#testing-and-troubleshooting)
- [Safety and Implementation Notes](#safety-and-implementation-notes)
- [Suggested Learning Path](#suggested-learning-path)
- [Contributing](#contributing)
- [Related Repository](#related-repository)

---

## What's Inside

The exercises cover several practical embedded-systems topics.

- **Digital input:** Read input from a keypad or touch sensor.
- **Digital output:** Control LEDs, output pins, and connected circuits.
- **LCD interfacing:** Display text, status messages, and elapsed time.
- **Servo control:** Position a servo using values received through the serial interface.
- **Distance sensing:** Measure distance using an ultrasonic sensor.
- **Motor control:** Adjust a motor-control signal according to measured distance.
- **String processing:** Reverse serial input and check for palindromes.
- **Conditional logic:** Use sensor readings and input values to select different actions.

These are laboratory exercises intended for learning and experimentation. The presence of a program in this repository does not guarantee that the corresponding circuit has been tested with every board or hardware configuration.

## Hardware and Software Requirements

### Hardware

Depending on the program, you may need:

- An Arduino-compatible development board, such as an Arduino Uno.
- A USB cable suitable for your board.
- A breadboard and jumper wires.
- A 4×4 matrix keypad.
- A compatible 16×2 character LCD.
- A servo motor.
- A touch sensor or compatible digital-output touch module.
- An HC-SR04-compatible ultrasonic distance sensor.
- A suitable DC motor driver and motor for the motor-control exercise.
- An appropriate power supply and other required circuit components.

You do not need every component for every program. Select the hardware required by the particular exercise.

### Software

- [Arduino IDE](https://www.arduino.cc/en/software)
- [Arduino documentation](https://docs.arduino.cc/)
- [Arduino libraries documentation](https://docs.arduino.cc/libraries/)

You can also use the [Arduino CLI](https://arduino.github.io/arduino-cli/) if you prefer a command-line workflow.

---

## Arduino Libraries

Install the required libraries through the Arduino IDE Library Manager or the official library sources.

| Library | Used by | Purpose |
|---|---|---|
| `Keypad` | `Keypad_Password.c` | Reads keys from a matrix keypad |
| `LiquidCrystal` | `LCD_Display.c`, `Palindrome_Detect_LCD.c` | Controls a compatible character LCD |
| `Servo` | `Servo_Motor.c` | Controls a servo motor |

`LiquidCrystal` and `Servo` are commonly included with the Arduino AVR board platform. Availability can depend on the selected board package.

The other programs primarily use Arduino core functions such as `pinMode()`, `digitalRead()`, `digitalWrite()`, `analogWrite()`, `Serial`, `delay()`, and `pulseIn()`.

---

## Getting Started

### 1. Clone the repository

```bash
git clone https://github.com/m4gnel/CampusCore.git
cd CampusCore/ROBOTICS
```

Alternatively, download the repository as a ZIP file from [CampusCore on GitHub](https://github.com/m4gnel/CampusCore).

### 2. Open a sketch

The files use `.c` extensions, but they contain Arduino C++ code. For Arduino IDE use, make a copy of the selected source file in a sketch folder and rename the copy to `.ino`, matching the sketch folder name.

For example, a sketch named `LCD_Display` should be structured as:

```text
LCD_Display/
└── LCD_Display.ino
```

Keep the original repository file unchanged unless you intentionally want to rename it in a separate repository change.

### 3. Select the board and port

In the Arduino IDE:

1. Connect the development board.
2. Select the correct board under **Tools → Board**.
3. Select the appropriate serial port under **Tools → Port**.
4. Install the required libraries.
5. Connect the circuit according to the program's pin definitions.
6. Verify the sketch, then upload it to the board.

### 4. Open the Serial Monitor when required

Several exercises use serial input or output. Open the Serial Monitor and set its baud rate to **9600** where the program calls `Serial.begin(9600)`.

For programs that read text, select a line-ending option compatible with the input handling and remove unintended extra characters if the result is unexpected.

---

## Program Details

<details>
<summary><strong>1. Keypad Password</strong></summary>

**Source:** [`Keypad_Password.c`](./Keypad_Password.c)

This exercise reads input from a 4×4 matrix keypad and compares each four-character sequence with a password stored in the sketch.

The current implementation:

- Defines a four-row, four-column keypad layout.
- Reads keys using the `Keypad` library.
- Uses `1234` as the preset password.
- Prints access status through the Serial Monitor.
- Turns digital pin 13 HIGH on a match and LOW otherwise.

**Concepts:** Matrix keypads, digital output, conditional statements, string comparison, and input handling.

**Important:** The password is hard-coded and the input is printed to the serial output. This is a demonstration, not a secure access-control system. A connected LED is suitable for a basic demonstration; do not connect an actual lock or safety-critical device without appropriate security and hardware design.

</details>

<details>
<summary><strong>2. LCD Display</strong></summary>

**Source:** [`LCD_Display.c`](./LCD_Display.c)

This sketch initializes a 16×2 character LCD, displays `Hello, World!`, and prints the elapsed time in seconds on the second row.

The sketch uses:

- `LiquidCrystal` for LCD communication.
- A 4-bit LCD interface.
- `millis()` to track elapsed time since the board started.

**Pin mapping in the source:**

| LCD signal | Arduino pin |
|---|---:|
| RS | 12 |
| Enable | 11 |
| D4 | 5 |
| D5 | 4 |
| D6 | 3 |
| D7 | 2 |

Connect LCD power, ground, contrast, and backlight appropriately according to the display module's specifications.

**Concepts:** LCD interfacing, digital communication, initialization, and non-blocking elapsed-time measurement.

</details>

<details>
<summary><strong>3. Palindrome Detection with LCD</strong></summary>

**Source:** [`Palindrome_Detect_LCD.c`](./Palindrome_Detect_LCD.c)

This sketch receives a string through the Serial Monitor, removes leading and trailing whitespace, reverses the string, and compares the original with the reversed result.

It displays `PALINDROME` or `NOT PALINDROME` on a 16×2 LCD.

**LCD pin mapping in the source:**

| LCD signal | Arduino pin |
|---|---:|
| RS | 7 |
| Enable | 6 |
| D4 | 5 |
| D5 | 4 |
| D6 | 3 |
| D7 | 2 |

**Concepts:** Serial communication, string operations, loops, character indexing, and LCD output.

**Current behaviour:** The comparison is case-sensitive and does not ignore internal spaces or punctuation. For example, `Madam` and `madam` are treated as different strings.

</details>

<details>
<summary><strong>4. Servo Motor Control</strong></summary>

**Source:** [`Servo_Motor.c`](./Servo_Motor.c)

This sketch reads an integer from the Serial Monitor and moves the servo to one of two positions:

- Input less than `40`: command the servo to 90 degrees.
- Input equal to or greater than `40`: command the servo to 180 degrees.

The servo signal is attached to digital pin 9, and the sketch reports the selected position through serial output.

**Concepts:** Servo libraries, serial input, conditional logic, and actuator control.

**Hardware note:** Power the servo according to its voltage and current requirements. A separate regulated supply may be necessary, and the Arduino and external supply generally need a common ground. Do not power a high-current motor or servo directly from an I/O pin.

</details>

<details>
<summary><strong>5. Touch Sensor Motor/Output Control</strong></summary>

**Source:** [`Touchpin_Motor.c`](./Touchpin_Motor.c)

This sketch reads a digital input on pin 2, configured with `INPUT_PULLUP`, and changes three output signals based on the input state.

The source defines:

| Signal | Pin |
|---|---:|
| Green output (`g`) | 5 |
| Motor/indicator output (`m`) | 6 |
| Red output (`r`) | 7 |
| Touch input (`t`) | 2 |

The program uses delays of three seconds and switches the outputs based on whether the input reads HIGH or LOW.

**Concepts:** Digital input, pull-up resistors, output control, conditional logic, and timing.

**Important:** `INPUT_PULLUP` means the input is normally HIGH when not pulled to ground. Confirm the output behaviour of your touch module before connecting it. The source also does not explicitly configure pin 6 as an output, so that pin configuration should be reviewed before relying on the motor/indicator output.

</details>

<details>
<summary><strong>6. Ultrasonic Motor Control</strong></summary>

**Source:** [`Ultrasonic_Motor_Control.c`](./Ultrasonic_Motor_Control.c)

This sketch sends a trigger pulse to an ultrasonic sensor, measures the echo duration, estimates the distance, and adjusts a PWM output according to the measured value.

The source defines:

| Signal | Pin |
|---|---:|
| Trigger | 9 |
| Echo | 10 |
| Motor driver input 1 | 6 |
| Motor driver input 2 | 7 |
| PWM enable | 5 |

The sketch sets the two direction pins to fixed HIGH/LOW states during setup. It then uses the measured distance to select a PWM value:

- Distance below 10 cm: PWM value `50`.
- Otherwise: PWM value `250`.

It also contains serial-input palindrome checking logic.

**Concepts:** Ultrasonic sensing, pulse-duration measurement, distance estimation, PWM, motor-driver control, and serial string processing.

**Important:** The source does not check for a timeout from `pulseIn()`. A failed echo can produce a zero duration and an invalid distance interpretation. The motor-control behaviour should be tested with the actual sensor and driver, including sensor timeouts and the board's supported PWM pins.

</details>

---

## Wiring Reference

Use the pin assignments documented in each source file. The tables above identify the pins explicitly defined in the sketches, but they are not complete circuit diagrams.

Before powering the circuit:

- Confirm the voltage requirements for the Arduino board and every module.
- Check the LCD pin order against its datasheet.
- Verify the keypad row and column wiring.
- Use a suitable driver circuit for motors.
- Ensure the grounds are connected correctly when using an external supply.
- Keep motor current away from the Arduino's I/O pins.
- Check the selected board's PWM and pin capabilities.

Do not assume that the pin mapping for one sketch is interchangeable with another.

---

## Testing and Troubleshooting

| Problem | What to check |
|---|---|
| Sketch fails to compile | Confirm the file is opened as an Arduino sketch and install missing libraries |
| Board is not detected | Check the USB cable, driver, board selection, and serial port |
| LCD shows no text | Check power, contrast, pin mapping, and LCD dimensions |
| Keypad reads incorrect keys | Check row/column wiring and the key layout |
| Servo does not move | Check signal wiring, power supply, ground, and mechanical load |
| Touch input behaves unexpectedly | Confirm whether the module is active-HIGH or active-LOW and review `INPUT_PULLUP` |
| Ultrasonic readings are zero or unstable | Check trigger/echo wiring, power, target distance, and timeout handling |
| Motor speed does not change as expected | Verify driver wiring, PWM support, motor supply, and common ground |

Test one component at a time before combining several components into a larger circuit.

---

## Safety and Implementation Notes

These exercises interact with physical hardware. Use the following precautions:

- Do not connect a motor directly to an Arduino I/O pin.
- Use an appropriate motor driver and power supply.
- Verify the servo's current requirements before powering it from the board.
- Avoid short circuits and check wiring before applying power.
- Treat the keypad password as a learning example, not as production security.
- Validate sensor readings before using them to control moving hardware.
- Review delays and blocking functions when building more responsive control systems.
- Keep a known-good copy of the original sketch before experimenting.

The repository examples are educational. They are not certified safety systems or production-ready robotics controllers.

---

## Suggested Learning Path

1. **Start with output:** Run `LCD_Display.c` and learn how the LCD is initialized.
2. **Practise input:** Connect the keypad and explore `Keypad_Password.c`.
3. **Learn string processing:** Test `Palindrome_Detect_LCD.c` with different strings.
4. **Control an actuator:** Experiment with `Servo_Motor.c` using safe servo positions.
5. **Read a sensor:** Explore `Touchpin_Motor.c` and understand its input state.
6. **Combine sensing and control:** Study `Ultrasonic_Motor_Control.c` and validate the distance calculations.
7. **Improve reliability:** Add input validation, sensor timeouts, clearer serial messages, and circuit documentation.

For each exercise, record the components used, pin assignments, expected behaviour, observed behaviour, and any corrections you make.

---

## Contributing

Improvements that make the laboratory exercises clearer and more reliable are welcome.

Possible contributions include:

- Correcting source filenames and documenting the Arduino board used.
- Adding wiring diagrams and circuit photographs.
- Providing tested sample inputs and expected outputs.
- Improving sensor timeout handling and input validation.
- Correcting pin configuration and event-handling issues.
- Separating hardware-independent logic from board-specific code.
- Documenting library versions and setup steps.
- Adding circuit-simulation instructions where appropriate.

Test changes with the intended board and components, and update the documentation to reflect the actual implementation.

For repository-wide improvements, visit [CampusCore on GitHub](https://github.com/m4gnel/CampusCore).

---

## Related Repository

This folder is part of **[CampusCore](https://github.com/m4gnel/CampusCore)**, a collection of programming exercises and practical work across computer science subjects.

Explore the other folders:

[AI](../AI/) · [DBMS](../DBMS/) · [Data Structures](../DS/) · [Machine Learning](../ML/) · [OOPS](../OOPS/) · [Operating Systems](../OS/)

---

<p align="center">
  <sub>From embedded code to physical action — learn robotics one experiment at a time.</sub>
</p>
