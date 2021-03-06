// Author: Amay Kataria
// Description: Assignment 02, Experimental Media
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

// Part 1.
//#-------
//-#------
//--#-----
//---#----
//----#---
//-----#--
//------#-
//-------#
void part1() {
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 6; j++) {
      digitalWrite(LEDS[i], HIGH);
    }
    // After each iteration of i, delay some. 
    delay(1000);
    digitalWrite(LEDS[i], LOW);
  }
}

// Part 2.
//-#######
//#-######
//##-#####
//###-####
//####-###
//#####-##
//######-#
//#######-
void part2() {
   for (int i = 0; i < 6; i++) {
      for (int j = 0; j < 6; j++) {
        if (j != i) {
          digitalWrite(LEDS[j], HIGH);
        } else {
           digitalWrite(LEDS[j], LOW);
        }
      }
      // After each iteration of i, delay some. 
      delay(1000);
  }
}

// Part 3.
//########
//--------
//########
//--------
//########
//--------
//########
//--------
void part3() {
   for (int i = 0; i < 6; i++) {
      for (int j = 0; j < 6; j++) {
        if (i % 2 == 0) {
          digitalWrite(LEDS[j], HIGH);
        } else {
           digitalWrite(LEDS[j], LOW);
        }
      }
      // After each iteration of i, delay some. 
      delay(1000);
  }
}

// Part 4.
//#-#-#-#-
//-#-#-#-#
//#-#-#-#-
//-#-#-#-#
//#-#-#-#-
//-#-#-#-#
//#-#-#-#-
//-#-#-#-#
//#-#-#-#-
void part4() {
   for (int i = 0; i < 6; i++) {
      for (int j = 0; j < 6; j++) {
        if (i % 2 == 0) {
          if (j % 2 == 0) {
             digitalWrite(LEDS[j], HIGH); 
          } else {
            digitalWrite(LEDS[j], LOW);
          }
        } else {
          if (j % 2 != 0) {
            digitalWrite(LEDS[j], HIGH);
          } else {
            digitalWrite(LEDS[j], LOW);
          }
        }
      }
      // After each iteration of i, delay some. 
      delay(1000);
  }
}

void loop() {
  part4();
}


