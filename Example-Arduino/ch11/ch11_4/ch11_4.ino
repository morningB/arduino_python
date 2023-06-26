int inputPin = 11;
int outputPin = 13;
int melody[] = {262, 294, 330, 349, 392, 440, 494, 523};

void setup() {
  pinMode(inputPin, INPUT);
  pinMode(outputPin, OUTPUT);
}

void loop() {
  int inputState = digitalRead(inputPin);
  if (inputState == HIGH) {
    for (int i = 0; i < 8; i++) {
      tone(outputPin, melody[i]);
      delay(50);
    }
  } else {
    noTone(outputPin);
  }
}
