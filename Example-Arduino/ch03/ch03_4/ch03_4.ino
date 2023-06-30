void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  blink3(13, 500);
}

void blink3(int pin, int ms) {
  digitalWrite(pin, HIGH);
  delay(ms);
  digitalWrite(pin, LOW);
  delay(ms);
}
