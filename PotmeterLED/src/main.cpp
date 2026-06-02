#include <Arduino.h>

int PotPin = 2;               //input pin for the potentiometer.
int ledPin = LED_BUILTIN;     //pin for the LED.
int sensorValue = 0;          //variable to store the values coming from the potentiometer.
// put function declarations here:
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);  //initialize the LED pin as an output.
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(PotPin); //read the value from the potentiometer and store it in a variable.
  digitalWrite(ledPin, HIGH); //turn the LED on.
  delay(sensorValue); //wait for a time proportional to the potentiometer value.
  digitalWrite(ledPin, LOW); //turn the LED off.
  delay(sensorValue); //wait for a time proportional to the potentiometer value.
}