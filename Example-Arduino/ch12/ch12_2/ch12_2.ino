int piezo = 0;
int ledPin = 13;
int piezoValue = 0;
int THRESHOLD = 300;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  piezoValue = analogRead(piezo);
  if (piezoValue > THRESHOLD) {
    digitalWrite(ledPin, HIGH);
    delay(1000);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
