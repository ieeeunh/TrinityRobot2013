/*
  Motor.h - Library for low level motor control
  Created by UNH IEEE Club, February 25, 2013
*/
#ifndef Motor_h
#define Motor_h

#include "Arduino.h"

class Motor {
  public:
    Motor(unsigned char num);
    void spin(unsigned char dir, unsigned char speed);
    void stop();
    static void reset(unsigned char pin);
  private:
    unsigned char _num;
};

#endif
