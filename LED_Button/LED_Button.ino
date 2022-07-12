#define PUSH_PIN 5
#define LED_PIN 8

boolean status;
int flag=1;

void setup() {
  // put your setup code here, to run once:
  pinMode(PUSH_PIN, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(PUSH_PIN)==HIGH){//LOW일시 상태변화가 누르자마자
    if(flag==0){
      flag=1;//깜빡임 막기
      status =!status;
    }
  }
  else{
    flag=0;
  }

 Serial.println(status);
 
  digitalWrite(LED_PIN, status);
  delay(10);
}
