int buzzerPin = 8;
int tempPin = 0;
int tempValue = 0;
float voltage = 0;
float celsiusTemp = 0;

void setup() {
  pinMode(buzzerPin, OUTPUT);  
}

void loop() {
  tempValue = analogRead(tempPin);
  voltage = tempValue * 5000.0 / 1024.0;
  celsiusTemp = (voltage - 500) / 10.0;
  tone(buzzerPin, celsiusTemp);
  delay(1000);
}
