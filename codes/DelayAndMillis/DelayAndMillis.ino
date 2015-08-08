void setup() {
  Serial.begin(9600);
}

long desiredLoopTime = 1000;

void loop() {
  long startTime = millis();
  Serial.println(startTime);
  long timeSpentInLoop = millis() - startTime;
  delay(desiredLoopTime - timeSpentInLoop);

}
