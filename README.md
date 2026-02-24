# Arduino Potentiometer ADC

This project demonstrates how to use the Arduino's built-in Analog-to-Digital Converter (ADC) to read an analog voltage from a potentiometer and convert it into a voltage value (0–5V).

## Components

- Arduino Uno (or compatible board)
- 10kΩ potentiometer
- Breadboard
- Jumper wires

## Circuit Connections

| Potentiometer Pin | Connection |
|-------------------|------------|
| Left              | 5V         |
| Right             | GND        |
| Middle (wiper)    | A5         |

The potentiometer acts as a voltage divider. Rotating the knob changes the voltage at A5 between 0V and 5V.

## How It Works

The Arduino ADC has 10-bit resolution:

- 0V corresponds to 0
- 5V corresponds to 1023

Voltage is calculated using:

Voltage = (5.0 / 1023.0) * analogRead(A5)

## Usage

1. Upload the code to the Arduino.
2. Open the Serial Monitor.
3. Set baud rate to 9600.
4. Rotate the potentiometer and observe the changing voltage values.

## Concepts Covered

- Analog-to-Digital Conversion (ADC)
- Voltage divider principle
- Serial communication
- Basic embedded systems programming
