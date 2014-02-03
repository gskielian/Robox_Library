/*
  Robox.cpp - Library for Continuous Servo Motor Robot.
  Created by Gregory S. Kielian, February 2, 2014.
  MIT License
*/

#include "Arduino.h"
#include "Servo.h"
#include "Robox.h"


Robox::Robox(int left_wheel_pin, int right_wheel_pin)
{
  Servo _lw;
  Servo _rw;

  _lwp = left_wheel_pin;
  _rwp = right_wheel_pin;

  _lw.attach(_lwp);
  _rw.attach(_rwp);
}

void Robox::forward()
{
  if (!_rw.attached())
    _rw.attach(_rwp);

  if (!_lw.attached())
    _lw.attach(_lwp);

  _rw.write(180);
  _lw.write(0);
}

void Robox::backward()
{

  if (!_rw.attached())
    _rw.attach(_rwp);

  if (!_lw.attached())
    _lw.attach(_lwp);

  _rw.write(0);
  _lw.write(180);
}

void Robox::left()
{
  if (!_rw.attached())
    _rw.attach(_rwp);

  if (!_lw.attached())
    _lw.attach(_lwp);

  _rw.write(180);
  _lw.write(180);
}

void Robox::right()
{
  if (!_rw.attached())
    _rw.attach(_rwp);

  if (!_lw.attached())
    _lw.attach(_lwp);

  _rw.write(0);
  _lw.write(0);
}

void Robox::stop()
{
  _rw.detach();
  _lw.detach();
}
