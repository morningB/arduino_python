from Arduino import Arduino
import time

ledPin1 = 13
ledPin2 = 11
buttonPin = 3

board = Arduino("9600", port="COM3")
board.pinMode(ledPin1, "OUTPUT")
board.pinMode(ledPin2, "OUTPUT")
board.pinMode(buttonPin, "INPUT")

while True:
    buttonState = board.digitalRead(buttonPin)
    if buttonState:
        board.digitalWrite(ledPin1, "HIGH")
        board.digitalWrite(ledPin2, "LOW")        
    else:
        board.digitalWrite(ledPin1, "LOW")
        board.digitalWrite(ledPin2, "HIGH")
    time.sleep(0.01)
