#ifndef MoveUntilWallCommand_H
#define MoveUntilWallCommand_H

#include "../CommandBase.h"
#include "WPILib.h"
#include "DriveTrain.h"



class MoveUntilWallCommand: public CommandBase
{
public:
	MoveUntilWallCommand(double distanceToWall);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();

private:
	double distanceToTravel;
};

#endif
