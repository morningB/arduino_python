int buzzerPin = 9;
int frequencies[] = {330, 294, 262, 294, 300, 300, 300,
                     294, 294, 294,
                     330, 330, 330,
                     330, 294, 262, 294, 300, 300, 300,
                     294, 294, 330, 294, 262};

void setup() {
}

void loop() {
  for (int i = 0; i < sizeof(frequencies); i++) {
    tone(buzzerPin, frequencies[i], 250);
    delay(1000);
  }
}
