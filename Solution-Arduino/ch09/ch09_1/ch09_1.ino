int cdsPin = 0;
int cdsValue = 0;

void setup() {  
  Serial.begin(9600);
}

void loop() {
  cdsValue = analogRead(cdsPin);

  if(cdsValue < 300){
    Serial.println("LOW");
  } else if(cdsValue < 700){
    Serial.println("MIDDLE");
  } else{
    Serial.println("HIGH");
  }  
  delay(10);
}
