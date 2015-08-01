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

  // Switch on the state of lightOn
  switch (lightOn) {
    case (true):
      // this block will always be executed
      digitalWrite(led, HIGH);
      break;
     case (false):
      // this will never be executed
      digitalWrite(led, LOW);
      break;
  }
}
