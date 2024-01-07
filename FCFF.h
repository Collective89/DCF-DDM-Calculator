//Luke Milburn - August 2021
#ifndef FCFF_H
#define FCFF_H

//Framework Includes
#include "TaxRate.h"
#include "NetAssets.h"
#include "NetWorkingCapital.h"

class FCFF
{
public:
	FCFF();
	~FCFF();
	
	//Getters
	float getFCFF()							{return theFCFF;}
	TaxRate* getTheTax()					{return theTaxRate;}
	NetAssets* getNetAssMinus()				{return theNetAssetsMinus;}
	NetAssets* getNetAssZero()				{return theNetAssetsZero;}
	NetWorkingCapital* getNetWorkMinus()	{return theNetWCapitalMinus;}
	NetWorkingCapital* getNetWorkZero()		{return theNetWCapitalZero;}
	
	
	//Setters
	void calcNOPAT();												//Function to calculate the net operating profit after tax
	void calcChangeInNetAssets();									//Function to calculate the change in net assets
	void calcChangeInNetWCapital();									//Function to calculate the change in net working capital
	void calcFCFF();												//Function to calculate free cash flow to the firm
	
private:
	//Class variables
	float NOPAT;													//Variable to store the net operating profit after tax
	float diffInNetAssets;											//Variable to store the change in net assets
	float diffInNetWorkingCapital;									//Variable to store the change in net working capital
	float theFCFF;													//Variable to store the free cash flow to the firm
	
	//Pointers to instances of classes we need to compute FCFF
	TaxRate* theTaxRate;											//The tax rate that the company is currently paying
	NetAssets* theNetAssetsMinus;									//The net assets of the company in the previous year
	NetAssets* theNetAssetsZero;									//The net assets of the company in the current year
	NetWorkingCapital* theNetWCapitalMinus;							//The net working capital of the company in the previous year
	NetWorkingCapital* theNetWCapitalZero;							//The net working capital of the company in the current year

};

#endif // FCFF_H
