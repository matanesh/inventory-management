#pragma once
#include "Farming.h"
class Vegetable: public Farming
{
private:
	int _vitaminsNum;

public:
	Vegetable();
	
	void setVit(int n) { _vitaminsNum = n; }
	
	float calPrice(float factor) const;
	void print() const;

	~Vegetable();
};

