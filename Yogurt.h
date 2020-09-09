#pragma once
#include "Milk.h"
class Yogurt: public Milk
{
public:
	Yogurt();

	float CalPrice(float factor) const;
	void print();

	~Yogurt();
};

