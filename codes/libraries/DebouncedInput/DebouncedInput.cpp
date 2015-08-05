// Theory of debouncing mechanical switches:
//
// Switches and buttons are built with an inherent problem
// and that is difficult to solve mechanically. Any time you
// press a button, for a very short amount of time (fractions
// of a second long), the metal contacts bounce on each other
// and the input rapidly switches between on and off.
// 
// This problem can be easily solved with a hardware filter
// that smooths out the rapid changes and outputs a single
// state change.
//
// You can also simulate such a filter in software. This can
// be done with fairly little processing power and it reduces
// the amount of hardware the device requires. The idea is to
// only consider the input signal truly changed if the signal
// stays constant for a predetermined amount of time. This
// period of time can be called a 'debounce delay'. If the
// signal keeps changing before the debounce delay time
// passes, we consider the input uncertain and keep using the
// last certain value.

#include <DebouncedInput.h>

// Initialize with the pin number to debounce and a delay
// time.
DebouncedInput::DebouncedInput(int pin, long debounceDelay) :
  pin(pin),
  debounceDelay(debounceDelay),
  state(LOW),
  lastChangeTime(micros()),
  lastReading(LOW),
  stateChanged(false)
{
  pinMode(pin, INPUT);
}

// Apply debounce filter and check if the input has changed.
// This needs to be run multiple times per debounce delay
// time period.
void DebouncedInput::update() {
  // Read the pin
  bool reading = digitalRead(pin);

  // If the reading is not the same as the state, check if
  // it is time to change the state
  if (reading != state) {
    // If the reading is not the same as the state, update
    // the last change timestamp
    if (reading != lastReading) {
      lastChangeTime = micros();
      lastReading = reading;
    }
    // Otherwise, check if the input has stayed constant
    // long enough to consider it a state change.
    else if (micros() - lastChangeTime >= debounceDelay) {
      stateChanged = true;
      state = reading;
    }
  }
  else if (lastReading != reading) {
    lastReading = reading;
  }
}

bool DebouncedInput::getState() {
  return state;
}

bool DebouncedInput::stateHasChanged() {
  if (stateChanged) {
    stateChanged = false;
    return true;
  }

  return false;
}