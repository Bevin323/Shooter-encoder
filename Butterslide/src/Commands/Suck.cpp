#include "Suck.h"

Suck::Suck() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
}

// Called just before this Command runs the first time
void Suck::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void Suck::Execute() {

	if(RobotMap::ammoIntake->Get() == 0){
		Robot::ammo->FloorIntakeSpeed(.80);
	}
	else{
		Robot::ammo->FloorIntakeSpeed(0);
	}


}

// Make this return true when this Command no longer needs to run execute()
bool Suck::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void Suck::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Suck::Interrupted() {

}
