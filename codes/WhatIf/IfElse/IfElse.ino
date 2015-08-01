// Led is attached to pin 13
int led = 13;
// This is our variable. We can say it is boolean
// because it can only have two states
boolean lightOn = true;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  // This is the condition
  if (lightOn) {
    // since lightOn is true, this code will be executed
    digitalWrite(led, HIGH);
  } else {
    // this code will never be executed
    digitalWrite(led, LOW);
  }
}
