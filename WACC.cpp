//Luke Milburn - August 2021
#include "WACC.h"

WACC::WACC()
{
	theCostOfDebt = new CostOfDebt();
	theCostOfEquity = new CostOfEquity();
}

//Function to calculate the weighted average cost of capital (WACC)
void WACC::calcWACC()
{
	theWACC = (((equity/(equity+totalDebt))*theCostOfEquity->getCostOfEquity())
				+((totalDebt/(equity+totalDebt))*theCostOfDebt->getCostOfDebt()));
	
}

WACC::~WACC()
{
	delete theCostOfDebt;
	delete theCostOfEquity;
}

