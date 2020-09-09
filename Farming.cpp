#include "pch.h"
#include "Farming.h"


Farming::Farming()
{
	string s;
	Products::_kind = 1;
	cout << "Enter name: " << endl;
	cin >> this->_name;
	cout << endl;
	
	cout << "Enter seasons (1-5): " << endl;
	cin >> this->_seasons;
	if (this->_seasons < 1 || this->_seasons>5) {
		s = "num seasons not illegal";
		throw s;
	}
	cout << endl;
	
	cout << "Enter vendors: " << endl;
	cin >> this->_vendors; 
	cout << endl;
}

float Farming::calPrice(float factor) const {
	float basicCal = Products::calPrice(factor);

	return (basicCal * 3 * (5 - this->_seasons) + (this->_vendors * 5) +
		this->_kind);
}

 void Farming::print() const{
	Products::print();
	cout << "name: " << this->_name << endl;
	cout << "seasons: " << this->_seasons << endl;
	cout << "vendors: " << this->_vendors << endl;
	cout << "Farming kind: " << this->_kind << endl;
	
}

Farming::~Farming()
{
}
