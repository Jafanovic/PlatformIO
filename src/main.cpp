/*
* Discovery kit with STM32F407VG MCU
* Four user LEDs: 
*     LD3 (orange), LD4 (green), LD5 (red) and LD6 (blue)
*/
#include <Arduino.h>
  int ledPin = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);
}