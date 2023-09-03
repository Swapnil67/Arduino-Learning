int buttonPin1 = 11;
int buttonPin2 = 12;
int LEDPin = 3;
int buzzPin = 2;
int buttonVal1;
int buttonVal2;
int LEDbright = 0;
int dt = 500;

void setup() {
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(LEDPin, "OUTPUT");
  pinMode(buzzPin, "OUTPUT");
  Serial.begin(9600);
}

void loop() {

  buttonVal1 = digitalRead(buttonPin1);
  buttonVal2 = digitalRead(buttonPin2);
  Serial.print("Button 1: ");
  Serial.print(buttonVal1);
  Serial.print(" Button 2: ");
  Serial.println(buttonVal2);
  delay(dt);

  if(buttonVal1 == 0) {
    LEDbright = LEDbright+10;
  }

  if(buttonVal2 == 0) {
    LEDbright = LEDbright-10;
  }

  if(LEDbright > 255) {
    LEDbright = 255;
    digitalWrite(buzzPin, HIGH);
    delay(dt);
    digitalWrite(buzzPin, LOW);
  } else if(LEDbright < 0) {
    LEDbright = 0;
    digitalWrite(buzzPin, HIGH);
    delay(dt);
    digitalWrite(buzzPin, LOW);
  }

  Serial.print("LEDbright: ");
  Serial.println(LEDbright);

  analogWrite(LEDPin, LEDbright);
  

  // analogWrite(LEDPin, 255);
}

