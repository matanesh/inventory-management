#include "pch.h"
#include "Fruit.h"


Fruit::Fruit()
{
	Fruit::_kind = 2;
	cout << "Enter amount of sugar: " << endl;
	cin >> this->_sugarAmount;
	cout << endl;
}
float Fruit::calPrice(float factor) const {
	float basicCal = Farming::calPrice(factor);
	return(basicCal + (this->_sugarAmount / 2));
}
void Fruit::print()const {
	Farming::print();
	cout << "sugar: " << this->_sugarAmount << " gr" << endl;
}

Fruit::~Fruit()
{
}
