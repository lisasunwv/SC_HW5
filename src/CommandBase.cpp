#include "CommandBase.h"
#include "Commands/Scheduler.h"
#include "DriveTrain.h"


// Initialize a single static instance of all of your subsystems to NULL
//std::unique_ptr<ExampleSubsystem> CommandBase::examplesubsystem;
//std::unique_ptr<OI> CommandBase::oi;

CommandBase::CommandBase(const std::string &name) :
		Command(name)
{
}

CommandBase::CommandBase() :
		Command()
{

}

void CommandBase::init()
{
	// Create a single static instance of all of your subsystems. The following
	// line should be repeated for each subsystem in the project.
	//examplesubsystem.reset(new ExampleSubsystem());
	drive = new DriveTrain();
	oi = new OI();
}
