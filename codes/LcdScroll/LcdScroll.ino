#include <LiquidCrystal.h>
#include <DebouncedInput.h>

LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

DebouncedInput nextButton(2, 1000);

char words[][30] = {"One  ", "Two  ", "Three", "Four ", "Five "};
int currWord = 0;
int numWords = 5;

void setup() {
  lcd.begin(16, 2);
}

void loop() {
  lcd.setCursor(0, 0);
  lcd.print(words[currWord]);
  lcd.setCursor(0, 1);
  lcd.print(words[(currWord + 1) % numWords]);

  nextButton.update();
  
  if (nextButton.stateHasChanged() && nextButton.getState()) {
    currWord = (currWord + 1) % numWords;
  }
}
