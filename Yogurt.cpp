#include "pch.h"
#include "Yogurt.h"


Yogurt::Yogurt()
{
	Milk::_kind = 2;
}

float Yogurt::CalPrice(float factor) const
{
	return Milk::calPrice(factor);
}

void Yogurt::print()
{
	Milk::print();
}


Yogurt::~Yogurt()
{
}
