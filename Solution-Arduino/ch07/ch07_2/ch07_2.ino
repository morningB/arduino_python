int tiltPin = 2;
int ledPin1 = 13;
int ledPin2 = 11;

void setup() {
  pinMode(tiltPin, INPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int tiltState = digitalRead(tiltPin);
  if (tiltState == HIGH) {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);

  } else {
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, HIGH);
  }
  delay(10);
}
