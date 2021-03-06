/*
  UltrasonicSensor.h - Library for using 4 pin ultrasonic sensors.
  Created by Ben N. Scholer, May 22, 2015.
  Released into the public domain.
*/

#ifndef UltrasonicSensor_h
#define UltrasonicSensor_h

#include "Arduino.h"

class UltrasonicSensor {
 public:
  UltrasonicSensor(int echo, int trig);
  long ping();
  long ping(long timeout);
  long pingSmooth(int iterations);
  long pingSmooth(int iterations, long timeout);
  float toIn(long time);
  float toCm(long time);
 private:
  int echoPin, trigPin;
};

#endif
