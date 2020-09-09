#include "pch.h"
#include "Milk.h"


Milk::Milk()
{
	cout << "Enter name: " << endl;
	cin >> this->_name;
	cout << endl;
	cout << "Enter num of color: " << endl;
	cin >> this->_colorAmount;
	cout << endl;
	cout << "Enter fat percentage: " << endl;
	cin >> this->_fatPerc;
	cout << endl;
}

float Milk::calPrice(float factor) const {
	float basicPrice = Products::calPrice(factor);
	return((basicPrice + this->_colorAmount - this->_fatPerc)*this->_kind);
}

void Milk::print() const {
	Products::print();
	cout << "name: " << this->_name << endl;
	cout << "fat percentage: " << this->_fatPerc << "%" << endl;
	cout << "kind: ";
	if (this->_kind == 0) cout << "none" << endl;
	else cout << this->_kind << endl;

}

Milk::~Milk()
{
}
