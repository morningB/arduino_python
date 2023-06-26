int redPin = 13;
int greenPin = 11;
int cdsPin = 0;
int cdsValue = 0;

void setup() {
  pinMode(greenPin, OUTPUT);
  pinMode(redPin, OUTPUT);
}

void loop() {
  cdsValue = analogRead(cdsPin);
  if (cdsValue < 600) {
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
  } else {
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, HIGH);
  }
}
