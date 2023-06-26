int buzzerPin = 9;
int frequencies[] = {262, 294, 330, 349, 392, 440, 494, 523};

void setup() {
}

void loop() {
  for (int i = 0; i < 8; i++) {
    tone(buzzerPin, frequencies[i], 250);
    delay(1000);
  }
}
