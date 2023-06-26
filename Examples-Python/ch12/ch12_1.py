from Arduino import Arduino
import time

piezo = 0
ledPin = 13
threshold = 300

board = Arduino("9600", port="COM3")
board.pinMode(ledPin, "OUTPUT")

while True:
    piezoValue = board.analogRead(piezo)
    if piezoValue > threshold:
        board.digitalWrite(ledPin, "HIGH")
        time.sleep(1)
    else:
        board.digitalWrite(ledPin, "LOW")
