#include <FND.h>

FND fnd;
#define BUTTON_PIN 0
boolean status;
int flag=1;

void setup() {
  // put your setup code here, to run once:
 byte numDigits = 4;
 byte digitPins[] = {2, 5, 6, 13}; 
 byte segmentPins[] ={3, 7, 11, 9, 8, 4, 12, 10}; 
 
 fnd.begin( COMMON_ANODE, numDigits, digitPins, segmentPins);
 
 fnd.setBrightness(90);

 pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
 static unsigned long timer = millis();
 static int deciSeconds = 0;
  
 if(digitalRead(BUTTON_PIN)==HIGH){
    if(flag==0){
      flag=1;//깜빡임 막기
      status =!status;
    }
  } 
  else{
    flag=0;
  }
 
 if (millis() >= timer) {
 timer += 1000;
 if(status){
  deciSeconds++; 
  if (deciSeconds == 10000) deciSeconds=0;
  fnd.setNumber(deciSeconds, 0);
  }
 }
 fnd.refreshDisplay(); 

}
