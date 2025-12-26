# Traffic Lights Simulator

A simple traffic light simulation for Arduino, built with PlatformIO. This project demonstrates basic digital output control using multiple LEDs.

## Features

- **Traffic Light Sequence**: Simulates a standard traffic light cycle:
  - **Red**: 5 seconds
  - **Green**: 5 seconds
  - **Yellow**: 2 seconds
- **Multi-Board Support**: Configured for both Arduino Uno R3 and Arduino Uno R4 WiFi.

## Hardware Required

- **Arduino Uno R4 WiFi** or **Arduino Uno R3**
- **3 LEDs** (Red, Yellow, Green)
- **3 Resistors** (220Ω - 330Ω)
- Breadboard and Jumper Wires
- USB Cable

## Pin Configuration

| LED Color | Arduino Pin |
|-----------|-------------|
| Red       | 13          |
| Yellow    | 12          |
| Green     | 11          |

## Software Dependencies

- **PlatformIO** (VS Code Extension)

## How to Use

1.  **Connect the LEDs** to the Arduino pins as described in the Pin Configuration table (don't forget the resistors!).
2.  Open the project in **VS Code** with **PlatformIO**.
3.  **Upload** the firmware to your Arduino board.
4.  Watch the traffic light sequence.

## License

This project is licensed under the **GNU General Public License v3.0 (GPLv3)**.
