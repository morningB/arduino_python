int inputPin = 11;
int outputPin = 13;

void setup() {
  pinMode(inputPin, INPUT);
  pinMode(outputPin, OUTPUT);
}

void loop() {
  int inputState = digitalRead(inputPin);
  if (inputState == HIGH) {
    tone(outputPin, 294);
  } else {
    noTone(outputPin);
  }
}
