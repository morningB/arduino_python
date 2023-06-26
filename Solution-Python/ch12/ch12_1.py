from Arduino import Arduino
import time

piezo = 0
threshold = 500

board = Arduino("9600", port="COM3")

while True:
    piezoValue = board.analogRead(piezo)
    if piezoValue > threshold:
        print "knock!"
        time.sleep(1)
    
