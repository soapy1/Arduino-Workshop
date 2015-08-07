#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup() {
  lcd.begin(16, 2);
  lcd.print("My Name!");
}

void loop() {
  lcd.setCursor(0, 1);
  lcd.print(millis() / 1000);
  lcd.print(" seconds");
}
