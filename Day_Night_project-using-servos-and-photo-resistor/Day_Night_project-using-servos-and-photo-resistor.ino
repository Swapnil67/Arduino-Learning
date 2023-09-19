#include<Servo.h>
int lightPin = A0;
int lightVal;
int servoPin = 9;
int servoPos=0;
int dv = 250;
int angle;

// Servo object
Servo myServo;

void setup() {
  Serial.begin(9600);
  pinMode(lightPin, INPUT);
  pinMode(lightPin, OUTPUT);
  myServo.attach(servoPin);
}

void loop() {
  lightVal = analogRead(lightPin);
  Serial.println(lightVal);
  delay(dv);
  // angle = (-18./45.)*(lightVal) + (18.*450./45.);
  angle = (-18./10.)*(lightVal) + (18.*100./10.);
  Serial.print("angle ");
  Serial.println(angle);
  myServo.write(angle);
}
