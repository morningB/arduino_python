int piezo = 0;
int buzzerPin = 8;
int piezoValue = 0;
int THRESHOLD = 300;
int knock = 0;

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  piezoValue = analogRead(piezo);
  if (piezoValue > THRESHOLD) {
    if (knock < 3) {
      noTone(buzzerPin);
      knock++;
    } else {
      tone(buzzerPin, 392);
      knock = 0;
    }
  }
  delay(500);
}
