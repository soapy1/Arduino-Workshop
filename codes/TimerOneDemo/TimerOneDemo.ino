#include <TimerOne.h>

int ledPin = 3;

// Toggle LED
void toggleLed() {
    static bool state = HIGH;
    
    digitalWrite(ledPin, state);
    state = !state;
}
 
void setup() {
  pinMode(3, OUTPUT);    

  // Set timer length to 0.1 sec
  Timer1.initialize(100000);

  // Togle the LED each time the timer ends
  Timer1.attachInterrupt(toggleLed);
}
 
void loop() {
}
