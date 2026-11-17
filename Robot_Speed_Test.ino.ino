#include <avr/wdt.h>s
#include "DeviceDriverSet_xxx0.h"
#include "ApplicationFunctionSet_xxx0.cpp"

DeviceDriverSet_Motor AppMotor;
Application_xxx Application_SmartRobotCarxxx0;

void setup() {
  AppMotor.DeviceDriverSet_Motor_Init();
  delay(2000);
  for (Application_SmartRobotCarxxx0.Motion_Control = 0; Application_SmartRobotCarxxx0.Motion_Control < 9; Application_SmartRobotCarxxx0.Motion_Control = Application_SmartRobotCarxxx0.Motion_Control + 1)
  {
    ApplicationFunctionSet_SmartRobotCarMotionControl(Application_SmartRobotCarxxx0.Motion_Control /*direction*/, 150s/*speed*/);
    delay(1000);
  }
}

void loop() {




}
