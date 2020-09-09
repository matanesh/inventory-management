#include "pch.h"
#include "Maaraz.h"


Maaraz::Maaraz()
{
	Products::_kind = 3;

	cout << "Enter sum of products" << endl;
	cin >> this->_numPord;

	this->_listProducts = new string [this->_numPord];

	for (int i = 0; i < this->_numPord; i++) {
		cout << "Enter product name: "<< endl;
		cin >> this->_listProducts[i];
	}

	cout << "Enter num of colors on the cover: " << endl;
	cin >> this->_colorCover;
}

float Maaraz::CalPrice(float factor) const
{
	float basicPrice = Products::calPrice(factor);

	
	return ((basicPrice * 2)+ (this->_colorCover / 3));
}

void Maaraz::print()const
{
	Products::print();
	int sum = 0;
	
	cout << "Names of the products in the Ma'araz: ";
	for (int i = 0; i < this->_numPord; i++) {
		cout<<this->_listProducts[i] << " ";
	}
	cout << endl;

	cout << "Sum of products: " << this->_numPord << endl;
	cout << "Sum fo color: " << this->_colorCover << endl;

}


Maaraz::~Maaraz()
{
	delete this->_listProducts;
}
