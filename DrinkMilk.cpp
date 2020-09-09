#include "pch.h"
#include "DrinkMilk.h"


DrinkMilk::DrinkMilk()
{
	Milk::_kind = 1;
}

float DrinkMilk::CalPrice(float factor) const
{
	return Milk::calPrice(factor);
}

void DrinkMilk::print()
{
	Milk::print();
}


DrinkMilk::~DrinkMilk()
{
}
