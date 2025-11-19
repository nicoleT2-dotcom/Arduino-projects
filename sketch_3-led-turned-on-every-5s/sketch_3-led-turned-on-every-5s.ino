int ledpin1 = 13;
int ledpin2 = 12;
int ledpin3 = 11;




void setup() {
  //setup code 

pinMode (ledpin1, OUTPUT);
pinMode (ledpin2, OUTPUT);
pinMode (ledpin3, OUTPUT);

}

void loop() {
  // main code here
  digitalWrite(ledpin1, HIGH);  // Turn LED on
  delay(5000);                 // Wait 5 second
  digitalWrite(ledpin1,  LOW);   // Turn LED off
  delay(5000); 
  
  digitalWrite(ledpin2, HIGH);  // Turn LED on
  delay(5000);                 // Wait 5 second
  digitalWrite(ledpin2, LOW);   // Turn LED off
  delay(5000); 

  digitalWrite(ledpin3, HIGH);  // Turn LED on
  delay(5000);                 // Wait 5 second
  digitalWrite(ledpin3, LOW);   // Turn LED off
  delay(5000); 









}