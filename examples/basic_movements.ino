#include "Robox.h"

//Here we create a Robox called "pika", which has basic moves

//Syntax:
//Robox ur_bot_name(left_wheel_pin, right_wheel_pin);

Robox pika(9,10);


void setup()
{
}

void loop()
{

  pika.forward();
  delay(1000);

  pika.right();
  delay(1000);

  pika.left();
  delay(1000);

  pika.backward();
  delay(1000);

  pika.stop();
  delay(1000);

}
