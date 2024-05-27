#pragma once
#include <iostream>
#include "Transport.h"

using namespace std;

class GasStation
{
public:
	int calcTotalGas(Transport* transports, int size);
};
