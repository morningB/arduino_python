int ledPin1 = 13;
int ledPin2 = 11;
int tempPin = 0;
int tempValue = 0;
float voltage = 0;
float celsiusTemp = 0;
int THRESHOLD = 25;

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  tempValue = analogRead(tempPin);
  voltage = tempValue * 5000.0 / 1024.0;
  celsiusTemp = (voltage - 500) / 10.0;
  if (celsiusTemp > THRESHOLD) {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
  } else {
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, HIGH);
  }
  delay(1000);
}
