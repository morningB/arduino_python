# 아두이노 보드로 조도 센서 제어하기

>  준비물 

![image](https://github.com/morningB/arduino_python/assets/114423035/4b07a0fc-70f0-4f28-b89f-92d5b6afa94d)

> 회로 구성

![image](https://github.com/morningB/arduino_python/assets/114423035/b042af9a-b794-4f03-8430-a5e5b1fb98c5)

![image](https://github.com/morningB/arduino_python/assets/114423035/287b586e-3728-4204-9670-68beecda9027)

- 저항과 조도 센서는 그림과 같이 연결해줍니다.
* 저항의 한 쪽 핀을 아두이노의 GND와 점퍼선으로 연결
- 저항과 조도 센서가 같이 연결 되있는 곳과 아두이도 보드의 아날로그 0과 연결
* 조도 센서의 다른 부분을 5V와 연결

> 코드 설명

![image](https://github.com/morningB/arduino_python/assets/114423035/ef246993-659e-4273-b34b-722bc928501d)
* setup()에서 시리얼 모니터를 사용하기 위해 통신 속도를 설정합니다. (통상9600을 사용)
- Loop()에서는 Serial.println으로 값을 출력합니다.
* analogRead(0)는 아날로그 0번 핀에 연결된 조도 센서의 신호를 읽어오라는 것 입니다.

> 출력

![image](https://github.com/morningB/arduino_python/assets/114423035/d88ed0bb-b64e-421a-98ab-0bdd97765260)


* 시리얼 모니터에 출력 되는 것을 볼 수 있습니다.
* 조도 센서에 빛을 가리면 값이 감소하는 모습입니다.

---

# 아두이노 보드로 LED 제어하기

> 준비물

![image](https://github.com/morningB/arduino_python/assets/114423035/00f32ec7-00bd-4c3e-8eee-b5090668bcef)

> 회로 구성

![image](https://github.com/morningB/arduino_python/assets/114423035/d085e594-a315-4339-a8f1-620be0c3d6de)

* 저항과 LED는 그림과 같이 연결해줍니다.(LED는 긴 쪽이 +,짧은 쪽이 -)
* 저항의 한 쪽 핀을 아두이노의 GND와 점퍼선으로 연결
* LED의 +를 아두이노의 13번 핀과 연결

> 코드 설명

![image](https://github.com/morningB/arduino_python/assets/114423035/f9eeef93-08c6-4e1c-9d94-246de59f82c5)

* setup()에서 시리얼 모니터를 사용하기 위해 통신 속도 설정 및 핀을 연결합니다.
* Loop()에서 Serial.available()이 만족한다면 시리얼 입력Serial.readString()을 받아 a를 입력하면 led가 켜지고, 다른 것을 입력하면 꺼집니다.

* Serial.available() : 시리얼 통신으로 데이터를 받으면 받은 데이터의 개수를 출력
* 입력 받은 데이터를 확인하고 싶으면 Serial.println(변수)으로 출력 값 확인





