int buzzerPin = 9;
int potPin = 3;
int frequencies[] = {262, 294, 330, 349, 392, 440, 494, 523};
int potValue = 0;

void setup() {
}

void loop() {
  potValue = analogRead(potPin);  
  for (int i = 0; i < 8; i++) {
    tone(buzzerPin, frequencies[i], 250);
    delay(potValue);
  }
}
