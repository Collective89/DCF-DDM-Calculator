#include "CostOfDebt.h"

CostOfDebt::CostOfDebt()
{
	theTaxRate = new TaxRate();
}

//This function will be activated once the Tax Rate class has been converted to a Singleton
void CostOfDebt::calcCostOfDebt()
{
	costOfDebt = (interestPaid/totalLiabilities)*(1-theTaxRate->getTaxRate());
}

CostOfDebt::~CostOfDebt()
{
	delete theTaxRate;
}

