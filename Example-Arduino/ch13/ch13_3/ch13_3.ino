int buzzerPin = 13;
int tempPin = 0;
int tempValue = 0;
float voltage = 0;
float celsiusTemp = 0;
int THRESHOLD = 25;

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  tempValue = analogRead(tempPin);
  voltage = tempValue * 5000.0 / 1024.0;
  celsiusTemp = (voltage - 500) / 10.0;
  if (celsiusTemp > THRESHOLD) {
    tone(buzzerPin, 294);
  } else {
    noTone(buzzerPin);
  }
  delay(1000);
}
