#include "pch.h"
#include "Cheese.h"


Cheese::Cheese()
{
	Milk::_kind = 3;

	cout << "Enter num of adds:" << endl;
	cin >> this->_cheeseAddition;
	cout << endl;
}

float Cheese::calPrice(float factor) const
{
	float basicPriceMilk = Milk::calPrice(factor);
	return (basicPriceMilk + this->_cheeseAddition);
}

void Cheese::print() const
{
	Milk::print();
	cout << "num of additions: (" << this->_cheeseAddition << ")" << endl;

}


Cheese::~Cheese()
{
}
