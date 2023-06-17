float v2 = 0;
int readVal;
int dt = 500;
int redPin = 9;
int readPin = A5;

void setup() {
  // put your setup code here, to run once:
  pinMode(readPin, "INPUT");
  pinMode(redPin, "OUTPUT");
  Serial.begin(9600); // Baud Rate
}

void loop() {
  readVal = analogRead(readVal);
  v2 = (5./1023.)*readVal;
  Serial.print("Potentiometer voltage is: ");
  Serial.println(v2);
  if(v2 > 4.0) {
    digitalWrite(redPin, HIGH);
  }
  if(v2 < 4.0) {
    digitalWrite(redPin, LOW);
  }
  delay(dt);
}
