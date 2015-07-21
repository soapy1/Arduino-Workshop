#include <TimerOne.h>

void printMessage() {
  Serial.println("This print takes about 0.25 seconds.");
}
 
void setup() {
  Serial.begin(1200);
  Timer1.initialize(1000000);// Set timer length to 1 sec
  Timer1.attachInterrupt(printMessage); // Print message every second
}

// Now you can run code in parallel down here
void loop() {}
