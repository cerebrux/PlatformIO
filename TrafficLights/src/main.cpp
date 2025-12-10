#include <Arduino.h>

const int RED_PIN = 13;
const int YELLOW_PIN = 12;
const int GREEN_PIN = 11;

void setup() {
    pinMode(RED_PIN, OUTPUT);
    pinMode(YELLOW_PIN, OUTPUT);
    pinMode(GREEN_PIN, OUTPUT);
}

/*
 * Simplified Traffic Light Code for Beginners
 * Uses delay() instead of timers for easier understanding.
 */
void loop() {
    // 1. Turn RED on
    digitalWrite(RED_PIN, HIGH);
    digitalWrite(YELLOW_PIN, LOW);
    digitalWrite(GREEN_PIN, LOW);
    delay(5000); // Wait 5 seconds

    // 2. Turn GREEN on
    digitalWrite(RED_PIN, LOW);
    digitalWrite(YELLOW_PIN, LOW);
    digitalWrite(GREEN_PIN, HIGH);
    delay(5000); // Wait 5 seconds

    // 3. Turn YELLOW on
    digitalWrite(RED_PIN, LOW);
    digitalWrite(YELLOW_PIN, HIGH);
    digitalWrite(GREEN_PIN, LOW);
    delay(2000); // Wait 2 seconds
}
