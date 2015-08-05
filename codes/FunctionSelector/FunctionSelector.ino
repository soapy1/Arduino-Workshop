#include <TimerOne.h>
#include <DebouncedInput.h>

int scrollButtonPin = 2;
int selectButtonPin = 3;
long debounceDelayMicros = 10000;
int scrollPosition = 0;
int numFunctions = 3;

DebouncedInput scrollButton(scrollButtonPin, debounceDelayMicros);
DebouncedInput selectButton(selectButtonPin, debounceDelayMicros);

void setup() {
  Serial.begin(9600);
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
        break;
      case 1:
        Serial.println(1);
        break;
      case 2:
        Serial.println(2);
        break;
    }
  }
}
