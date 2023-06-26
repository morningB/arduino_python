int piezo = 0;
int ledPin = 11;
int piezoValue = 0;
int THRESHOLD = 300;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  piezoValue = analogRead(piezo);
  if (piezoValue < THRESHOLD) {
    analogWrite(ledPin, 50);
    delay(1000);
  } else if (piezoValue < 600) {
    analogWrite(ledPin, 150);
  } else {
    analogWrite(ledPin, 250);
  }
}
