int inputPin = 0;
int outputPin = 13;
int inputValue = 0;
int frequency = 0;
int duration = 0;

void setup() {
  pinMode(outputPin, OUTPUT);
}

void loop() {
  inputValue = analogRead(inputPin);
  frequency = map(inputValue, 0, 1023, 250, 550);
  duration = 500;
  tone(outputPin, frequency, duration);
  delay(500);
}
