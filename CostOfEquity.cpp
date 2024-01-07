//Luke Milburn - August 2021
#include "CostOfEquity.h"

CostOfEquity::CostOfEquity()
{
}

void CostOfEquity::calcCostOfEquity()
{
	theCostOfEquity = riskFreeRate + (theBeta*(marketReturn-riskFreeRate));
}

CostOfEquity::~CostOfEquity()
{
}

