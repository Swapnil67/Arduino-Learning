// Video 14
int potPin = A5;
float greenPin = 10;
float v = 0;
int potVal;
int ledVal;
int dt = 250;

void setup() {
  pinMode(potPin, "INPUT");
  pinMode(greenPin, "OUTPUT");
  Serial.begin(9600);
}

void loop() {
  potVal = analogRead(potPin);
  // m(slope) = (255/1023)
  ledVal = (255./1023.)*potVal;
  Serial.print("Lev value: ");
  Serial.println(ledVal);
  analogWrite(greenPin, ledVal);
  delay(dt);
}
