#include <Servo.h>

Servo rightServo;
Servo leftServo;

void goRight(){
  leftServo.writeMicroseconds(1700);
  rightServo.writeMicroseconds(1700);
}

void goLeft(){
  leftServo.writeMicroseconds(1300);
  rightServo.writeMicroseconds(1300);
}

void goForward(){
  leftServo.writeMicroseconds(1700);
  rightServo.writeMicroseconds(1300);
}

void goBackward(){
  leftServo.writeMicroseconds(1300);
  rightServo.writeMicroseconds(1700);
}

void stopAll(){
  leftServo.writeMicroseconds(1500);
  rightServo.writeMicroseconds(1500);
}

void setup() {
  // put your setup code here, to run once:
  leftServo.attach(13);
  rightServo.attach(12);
  
  goForward();
  delay(1000);
  goBackward();
  delay(1000);
  goRight();
  delay(1000);
  goLeft();
  delay(1000);
  stopAll();
}

void loop() {
  // put your main code here, to run repeatedly:
  
}


