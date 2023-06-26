from Arduino import Arduino
import time

servoPin = 9

board = Arduino("9600", port="COM3")
board.Servos.attach(servoPin)

while True:
    angle = 0
    while angle < 180:
        board.Servos.write(servoPin, angle)
        angle = angle + 1
        time.sleep(0.01)
    while angle > 0:
        board.Servos.write(servoPin, angle)
        angle = angle - 1
        time.sleep(0.01)
        

