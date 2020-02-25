/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\wyattrose                                        */
/*    Created:      Tue Feb 25 2020                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Right                motor         10              
// Left                 motor         1               
// Claw                 motor         8               
// Arm                  motor         9               
// Vision               vision        2               
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;


// Vision.objects[0].centerX

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  while(true) {
    //if(Vision.objects[0].exists) {
      if(Vision.objects[0].centerX > 80) { // turn left to center the thing
        Right.spin(forward);
        Left.spin(reverse);
      }
      else if(Vision.objects[0].centerX < 114) {
        Right.spin(reverse);
        Left.spin(forward);
      }
      if(Vision.objects[0].centerY > 40) {
        Right.spin(forward);
        Left.spin(forward);
      }
      else if(Vision.objects[0].centerY < 80) {
        Right.spin(reverse);
        Left.spin(reverse);
      }
    //}
    //else {
    //  Right.spin(forward);
    //  Left.spin(reverse);
    //}
  }
}
