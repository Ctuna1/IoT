void setup()
{
  pinMode(A0, INPUT); // 빛의 밝기를 받아 전달해야 하기 때문에 조도 센서 핀을 input으로 설정 
  Serial.begin(9600); //시리얼 통신 설정
  pinMode(12, OUTPUT); //나머지는 출력을 위해 output으로 설정
  pinMode(3, OUTPUT);
}

void loop()
{
  
  if (analogRead(A0) < 500) { //조도 센서 수치가 500미만일 때 12번 핀에 있는 LED on
    digitalWrite(12, HIGH);
    tone(3, ‘G’, 1000); // 톤 함수로 3번 핀인 부저를 g음계로 1000밀리초 동안 소리나게 함
  }
  else {
    digitalWrite(12, LOW); //500 이상인 경우에 LED off
  }
 
  delay(10); 
}
