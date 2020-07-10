#include <Servo.h>

//create an object for each motor
Servo motor1;
Servo motor2;

int position1 = 0; //initializing the position at 0 degree for motor 1
int position2 = 0; //initializing the position at 0 degree for motor 2

void setup()
{
  	motor1.attach(9);
	motor2.attach(10);
}

void loop()
{
  // sweep the servo from 179 to 0 degrees in steps of 1 degrees
  for (position1 = 0; position1 <= 180; position1 += 1) {
    motor1.write(180-position1);
    delay(150);
  }
  // sweep the servo from 181 to 0 degrees in steps of 1 degrees
  for (position2 = 180; position2 >= 0; position2 -= 1) {
    motor2.write(180-position2);
    delay(150)
  }
}