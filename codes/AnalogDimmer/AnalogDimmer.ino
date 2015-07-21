void setup() {
  pinMode(A0, INPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int valRead = analogRead(A0);
  int dutyCycle = map(valRead, 0, 1023, 0, 255);
  
  //Serial.println(valRead);

  analogWrite(3, dutyCycle);
  delay(100);  // Do nothing for a second
}
