#include "pch.h"
#include "OtherMilk.h"


OtherMilk::OtherMilk()
{
	Milk::_kind = 4;

	//making ingredients list
	cout << "Enter sum of the Parve ingredients: " << endl;
	cin >> this->_sumOfIngredients;

	this->_ingredientsList = new string[this->_sumOfIngredients];
	for (int i = 0; i < this->_sumOfIngredients; i++) {
		cout << "Enter new ingredients" << endl;
		cin >> this->_ingredientsList[i];

	}
}

float OtherMilk::CalPrice(float factor) const
{
	float milkCal = Milk::calPrice(factor);

	return (milkCal + this->_sumOfIngredients * 5);
}

void OtherMilk::print()
{
	Milk::print();
	cout << "Ingredients: ";
	for (int i = 0; i < this->_sumOfIngredients; i++) {
		cout << this->_ingredientsList[i] << " ";
	}
	cout << endl;

	cout << "All parve ingrediants: " << this->_sumOfIngredients << endl;
}


OtherMilk::~OtherMilk()
{
	for (int i = 0; i < this->_sumOfIngredients; i++) {
		delete this->_ingredientsList;
	}
}