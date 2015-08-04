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
  
  if (digitalRead(R_IN) == LOW){
    digitalWrite(R_OUT, HIGH);
  }else{
   digitalWrite(R_OUT, LOW);
  } 
  
  if (digitalRead(G_IN) == LOW){
    digitalWrite(G_OUT, HIGH);
  }else{
   digitalWrite(G_OUT, LOW);
  } 
  
  if (digitalRead(B_IN) == LOW){
    digitalWrite(B_OUT, HIGH);
  }else{
   digitalWrite(B_OUT, LOW);
  } 
}

