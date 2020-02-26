const int buttonPin = D0;
const int ledPin1 =  D1;
const int ledPin2 =  D2;
const int ledPin3 =  D3;
const int ledPin4 =  D4;
const int ledPin5 =  D5;
const int ledPin6 =  D6;
const int ledPin7 =  D7;
const int ledPin8 =  D8;

int buttonState = 0;

void setup() {
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D7, OUTPUT);
  pinMode(D8, OUTPUT);
  pinMode(D0, INPUT);
}

void loop() {
  buttonState = digitalRead(D0);
  if (buttonState == LOW) {
    digitalWrite(D1, LOW);
    digitalWrite(D2, HIGH);
    digitalWrite(D3, HIGH);
    digitalWrite(D4, HIGH);
    digitalWrite(D5, HIGH);
    digitalWrite(D6, HIGH);
    digitalWrite(D7, HIGH);
    digitalWrite(D8, HIGH);
  }
  else {
    digitalWrite(D1, LOW);
    digitalWrite(D2, LOW);
    digitalWrite(D3, LOW);
    digitalWrite(D4, LOW);
    digitalWrite(D5, LOW);
    digitalWrite(D6, LOW);
    digitalWrite(D7, LOW);
    digitalWrite(D8, LOW);
  }
}
