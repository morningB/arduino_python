int tempPin = 0;
void setup() {
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(tempPin);
  Serial.print("value: ");
  Serial.print(value);
  float millivolts = (value / 1024.0) * 5000.0;
  float celsius = (millivolts - 500.0) / 10.0;
  Serial.print(" celsius: ");
  Serial.println(celsius);
  delay(1000);
}
