int tiltPin = 2;
int ledPin = 13;

void setup() {  
  pinMode(tiltPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int tiltState = digitalRead(tiltPin);
  if (tiltState == HIGH) {
    digitalWrite(ledPin, HIGH);
    Serial.println("tilt!");
  } else {
    digitalWrite(ledPin, LOW);
    Serial.println("not tilt!");
  }
  delay(10);
}
