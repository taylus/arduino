int LED_RED = 5;
int LED_GREEN = 4;
int LED_BLUE = 3;

void setup() {
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
  blink(LED_RED);
  blink(LED_GREEN);
  blink(LED_BLUE);
}
