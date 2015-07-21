void setup() {
  pinMode(3, OUTPUT);
}

void loop() {
  // Output all possible PWM values successively in about 30 seconds
  for (int dutyCycle = 0; dutyCycle < 256; dutyCycle++) {
    analogWrite(3, dutyCycle);
    delay(115);  // Do nothing for 115 milliseconds
  }
}
