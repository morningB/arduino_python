#include <Servo.h>

Servo myServo;
int tiltPin = 7;
int servoPin = 9;
int tiltState = 0;

void setup() {
  pinMode(tiltPin, INPUT);
  myServo.attach(servoPin);
}

void loop() {
  tiltState = digitalRead(tiltPin);
  if (tiltState == HIGH) {
    myServo.write(45);
  } else {
    myServo.write(135);
  }
}
