
#define EN_PIN 11 
#define IN1_PIN 10 
#define IN2_PIN 9 
#define PUSH_PIN 5

boolean bRecerse =true;
int status=0;
int flag=1;

void setup()
{
 pinMode(PUSH_PIN, INPUT_PULLUP);
 pinMode(EN_PIN, OUTPUT);
 pinMode(IN1_PIN, OUTPUT);
 pinMode(IN2_PIN, OUTPUT);
}
void loop()
{
  if(digitalRead(PUSH_PIN)==HIGH){//LOW일시 상태변화가 누르자마자
    if(flag==0){
      flag=1;//깜빡임 막기
      status=(status+1)%4;
    }
  }
  else{
    flag=0;
  }

  switch(status){
    case 0:
     setMotor(0, bRecerse);
     break;
    case 1:
     setMotor(100, bRecerse);
     break;
    case 2:
     setMotor(150, bRecerse);
     break;
    case 3:
     setMotor(250, bRecerse);
     break;
  }
 
}
void setMotor(int nSpeed, boolean bReverse)
{
 analogWrite(EN_PIN, nSpeed);
 digitalWrite(IN1_PIN, !bReverse);
 digitalWrite(IN2_PIN, bReverse);
}
