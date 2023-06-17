int ledPin = 8;
int btnPin = 12;
int dt = 100;
int btnRead;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(btnPin, INPUT);
}

void loop() {
  btnRead = digitalRead(btnPin);
  Serial.println(btnRead);
  delay(dt);
  if(btnRead == 1) {
    digitalWrite(ledPin, LOW);
  } else if(btnRead == 0) {
    digitalWrite(ledPin, HIGH);
  }
}
