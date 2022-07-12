#include <Stepper.h>

#define IN1_PIN 8
#define IN2_PIN 9
#define IN3_PIN 10
#define IN4_PIN 11

#define SW_PIN 7
#define X_PIN A0
#define Y_PIN A1

Stepper motor(2048, IN4_PIN, IN2_PIN, IN3_PIN, IN1_PIN);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  motor.setSpeed(10);
  Serial.println("Speed : 10rpm");
  Serial.print("Enter steps:");

  pinMode(SW_PIN, INPUT_PULLUP);
  pinMode(X_PIN, INPUT);
  pinMode(Y_PIN, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x= analogRead(X_PIN);
  int z= digitalRead(SW_PIN);

  if(x<200){
    motor.step(-1);
  }
  else if(x>800){
    motor.step(1);
  }

}
