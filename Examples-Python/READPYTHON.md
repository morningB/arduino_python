#  아두이노와 파이썬 연동하기

1. 먼저 아두이노 깃허브에서 zip다운로드
https://github.com/mkals/Arduino-Python3-Command-API
![image](https://github.com/morningB/arduino_python/assets/114423035/1ea2d801-e911-4785-9fe9-c5f3948ea159)


2. 압축 해제 후 아래 이미지와 같이하고 아두이노 보드에 업로드 하기
![image](https://github.com/morningB/arduino_python/assets/114423035/61990e4c-c4e3-4d87-91cb-95f9b8979217)
![image](https://github.com/morningB/arduino_python/assets/114423035/00e9114a-7bdc-4c68-b2b9-1b1f7ce20420)

3. 아두이노 보드에 간단하게 연결 후 코드로 확인
![image](https://github.com/morningB/arduino_python/assets/114423035/cf8359a8-77fa-4d92-a51c-bc3d69618ff7)

```python
from Arduino import Arduino
import time

board = Arduino('115200')
a= 13
board.pinMode(a, "OUTPUT")

while True:
    board.digitalWrite(a, "LOW")
    time.sleep(1)
    board.digitalWrite(a, "HIGH")
    time.sleep(1)

    
```

4. 잘 실행 된다면 끝!
