//Luke Milburn - August 2021
#include "NetWorkingCapital.h"

NetWorkingCapital::NetWorkingCapital()
{
}

NetWorkingCapital::~NetWorkingCapital()
{
}

void NetWorkingCapital::calcNetWorkingCapital()
{
	netWorkingCapital = currAssets - currLiabilities;
}

