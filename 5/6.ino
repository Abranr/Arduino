//Ejemplo: Servo motor:

#include <Servo.h>
Servo motor1;

void setup() {
   motor1.attach(5);
}

void loop() 
{
  motor1.write(0);
  delay(100);
  motor1.write(45);
  delay(100);
  motor1.write(90);
  delay(100);
  motor1.write(135);
  delay(100);
  motor1.write(180);
  delay(100);
}