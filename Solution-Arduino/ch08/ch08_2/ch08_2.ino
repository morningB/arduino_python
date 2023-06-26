int ledPin = 11;

void setup() {
}

void loop() {
  for (int brightness = 0; brightness <= 255; brightness=brightness+5) {
    analogWrite(ledPin, brightness);
    delay(10);
  }
  for (int brightness = 255; brightness >= 0; brightness=brightness-5) {
    analogWrite(ledPin, brightness);
    delay(10);
  }
}
