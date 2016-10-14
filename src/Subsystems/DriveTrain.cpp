#include "DriveTrain.h"
#include "../RobotMap.h"
#include <Subsystem/DriveTrain.h>
DriveTrain::DriveTrain() :
		Subsystem("DriveTrain"),motor(new Jaguar(J_MOTOR)),
		ultra(new Ultrasonic(DIO_PORTO,DIO_PORT1))

{

}

void DriveTrain::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

DriveTrain::~DriveTrain()
{

}

void DriveTrain::moveUntilWall()
{
	motor->Set(0.4);
}

void DriveTrain::stopTrain()
{
motor->Set(0);
}

double DriveTrain::getUltrasonicDistance()

{
	return ultra ->GetRangeInches();
}
