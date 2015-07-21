void setup() {
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop() {
  float valRead = analogRead(A0);

  // Convert value from 0-255 to 0-5 on a linear scale
  float valVolts = valRead * 5.0 / 1023.0;
  Serial.println(valVolts);
  delay(100);  // Do nothing for a second
}
