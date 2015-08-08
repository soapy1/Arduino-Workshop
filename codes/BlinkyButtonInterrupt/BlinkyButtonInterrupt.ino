
#include <TimerOne.h>

#define INT_LED_PIN 13
#define TIMER_LED_PIN 5
#define BUTTON_PIN 3

void changeInterruptLed() {
    if (digitalRead(BUTTON_PIN) == HIGH) {
        digitalWrite(INT_LED_PIN, HIGH);
    } else {
        digitalWrite(INT_LED_PIN, LOW);
    }
}

bool timerLedState = false;

void toggleTimerLed() {
  timerLedState = !timerLedState;
  digitalWrite(TIMER_LED_PIN, timerLedState);
}

void setup() {
  pinMode(INT_LED_PIN, OUTPUT);
  pinMode(TIMER_LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
  attachInterrupt(1, changeInterruptLed, CHANGE);
  Timer1.initialize(1000000);
  Timer1.attachInterrupt(toggleTimerLed);
}

void loop() {

}
