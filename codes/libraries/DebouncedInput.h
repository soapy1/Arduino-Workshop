// Debounces inputs. See class method definitions for an
// explanation.
class DebouncedInput {
public:
  // Initialize with the pin to debounce and the delay in microseconds
  // to apply to the input
  DebouncedInput(int pin, long debounceDelay);

  // Check if the state should be changed. This method must be called
  // multiple times within the debounce delay period.
  void update();

  // Get the debounced state of the pin
  bool getState();
  
private:
  int pin;
  bool state;
  long debounceDelay;
  long lastChangeTime;
  bool lastReading;
};