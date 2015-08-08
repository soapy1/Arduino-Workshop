#include <TimerOne.h>

void printTime() {
  Serial.println(millis());
}
 
void setup() {
  Serial.begin(9600);
  Timer1.initialize(1000000);// Set timer length to 1 sec
  Timer1.attachInterrupt(printTime); // Print message every second
}

void loop() {
}
