//Luke Milburn - August 2021
#ifndef TAXRATE_H
#define TAXRATE_H

//Standard library includes
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <Windows.h>

//Framework includes
//This class needs to be converted to a singleton

class TaxRate
{
	
public:

	//Functions
	TaxRate();																									//Constructor
	~TaxRate();																									//Destructor

	//Functions 

	//Getters
	float getTaxRate()                               	{return taxRate;}
	float getEBIT()										{return EBIT;}
    
    //Setters
    void setTax(float taxPaid)               			{tax = taxPaid*1000000.0;}
	void setEBIT(float earnBeFoIntTax)               	{EBIT = earnBeFoIntTax*1000000.0;}
	void calcTaxRate();	
	
private:

	//Class Variables
    float tax;                                                                                           		//Tax that the company has payed over the last year
    float EBIT;                                                                                     			//Company earnings before interest and tax
	float taxRate;																								//The tax rate which is tax/EBIT

};


#endif // TAXRATE_H
