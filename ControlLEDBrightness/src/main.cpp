#include <Arduino.h>

int pot;
int led;

void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT); // Set the potentiometer pin as an input
  pinMode(6, OUTPUT); // Set the LED pin as an output
}

void loop() {
  // put your main code here, to run repeatedly:
  pot = analogRead(A0); // Read the value from the potentiometer
  led = map(pot, 0, 1023, 0, 255); // Map the potentiometer value to the LED brightness range
  analogWrite(6, led); // Set the LED brightness
}