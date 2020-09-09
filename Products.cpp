#include "pch.h"
#include "Products.h"


Products::Products()
{	
	string s;
	
	//insert id 
	this->_id = _countId;
	this->_countId++;

	//insert location 
	cout << "Enter the location of the prodect in the store (1-3): " << endl;
	cin >>this->_area;
	if ((this->_area < 1) || (this->_area > 3)) {
		s = "location doesn't exist";
		throw s ;
	}
	cout << endl;
	
	//insert line
	cout << "Enter line (A-Z): " << endl;
	cin >> this->_place[0];
	if (this->_place[0]<'A' || this->_place[0] > 'Z') {
		s = "line doesn't exist";
		throw s;
	}
	cout << endl;

	//insert shelf
	cout << "Enter shelf (1-5): " << endl;
	cin >> this->_place[1];
	if (this->_place[1]<'1' || this->_place[1] > '5') {
		s = "shelf doesn't exsit";
		throw s;
	}
	cout << endl;

	//insert amount
	cout << "Enter total ampunt: " << endl;
	cin >> this->_amount;
	cout << endl;

}


float Products::calPrice(float factor) const {
	
		return ((float)(this->_amount* this->_area* factor));
}

 void Products::print() const {
	cout << "serial number: " << this->_id << endl;
	cout << "location: " << this->_place[0] << " " << this->_place[1] << endl;
	cout << "amout: " << this->_amount << " Kg" << endl;
	cout << "Product kind: " << this->_kind << endl;
	
}

void Products::setAmount(int newAmount) {
	this->_amount = newAmount;
}

Products::~Products()
{
	delete this->_place;
}
