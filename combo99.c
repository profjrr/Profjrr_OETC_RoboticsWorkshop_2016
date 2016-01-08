//LineFollower -- COMBO -- ObjectAvoidance-- Project03 -- OETC 2016 Robotics Workshop -- Prof.JRR
//Feb. 9th, 2016
//
//linefollower now with subroutines and clean program design!!!
//And now combined with object avoidance, 08JAN2016!!!!!
//
//
//NOT using #pragma!
//
//Modified by Professor Reed, Feb. 6th, 2015
//
//global variables:
int currentDistance = 0;
//const int distanceToMaintain = 30;
const int distanceToMaintain = 10;

//

int setMotorBroutine(int setmotval)
{
	//printf("set Motor B\n")
	motor[motorB] = setmotval;
	return(motor[motorB]);
}// end of setMotorB routine
//
//
int setMotorCroutine(int setmotval)
{
	motor[motorC] = setmotval;
	return(motor[motorC]);
}// end of setMotorC routine

//
//
int operateLineFollower()
{
	int threshold = 11; //45 light sensor threshold
	int mValue    = 40; //40 motor value?
	if((SensorValue(S3) > threshold) && (SensorValue(S3)<=100))
	{
		//	operateSonicDetector();
		motor[motorB] = mValue;
		motor[motorC] = 0;
		//operateSonicDetector();

	}
	else
	{
		//	operateSonicDetector();
		motor[motorB] = 0;
		motor[motorC] = mValue;
		//turnRight(2, degrees, 18);
		//operateSonicDetector();
	}
	return(0);
}// end of while loop() for "line follower"

//}//end of line follower routine

void operateSonicDetector()
{
	// Read the sensor
	currentDistance = SensorValue[S4];
	displayCenteredBigTextLine(4, "Dist: %3d cm", currentDistance);

	// We're too far away, move forward
	if ((distanceToMaintain - currentDistance) < -2)
	{
		motor[motorB] = 30;
		motor[motorC] = 30;
		return;
	}
	// We're too close, move backwards
	else if ((distanceToMaintain - currentDistance) > 2)
	{
		motor[motorB] = -50;
		motor[motorC] = -50;
		return;
	}
	// We're good, don't go anywhere
	else
	{
		//motor[motorB] = 0;
		//motor[motorC] = 0;
		return;
	}
	return;
}//end of operateSonicDetector routine
//
//int callObjectAvoidance()
//{
//	// Distance to maintain to the target (30 cm)

//	while(true)
//	{
//		operateSonicDetector(); //test if too far or too close or don't move!

//		//Loop to monitor value in Sensor debugger window
//		sleep(50);
//	}//end of while loop to run EV3

//return(); 
//}// end of routine Object Avoidance()

//
task main()
{
	int setmotval = 0;
	//int threshold = 11; //45 light sensor threshold
	//int mValue    = 40; //40 motor value?
	//
	setMotorBroutine(setmotval);
	setMotorCroutine(setmotval);
	//
	while(true)
	{
		operateSonicDetector(); //test if too far or too close or don't move!

		//Loop to monitor value in Sensor debugger window
		sleep(50);
	//	continue;
	//}//end of while loop to run EV3

	//
	//while(true){
		operateLineFollower();
		
	}//end of while loop() for "line follower & object avoidance"
}// end task main()
//
