#ifndef NETASSETS_H
#define NETASSETS_H

class NetAssets
{
public:
	NetAssets();
	~NetAssets();
	
	//Getters
	float getNetAssets()			{return netAssets;}
	
	//Setters
	void setTotalFixAssets(float fixed)                 {totalFixAssets = fixed*1000000.0;}
    void setCurrentAssets(float currAssets)             {totalCurrAssets = currAssets*1000000.0;}
    void setTotalLiabilities(float total)               {totalLiabilities = total*1000000.0;}
	void calcNetAssets();																		//A function that calculates the net assets of the company in a particular year

private:
	
	//Class variables
	float totalFixAssets;																		//Total fixed assets of the company in a particular year
	float totalCurrAssets;																		//Total current assets of the company in a particular year
	float totalLiabilities;																		//Total liabilities of teh company in a particular year
	float netAssets;																			//Net Assets of the company in a particular year
};

#endif // NETASSETS_H
