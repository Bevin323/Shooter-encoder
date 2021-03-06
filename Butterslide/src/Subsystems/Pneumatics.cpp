// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.




#include "Pneumatics.h"
#include "../RobotMap.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

Pneumatics::Pneumatics() : Subsystem("Pneumatics") {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    frontLeft = RobotMap::pneumaticsFrontLeft;
    frontRight = RobotMap::pneumaticsFrontRight;
    rearLeft = RobotMap::pneumaticsRearLeft;
    rearRight = RobotMap::pneumaticsRearRight;
    frontStrafe = RobotMap::pneumaticsFrontStrafe;
    rearStrafe = RobotMap::pneumaticsRearStrafe;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}

void Pneumatics::InitDefaultCommand() {
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}
void Pneumatics::ChangeDriveMode(){

	if(frontLeft->Get()==DoubleSolenoid::Value::kForward){
		frontLeft->Set(DoubleSolenoid::Value::kReverse);
		frontRight->Set(DoubleSolenoid::Value::kReverse);
		rearLeft->Set(DoubleSolenoid::Value::kReverse);
		rearRight->Set(DoubleSolenoid::Value::kReverse);
	}
	else {
		frontLeft->Set(DoubleSolenoid::Value::kForward);
		frontRight->Set(DoubleSolenoid::Value::kForward);
		rearLeft->Set(DoubleSolenoid::Value::kForward);
		rearRight->Set(DoubleSolenoid::Value::kForward);
	}
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

