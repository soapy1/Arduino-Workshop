/*
Write a function that accepts an array and returns the sum of all the elements of the array.
*/
const int THINGS_SIZE = 6;
int things[THINGS_SIZE] = {1,1,2,3,5,8};

void setup() {
  
}

void loop() {
  // use the function to calculate the sum
  int sum = sumArray(things, THINGS_SIZE);
  // can see this in the serial monitor
  Serial.println("The sum is " + sum);
}

int sumArray(int a[], int a_size) {
  int sum = 0;
  // loop through the array
  for (int i=0; i<a_size; i++) {
    // add each element to the sum
    sum += a[i];
  }
  return sum;
}
