#pragma once
#include"Milk.h"
class DrinkMilk:public Milk
{
public:
	DrinkMilk();

	float CalPrice(float factor) const;
	void print();

	~DrinkMilk();
};

