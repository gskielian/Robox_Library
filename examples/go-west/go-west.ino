#include "Robox.h"
#include <Servo.h>

#include "Wire.h"
#include "I2Cdev.h"
#include "HMC5883L.h"


HMC5883L mag;
int16_t mx, my, mz;



//Here we create a Robox called "pika", which has basic moves

//Syntax:
//Robox ur_bot_name(left_wheel_pin, right_wheel_pin);

Robox pika(9,10);


void setup()
{
  //begin I2C Communication
  Wire.begin();

  //initialize magnets
  mag.initialize();

  //attach servo motors
  pika.attach();

  //begin serial interface
  Serial.begin(115200);
}

void loop()
{


  //make the robot point north
  Serial.println("pika, go north");

  mag.getHeading(&mx, &my, &mz);
  float heading = atan2(my, mx) * 180/M_PI;


/*
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
*/
}
