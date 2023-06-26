from Arduino import Arduino
import time

servoPin = 9
cdsPin = 0

board = Arduino("9600", port="COM3")
board.Servos.attach(servoPin)

while True:
    value = board.analogRead(cdsPin)
    print "value: ", value

    if value < 200:
        board.Servos.write(servoPin, 0)
    elif value > 900:
        board.Servos.write(servoPin, 180)

    time.sleep(0.01)
        

