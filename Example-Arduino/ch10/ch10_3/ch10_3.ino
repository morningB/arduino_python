int potPin = 0;
int ledPin = 13;
int potValue = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  potValue = analogRead(potPin);
  digitalWrite(ledPin, HIGH);
  delay(potValue);
  digitalWrite(ledPin, LOW);
  delay(potValue);
}
