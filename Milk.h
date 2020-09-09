#pragma once
#include "Products.h"
class Milk: public Products
{
private:
		string _name;
	int _colorAmount;
	float _fatPerc;
protected:
	int _kind = 0 ;//0-defult, 1-drink, 2-yogurt, 3-cheese, 4-other

public:
	Milk();

	string GetName() { return _name; }
	virtual float calPrice(float factor) const;
	virtual void print() const;

	~Milk();
};

