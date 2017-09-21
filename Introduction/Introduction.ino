int ledPin1 = 9;                 // LED connected to digital pin 
int ledPin2 = 10;                 // LED connected to digital pin 
int ledPin3 = 11;                 // LED connected to digital pin 

void setup()
{
  pinMode(ledPin1, OUTPUT);      // sets the digital pin as output
  pinMode(ledPin2, OUTPUT); 
  pinMode(ledPin3, OUTPUT); 
}

void loop()
{
  // Fade in.
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin1, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(100);
  }

  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin1, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(100);
  }
  
  digitalWrite(ledPin2, HIGH);   // sets the LED on
  delay(300);
  digitalWrite(ledPin3, HIGH);   // sets the LED on
  delay(1000);                  // waits for a second
  digitalWrite(ledPin3, LOW);    // sets the LED off
  delay(300);
  digitalWrite(ledPin2, LOW);    // sets the LED off

  // Go check sensor.
  // If sensor on, then turn light on. 
  // If sensor off, turn light off. 
}

