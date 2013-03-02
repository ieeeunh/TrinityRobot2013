/*
  Motor.cpp - Library for low level motor control
  Created by UNH IEEE Club, February 25, 2013
*/

#include "Arduino.h"
#include "Motor.h"

Motor::Motor(unsigned char num) {
  _num = num;
}

void Motor::spin(unsigned char dir, unsigned char speed) {
  unsigned char buff[6];
  buff[0]=0x80;
  buff[1]=0x00;
  buff[2]=_num*2+dir; // 00 or 01 for motor #0, 02 or 03 for motor #1
  buff[3]=speed; // 0 to 128 in hex
  Serial.write(buff, 6);
}

void Motor::stop() {
  spin(0, 0);
}

void Motor::reset(unsigned char pin) {
  pinMode(pin, OUTPUT);
  digitalWrite(pin, LOW);
  delay(50);
  digitalWrite(pin, HIGH);
  delay(50);
}
