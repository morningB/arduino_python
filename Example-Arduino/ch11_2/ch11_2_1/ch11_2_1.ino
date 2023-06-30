int buzzerPin = 9;

void setup() {
}

void loop() {
  for (int i = 200; i <= 300; i = 1 + 10) {
    tone(buzzerPin, i, 250);
    delay(1000);
  }
}
