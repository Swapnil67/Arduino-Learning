int dv = 250;
int lightPin = A0;
int lightVal;
int redPin = 8;
int greenPin = 9;

// Photoresistor is a sensor that changes its resistance when light shines on it

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(lightPin, INPUT);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

// Light Increases | Resistance Decreases | Voltage Increases
// Light Decreases | Resistance Increases | Voltage Decreases

void loop() {
  lightVal = analogRead(lightPin);
  Serial.println(lightVal);
  delay(dv);

  // Tip: Use phone torch on photo-resistor (LDR)
  if(lightVal > 500) {
    digitalWrite(greenPin, HIGH);
    digitalWrite(redPin, LOW);
  } else {
    digitalWrite(greenPin, LOW);
    digitalWrite(redPin, HIGH);
  }
}
