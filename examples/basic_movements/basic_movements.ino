#include "Robox.h"
#include <Servo.h>

//Here we create a Robox called "pika", which has basic moves

//Syntax:
//Robox ur_bot_name(left_wheel_pin, right_wheel_pin);

Robox pika(9,10);


void setup()
{
  pika.attach();
  Serial.begin(9600);
}

void loop()
{

  Serial.println("pika.forward();");
  pika.forward();
  delay(2000);

  Serial.println("pika.right();");
  pika.right();
  delay(2000);

  Serial.println("pika.left();");
  pika.left();
  delay(2000);

  Serial.println("pika.backward();");
  pika.backward();
  delay(2000);

  Serial.println("pika.stop();");
  pika.stop();
  delay(2000);

}
