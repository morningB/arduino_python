int potPin = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(potPin);
  int reverseValue = map(value, 0, 1023, 1023, 0);
  Serial.print("value: ");
  Serial.print(value);
  Serial.print(", reverseValue: ");
  Serial.println(reverseValue);
  delay(200);
}
