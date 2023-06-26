void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
}
void loop() {
  if (Serial.available()) {
    String input = Serial.readString();
    if (input == "a") {
      digitalWrite(13, HIGH);
      digitalWrite(11, LOW);
    }
    if (input == "b") {
      digitalWrite(13, LOW);
      digitalWrite(11, HIGH);
    }    
  }
}
