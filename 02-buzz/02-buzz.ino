int BUZZER = 6;
int LED_RED = 5;
int LED_GREEN = 4;
int LED_BLUE = 3;

void setup() {
  pinMode(BUZZER, OUTPUT);
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);
  pinMode(LED_BLUE, OUTPUT);
}

void blink(int led, int delayMs = 250) {
  digitalWrite(led, HIGH);
  delay(delayMs);
  digitalWrite(led, LOW);
  delay(delayMs);
}

void loop() {
  tone(BUZZER, 1000);
  blink(LED_RED);

  tone(BUZZER, 1500);
  blink(LED_GREEN);

  tone(BUZZER, 2000);
  blink(LED_BLUE);
}
