#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup() {
  lcd.begin(16, 2);
  lcd.print("My Name!");
  lcd.cursor(0, 1);
}

void loop() {
  lcd.print(millis() / 1000);
}
