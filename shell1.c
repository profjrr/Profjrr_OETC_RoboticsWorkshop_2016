//shell program in ROBOTC for Professor Reed's -- OETC Robotic Workshop 2016
//
//Note: this program will NOT run on the EV3
//      but is presented here to demonstrate
//      practical progam design ONLY!
//
//Available at github.com
//https://github.com/profjrr/Profjrr_OETC_RoboticsWorkshop_2016/blob/master/shell1.c
//
int myval1 = 1; // defined as global
//
//
//subroutines follow: (must be before task main() or int main() in regular c
//
//============================================
//do inputs
//============================================
//
void inputs(int myval1)
{
	//printf("inputs routine has started");

}
//  
//============================================
//do processing
//============================================
//
void processing(int myval2)
{
	//printf("processing routine has started");
}
//
//============================================
//do outputs
//*** start here for designing a new project
//============================================
//
void outputs(int myval3)
{
	//printf("outputs routine has started");
}
//
task main()
{
	int myval2 = 2; // defined as local to task main()(preferred)
	int myval3 = 3;
	
	inputs(myval1);
	processing(myval2);
	outputs(myval3);


}
