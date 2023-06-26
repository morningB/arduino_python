int piezo = 0;
int buzzerPin = 8;
int piezoValue = 0;
int THRESHOLD = 300;

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  piezoValue = analogRead(piezo);
  if (piezoValue > THRESHOLD) {
    tone(buzzerPin, 392);
  } else {
    noTone(buzzerPin);
  }
}
