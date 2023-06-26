int ledPin = 11;
int brightness = 0;
int increment = 0;

void setup() {
}

void loop() {
  if (brightness >= 255) {
    increment = -1;
  } else if (brightness <= 0) {
    increment = 1;
  }
  brightness = brightness + increment;
  analogWrite(ledPin, brightness);
  delay(50);
}
