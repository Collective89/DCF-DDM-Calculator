//Luke Milburn - August 2021
#include "FCFF.h"

FCFF::FCFF()
{
	//Initialise the pointers to the various class instances
	theTaxRate = new TaxRate();
	theNetAssetsMinus = new NetAssets();
	theNetAssetsZero = new NetAssets();
	theNetWCapitalMinus = new NetWorkingCapital();
	theNetWCapitalZero = new NetWorkingCapital();
}

//Function to calculate the net operating profit after tax (NOPAT)
void FCFF::calcNOPAT()
{
	NOPAT = theTaxRate->getEBIT()*(1-theTaxRate->getTaxRate());			
}																			

//Function to calculate the change in net assets
void FCFF::calcChangeInNetAssets()
{
	diffInNetAssets = theNetAssetsZero->getNetAssets()-theNetAssetsMinus->getNetAssets();
}

//Function to calculate the change in net working capital
void FCFF::calcChangeInNetWCapital()
{
	diffInNetWorkingCapital = theNetWCapitalZero->getNetWorkingCapital()-theNetWCapitalMinus->getNetWorkingCapital();
}

//Function to calculate the FCFF (free cash flow to the firm)
void FCFF::calcFCFF()
{
	theFCFF = NOPAT-diffInNetAssets-diffInNetWorkingCapital;
}

FCFF::~FCFF()
{
	//Garbage collection - clean up pointers
	delete theTaxRate;
	delete theNetAssetsMinus;
	delete theNetAssetsZero;
	delete theNetWCapitalMinus;
	delete theNetWCapitalZero;
}

