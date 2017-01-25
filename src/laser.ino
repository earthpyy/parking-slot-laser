#include <Arduino.h>

const int port = 0;
const int gnd = 1;

void setup() {
  pinMode(port, OUTPUT);
  pinMode(gnd, OUTPUT);
}

void loop() {
  digitalWrite(port, HIGH);
  digitalWrite(gnd, LOW);
}
