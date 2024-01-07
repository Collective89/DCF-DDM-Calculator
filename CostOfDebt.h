//Luke Milburn - August 2021
#ifndef COSTOFDEBT_H
#define COSTOFDEBT_H

//Framework Includes
#include "TaxRate.h"

class CostOfDebt
{
public:
	CostOfDebt();
	~CostOfDebt();
	
	//Getters
	float getCostOfDebt()							{return costOfDebt;}
	TaxRate* getTheTax()							{return theTaxRate;}
	
	//Setters
	void setInterest(float intPaid)					{interestPaid = intPaid*1000000.0;}				//Setter function to initialise the interestPaid variable
	void setTotalLiab(float liabilities)			{totalLiabilities = liabilities*1000000.0;}		//Setter function to intialise totalLiabilities variable
	void calcCostOfDebt();																			//Function to calculate the cost of debt
	
private:
	//Class variables
	TaxRate* theTaxRate;											//Instance of the singleton class - TaxRate
	float interestPaid;												//Variable to store the interest paid on debt in the current year
	float totalLiabilities;											//Variable to store the total liabilities in the current year
	//TaxRate theTaxRate;											//this instance will be a singleton shared with the FCFF class
	float costOfDebt;												//Variable to store the cost of debt which can be retrieved from an instance of this class

};

#endif // COSTOFDEBT_H
