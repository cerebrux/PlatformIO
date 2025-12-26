/*
    Blink - LED Blink program for Arduino
    Copyright (C) 2025 Salih Emin

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

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