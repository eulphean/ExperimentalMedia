// Author: Amay Kataria
// Description: Traffic lights solution. 
// Date: 9/22/2017

int redLED = 13;
int yellowLED = 12;
int greenLED = 11;

// Current state can be 0 (red), 1 (yellow), 2 (green)
// Default state is 0. 
int currentState = -1; 

int timer = 0;

void setup() {
  Serial.begin(9600);
  
  // put your setup code here, to run once:
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(2, INPUT_PULLUP);
}

void loop() {
  // Input_Pullup logic is inverted. 
  // Read the data from the input pin. 
  int buttonVal = digitalRead(2);
  Serial.println(buttonVal);

  if (currentState == -1) {
    digitalWrite(redLED, HIGH);
    currentState = 0;
  }

  // Am I red right now? And 3 seconds have elapsed? Go to green. 
  if (currentState == 0) {
    // Am I turned on? 
    if (timer > 3) {
      digitalWrite(greenLED, HIGH);
      digitalWrite(redLED, LOW);
      digitalWrite(yellowLED, LOW);
      // Set to next state. 
      currentState = 2;
      // Reset timer.
      timer = 0; 
    }
  }

  // Am I yellow right now? And 1 seconds have elapsed? Go to red.
  if (currentState == 1) {
    if (timer > 2) {
      digitalWrite(redLED, HIGH);
      digitalWrite(yellowLED, LOW);
      digitalWrite(greenLED, LOW);
      // Set to next state
      currentState = 0; 
      // Reset timer.
      timer = 0;
    }
  }

  // Am I green right now? And 4 seconds have elapsed? Go to yellow. 
  if (currentState == 2) {
    if (timer > 4) {
      digitalWrite(yellowLED, HIGH);
      digitalWrite(redLED, LOW);
      digitalWrite(greenLED, LOW);
      // Set to next state
      currentState = 1;
      // Reset timer
      timer = 0;
    }
  }

  // Global delay
  delay(1000);
  timer ++;
}
