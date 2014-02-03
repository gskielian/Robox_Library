#include "Robox.h"

Robox pika(9,11);


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
