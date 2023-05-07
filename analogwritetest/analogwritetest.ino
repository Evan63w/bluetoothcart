int ledPin = 3;      // LED connected to digital pin 9
int val = 0;         // variable to store the read value
void setup() {
  pinMode(ledPin, OUTPUT);  // sets the pin as output
}

void loop() {
  val = 255;
  analogWrite(ledPin, val);
  delay(2000);
  val = 64;
  analogWrite(ledPin, val);
  delay(2000);
}