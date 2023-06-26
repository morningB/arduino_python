void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  blink2(13);
}

void blink2(int pin) {
  digitalWrite(pin, HIGH);
  delay(1000);
  digitalWrite(pin, LOW);
  delay(1000);
}
