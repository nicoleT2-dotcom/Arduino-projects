int ledPin = 9;
  int buttonPin = 2;
  int buttonState = 0;



void setup() {
  // setup code here
  pinMode (ledPin, OUTPUT);
  pinMode (buttonPin, INPUT);
}


void loop() {
  //main code here
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH){
    digitalWrite(ledPin, HIGH);}
    else 
    {digitalWrite(ledPin, LOW);}
  }