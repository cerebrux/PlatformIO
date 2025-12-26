#include <Arduino.h>

void setup()
{
  // Start serial communication at 9600 baud
  Serial.begin(9600);
  // Configure the built-in LED pin as an output
  pinMode(LED_BUILTIN, OUTPUT);
}

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