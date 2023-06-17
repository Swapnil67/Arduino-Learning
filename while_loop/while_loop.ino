int v = 0;
int potVal;
int redPin = 7;
int readPin = A5;
int delayTime = 500;

void setup() {
  pinMode(readPin, INPUT);
  pinMode(redPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  // Check potentiometer value
  potVal = analogRead(readPin);
  Serial.print("Potentiometer value: ");
  Serial.println(potVal);
  delay(delayTime);

  // Check potentiometer value is greater than 1000 then lit the LED Bulb
  while(potVal > 1000) {
    digitalWrite(redPin, HIGH);
    // Keep Reading the Potentiometer Else this loop will run continuously
    potVal = analogRead(readPin);
    Serial.print("Potentiometer value: ");
    Serial.println(potVal);
    delay(delayTime);
  }

  // Off the LED if potentiometer value is less than 1000
  digitalWrite(redPin, LOW);
}
