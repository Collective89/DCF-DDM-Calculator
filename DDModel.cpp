//Luke Milburn - August 2021
#include "DDModel.h"

DDModel::DDModel()
{
	theCostOfEquity = new CostOfEquity();
}

//Function that calculates the present value of the dividends for the initial years
void DDModel::calcInitPVOfDividends()
{
	for(int i = 1; i<initYears-1; i++)
	{
		initPVOfDiv += (currDividend*pow((1+initGrowthRate),i))/pow(1+theCostOfEquity->getCostOfEquity(),i);
	}
}

//Function that calculates the present value of the dividends indefinitely into the future
void DDModel::calcTerminalPVOfDividends()
{
	termPVOfDiv = (currDividend*(pow(1+initGrowthRate,initYears))/theCostOfEquity->getCostOfEquity()-termGrowthRate)/
	(pow(1+theCostOfEquity->getCostOfEquity(),initYears));
}

//Function that sums the intial and terminal dividends to reach a value of the share price
void DDModel::calcTotalPVOfFutureDivs()
{
	valueOfShare = initPVOfDiv + termPVOfDiv;
}

DDModel::~DDModel()
{
	delete theCostOfEquity;
}

