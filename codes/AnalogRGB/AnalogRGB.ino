#define R_OUT 9
#define G_OUT 10
#define B_OUT 11
#define R_IN 7
#define B_IN 6
#define G_IN 5

void setup() {
  pinMode(R_OUT, OUTPUT);
  pinMode(G_OUT, OUTPUT);
  pinMode(B_OUT, OUTPUT);
  pinMode(R_IN, INPUT);
  pinMode(G_IN, INPUT);
  pinMode(B_IN, INPUT);
  pinMode(A0, INPUT);
}

void loop() {
  if (digitalRead(R_IN) == HIGH){
    setBrightness(R_OUT);
  }
  if (digitalRead(G_IN) == HIGH){
    setBrightness(G_OUT);
  }
  if (digitalRead(B_IN) == HIGH){
    setBrightness(B_OUT);
  }
}

void setBrightness(int pin) {
  int valRead = analogRead(A0);
  int dutyCycle = map(valRead, 0, 1023, 0, 255); 
  analogWrite(pin,dutyCycle);
}

