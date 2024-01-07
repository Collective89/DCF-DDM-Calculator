#include "NetAssets.h"

NetAssets::NetAssets()
{
}

NetAssets::~NetAssets()
{
}

//Net assets = total fixed assets + total current assets MINUS total liabilities
void NetAssets::calcNetAssets()
{
	netAssets = (totalFixAssets + totalCurrAssets) - totalLiabilities;
}

