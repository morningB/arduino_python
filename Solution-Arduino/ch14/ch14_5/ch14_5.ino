#include <Servo.h>

Servo myServo;
int servoPin = 9;
int potPin = 0;
int potValue = 0;
int angle = 0;

void setup() {
  myServo.attach(servoPin);
}

void loop() {
  potValue = analogRead(potPin);
  for (angle = 0; angle < 180; angle++) {
    myServo.write(angle);
  }
  delay(potValue);
  for (angle = 180; angle > 0; angle--) {
    myServo.write(angle);
  }
  delay(potValue);
}
