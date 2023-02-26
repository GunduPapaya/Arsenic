#include <Servo.h>

Servo servo;
Servo servo2;
int servoVal;
int y = 1;
int x = 0;
void setup() {
  // put your setup code here, to run once:
servo.attach(11);
servo2.attach(5);
}

void loop() {
  // put your main code here, to run repeatedly:
  servoVal = analogRead(x);
  servoVal = map(servoVal, 0, 1023, 0, 180);
  servo.write(servoVal);

  servoVal = analogRead(y);
  servoVal = map(servoVal, 0, 1023, 0, 360);
  servo2.write(servoVal);
  delay(15);
}
