#include <TimerOne.h>
#include <DebouncedInput.h>

int ledPins[] = {10, 11, 12};
int scrollButtonPin = 2;
int selectButtonPin = 3;
long debounceDelayMicros = 1000;
int scrollPosition = 0;
int numFunctions = 3;

DebouncedInput scrollButton(scrollButtonPin, debounceDelayMicros);
DebouncedInput selectButton(selectButtonPin, debounceDelayMicros);

void setup() {
  Serial.begin(9600);
  pinMode(ledPins[0], OUTPUT);
  pinMode(ledPins[1], OUTPUT);
  pinMode(ledPins[2], OUTPUT);
}

void func0() {
  for (int num = 0; num < 50; num++) {
    digitalWrite(ledPins[0], num & 0b001);
    digitalWrite(ledPins[1], num & 0b010);
    digitalWrite(ledPins[2], num & 0b100);
    delay(100);
  }
}

void func1() {
  for (int num = 0; num < 10; num++) {
    digitalWrite(ledPins[0], HIGH);
    digitalWrite(ledPins[1], HIGH);
    digitalWrite(ledPins[2], HIGH);

    delay(100);
    
    digitalWrite(ledPins[0], LOW);
    digitalWrite(ledPins[1], LOW);
    digitalWrite(ledPins[2], LOW);

    delay(100);
  }
}

void func2() {
  for (int num = 0; num < 42; num++) {
    digitalWrite(ledPins[0], (num % 4) == 0);
    digitalWrite(ledPins[1], (num % 4) == 1 || (num % 4) == 3);
    digitalWrite(ledPins[2], (num % 4) == 2);
    delay(100);
  }
}

void loop() {
  // Update the button states
  scrollButton.update();
  selectButton.update();

  // If scroll button is on rising edge, increment scroll position
  if (scrollButton.stateHasChanged() && scrollButton.getState()) {
    scrollPosition = (scrollPosition + 1) % numFunctions;
  }

  // If select button is on rising edge, execute function
  if (selectButton.stateHasChanged() && selectButton.getState()) {
    switch (scrollPosition) {
      case 0:
        Serial.println(0);
        func0();
        break;
      case 1:
        Serial.println(1);
        func1();
        break;
      case 2:
        Serial.println(2);
        func2();
        break;
    }
  }
  
  switch (scrollPosition) {
    case 0:
      digitalWrite(ledPins[0], HIGH);
      digitalWrite(ledPins[1], LOW);
      digitalWrite(ledPins[2], LOW);
      break;
    case 1:
      digitalWrite(ledPins[0], LOW);
      digitalWrite(ledPins[1], HIGH);
      digitalWrite(ledPins[2], LOW);
      break;
    case 2:
      digitalWrite(ledPins[0], LOW);
      digitalWrite(ledPins[1], LOW);
      digitalWrite(ledPins[2], HIGH);
      break;
  } 
}
