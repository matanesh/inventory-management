#include "pch.h"
#include "Vegetable.h"


Vegetable::Vegetable()
{
	Farming::_kind = 1;

	cout << "Enter vitamins: " << endl;
	cin >> this->_vitaminsNum;
	cout << endl;
}

float Vegetable::calPrice(float factor) const {
	float basicCal = Farming::calPrice(factor);
	return (this->_vitaminsNum * 2 + basicCal);
}

void Vegetable::print() const{
	Farming::print();
	cout << "(Veg) vitamins: " << this->_vitaminsNum << endl;
}

Vegetable::~Vegetable()
{
}
