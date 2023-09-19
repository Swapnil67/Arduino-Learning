#include<Servo.h>
int servoPin = 9;
int servoPos=0;

// Servo object
Servo myServo;

void setup() {
  Serial.begin(9600);
  myServo.attach(servoPin);
}

void loop() {
  Serial.println("What angle for the servo? ");
  while(Serial.available() == 0) {
  }
  servoPos = Serial.parseInt();
  myServo.write(servoPos);
}
