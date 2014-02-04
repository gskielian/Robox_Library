#include "Robox.h"
#include <Servo.h>

#include "Wire.h"
#include "I2Cdev.h"
#include "HMC5883L.h"


HMC5883L mag;

int16_t mx, my, mz;

#define LED_PIN 13
bool blinkState = false;


//Here we create a Robox called "pika", which has basic moves

//Syntax:
//Robox ur_bot_name(left_wheel_pin, right_wheel_pin);

Robox pika(9,10);


void setup()
{
  Wire.begin();
  
  mag.initialize();

  
  pika.attach();
  Serial.begin(115200);
}

void loop()
{

  mag.getHeading(&mx, &my, &mz);
  
  // To calculate heading in degrees. 0 degree indicates North
  float heading = atan2(my, mx);
  if(heading < 0)
    heading += 2 * M_PI;
  Serial.print("heading:\t");
  Serial.println(heading * 180/M_PI);

  //TODO create a Robox method which turns UNTIL an angle
  
  //idea 1: perhaps we can just slow down until we reach that angle (a perfect one shot)
  
  //idea 2: may need to calibrate for different speeds
  
  //TODO create a Robox method which uses true north to calibrate wheels
  //to go straight when doing a forwards or backwards method
  
  //idea 1: a single speed
  
  //idea 2: 3 speeds (crawl, walk, run);
  
  
  //TODO overload the forward left and right methods to optionally accept
  //an integer for the speed in that direction, this might complicate the calibration
  //though as we will need to test forward and backward, but also for speed space.
  //implementation idea: have it go forwards and backwards plenty of times.
  //implementation idea: perhaps have it write to eeprom just a little in order
  //to save the calibration settings
  
  
 
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
