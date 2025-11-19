//delay Time on uno board  -blinking light 
int lightOnTime = 2000; //duration of the LED ON
int  lightOffTime = 500; //duration of the LED ON

void setup() {

  pinMode(LED_BUILTIN, OUTPUT);}


  void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(lightOnTime);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(lightOffTime);                      // wait for a second
}