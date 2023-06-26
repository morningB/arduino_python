#include<Servo.h>

Servo myServo;
int servoPin = 9;
int tempPin = 0;
int tempValue = 0;
float voltage = 0.0;
float celsiusTemp = 0.0;

void setup() {
  myServo.attach(servoPin);
}

void loop() {
  tempValue = analogRead(tempPin);
  voltage = tempValue * 5000.0 / 1024.0;
  celsiusTemp = (voltage - 500.0) / 10.0;
  if (celsiusTemp > 25) {
    myServo.write(135);
  } else {
    myServo.write(45);
  }
  delay(1000);
}
