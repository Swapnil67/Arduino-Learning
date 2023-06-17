int numBlinks;
String msg= "How many blinks do you want: ";
int i = 0;
int redPin = 13;
int blinkTime = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg); // Ask
  // Wait
  while(Serial.available() == 0) {

  }
  // Read
  numBlinks = Serial.parseInt();

  // Blink the LED 
  for(i=0; i<numBlinks; i++) {
    digitalWrite(redPin, HIGH);
    delay(blinkTime);
    digitalWrite(redPin, LOW);
    delay(blinkTime);
  }
}
