#include <IR.h>

#define IR_PIN 11
#define LED_PIN 2
#define LED_PIN1 6
#define LED_PIN2 9
#define LED_PIN3 10

boolean onOffState =false;

boolean redLight =false;
boolean blueLight =false;
boolean greenLight =false;

int bright = 105;

IRrecv irrecv(IR_PIN);
decode_results decResult;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
  pinMode(LED_PIN1, OUTPUT);
  pinMode(LED_PIN2, OUTPUT);
  pinMode(LED_PIN3, OUTPUT);
  irrecv.enableIRIn();
}

void loop() {
  // put your main code here, to run repeatedly:
  if(irrecv.decode(&decResult)==true){
    Serial.println(decResult.value, HEX);

    if(decResult.value== 0xFFC23D){
        if(!onOffState){
          digitalWrite(LED_PIN, HIGH);
          if(redLight)
           analogWrite(LED_PIN1, bright);
          if(blueLight)
           analogWrite(LED_PIN2, bright);
          if(greenLight)
           analogWrite(LED_PIN3, bright);
          }
        else{
          digitalWrite(LED_PIN, LOW);
          digitalWrite(LED_PIN1, LOW);
          digitalWrite(LED_PIN2, LOW);
          digitalWrite(LED_PIN3, LOW);
        }
        onOffState = !onOffState;
    }
    
    if(onOffState){
     /*1번*/
     if(decResult.value==0xFF30CF){
      if(redLight)
        digitalWrite(LED_PIN1, LOW);
      else 
        analogWrite(LED_PIN1, bright);
      redLight= !redLight;
     }
    /*2번*/
    if(decResult.value==0xFF18E7){
      if(blueLight)
        digitalWrite(LED_PIN2, LOW);
      else 
        analogWrite(LED_PIN2, bright);
      blueLight= !blueLight;
     }
     /*3번*/
    if(decResult.value==0xFF7A85){
      if(greenLight)
        digitalWrite(LED_PIN3, LOW);
      else 
        analogWrite(LED_PIN3, bright);
      greenLight= !greenLight;
     }
     /*4번*/
    if(decResult.value==0xFF10EF){
      redLight=true;
      blueLight=true;
      greenLight=true;

      analogWrite(LED_PIN1, bright);
      analogWrite(LED_PIN2, bright);
      analogWrite(LED_PIN3, bright);
    }
    /*5번*/
    if(decResult.value==0xFF38C7){
      redLight=false;
      blueLight=false;
      greenLight=false;

      digitalWrite(LED_PIN1, LOW);
      digitalWrite(LED_PIN2, LOW);
      digitalWrite(LED_PIN3, LOW);
    }
    /*6번*/
    if(decResult.value==0xFF5AA5){
      redLight=false;
      blueLight=false;
      greenLight=false;

      digitalWrite(LED_PIN1, LOW);
      digitalWrite(LED_PIN2, LOW);
      digitalWrite(LED_PIN3, LOW);
      delay(1000);

      analogWrite(LED_PIN1, bright);
      delay(100);
      digitalWrite(LED_PIN1, LOW);
      delay(100);
      analogWrite(LED_PIN2, bright);
      delay(100);
      digitalWrite(LED_PIN2, LOW);
      delay(100);
      analogWrite(LED_PIN3, bright);
      delay(100);
      digitalWrite(LED_PIN3, LOW);
    }
    /*-*/
    if(decResult.value==0xFFE01F){
      if(bright>=50)
        bright= bright -50;
      if(redLight)
        analogWrite(LED_PIN1, bright);
      if(blueLight)
        analogWrite(LED_PIN2, bright);
      if(greenLight)
        analogWrite(LED_PIN3, bright);
    }
    /*+*/
    if(decResult.value==0xFFA857){
      if(bright<=200)
        bright= bright +50;
      if(redLight)
        analogWrite(LED_PIN1, bright);
      if(blueLight)
        analogWrite(LED_PIN2, bright);
      if(greenLight)
        analogWrite(LED_PIN3, bright);
    }
    
    
    
    
    
    
    
    
    
    
    }





    irrecv.resume();
  }
}
