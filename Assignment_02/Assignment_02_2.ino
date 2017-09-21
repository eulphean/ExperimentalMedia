// Author: Amay Kataria
// Description: Assignment 02.2, Experimental Media
// Date: 9/21/2017

int ledPin1 = 13;
int ledPin2 = 12;
int ledPin3 = 11;
int ledPin4 = 10;
int ledPin5 = 9;
int ledPin6 = 8;

int LEDS[6] = { ledPin1, ledPin2, ledPin3, ledPin4, ledPin5, ledPin6 };

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);
}

void loop() {
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 6; j++) {
      digitalWrite(LEDS[i], HIGH);
    }
    // After each iteration of i, delay some. 
    delay(1000);
    digitalWrite(LEDS[i], LOW);
  }
}
