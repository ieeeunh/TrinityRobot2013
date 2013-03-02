#include "Motor.h"

Motor motorLeft = Motor(0);
Motor motorRight = Motor(1);

void setup() {
  Serial.begin(9600);
  Motor::reset(2);
}

void loop() {
  motorLeft.spin(1,50);
  motorRight.spin(1,50);
}
