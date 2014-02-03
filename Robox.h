#ifndef Robox_h
#define Robox_h

#include "Arduino.h"
#include <Servo.h>

class Robox
{
  public:
    Robox(int left_wheel_pin, int right_wheel_pin);
    void attach();
    void forward();
    void backward();
    void right();
    void left();
    void stop();
  private:
    int _lwp;
    int _rwp;
    Servo _lw;
    Servo _rw;
};

#endif
