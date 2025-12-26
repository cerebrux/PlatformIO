# Arduino PlatformIO Projects

This repository contains a collection of Arduino projects developed using PlatformIO. All projects are configured to support both the **Arduino Uno R3** and the **Arduino Uno R4 WiFi**.

## Projects

### 1. RandNumGen
A robust Random Number Generator that solves the entropy issue on the Arduino Uno R4 WiFi.
- **Features**: Hybrid seeding mechanism using `micros()` and `analogRead()`, interactive serial interface.
- **Location**: `./RandNumGen`

### 2. Blink
The classic "Hello World" of hardware, updated for modern PlatformIO workflows.
- **Features**: Simple LED blinking, clean project structure.
- **Location**: `./Blink`

### 3. TrafficLights
A traffic light simulation project.
- **Features**: Simulates a traffic light sequence (Red -> Green -> Yellow).
- **Location**: `./TrafficLights`

### 4. MemeNums
A display project for the Arduino Uno R4 WiFi LED Matrix.
- **Features**: Displays the iconic numbers "42" (Hitchhiker's Guide) and "67" (2025 Viral Meme).
- **Location**: `./MemeNums`

## Hardware Support

All projects in this repository are configured with `platformio.ini` to support:
- **Arduino Uno R3** (Atmel AVR)
- **Arduino Uno R4 WiFi** (Renesas RA4M1)

## License

This repository is licensed under the **GNU General Public License v3.0**.
See the [LICENSE](LICENSE) file for details.

Each source file includes a license header referencing this license.
