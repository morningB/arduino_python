int potPin1 = 0;
int potPin2 = 2;
int ledPin = 11;
int potValue1 = 0;
int potValue2 = 0;
int ms = 0;
int brightness = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  potValue1 = analogRead(potPin1);
  potValue2 = analogRead(potPin2);
  ms = map(potValue1, 0, 1023, 10, 1000);
  brightness = map(potValue2, 0, 1023, 0, 255);
  analogWrite(ledPin, brightness);
  delay(ms);
}
