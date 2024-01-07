//Luke Milburn - August 2021
#include "DCFModel.h"

DCFModel::DCFModel()
{
	initYears = 1;
	theFCFF = new FCFF();
	theWACC = new WACC();
}

//Function that calculates the present value of the cash flows for the initial years
void DCFModel::calcInitPVOfCashFlows()
{
	for(int i = 1; i<initYears-1; i++)
	{
		initPVOfCash += ((theFCFF->getFCFF())*pow((1+initGrowthRate),i))/pow(1+theWACC->getWACC(),i);
	}
}

//Function that calculates the present value of the terminal cash flows indefinitely into the future
void DCFModel::calcTerminalPVOfCashFlows()
{
		termPVOfCash = ((theFCFF->getFCFF()*pow(1+initGrowthRate,initYears)))/(theWACC->getWACC()-termGrowthRate)/(pow(1+theWACC->getWACC(),initYears));
}

//Calculate the present value of the company based on future cash flows
void DCFModel::calcTotalPVOfFutureCashFlows()
{
	valueOfCompany = initPVOfCash + termPVOfCash;
}


DCFModel::~DCFModel()
{
	delete theFCFF;
	delete theWACC;
}

