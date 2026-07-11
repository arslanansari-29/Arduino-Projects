#include <Arduino.h>

// Pin 13 is the built-in LED on Arduino Uno
// You can also connect an external LED to pin 13
#define LED_PIN 13

void setup() {
  pinMode(LED_PIN, OUTPUT); // Set pin 13 as output
}

void loop() {
  digitalWrite(LED_PIN, HIGH); // Turn LED ON
  delay(500);                 // Wait 1 second

  digitalWrite(LED_PIN, LOW);  // Turn LED OFF
  delay(500);                 // Wait 1 second
}