#include <Servo.h>

Servo myservo;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  myservo.attach(3);
  myservo.writeMicroseconds(1500);
}

void loop() {
  // put your main code here, to run repeatedly:
  myservo.writeMicroseconds(2000);
  Serial.println("HIGH");
  delay(2000);
  myservo.writeMicroseconds(1000);
  Serial.println("LOW");
  delay(2000);

  myservo.writeMicroseconds(2000);
  Serial.println("HIGH");
  delay(2000);
  myservo.writeMicroseconds(1000);
  Serial.println("LOW");
  delay(2000);
  
  myservo.writeMicroseconds(1500);
  Serial.println("DONE");
  delay(10000);
}
