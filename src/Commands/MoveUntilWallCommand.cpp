#include "MoveUntilWallCommand.h"

MoveUntilWallCommand::MoveUntilWallCommand(double distanceToWall)
{
	Requires(drive);
	distanceToTravel=distanceToWall;
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
}

// Called just before this Command runs the first time
void MoveUntilWallCommand::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void MoveUntilWallCommand::Execute()
{
	drive->moveUntilWall();
}

// Make this return true when this Command no longer needs to run execute()
bool MoveUntilWallCommand::IsFinished()
{
	if(drive->getUltrasonicDistance()>distanceToTravel)
	{
		return false;
	}
	else
	{
		return true;
	}
}

// Called once after isFinished returns true
void MoveUntilWallCommand::End()
{
	drive ->stopTrain();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void MoveUntilWallCommand::Interrupted()
{

}
