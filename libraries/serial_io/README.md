# serial_io Library

The `serial_io` library provides a set of utility functions to simplify communication via the Serial Port on Arduino.

## License

The library is available as **Public Domain**. This means it is free for use, modification, and distribution without any restrictions. See the `LICENSE` file for more details.

## Installation

1. Download the `serial_io.zip` file of the library.
2. Open the **Arduino IDE**.
3. Go to the menu **Sketch** -> **Include Library** -> **Add .ZIP Library...**
4. Select the `serial_io.zip` file you downloaded.
5. The library is now installed and ready to use!

## File Structure

* **`serial_io.h`**: The main library file containing all the source code.
* **`keywords.txt`**: File for syntax highlighting in the Arduino IDE.
* **`library.properties`**: Library metadata (name, version, authors) for the Library Manager.
* **`LICENSE`**: The license text (Public Domain / Unlicense).
* **`examples/`**: Folder with usage examples (e.g., `Serial_IO_Demo`).
* **`serial_io.zip`**: The download and installation file for the library in the Arduino IDE.

## Functions

### 1. Output Functions (Printing)
These functions allow for easy printing of values to the serial monitor.
* **`print(...)`**: Prints from 1 to 5 arguments (variables or text) on the same line, separated by spaces.
    * Automatically handles decimal numbers (`float`, `double`) printing them with 2 decimal places (default).
* **`println(...)`**: Works like `print`, but adds a newline at the end.
* **`println()`**: Simply prints an empty line.

### 2. Input Functions (Reading)
These functions stop program execution and wait for the user to type something in the serial monitor.
* **`inputString(prompt, echo)`**: Displays a prompt message (`prompt`), waits for the user to provide text, and returns it as a `String`.
* **`inputCharacter(prompt)`**: Requests input and returns the first character typed.
* **`inputInteger(prompt)`**: Requests input and converts the text to an integer (`long`).
* **`inputFloat(prompt)`**: Requests input and converts the text to a decimal number (`float`).

### 3. Control Functions
* **`stop()`**: Terminates the program flow. Prints an end message and enters an infinite loop (`while(true)`), effectively stopping the Arduino until a Reset occurs.

## Usage Example

```cpp
// Optional: Define decimal places (default = 2)
#define DECIMAL_PLACES 4
#include "serial_io.h"

void setup()
{
    Serial.begin(9600);

    // 1. Output Examples (print/println)
    println("--- Output Demo ---");
    print("Simple print without newline. ");
    println("Now we change line.");

    // Printing multiple arguments (up to 5)
    println("Measurement:", 1, "Value:", 12.3456789, "Units"); // Will show 4 decimals due to define
    println();                                              // Empty line
    delay(2000);

    // 2. Input Examples
    println("--- Input Demo ---");

    // inputString (with and without echo)
    String name = inputString("What is your name? ");                       // echo = true (default)
    String secret = inputString("Enter a password (hidden): ", false); // echo = false
    println("\nPassword entered.");                             // Needs \n because echo=false doesn't change line

    // inputCharacter
    char answer = inputCharacter("Do you like programming? (y/n): ");

    // inputInteger & inputFloat
    int age = inputInteger("How old are you? ");
    float height = inputFloat("What is your height (in meters)? ");

    // 3. Display Results
    println("\n--- Results ---");
    println("Name:", name);
    println("Answer:", answer);
    println("Age:", age);
    println("Height:", height);

    // 4. Termination
    stop();
}

void loop()
{
    // Code here will never run due to stop() in setup
}
```
