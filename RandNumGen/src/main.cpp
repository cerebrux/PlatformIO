/*
    RandNumGen - A random number generator for Arduino
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
#include "serial_io.h"

void setup()
{
    Serial.begin(9600);
    while (!Serial)
        ;                     // Wait for Serial Monitor to connect
    Serial.setTimeout(60000); // Increase timeout to 60 seconds
    delay(1000);              // Extra delay just in case
}

void loop()
{
    println("-------------------");
    println("Generating a random number...");
    long minVal = inputInteger("Enter minimum value: ");
    long maxVal = inputInteger("Enter maximum value: ");

    if (minVal >= maxVal)
    {
        println("Error: Minimum value must be strictly less than maximum value!");
        return;
    }

    // Combine analog noise and user timing for better entropy
    // We read micros() AFTER user input to capture the randomness of their reaction time
    unsigned long analogNoise = analogRead(A0);
    unsigned long timeEntropy = micros();

    // Simple mixing: Multiply (with overflow) or XOR
    unsigned long seed = timeEntropy * (analogNoise + 1); // +1 to avoid multiplication by zero

    println("Info - Combined Seed value:", seed);
    randomSeed(seed);

    // "Warm up" the generator: Discard the first numbers
    random();
    random();

    // random() max is exclusive, so we add 1 to include the maxVal
    long y = random(minVal, maxVal + 1);
    println("-------------------");
    print("Random number between", minVal, "and", maxVal);
    println(" is:", y);
    println("-------------------");
    delay(500);
    stop();
}