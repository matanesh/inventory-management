#pragma once
#include "Farming.h"
class Fruit: public Farming
{
private:
	int _sugarAmount;

public:
	Fruit();
	virtual float calPrice(float factor) const;
	virtual void print()const;
	~Fruit();
};

