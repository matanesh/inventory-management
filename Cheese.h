#pragma once
#include"Milk.h"

class Cheese : public Milk
{
private:
	int _cheeseAddition;

public:
	Cheese();

	virtual float calPrice(float factor) const;
	virtual void print() const;

	~Cheese();
};