# Random Word Generator (RandWord)

A utility for generating secure random strings on Arduino. This project is useful for creating passwords, tokens, or testing data.

## Features

- **Customizable Length**: User can specify the length of the random string (1-100 characters).
- **Rich Character Set**: Includes uppercase letters, lowercase letters, numbers, and special symbols.
- **Interactive Interface**: Uses the Serial Monitor to prompt for input and display results.
- **Entropy**: Seeds the random number generator using analog noise for better unpredictability.

## Hardware Required

- **Arduino Uno R4 WiFi**, **Arduino Uno R3**, or any compatible Arduino board
- USB Cable for connection to PC

## Software Dependencies

- **PlatformIO** (VS Code Extension)
- **Serial_IO** library (for easy input handling)

## How to Use

1.  Open the project in VS Code with PlatformIO.
2.  Upload the code to your Arduino board.
3.  Open the Serial Monitor (baud rate 9600).
4.  Enter the desired length when prompted.
5.  Copy the generated random string!
