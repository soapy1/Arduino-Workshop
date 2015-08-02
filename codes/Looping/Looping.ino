const int THINGS_SIZE = 6;
int things[THINGS_SIZE] = {1,1,2,3,5,8};

void setup() {
   
}

void loop() {
  // You can see the output of this by opening up the serial monitor
  
  Serial.println("Looping with for");
  for (int i=0; i<THINGS_SIZE; i++) {
    Serial.println(i); 
  }
  
  Serial.println("Looping with while");
  int j = 0;
  while (j<THINGS_SIZE) {
    Serial.println(j);
    j++;
  }
  
  Serial.println("Looping with do-while");
  int k = 0;
  do {
    Serial.println(k);
    k++;
  } while (k<THINGS_SIZE);
}
