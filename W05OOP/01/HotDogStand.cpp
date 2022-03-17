// Name: ªÂ¬f§g
// Date: Mar 17, 2022
// Last update: Mar 17, 2022
// Problem statement: This C++ program do the hotdog stand task
#include "HotDogStand.h"
#include <iostream>
#include <cstring>
int HotDogStand::totalSellAmount = 0;
HotDogStand::HotDogStand()
{
}

HotDogStand::HotDogStand(const char * id)
{
	strcpy_s(standId, id);
	hotDogSellAmount = 0;
}

HotDogStand::HotDogStand(const char * id, int amount)
{
	strcpy_s(standId, id);
	hotDogSellAmount = amount;
}


HotDogStand::~HotDogStand()
{
}

void HotDogStand::justSold()
{
	hotDogSellAmount = thisStandSoldAmount() + 1;
	totalSellAmount += thisStandSoldAmount();
}

void HotDogStand::print()
{
	std::cout << standId << " " << hotDogSellAmount << std::endl;
}

int HotDogStand::thisStandSoldAmount()
{
	return hotDogSellAmount;
}

int HotDogStand::allStandSoldAmount()
{
	return totalSellAmount;
}
