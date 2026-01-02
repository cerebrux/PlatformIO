#include <Arduino.h>
#include <serial_io.h>

const String alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                        "abcdefghijklmnopqrstuvwxyz"
                        "0123456789"
                        "!@#$%^&*()-_=+[]{}|;:',.<>?/`~ ";

const String askLength = "Enter desired length of random string (1-100): ";
const String invalidlength = "Invalid length. Please enter a number between 1 and 100.";

void setup()
{
  Serial.begin(9600);
  while (!Serial)
    ;                       // Wait for Serial Monitor to connect
  Serial.setTimeout(60000); // Increase timeout to 60 seconds
  delay(1000);              // Extra delay just in case
  randomSeed(analogRead(A0));
}

void loop()
{
  int lengthRequested = inputInteger(askLength);    // Get user input for length
  if (lengthRequested < 1 || lengthRequested > 100) // Validate input
  {
    Serial.println(invalidlength); // Notify user of invalid input
    return;                        // Restart loop to ask for input again
  }
  String myrandword = "";                   // Initialize empty string for random word
  for (int i = 0; i < lengthRequested; i++) // Generate random characters
  {
    int index = random(0, alphabet.length()); // Get random index
    myrandword += alphabet.charAt(index);     // Append character to string
  }
  println(myrandword); // Output the generated random string
  stop();              // Stop execution after generating the string
}
