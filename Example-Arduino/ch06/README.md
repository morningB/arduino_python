# 푸쉬 버튼 제어하기

> 준비물

 ![image](https://github.com/morningB/arduino_python/assets/114423035/7b4d1012-ffbc-4c77-bd90-7f49efa1d2ac)

## 푸쉬 버튼이란?

  ![image](https://github.com/morningB/arduino_python/assets/114423035/57b798be-c03d-4d1f-bf6f-0e934c92bc32)

* 푸쉬 버튼은 전기 회로를 끊거나 연결할 수 있게 하는 물리적 장치입니다.
* 간편하게 버튼, 스위치라 생각하면 됩니다.
* A와 D, B와 D는 서로 연결되어 있습니다.

> 회로 구성

![image](https://github.com/morningB/arduino_python/assets/114423035/55423c89-20af-40f9-a457-1a047c417731)

1. 빵판에 버튼을 연결합니다.
2. 저항을 그림같이 연결하고 아두이노 보드에 GND와 연결합니다.
3. 저항이 연결된 버튼 아래쪽에 아두이노 보드의 5V와 연결합니다.
4. 버튼 오른쪽 상단핀에 아두이노 2번핀을 연결합니다.

> 코드 설명

![image](https://github.com/morningB/arduino_python/assets/114423035/8919abc5-6c7c-4746-966d-a3d5c9345991)


* setup() 함수에서 2번을 입력 핀으로 설정합니다.
* Loop()에서 버튼이 눌리면 digitalRead() HIGH 상태가 되므로 if문이 만족되어 시리얼 모니터에 PUSH!가 출력됩니다.


> 문제점 및 개선

* 이전 코드의 문제점은 바로 버튼을 계속 누르고 있으면 PUSH!가 계속 출력되는 점입니다.
* 코드를 수정하여 한번 누르면 한번 출력되도록 바꿔봤습니다.

* Boolean 자료형을 사용하여 버튼의 전류를 읽고 HIGH라면 PUSH ON, LOW라면 PUSH OFF 를 출력하도록 코딩하였습니다.

![image](https://github.com/morningB/arduino_python/assets/114423035/1aa8c8a6-d956-4f5c-ae74-6496443496f9)

---

# 푸쉬버튼으로 LED 제어하기

> 준비물

![image](https://github.com/morningB/arduino_python/assets/114423035/7738a2be-8593-40c9-8262-87dc9843b196)

> 회로 구성

![image](https://github.com/morningB/arduino_python/assets/114423035/e73d40d5-87f6-4f2a-8e06-c991a2c5f45b)

1. 아두이노 5V와 GND를 각 각 빵판 +,-에 연결합니다.
2. 버튼 상단에 저항과 아두이노 보드에 11번 핀을 연결합니다
3. 버튼 하단은 +로 연결시킵니다.
4. LED 의 – 부분은 빵판 –와 저항으로 연결 시킵니다.
5, LED의 +부분은 아두이노의 13번과 연결시킵니다. 



> 코드 설명

![image](https://github.com/morningB/arduino_python/assets/114423035/9f1b99e9-d187-4e8f-abf7-70f2b4f8263b)


* LED를 13번, 푸쉬 버튼을 11번으로 설정합니다.
* setup() 함수에서 13번을 입력 핀,11번을 출력 핀으로 설정합니다.
* Loop()에서 버튼의 상태를 buttonState로 지정하고 눌리면 led가 켜지고, 아니라면 꺼지게 설정합니다.


* buttonPin을 정수형으로 받아도 되는 이유는 HIGH가 1로 할당되고 LOW는 0으로 할당 되기에 가능합니다.




