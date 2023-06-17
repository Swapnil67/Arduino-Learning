// On the buzzer when potentiometer value reaches above 1000 

int potVal;
int dt = 500;
int potPin = A5;
int buzzPin = 8;
int buzzDelay = 2000;

void setup() {
  pinMode(buzzPin, OUTPUT);
  pinMode(potPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // Read Potentiometer Values
  potVal = analogRead(potPin);
  delay(dt);
  Serial.println(potVal);
  if(potVal > 1000) {
    digitalWrite(buzzPin, HIGH);
    delay(buzzDelay);
    digitalWrite(buzzPin, LOW);
  }
  digitalWrite(buzzPin, LOW);
}

