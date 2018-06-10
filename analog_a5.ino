
const int buttonPin = 5;
int buttonState = 0;
int prevButtonState = HIGH;

void setup() {
  Serial.begin(115200);
  Serial.print("Starting setup");
  pinMode(A5, INPUT_PULLUP);
  digitalWrite(buttonPin, HIGH);
  Serial.print("Setup complete.");
}

void loop() {
  delay(200);
  buttonState = analogRead(buttonPin);
   
  if(buttonState > 10 && buttonState <15) {
    buttonState = 1;
    prevButtonState = buttonState;
    Serial.println(buttonState); 
  }

   if(buttonState > 15 && buttonState <25) {
    buttonState = 2;
    prevButtonState = buttonState;
    Serial.println(buttonState); 
  }

   if(buttonState > 25 && buttonState <30) {
    buttonState = 3;
    prevButtonState = buttonState;
    Serial.println(buttonState); 
  }
}
