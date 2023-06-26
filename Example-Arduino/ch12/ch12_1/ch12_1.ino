int piezo = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(analogRead(piezo));
  delay(100);
}
