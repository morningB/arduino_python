int tiltPin = 3;
int ledPin = 11;

void setup() {
  pinMode(tiltPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  if (digitalRead(tiltPin) == HIGH) {
    for (int i = 0; i <= 255; i++) {
      analogWrite(ledPin, i);
      delay(10);
    }
  } else {
    for (int i = 255; i >= 0; i--) {
      analogWrite(ledPin, i);
      delay(10);
    }
  }
}
