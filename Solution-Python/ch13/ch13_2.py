from Arduino import Arduino
import time

tempPin = 0
ledPin = 13

board = Arduino("9600", port="COM3")
board.pinMode(ledPin, "OUTPUT")

while True:
    value = board.analogRead(tempPin)    

    millivolts = (value / 1024.0) * 5000.0
    celsius = (millivolts - 500.0) / 10.0

    if celsius < 25:        
        s = 0.1
    else:
        s = 0.01
        
    brightness = 0
    while brightness < 255:
        board.analogWrite(ledPin, brightness)
        brightness = brightness + 1
        time.sleep(s)
    while brightness > 0:
        board.analogWrite(ledPin, brightness)
        brightness = brightness - 1
        time.sleep(s)

    
    
