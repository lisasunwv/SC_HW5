#include "OI.h"
#include "RobotMap.h"

OI::OI()
{
	Joystick *driveStick=new Joystick(JORSTICK_PORT);

	JoystickButton* DriveTrainButton = new JoystickButton (driveStick, JORSTICK_BUTTON_NUMBER);

	DriveTrainButton->WhenPressed(new MoveUntilWallCommand(5));

}
