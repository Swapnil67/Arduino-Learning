int redPin = 8;
int greenPin = 9;
int bluePin = 10;
String myColor;
String msg = "What colour do you want?";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while(Serial.available() == 0) {

  }
  myColor = Serial.readString();
  if(myColor == "red" || myColor == "RED" || myColor == "Red") {
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
  } else if(myColor == "green" || myColor == "GREEN" || myColor == "Green") {
    digitalWrite(greenPin, HIGH);
    digitalWrite(redPin, LOW);
    digitalWrite(bluePin, LOW);
  } else if(myColor == "blue" || myColor == "BLUE" || myColor == "Blue") {
    digitalWrite(bluePin, HIGH);
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
  } else if(myColor == "cyan") {
    digitalWrite(redPin, LOW);
    analogWrite(greenPin, 100);
    analogWrite(bluePin, 100);
  } else if(myColor == "magenta") {
    analogWrite(redPin, 255);
    analogWrite(greenPin, 0);
    analogWrite(bluePin, 255);
  } else if(myColor == "fuchsia") {
    analogWrite(redPin, 250);
    analogWrite(bluePin, 100);
    digitalWrite(greenPin, LOW);
  } else if(myColor == "yellow") {
    analogWrite(redPin, 255);
    analogWrite(greenPin, 255);
    analogWrite(bluePin, 0);
  } else if(myColor == "off" || myColor == "OFF"){
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
  } else {
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
  }

  // Cyan, Meganta, Yellow, Orange, fuchsia
}
