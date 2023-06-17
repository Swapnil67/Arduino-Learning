int f1Pin = 11;
int f2Pin = 10;
int f3Pin = 9;
int f4Pin = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(f1Pin, OUTPUT);
  pinMode(f2Pin, OUTPUT);
  pinMode(f3Pin, OUTPUT);
  pinMode(f4Pin, OUTPUT);
}

/*
Program to print 0-15 in binary
*/

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(f1Pin, LOW);
  digitalWrite(f2Pin, LOW);
  digitalWrite(f3Pin, LOW);
  digitalWrite(f4Pin, LOW);

  delay(1000);

  digitalWrite(f1Pin, LOW);
  digitalWrite(f2Pin, LOW);
  digitalWrite(f3Pin, LOW);
  digitalWrite(f4Pin, HIGH);

  delay(1000);

  digitalWrite(f1Pin, LOW);
  digitalWrite(f2Pin, LOW);
  digitalWrite(f3Pin, HIGH);
  digitalWrite(f4Pin, LOW);

  delay(1000);

  digitalWrite(f1Pin, LOW);
  digitalWrite(f2Pin, LOW);
  digitalWrite(f3Pin, HIGH);
  digitalWrite(f4Pin, HIGH);

  delay(1000);

  digitalWrite(f1Pin, LOW);
  digitalWrite(f2Pin, HIGH);
  digitalWrite(f3Pin, LOW);
  digitalWrite(f4Pin, LOW);

  delay(1000);

  digitalWrite(f1Pin, LOW);
  digitalWrite(f2Pin, HIGH);
  digitalWrite(f3Pin, LOW);
  digitalWrite(f4Pin, HIGH);

  delay(1000);

  digitalWrite(f1Pin, LOW);
  digitalWrite(f2Pin, HIGH);
  digitalWrite(f3Pin, HIGH);
  digitalWrite(f4Pin, LOW);

  delay(1000);

  digitalWrite(f1Pin, LOW);
  digitalWrite(f2Pin, HIGH);
  digitalWrite(f3Pin, HIGH);
  digitalWrite(f4Pin, HIGH);

  delay(1000);

  digitalWrite(f1Pin, HIGH);
  digitalWrite(f2Pin, LOW);
  digitalWrite(f3Pin, LOW);
  digitalWrite(f4Pin, LOW);

  delay(1000);

  digitalWrite(f1Pin, HIGH);
  digitalWrite(f2Pin, LOW);
  digitalWrite(f3Pin, LOW);
  digitalWrite(f4Pin, HIGH);

  delay(1000);

  digitalWrite(f1Pin, HIGH);
  digitalWrite(f2Pin, LOW);
  digitalWrite(f3Pin, HIGH);
  digitalWrite(f4Pin, LOW);

  delay(1000);

  digitalWrite(f1Pin, HIGH);
  digitalWrite(f2Pin, LOW);
  digitalWrite(f3Pin, HIGH);
  digitalWrite(f4Pin, HIGH);

  delay(1000);

  digitalWrite(f1Pin, HIGH);
  digitalWrite(f2Pin, HIGH);
  digitalWrite(f3Pin, LOW);
  digitalWrite(f4Pin, LOW);

  delay(1000);

  digitalWrite(f1Pin, HIGH);
  digitalWrite(f2Pin, HIGH);
  digitalWrite(f3Pin, LOW);
  digitalWrite(f4Pin, HIGH);

  delay(1000);

  digitalWrite(f1Pin, HIGH);
  digitalWrite(f2Pin, HIGH);
  digitalWrite(f3Pin, HIGH);
  digitalWrite(f4Pin, LOW);

  delay(1000);

  digitalWrite(f1Pin, HIGH);
  digitalWrite(f2Pin, HIGH);
  digitalWrite(f3Pin, HIGH);
  digitalWrite(f4Pin, HIGH);

  delay(1000);
}
