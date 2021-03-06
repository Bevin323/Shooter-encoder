// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef ROBOTMAP_H
#define ROBOTMAP_H
#include "WPILib.h"
#include "AHRS.h"
#include "CANTalon.h"
#include "CANTalonSRX.h"
#include "DigitalSource.h"
#include "Encoder.h"

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
class RobotMap {
public:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS

	// Drivetrain Motors
	static std::shared_ptr<CANTalon> drivetrainFrontLeft;
	static std::shared_ptr<CANTalon> drivetrainFrontRight;
	static std::shared_ptr<CANTalon> drivetrainRearLeft;
	static std::shared_ptr<CANTalon> drivetrainRearRight;
	static std::shared_ptr<CANTalon> drivetrainFrontStrafe;
	static std::shared_ptr<CANTalon> drivetrainRearStrafe;


	// Drivetrain Shifting Cylinders
	static std::shared_ptr<DoubleSolenoid> pneumaticsFrontLeft;
	static std::shared_ptr<DoubleSolenoid> pneumaticsFrontRight;
	static std::shared_ptr<DoubleSolenoid> pneumaticsRearLeft;
	static std::shared_ptr<DoubleSolenoid> pneumaticsRearRight;
	static std::shared_ptr<DoubleSolenoid> pneumaticsFrontStrafe;
	static std::shared_ptr<DoubleSolenoid> pneumaticsRearStrafe;


	// NavX MXP Board
	static std::shared_ptr<AHRS> drivetrainAHRS;


	// Drivetrain Encoders
	static std::shared_ptr<Encoder> drivetrainEncoderFrontLeft;
	static std::shared_ptr<Encoder> drivetrainEncoderFrontRight;
	static std::shared_ptr<Encoder> drivetrainEncoderRightStrafe;


	// Fuel Shooter Motors
	static std::shared_ptr<CANTalon> rpg1;
	static std::shared_ptr<CANTalon> rpg2;
	static std::shared_ptr<CANTalon> rpg3;

	//Fuel Shooter Encoder
	static std::shared_ptr<Encoder> shooterEncoderRpg;

	//Fuel Shooter PIDControler
	static std::shared_ptr<PIDController> shooterPIDController;

	// Fuel Floor Intake
	static std::shared_ptr<CANTalon> ammoIntake;


	// Hopper Rolling Feeder
	static std::shared_ptr<CANTalon> ammoLoader;

	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS

	static void init();
};
#endif
