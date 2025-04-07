const int ledPin = 13;
const int buttonPin = 7;
int buttonState = 0;

void setup() {
   Serial.begin(9600);
  delay(100); // Bazı durumlarda gerekli
  Serial.println("GITHUB TEST");
  
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP); // Dahili pull-up direnci etkin
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) { // Butona basıldıysa
    digitalWrite(ledPin, HIGH); // LED yanar
  } else {
    digitalWrite(ledPin, LOW); // LED söner
  }
}
