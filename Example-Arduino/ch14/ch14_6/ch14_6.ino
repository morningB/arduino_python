#include <Servo.h>

Servo myServo;
int servoPin = 9;
int potPin = 0;
int potValue = 0;
float angle = 0.0;

void setup() {
  myServo.attach(servoPin);
}

void loop() {
  potValue = analogRead(potPin);
  angle = potValue / 5.7;
  myServo.write(angle);
  delay(100);
}
