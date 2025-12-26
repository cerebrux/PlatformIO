# Random Number Generator (RandNumGen)

A simple yet robust random number generator for Arduino, built with PlatformIO. This project demonstrates how to generate high-quality pseudo-random numbers by combining analog noise with user interaction timing for entropy.

## Features

- **User-Defined Range**: Prompts the user to enter minimum and maximum values via Serial Monitor.
- **High Entropy Seeding**: Uses a hybrid seeding mechanism combining:
  - **Analog Noise**: Reads electromagnetic noise from an unconnected pin (A0).
  - **User Timing**: Uses the microsecond-precise timing of user input (`micros()`) to ensure unpredictability.
- **Input Validation**: Ensures the minimum value is less than the maximum.
- **Interactive Interface**: Built using the [Serial_IO](https://github.com/cerebrux/Serial_IO) library for easy input/output handling.

## Hardware Required

- **Arduino Uno R4 WiFi** (or any compatible Arduino board)
- USB Cable for connection to PC

## Software Dependencies

- **PlatformIO** (VS Code Extension)
- **Serial_IO Library**: Automatically handled by PlatformIO (`lib_deps`).

## How to Use

1.  **Clone/Download** this repository.
2.  Open the project in **VS Code** with **PlatformIO**.
3.  **Upload** the firmware to your Arduino board.
4.  Open the **Serial Monitor** (set to 9600 baud).
5.  Follow the on-screen prompts:
    - Enter the minimum value.
    - Enter the maximum value.
6.  The device will generate and display a random number within that range.
7.  Press the **Reset** button on the Arduino to generate a new number.

## How it Works

The core logic resides in `src/main.cpp`. To overcome the deterministic nature of standard PRNGs (Pseudo-Random Number Generators), this project re-seeds the random generator (`randomSeed`) immediately after user input.

```cpp
// Combine analog noise and user timing for better entropy
unsigned long analogNoise = analogRead(A0);
unsigned long timeEntropy = micros();

// Simple mixing
unsigned long seed = timeEntropy * (analogNoise + 1);
randomSeed(seed);
```

This ensures that even if the analog pin reads a constant value, the variation in human typing speed will produce a different seed every time.

## License

This project is licensed under the **GNU General Public License v3.0 (GPLv3)**.
See the [LICENSE](LICENSE) file for details.

