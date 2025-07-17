
#include <Servo.h> //incluye la libreria de servo
Servo miServo;
int rojo = 2;
int naranja = 3;
int verde = 4;

void setup() {
  miServo.attach(9);
  pinMode(rojo, OUTPUT); //rojo 
  pinMode(naranja, OUTPUT); //naranja
  pinMode(verde, OUTPUT); //verde
  
}

void loop() {
  digitalWrite(verde, LOW);
  digitalWrite(rojo, HIGH);
  miServo.write(0);
  delay(2000);
  digitalWrite(rojo, LOW);
  digitalWrite(naranja, HIGH);
  delay(2000);
  digitalWrite(naranja, LOW);
  miServo.write(180);
  digitalWrite(verde, HIGH);
  delay(2000);

}
  