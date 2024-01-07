//Luke Milburn - August 2021
#ifndef DDMODEL_H
#define DDMODEL_H

//Standard library includes
#include <cmath>

//Framework Includes
#include "CostOfEquity.h"

class DDModel
{
public:
	DDModel();
	~DDModel();
	
	//Getters
	float getCurrSharePrice()				{return currentSharePrice;}
	float getShareValue()					{return valueOfShare;}
	CostOfEquity* getCostOfEquity()			{return theCostOfEquity;}
	
	//Setters
	void setCurrDividend(float theDividend){currDividend = theDividend;}			//Function to initialise the current dividend that the company pays
	void setCurrSharePrice(float sharePrice){currentSharePrice = sharePrice;}		//Function to initialise the share price of the company
	void setInitYears(int noOfYears)		{initYears = noOfYears;}				//Function to initialise the number years of initial growth at a certain rate
	void setInitGrowthRate(float initGRate)	{initGrowthRate = initGRate;}			//Function to initialise the growth rate in dividend for the initYears number of years
	void setTermGrowthRate(float termRate)	{termGrowthRate = termRate;}			//Function to initialise the terminal growth rate
	void calcInitPVOfDividends();													//Function that calculates the present value of the dividends for the initial years
	void calcTerminalPVOfDividends();												//Function that calculates the present value of the dividends indefinitely into the future
	void calcTotalPVOfFutureDivs();													//Function that sums the intial and terminal dividends to reach a value of the share price
	
private:
	//Class variables
	CostOfEquity* theCostOfEquity;									//Pointer to an instance of the cost of equity class
	
	//Numerical variables
	float currDividend;												//The current dividend that the company pays out
	float currentSharePrice;										//Variable to store the current share price of the company
	float initPVOfDiv;												//Variable to store the present value of the dividends of initial years
	float termPVOfDiv;												//Variable to store the present value of the terminal dividend in perpetuity
	float valueOfShare;												//Variable to store the value of a share of the company based on future projected dividends according to the DDM
	int initYears;													//Variable to store the number of years that will initially have certain growth
	float initGrowthRate;											//Variable to store the initial growth rate in dividend for the first period of years
	float termGrowthRate;											//Variable to store the terminal growth rate of dividends


};

#endif // DDMODEL_H
