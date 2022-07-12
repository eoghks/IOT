#include <SoftwareSerial.h>

#define RXD_PIN 2
#define TXD_PIN 3
#define LED_RED_PIN 7

SoftwareSerial bt(RXD_PIN, TXD_PIN);

String rxData= "";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // 디버깅 용
  bt.begin(9600); // BT통신 용
  pinMode(LED_RED_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(bt.available()>0)
  {
    rxData = bt.readString();
    if(rxData.startsWith("@") && rxData.endsWith("#"))
    controlWiFiData(rxData);
  }
}

void controlWiFiData(String rxData){
  Serial.print("RX <=== ");
  Serial.println(rxData);
  if( rxData.indexOf("RED,1") >=0 ){
    digitalWrite(LED_RED_PIN, HIGH);
  }else if( rxData.indexOf("RED,0") >=0 ){
    digitalWrite(LED_RED_PIN, LOW);
  }
}
