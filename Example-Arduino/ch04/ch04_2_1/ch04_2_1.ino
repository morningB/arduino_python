void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}
void loop() {
  if (Serial.available()) {
    String input = Serial.readString();
    if (input == "a") {
      Serial.println("a");
      digitalWrite(13, HIGH);
    }
    if (input == "d") {
      Serial.println("d");
      digitalWrite(13, LOW);
    }
  }
}
