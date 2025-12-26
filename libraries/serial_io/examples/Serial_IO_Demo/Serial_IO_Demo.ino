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
    println();                                                 // Empty line
    delay(2000);

    // 2. Input Examples
    println("--- Input Demo ---");

    // inputString (with and without echo)
    String name = inputString("What is your name? ");                  // echo = true (default)
    String secret = inputString("Enter a password (hidden): ", false); // echo = false
    println("\nPassword entered.");                                    // Needs \n because echo=false doesn't change line

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
