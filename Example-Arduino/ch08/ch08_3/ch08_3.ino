int buttonPin = 3;
int ledPin = 11;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  if (digitalRead(buttonPin) == HIGH) {
    for (int i = 0; i <= 255; i = i + 5) {
      analogWrite(ledPin, i);
      delay(10);
    }
  } else {
    analogWrite(ledPin, 0);
  }
}
