#include <Servo.h>

Servo myServo;
int buttonPin = 6;
int servoPin = 11;
int angle = 0;
int preAngle = 0;
int buttonState = 0;

void setup() {
  pinMode(buttonPin, INPUT);
  myServo.attach(servoPin);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    for (angle = preAngle; angle <= 180; angle++) {
      myServo.write(angle);
      delay(15);
    }
  }
  preAngle = angle;
}
