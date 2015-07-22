#include <TimerOne.h>

bool ledState = false;

void toggleLed() {
  digitalWrite(3, ledState);
  ledState = !ledState;
}

void doSomethingElse() {
  delay(10000); // Wait 10 seconds
}
 
void setup() {
  pinMode(3, OUTPUT);
  Timer1.initialize(1000000);// Set timer length to 1 sec
  Timer1.attachInterrupt(toggleLed); // Print message every second
}

// Now you can run code in parallel down here
void loop() {
  doSomethingElse();
}
