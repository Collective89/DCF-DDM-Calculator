//Luke Milburn - August 2021
#ifndef DCFMODEL_H
#define DCFMODEL_H

//Standard library includes
#include <cmath>

//Framework Includes
#include "FCFF.h"
#include "WACC.h"

class DCFModel
{
public:
	DCFModel();
	~DCFModel();
	
	//Getters
	FCFF* getFCFF()							{return theFCFF;}
	WACC* getWACC()							{return theWACC;}
	float getCurrMktCap()					{return currentMktCap;}
	float getCompValue()					{return valueOfCompany;}
	
	//Setters
	void setCurrMktCap(float mktCap)		{currentMktCap = mktCap*1000000.0;}		//Function to initialise the current market capitalisation of the company
	void setInitYears(int noOfYears)		{initYears = noOfYears;}				//Function to initialise the number years of initial growth at a certain rate
	void setInitGrowthRate(float initGRate)	{initGrowthRate = initGRate;}			//Function to initialise the growth rate in FCFF for the initYears number of years
	void setTermGrowthRate(float termRate)	{termGrowthRate = termRate;}			//Function to initialise the terminal growth rate
	void calcInitPVOfCashFlows();													//Function that calculates the present value of the cash flows for the initial years
	void calcTerminalPVOfCashFlows();												//Function that calculates the present value of the cash flows indefinitely into the future
	void calcTotalPVOfFutureCashFlows();											//Function that sums the intial and terminal cash flows to reach a value for the firm
	
private:
	//Class variables
	//Pointers to instances of classes we need to complete the DCF Model
	FCFF* theFCFF;													//The free cash flow to the firm in the current year
	WACC* theWACC;													//The weighted average cost of capital (WACC)
	
	//Numerical variables
	float currentMktCap;											//Variable to store the current market capitalisation of the company
	float initPVOfCash;												//Variable to store the present value of cash flows of initial years
	float termPVOfCash;												//Variable to store the present value of the terminal cash flows in perpetuity
	float valueOfCompany;											//Variable to store the value of the company according to the DCF Model
	int initYears;													//Variable to store the number of years that will initially have certain growth
	float initGrowthRate;											//Variable to store the initial growth rate for the first period of years
	float termGrowthRate;											//Variable to store the terminal growth rate

};

#endif // DCFMODEL_H
