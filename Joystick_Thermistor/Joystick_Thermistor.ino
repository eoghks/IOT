#include <Thermistor.h>

Thermistor temp(A5);
#define EN_PIN 11
#define IN1_PIN 10
#define IN2_PIN 9
#define SW_PIN 7
#define X_PIN A0
#define Y_PIN A1

boolean bReverse =false;
 
void setup() {
  // put your setup code here, to run once:
  pinMode(EN_PIN, OUTPUT);
  pinMode(IN1_PIN, OUTPUT);
  pinMode(IN2_PIN, OUTPUT);
  pinMode(SW_PIN, INPUT_PULLUP);
  pinMode(X_PIN, INPUT);
  pinMode(Y_PIN, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int temper=temp.getTemp();
  int x= analogRead(X_PIN);
  int z= digitalRead(SW_PIN);
  int dx=map(x,0,1023, 0, 255);
  if(temp>=30){
    if(z){
      setMotor(dx, bReverse);

   }
  }
 
}

void setMotor(int nSpeed, boolean bReverse){
  analogWrite(EN_PIN, nSpeed);
  digitalWrite(IN1_PIN, !bReverse);
  digitalWrite(IN2_PIN, bReverse);
}
 
