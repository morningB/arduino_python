from Arduino import Arduino
import time

piezo = 0
ledPin = 11
brightness = 0
threshold = 300

board = Arduino("9600", port="COM3")
board.pinMode(ledPin, "OUTPUT")

while True:
    piezoValue = board.analogRead(piezo)
    brightness = piezoValue / 4
    if piezoValue > threshold:
        board.analogWrite(ledPin, brightness)
        time.sleep(0.01)
    else:
        board.analogWrite(ledPin, 0)
