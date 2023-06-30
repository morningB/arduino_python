// 아두이노 코드

const int ledPin = 13; // LED 핀 번호

void setup() {
  pinMode(ledPin, OUTPUT); // LED 핀을 출력 모드로 설정
  Serial.begin(9600); // 시리얼 통신 시작 (포트번호: 9600)
}

void loop() {
  if (Serial.available() > 0) { // 만약 시리얼 통신에서 데이터를 받았을 경우,
    String cmd = Serial.readString(); // 데이터 읽기

    if (cmd.startsWith("LED_ON")) {
      digitalWrite(ledPin, HIGH); // "LED_ON" 명령을 받으면 LED 켜기
    }
    else if (cmd.startsWith("LED_OFF")) {
      digitalWrite(ledPin, LOW); // "LED_OFF" 명령을 받으면 LED 끄기
    }
  }
}