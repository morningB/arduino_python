from Arduino import Arduino
import time

tiltPin1 = 2
tiltPin2 = 4
ledPin = 13

board = Arduino("9600", port="COM3")
board.pinMode(ledPin, "OUTPUT")
board.pinMode(tiltPin1, "INPUT")
board.pinMode(tiltPin2, "INPUT")

while True:
    tiltState1 = board.digitalRead(tiltPin1)
    tiltState2 = board.digitalRead(tiltPin2)
    if tiltState1 and tiltState2:
        board.digitalWrite(ledPin, "HIGH")        
    else:
        board.digitalWrite(ledPin, "LOW")
    time.sleep(0.01)
        
