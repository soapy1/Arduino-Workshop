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
}

// Attempt to toggle LED every second.
void loop() {
  toggleLed();
  delay(1000);
  
  // Extra call can take unpredictable amount of time
  doSomethingElse(); 
}
