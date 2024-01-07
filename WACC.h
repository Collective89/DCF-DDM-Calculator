//Luke Milburn - August 2021
#ifndef WACC_H
#define WACC_H

//Framework Includes
#include "CostOfDebt.h"
#include "CostOfEquity.h"

class WACC
{
public:
	WACC();
	~WACC();
	
	//Getters
	float getWACC()									{return theWACC;}
	CostOfEquity* getCostOfEquity()					{return theCostOfEquity;}
	CostOfDebt* getCostOfDebt()						{return theCostOfDebt;}
	
	//Setters
	void setTotalDebt(float totDebt)				{totalDebt = totalDebt;}				//Setter function to initialise the totalDebt variable
	void setEquity(float shareEquity)				{equity = shareEquity;}					//Setter function to intialise equity variable
	void calcWACC();																		//Function to calculate the weighted average cost of capital
	
private:
	//Class variables - also use singleton 
	//cost of equity class instance
	CostOfEquity* theCostOfEquity;									//Pointer to an instance of the cost of equity class
	CostOfDebt* theCostOfDebt;										//Pointer to an instance of the cost of debt class
	float totalDebt;												//Variable to store the total debt of the company in the current year
	float equity;													//Variable to store the equity of the company in the current year
	float theWACC;													//Variable to store the weighted average cost of capital (WACC)

};

#endif // WACC_H
