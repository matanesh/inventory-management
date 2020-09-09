#pragma once
#include "Products.h"
#include<string.h>
#include <iostream>

class Farming :public Products 
{
private:
	string _name;
	int _seasons;
	int _vendors; // amount of who bring the product

protected:
	int _kind; // 1 - for veg, 2 - fruit


public:
	Farming();
	float calPrice(float factor) const;
	virtual void print() const;
	~Farming();
};

