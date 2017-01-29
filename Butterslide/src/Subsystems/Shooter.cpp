#include "Shooter.h"
#include "../RobotMap.h"
#include "SmartDashboard/SmartDashboard.h"
#include "LiveWindow/LiveWindow.h"

Shooter::Shooter() : PIDSubsystem("Shooter", 1.0, 0.0, 0.0, 1.0) {
    PIDSubsystem::SetSetpoint(1.0);
    SetAbsoluteTolerance(0.2);
    GetPIDController()->SetContinuous(false);
    LiveWindow::GetInstance()->AddActuator("Shooter", "PIDSubsystem Controller", GetPIDController());
	gun = RobotMap::rpg1;
	encoderRpg = RobotMap::shooterEncoderRpg;
	pIDControllerShooter = RobotMap::shooterPIDController;
}

void Shooter::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
}

double Shooter::ReturnPIDInput() {
	return encoderRpg->GetRate();

}

void Shooter::UsePIDOutput(double output) {
	 gun->PIDWrite(output);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
