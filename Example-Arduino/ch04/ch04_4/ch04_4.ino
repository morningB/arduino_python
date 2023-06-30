void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("CdS Value : ");
  Serial.println(analogRead(0));
  delay(100);
}
