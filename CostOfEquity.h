//Luke Milburn - August 2021
#ifndef COSTOFEQUITY_H
#define COSTOFEQUITY_H

//Standard library includes
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <Windows.h>

//Framework includes
//This class exists as a single instance throughout the framework
//it is a singleton

class CostOfEquity
{
public:
	CostOfEquity();
	~CostOfEquity();
	
	//Functions 
	//Getters
	float getCostOfEquity()                             {return theCostOfEquity;}
    
    //Setters
    void setRiskFreeRate(float rfRate)               	{riskFreeRate = rfRate;}
	void setBeta(float beta)               				{theBeta = beta;}
	void setMarketReturn(float mReturn)					{marketReturn = mReturn;}
	void calcCostOfEquity();	
	
	
	private:
	//Class Variables
    float riskFreeRate;                                                                                         //Risk free return on a countries' government bonds
    float theBeta;                                                                                     			//Beta of a company - showing the riskiness of a company
	float marketReturn;																							//Market return of equities
	float theCostOfEquity;																						//Variable to store the cost of equity

};

#endif // COSTOFEQUITY_H
