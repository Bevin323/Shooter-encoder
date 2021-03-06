// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"
#include "AHRS.h"


// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
std::shared_ptr<CANTalon> RobotMap::drivetrainFrontLeft;
std::shared_ptr<CANTalon> RobotMap::drivetrainFrontRight;
std::shared_ptr<CANTalon> RobotMap::drivetrainRearLeft;
std::shared_ptr<CANTalon> RobotMap::drivetrainRearRight;
std::shared_ptr<CANTalon> RobotMap::drivetrainFrontStrafe;
std::shared_ptr<CANTalon> RobotMap::drivetrainRearStrafe;
std::shared_ptr<DoubleSolenoid> RobotMap::pneumaticsFrontLeft;
std::shared_ptr<DoubleSolenoid> RobotMap::pneumaticsFrontRight;
std::shared_ptr<DoubleSolenoid> RobotMap::pneumaticsRearLeft;
std::shared_ptr<DoubleSolenoid> RobotMap::pneumaticsRearRight;
std::shared_ptr<DoubleSolenoid> RobotMap::pneumaticsFrontStrafe;
std::shared_ptr<DoubleSolenoid> RobotMap::pneumaticsRearStrafe;
std::shared_ptr<AHRS> RobotMap::drivetrainAHRS;
std::shared_ptr<Encoder> RobotMap::drivetrainEncoderFrontLeft;
std::shared_ptr<Encoder> RobotMap::drivetrainEncoderFrontRight;
std::shared_ptr<Encoder> RobotMap::drivetrainEncoderRightStrafe;
std::shared_ptr<CANTalon> RobotMap::ammoIntake;
std::shared_ptr<CANTalon> RobotMap::ammoLoader;
std::shared_ptr<CANTalon> RobotMap::rpg1;
std::shared_ptr<CANTalon> RobotMap::rpg2;
std::shared_ptr<CANTalon> RobotMap::rpg3;
std::shared_ptr<Encoder> RobotMap::shooterEncoderRpg;
std::shared_ptr<PIDController> RobotMap::shooterPIDController;
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION

void RobotMap::init() {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    LiveWindow *lw = LiveWindow::GetInstance();

    drivetrainFrontLeft.reset(new CANTalon(4));
    lw->AddActuator("Drivetrain", "Front Left", drivetrainFrontLeft);
    
    drivetrainFrontRight.reset(new CANTalon(1));
    lw->AddActuator("Drivetrain", "Front Right", drivetrainFrontRight);
    
    drivetrainRearLeft.reset(new CANTalon(3));
    lw->AddActuator("Drivetrain", "Rear Left", drivetrainRearLeft);
    
    drivetrainRearRight.reset(new CANTalon(2));
    lw->AddActuator("Drivetrain", "Rear Right", drivetrainRearRight);
    
    drivetrainFrontStrafe.reset(new CANTalon(5));
    lw->AddActuator("Drivetrain", "Front Strafe", drivetrainFrontStrafe);
    
    drivetrainRearStrafe.reset(new CANTalon(6));
    lw->AddActuator("Drivetrain", "Rear Strafe", drivetrainRearStrafe);
    
    pneumaticsFrontLeft.reset(new DoubleSolenoid(1, 0, 1));
    lw->AddActuator("Pneumatics", "Front Left", pneumaticsFrontLeft);
    
    pneumaticsFrontRight.reset(new DoubleSolenoid(1, 2, 3));
    lw->AddActuator("Pneumatics", "Front Right", pneumaticsFrontRight);
    
    pneumaticsRearLeft.reset(new DoubleSolenoid(1, 4, 5));
    lw->AddActuator("Pneumatics", "Rear Left", pneumaticsRearLeft);
    
    pneumaticsRearRight.reset(new DoubleSolenoid(0, 6, 7));
    lw->AddActuator("Pneumatics", "Rear Right", pneumaticsRearRight);
    
    pneumaticsFrontStrafe.reset(new DoubleSolenoid(0, 0, 1));
    lw->AddActuator("Pneumatics", "Front Strafe", pneumaticsFrontStrafe);
    
    pneumaticsRearStrafe.reset(new DoubleSolenoid(0, 2, 3));
    lw->AddActuator("Pneumatics", "Rear Strafe", pneumaticsRearStrafe);
    
    lw->AddSensor("Shooter", "encoderRpg", shooterEncoderRpg);

    lw->AddActuator("Shooter", "PID Controller Shooter", shooterPIDController);

    drivetrainAHRS.reset (new AHRS(SPI::Port::kMXP, 200));

    drivetrainEncoderFrontLeft.reset(new Encoder(0,1));

    drivetrainEncoderFrontRight.reset(new Encoder(2,3));

    drivetrainEncoderRightStrafe.reset(new Encoder(4,5));

    rpg1.reset(new CANTalon(7));

    rpg2.reset(new CANTalon(8));

    //Setting rpg2 as a slave of rpg1 (does what rpg1 does)
    rpg2->SetControlMode(frc::CANSpeedController::ControlMode::kFollower);
    rpg2->Set(7);

    rpg3.reset(new CANTalon(9));

    //setting rpg3 as a slave of rpg1 (does what rpg1 does)
    rpg3->SetControlMode(frc::CANSpeedController::ControlMode::kFollower);
    rpg3->Set(7);
    shooterEncoderRpg.reset(new Encoder(6, 7, false, Encoder::k4X));
    shooterEncoderRpg->SetDistancePerPulse(1.0);
    shooterEncoderRpg->SetPIDSourceType(PIDSourceType::kRate);
    shooterPIDController.reset(new PIDController(1.0, 0.0, 0.0,/* F: 0.0, */ shooterEncoderRpg.get(), rpg1.get(), 0.02));
    shooterPIDController->SetContinuous(false); shooterPIDController->SetAbsoluteTolerance(0.2);
    shooterPIDController->SetOutputRange(-1.0, 1.0);

    ammoIntake.reset(new CANTalon(10));

    ammoLoader.reset(new CANTalon(11));









    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
