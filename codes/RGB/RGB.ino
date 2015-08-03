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
}

void loop() {
  
//  if (digitalRead(R_IN) == HIGH){
//    digitalWrite(R_OUT, HIGH);
//    Serial.println("R HIGH");
//  }else{
//   digitalWrite(R_OUT, LOW);
//  } 
//  
//  if (digitalRead(G_IN) == HIGH){
//    digitalWrite(G_OUT, HIGH);
//    Serial.println("G HIGH");
//  }else{
//   digitalWrite(G_OUT, LOW);
//  } 
//  
//  if (digitalRead(B_IN) == HIGH){
//    digitalWrite(B_OUT, HIGH);
//    Serial.println("B HIGH");
//  }else{
//   digitalWrite(B_OUT, LOW);
//  } 
  setColor(255, 0, 0);  // red
  delay(1000);
  setColor(0, 255, 0);  // green
  delay(1000);
  setColor(0, 0, 255);  // blue
  delay(1000);
  setColor(255, 255, 0);// yellow
  delay(1000);  
  setColor(80, 0, 80);  // purple
  delay(1000);
  setColor(0, 255, 255);// aqua
  delay(1000);
}

void setColor(int red, int green, int blue)
{
  analogWrite(R_OUT, red);
  analogWrite(G_OUT, green);
  analogWrite(B_OUT, blue);  
}
