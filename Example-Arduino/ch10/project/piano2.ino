const int passiveB = 10;
const int VRegistor = A1;
int bt[7] = {2,3,4,5,6,7,8};//도레미파솔라시 버튼
int melody[7] = {262, 294, 330, 349, 393, 440, 494};//도레미파솔라시 음계
int amp =0;//옥타브조절

void setup() {
  // put your setup code here, to run once:

  for(int i=0; i<7; i++){
    pinMode(bt[i], INPUT);  
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  if(analogRead(VRegistor) <= 256){
    amp = 0.5;
  }
  else if(analogRead(VRegistor) <= 512){
    amp = 1;
  }
  else if(analogRead(VRegistor) <= 768){
    amp = 2;
  }
  else{
    amp = 4;
  }
  if(digitalRead(bt[0]) == HIGH){
    tone(passiveB, melody[0]*amp);
  }
  else if(digitalRead(bt[1]) == HIGH){
    tone(passiveB, melody[1]*amp);
  }
  else if(digitalRead(bt[2]) == HIGH){
    tone(passiveB, melody[2]*amp);
  }
  else if(digitalRead(bt[3]) == HIGH){
    tone(passiveB, melody[3]*amp);
  }
  else if(digitalRead(bt[4]) == HIGH){
    tone(passiveB, melody[4]*amp);
  }
  else if(digitalRead(bt[5]) == HIGH){
    tone(passiveB, melody[5]*amp);
  }
  else if(digitalRead(bt[6]) == HIGH){
    tone(passiveB, melody[6]*amp);
  }
  else{
    noTone(passiveB);
  }
}
