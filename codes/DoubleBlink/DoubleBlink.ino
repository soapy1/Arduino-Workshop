#define LED_ONE 13
#define LED_TWO 12

void setup()
{
    pinMode(LED_ONE, OUTPUT);
    pinMode(LED_TWO, OUTPUT);
}

void loop()
{
    phaseOne();
    delay(200);
    phaseTwo();
    delay(200);
}

void phaseOne() {
  digitalWrite(LED_ONE, HIGH);
  digitalWrite(LED_TWO, LOW);
}

void phaseTwo() {
  digitalWrite(LED_ONE, LOW);
  digitalWrite(LED_TWO, HIGH);
}
