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
  angle = map(cdsValue, 0, 1023, 0, 180);
  myServo.write(angle);
  delay(100);
}
