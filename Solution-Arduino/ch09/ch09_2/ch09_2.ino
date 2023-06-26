int cdsPin = 0;
int ledPin = 11;
int cdsValue = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  cdsValue = analogRead(cdsPin);
  if(cdsValue < 500){
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
  delay(10);
}
