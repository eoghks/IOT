#define LIGHT_PIN A2
#define POTEN_PIN A0
#define LED_PIN1 11
#define LED_PIN2 10 
#define LED_PIN3 9 
#define LED_PIN4 6 
#define LED_PIN5 5 

void setup() {
  // put your setup code here, to run once:
  pinMode(LIGHT_PIN, INPUT);
  pinMode(LED_PIN1, OUTPUT);
  pinMode(LED_PIN2, OUTPUT);
  pinMode(LED_PIN3, OUTPUT);
  pinMode(LED_PIN4, OUTPUT);
  pinMode(LED_PIN5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int light=analogRead(LIGHT_PIN);
  int readVal=analogRead(POTEN_PIN);
  int selectLED = -1;
  int i=0;
  
  if(light<530)
    selectLED = 11;
   else if(light<610)
    selectLED = 10;
   else if(light<690)
    selectLED = 9;
   else if(light<770)
    selectLED = 6;
   else
    selectLED = 5;
  readVal=map(readVal,0,1023,0,255);

  for(i=5; i<=11; i++){
    if(i!=7 || i!=8){
      if(selectLED != i){
        digitalWrite(i, LOW);
      }
      else {
        analogWrite(i, readVal);
      }
    }
  }
  

}
