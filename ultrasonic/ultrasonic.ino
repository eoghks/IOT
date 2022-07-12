#include <Ultrasonic.h>

#define TRIGGER_PIN 12
#define ECHO_PIN 13

Ultrasonic ultra;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  ultra.begin(TRIGGER_PIN , ECHO_PIN);
}

void loop() {
  // put your main code here, to run repeatedly:
  int nCM =ultra.ReadDistanceCentimeter();
  int nInch=ultra.ReadDistanceInche();

  Serial.print("Distance : ");
  Serial.print(nCM);
  Serial.print("cm ||");
  Serial.print(nInch);
  Serial.println("inch");
  delay(100);
}
