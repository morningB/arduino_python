int tiltPin = 2;

void setup() {
  pinMode(tiltPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(tiltPin) == HIGH) {
    Serial.println("tilt!");
  } else {
    Serial.println("not tilt!");
  }
  delay(1000);
}
