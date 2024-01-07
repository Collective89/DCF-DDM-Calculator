//Luke Milburn - August 2021
#ifndef NETWORKINGCAPITAL_H
#define NETWORKINGCAPITAL_H

class NetWorkingCapital
{
public:
	NetWorkingCapital();
	~NetWorkingCapital();
	
	//Getters
	float getNetWorkingCapital()						{return netWorkingCapital;}
	
	//Setters
	void setCurrAssets(float currentA)                 	{currAssets = currentA*1000000.0;}
    void setCurrLiabilities(float currentL)             {currLiabilities = currentL*1000000.0;}
	void calcNetWorkingCapital();																//A function that calculates the net working capital of the company in a particular year

private:
	
	//Class variables
	float currAssets;																			//Current assets of the company in a particular year
	float currLiabilities;																		//Current liabilities of the company in a particular year
	float netWorkingCapital;																	//Net working capital of the company in a particular year

};

#endif // NETWORKINGCAPITAL_H
