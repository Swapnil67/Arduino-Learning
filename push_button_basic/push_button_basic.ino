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

// If button is not pressed the current will be 0 hence btnPin will return 1 (Open Circuit)
// If button is pressed the current will be 1hence btnPin will return 0 (Short Circuit)

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
