/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\wyattrose                                        */
/*    Created:      Wed Feb 12 2020                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Vision2              vision        2               
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  while(true) {
    Brain.Screen.clearScreen();
    Brain.Screen.setOrigin(1,1);
    Brain.Screen.setPenColor(color::white);
    Brain.Screen.drawRectangle(82,30,316,212);

    Vision2.takeSnapshot(Vision2__SIG_1);
    Brain.Screen.drawCircle(Vision2.objects[0].originX+82, Vision2.objects[0].originY+30, 
    Vision2.objects[0].width, color::red);
    Brain.Screen.drawCircle(Vision2.objects[1].originX+82, Vision2.objects[1].originY+30, 
    Vision2.objects[1].width, color::blue);

    task::sleep(100);

  }
}