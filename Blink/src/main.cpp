/**
 * @file main.cpp
 * @brief LED Blink program for Arduino/PlatformIO.
 *
 * This file contains the basic code to control the built-in LED of a microcontroller,
 * as well as logging the status to the serial port.
 */

#include <Arduino.h>

/**
 * @brief Program initialization.
 *
 * The setup() function is called once when the microcontroller starts.
 * Here we configure serial communication and pin modes.
 */
void setup()
{
  // Start serial communication at 9600 baud
  Serial.begin(9600);
  // Configure the built-in LED pin as an output
  pinMode(LED_BUILTIN, OUTPUT);
}

/**
 * @brief Main execution loop.
 *
 * The loop() function runs repeatedly.
 * Here we control the LED state (ON/OFF) and print messages.
 */
void loop()
{
  // Turn the LED on (HIGH voltage level)
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.println("LED is ON");

  // Wait for 1000 milliseconds (1 second)
  delay(1000);

  // Turn the LED off (LOW voltage level)
  digitalWrite(LED_BUILTIN, LOW);
  Serial.println("LED is OFF");

  delay(1000);
}