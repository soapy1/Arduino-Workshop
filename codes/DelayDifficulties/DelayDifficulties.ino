void setup() {
  Serial.begin(1200);
}

// Attempt to print a message every second.
void loop() {
  // (38 chars) * (8 bits/char) / (1200 bits/second) = 0.25 seconds
  Serial.println("This print takes about 0.25 seconds.");
  delay(1000);
}
