#include <TimerOne.h>

#define LED_PIN 13
#define BUTTON_PIN 3

void pollButton() {
    if (digitalRead(BUTTON_PIN) == HIGH) {
        digitalWrite(LED_PIN, HIGH);
    } else {
        digitalWrite(LED_PIN, LOW);
    }
}

void setup() {
    pinMode(LED_PIN, OUTPUT);
    pinMode(BUTTON_PIN, INPUT);
    Timer1.initialize(1000);
    Timer1.attachInterrupt(pollButton);
    Serial.begin(9600);
}

int number = 0;

void loop() {
  Serial.print(number++);
  Serial.println(" I can still do stuff in loop()");
  delay(1000);
}
