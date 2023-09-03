int dt = 100;
int ledState = 0;
int btnReadPin = 12;
int btnNew;
int btnOld = 1;
int ledPin = 8;
void setup() {
  Serial.begin(9600);
  pinMode(btnReadPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

// If button is not pressed the current will be 0 hence btnReadPin will return 1 (Open Circuit)
// If button is pressed the current will be 1hence btnReadPin will return 0 (Short Circuit)

void loop() {
  btnNew = digitalRead(btnReadPin);
  if(btnOld == 1 && btnNew == 0) {
    if(ledState == 0) {
      ledState = 1;
    } else {
      ledState = 0;
    }
  } 
  btnOld = btnNew;
  if(ledState == 1) {
    Serial.println("On");
    digitalWrite(ledPin, HIGH);
  } else if(ledState == 0) {
    Serial.println("Off");
    digitalWrite(ledPin, LOW);
  }

  // -------------------------- OR -----------------------------

  // if(btnOld == 0 && btnNew == 1) {
  //   if(ledState == 0) {
  //     Serial.println("On");
  //     digitalWrite(ledPin, HIGH);
  //     ledState = 1;
  //   }else {
  //     Serial.println("Off");
  //     digitalWrite(ledPin, LOW);
  //     ledState = 0;
  //   }
  // } 
  
  delay(dt);
}
