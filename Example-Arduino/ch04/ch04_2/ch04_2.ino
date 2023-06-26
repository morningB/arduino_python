void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}
void loop() {
  if (Serial.available()) {
    String input = Serial.readString();
    if (input == "a") {
      digitalWrite(13, HIGH);
    }
    if (input == "d") {
      digitalWrite(13, LOW);
    }
  }
}
