#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
motor Right = motor(PORT10, ratio18_1, true);
motor Left = motor(PORT1, ratio18_1, false);
motor Claw = motor(PORT8, ratio18_1, false);
motor Arm = motor(PORT9, ratio18_1, false);
/*vex-vision-config:begin*/
signature Vision__GREG = signature (1, -3837, -3091, -3464, -4081, -3021, -3551, 2.5, 0);
vision Vision = vision (PORT2, 15, Vision__GREG);
/*vex-vision-config:end*/

// VEXcode generated functions



/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Text.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}