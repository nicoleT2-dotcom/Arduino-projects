int ledPin = 9;     // led connected to pin 9
int brightness = 0; // how bright the led is
int fadeAmount = 5; // how much to increase/decrease the brightness

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // set the brightness of the LED
  analogWrite(ledPin, brightness);

  // change the brightness for next time through the loop
  brightness = brightness + fadeAmount;

  // reverse the direction if we hit the limits
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }

  // wait a bit before the next change
  delay(3000);
}
