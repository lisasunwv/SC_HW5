#ifndef DriveTrain_H
#define DriveTrain_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class DriveTrain: public Subsystem
{
private:
	Jaguar *motor;
	Ultrasonic *ultra;

public:
	DriveTrain();
	virtual ~DriveTrain();
	void InitDefaultCommand();
	void moveUntilWall();
	void stopTrain();
	double getUltrasonicDistance();
};

#endif
