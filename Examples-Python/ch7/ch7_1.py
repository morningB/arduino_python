from Arduino import Arduino
import time

tiltPin = 2
ledPin = 13

board = Arduino("9600", port="COM3")
board.pinMode(ledPin, "OUTPUT")
board.pinMode(tiltPin, "INPUT")

while True:
    tiltState = board.digitalRead(tiltPin)
    if tiltState:
        board.digitalWrite(ledPin, "HIGH")
        print "Tilt!!"
    else:
        board.digitalWrite(ledPin, "LOW")
    time.sleep(0.01)
        
