String askString = "Enter color: ";
String color = "";
int redPin = 13;
int yellowPin = 9;
int greenPin = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
  // Ask
  Serial.println(askString);
  // wait
  while(Serial.available()==0) {

  }
  // Read
  color = Serial.readString();

  if(color == "red") {
    digitalWrite(redPin, HIGH);
    digitalWrite(yellowPin, LOW);
    digitalWrite(redPin, LOW);
  } 
  if(color == "yellow") {
    digitalWrite(yellowPin, HIGH);
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
  } 
  if(color == "green") {
    digitalWrite(greenPin, HIGH);
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, LOW);
  }
}
