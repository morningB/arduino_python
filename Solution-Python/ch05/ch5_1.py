from Arduino import Arduino
import time

led1 = 13
led2 = 12
led3 = 11

board = Arduino('9600')
board.pinMode(led1, "OUTPUT")
board.pinMode(led2, "OUTPUT")
board.pinMode(led3, "OUTPUT")

while True:
    board.digitalWrite(led1, "HIGH")
    time.sleep(1)
    board.digitalWrite(led1, "LOW")
    time.sleep(1)
    board.digitalWrite(led2, "HIGH")
    time.sleep(1)
    board.digitalWrite(led2, "LOW")
    time.sleep(1)
    board.digitalWrite(led3, "HIGH")
    time.sleep(1)
    board.digitalWrite(led3, "LOW")
    time.sleep(1)
