//shell program converted from ROBOTC for Professor Reed's -- OETC Robotic Workshop 2016
//
//Note: this program will NOT run on the EV3
//      but is presented here to demonstrate
//      practical progam design ONLY!
//
#include <stdio.h>

int myval1 = 1; // defined as global
//
//
//subroutines follow: (must be before task main() or int main() in regular c
//
//============================================
//do inputs
//============================================
//
void inputs(void)
{
	printf("\n inputs routine has started");
	printf("\n myval1 is: ");
	printf("%d\n",myval1);
//	printf(myval1);
  //  return(void);
}
//  
//============================================
//do processing
//============================================
//
void processing(int myval2)
{
	printf("\nprocessing routine has started");
	printf("\n myval2 is: ");
	printf("%d\n",myval2);
	
}
//
//============================================
//do outputs
//*** start here for designing a new project
//============================================
//
void outputs(int myval3)
{
	printf("\noutputs routine has started");
	printf("\nprocessing routine has started");
	printf("\n myval3 is: ");
	printf("%d\n",myval3);
}
//

int main(void) 
{
	printf("start of int main()");
	// your code goes here

	int myval2 = 2; // defined as local to task main()(preferred)
	int myval3 = 3;
	
	inputs();
	processing(myval2);
	outputs(myval3);
    
    printf("end of int main()");

	return 0;
} // end of int main()
