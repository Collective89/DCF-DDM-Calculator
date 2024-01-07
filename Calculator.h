//Luke Milburn - August 2021
#ifndef CALCULATOR_H
#define CALCULATOR_H

//Framework Includes
#include "DCFModel.h"
#include "DDModel.h"

class Calculator
{
public:
	Calculator();
	~Calculator();
	
	//Getters
	DCFModel* getDCFModel()					{return theDCF;}
	DDModel* getDDModel()					{return theDDM;}
	
	//NOTE - the DCF model can be applied to any company whose cash flows are
	//positive, so the DCF model can be applied to most companies. HOWEVER the DD model
	//can only be applied to companies that pay dividends which is far less. 
	
	//Setters
	void initDCFModel();											//Function to initialise the discounted cash flow model and all of the variables required for it
	void initDDModel();												//Function to initialise the dividend discount model and all of the variables required for it
	void initCalculator();											//Function to initialise all of the variables in both models
	void refreshDCFModel();											//Function that will take in any changes to the sliders on the interface of calculator and update the DCFModel
	void refreshDDModel();											//Function that will take in any changes to the sliders on the interface of calculator and update the DDModel
	void refreshCalculator();										//Function that will refresh both the DCF Model and DD Model
	
private:
	//Class variables
	DCFModel* theDCF;												//Pointer to an instance of the DCFModel class for this company
	DDModel* theDDM;												//Pointer to an instance of the DDModel class for this company

};

#endif // CALCULATOR_H
