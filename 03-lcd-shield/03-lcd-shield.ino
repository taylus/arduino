#include <LiquidCrystal.h>

enum button {
  NONE,
  RIGHT,
  UP,
  DOWN,
  LEFT,
  SELECT
};

// incoming values on pin 0 indicate which button was pressed
const int INPUT_PIN = 0;
const int RIGHT_THRESHOLD = 50;
const int UP_THRESHOLD = 250;
const int DOWN_THRESHOLD = 450;
const int LEFT_THRESHOLD = 650;
const int SELECT_THRESHOLD = 850;

button read_button() {
  int input = analogRead(INPUT_PIN);
  if (input < RIGHT_THRESHOLD) return RIGHT;
  if (input < UP_THRESHOLD) return UP;
  if (input < DOWN_THRESHOLD) return DOWN;
  if (input < LEFT_THRESHOLD) return LEFT;
  if (input < SELECT_THRESHOLD) return SELECT;
  return NONE;
}

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

void setup() {
  lcd.begin(16, 2);
  lcd.clear();
  lcd.print("Hello, world!");
}

void loop() {
  lcd.setCursor(0, 1);
  switch (read_button()) {
    case RIGHT:
      lcd.print("Pressed: Right  ");
      break;
    case UP:
      lcd.print("Pressed: Up     ");
      break;
    case DOWN:
      lcd.print("Pressed: Down   ");
      break;
    case LEFT:
      lcd.print("Pressed: Left   ");
      break;
    case SELECT:
      lcd.print("Pressed: Select ");
      break;
    default:
      lcd.print("Press a button. ");
  }
}
