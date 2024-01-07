//Luke Milburn - August 2021
#include <stdio.h>

//Framework includes
#include "Calculator.h"

int main(int argc, char **argv)
{
	//Boolean to control the refresh loop
	bool refresh = true;
	
	//A new calculator for a single company
	Calculator* theCalculator = new Calculator();
	
	//Initalise the calculator
	theCalculator->initCalculator();
	
	//Now refresh calculator
	while(refresh)
	{
		theCalculator->refreshCalculator();
	}
	
	//Cleanup if exited the loop
	delete theCalculator;
	
	return 0;
}
