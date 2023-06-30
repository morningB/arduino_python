#include <Servo.h>

Servo myServo;
int servoPin = 9;
int cdsPin = 0;
int cdsValue = 0;
int angle = 0;

void setup() {
  myServo.attach(servoPin);
}

void loop() {
  cdsValue = analogRead(cdsPin);
  if (cdsValue < 200) {
    myServo.write(0);
  } else if (cdsValue > 900) {
    myServo.write(180);
  } else {
  }
  delay(100);
}
