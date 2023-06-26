# 파이썬 부분
import serial
import time

ser = serial.Serial('COM3', 9600)  # 포트번호를 사용자 컴퓨터의 포트번호에 맞게 변경해주세요.
time.sleep(2)  # 아두이노 연결 후 시간 지연 (권장사항)

try:
    while True:
        ser.write(b'LED_ON')  # LED 켜기
        time.sleep(1)  # 1초 대기
        ser.write(b'LED_OFF')  # LED 끄기
        time.sleep(1)  # 1초 대기
                
except KeyboardInterrupt:  # 키보드 인터럽트 처리 (Ctrl + C)
    ser.close()


  
