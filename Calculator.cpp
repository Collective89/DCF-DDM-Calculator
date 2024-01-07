#include "Calculator.h"

Calculator::Calculator()
{
	theDCF = new DCFModel();
	theDDM = new DDModel();
}

//Initialise all of the variables for the DCFModel here.......
void Calculator::initDCFModel()
{
	/*//THESE FUNCTIONS ARE COMMENTED OUT UNTIL THE VALUES TAKEN IN FROM BOTH THE EXCEL SPREADSHEETS AND ALSO THE SLIDERS ON THE
	//CALCULATOR INTERFACE CAN BE INPUT INTO THE RELEVANT FUNCTIONS AS THE SETTERS MUST HAVE VALUES PASSED INTO THEM AS PARAMETERS
	////////////////////////////////////////////////////////////////WACC///////////////////////////////////////////////////////////
	//Initalise the cost of equity
	//These values will be read in from adjustable sliders on the interface of the
	//calculator
	theDCF->getWACC()->getCostOfEquity()->setRiskFreeRate(); 				//--Some VALUE goes here
	theDCF->getWACC()->getCostOfEquity()->setBeta();
	theDCF->getWACC()->getCostOfEquity()->setMarketReturn();
	theDCF->getWACC()->getCostOfEquity()->calcCostOfEquity();
	
	//Initalise the cost of debt
	//1st - initialise the tax rate - these values will be read in from an Excel
	//spreadsheet down loaded from CapitalIQ
	theDCF->getWACC()->getCostOfDebt()->getTheTax()->setTax();				//Some value goes here
	theDCF->getWACC()->getCostOfDebt()->getTheTax()->setEBIT();
	theDCF->getWACC()->getCostOfDebt()->getTheTax()->calcTaxRate(); 		//--No value goes here
	
	//2nd calculate the cost of debt - these values will also be read in from an Excel
	//spreadsheet downloaded from CapitalIQ
	theDCF->getWACC()->getCostOfDebt()->setInterest(); 						//--Some value goes here
	theDCF->getWACC()->getCostOfDebt()->setTotalLiab();
	theDCF->getWACC()->getCostOfDebt()->calcCostOfDebt();
	
	//Initialise the weighted average cost of capital (WACC)
	//These values will also be read in from an Excel spreadhseet downloaded
	//from CapitalIQ
	theDCF->getWACC()->setEquity();											//--Some value goes here
	theDCF->getWACC()->setTotalDebt();
	theDCF->getWACC()->calcWACC();
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////FCFF///////////////////////////////////////////////////////////
	//1st - initialise the tax rate - these values will be read in from an Excel
	//spreadsheet down loaded from CapitalIQ
	theFCFF->getTheTax()->setTax();											//Some value goes here
	theFCFF->getTheTax()->setEBIT();
	theFCFF->getTheTax()->calcTaxRate(); 									//--No value goes here
	
	//Now initialise the net working capital class instances
	//These values will be read in from an Excel spreadsheet downloaded from CapitalIQ
	//Calculate the difference in change in net working capital between last year and current year
	//First the previous year
	theDCF->getFCFF()->getNetWorkMinus()->setCurrAssets();					//--Some value goes here
	theDCF->getFCFF()->getNetWorkMinus()->setCurrLiabilities();
	//Now the current year
	theDCF->getFCFF()->getNetWorkZero()->setCurrAssets();
	theDCF->getFCFF()->getNetWorkZero()->setCurrLiabilities();
	
	
	//Now we intialise the net asset class instances and calculate the difference in the
	//net assets between last year and current year.
	//These values will be read in from an Excel spreadhseet downloaded from CapitalIQ
	//First the previous year
	theDCF->getFCFF()->getNetAssMinus()->setTotalFixAssets();				//--Some value goes here
	theDCF->getFCFF()->getNetAssMinus()->setCurrentAssets();
	theDCF->getFCFF()->getNetAssMinus()->setTotalLiabilities();
	//Now the current year
	theDCF->getFCFF()->getNetAssZero()->setTotalFixAssets();
	theDCF->getFCFF()->getNetAssZero()->setCurrentAssets();
	theDCF->getFCFF()->getNetAssZero()->setTotalLiabilities();
	
	//Now calculate the free cash flow to the firm in the current year - FCFF
	theDCF->getFCFF()->calcNOPAT();
	theDCF->getFCFF()->calcChangeInNetWCapital();
	theDCF->getFCFF()->calcChangeInNetAssets();
	theDCF->getFCFF()->calcFCFF();
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////DCF Model/////////////////////////////////////////////////////////////
	//Now we intialise the DCFModel instance
	//This first value will be read in from an Excel spreadhseet downloaded from CapitalIQ
	theDCF->setCurrMktCap();											//--Some value goes here
	
	//These next values will be read in from adjustable sliders 
	//on the interface of the calculator
	theDCF->setInitGrowthRate();										//--Some value goes here
	theDCF->setInitYears();
	theDCF->setTermGrowthRate();
	
	//NOW we will calculate the present value of future cash flows to the firm
	theDCF->calcInitPVOfCashFlows();
	theDCF->calcTerminalPVOfCashFlows();
	theDCF->calcTotalPVOfFutureCashFlows();								//Final value stores in the valueOfCompany variable in the DCFModel class instance
																		//this can be accessed by a getter and compared to the current market capitalisation - YAS!!!! */
}

void Calculator::initDDModel()
{
	/*//Initalise the cost of equity
	//These values will be read in from adjustable sliders on the interface of the
	//calculator
	theDDM->getCostOfEquity()->setRiskFreeRate(); 						//--Some VALUE goes here
	theDDM->getCostOfEquity()->setBeta();
	theDDM->getCostOfEquity()->setMarketReturn();
	theDDM->getCostOfEquity()->calcCostOfEquity();
	
	//These two variables - the current dividend and current share price will be read in from an Excel spreadsheet
	//downloaded from CapitalIQ
	theDDM->setCurrSharePrice();										//--Some value goes here
	theDDM->setCurrDividend();											
	
	//These following variables will be read in from adjustable sliders on the
	//interface of the calculator
	theDDM->setInitYears();												//--Some value goes here
	theDDM->setInitGrowthRate();								
	theDDM->setTermGrowthRate();
	
	//Now we calculate the present value of future dividends to the firm
	theDDM->calcInitPVOfDividends();
	theDDM->calcTerminalPVOfDividends();
	theDDM->calcTotalPVOfFutureDivs();									//Final value stores in the valueOfShare variable in the DDModel class instance
																		//this can be accessed by a getter and compared to the current share price - YAS!!!! */ 
}

void Calculator::initCalculator()
{	
	//Intialise both the DCFModel and DDModel instances
	//initDCFModel();
	//initDDModel();
}

void Calculator::refreshDCFModel()
{
	/*//Adjust the Cost of equity - these will be read from sliders on the interface of the calculator
	theDCF->getWACC()->getCostOfEquity()->setRiskFreeRate(); 				//--Some VALUE goes here
	theDCF->getWACC()->getCostOfEquity()->setBeta();
	theDCF->getWACC()->getCostOfEquity()->setMarketReturn();
	theDCF->getWACC()->getCostOfEquity()->calcCostOfEquity();
	
	//Recalculate the WACC
	theDCF->getWACC()->calcWACC();
	
	//Adjust the DCFModel variables - these will be read in from sliders on the interface of the calculator
	theDCF->setInitGrowthRate();											//--Some value goes here
	theDCF->setInitYears();
	theDCF->setTermGrowthRate();
	
	//NOW we will re-calculate the present value of future cash flows to the firm
	theDCF->calcInitPVOfCashFlows();
	theDCF->calcTerminalPVOfCashFlows();
	theDCF->calcTotalPVOfFutureCashFlows();								//Final value stores in the valueOfCompany variable in the DCFModel class instance
																		//this can be accessed by a getter and compared to the current market capitalisation - YAS!!!! */
	
}

void Calculator::refreshDDModel()
{
	/*//Adjust the cost of equity
	//These values will be read in from adjustable sliders on the interface of the
	//calculator
	theDDM->getCostOfEquity()->setRiskFreeRate(); 						//--Some VALUE goes here
	theDDM->getCostOfEquity()->setBeta();
	theDDM->getCostOfEquity()->setMarketReturn();
	theDDM->getCostOfEquity()->calcCostOfEquity();
	
	//Adjust the DDModel variables - these will be read in from sliders on the interface of the calculator
	theDDM->setInitYears();												//--Some VALUE goes here
	theDDM->setInitGrowthRate();								
	theDDM->setTermGrowthRate();
	
	//Now we calculate the present value of future dividends to the firm
	theDDM->calcInitPVOfDividends();
	theDDM->calcTerminalPVOfDividends();
	theDDM->calcTotalPVOfFutureDivs();									//Final value stores in the valueOfShare variable in the DDModel class instance
																		//this can be accessed by a getter and compared to the current share price - YAS!!!! */ 
}

void Calculator::refreshCalculator()
{
	//refreshDCFModel();													//Refresh the DCFModel 
	//refreshDDModel();													//Refresh the DDModel
}

Calculator::~Calculator()
{
	delete theDCF;
	delete theDDM;
}

