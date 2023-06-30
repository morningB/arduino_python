int led1 = 4;
int led2 = 3;
int led3 = 2;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  blinkLED(led1, 1000);
  blinkLED(led2, 1000);
  blinkLED(led3, 1000);
}

void blinkLED(int pin, int ms) {
  digitalWrite(pin, HIGH);
  delay(ms);
  digitalWrite(pin, LOW);
  delay(ms);
}
