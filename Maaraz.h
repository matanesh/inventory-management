#pragma once
#include "Products.h"
#include <string>
#include"Products.h"
#include"Milk.h"
#include"DrinkMilk.h"
#include "Yogurt.h"
#include"Cheese.h"
#include "OtherMilk.h"


class Maaraz: public Products
{
private:
	int _numPord; //num of products in ma'araz
	string*  _listProducts; // arr of the products in the ma'araz
	int _colorCover;//num of color on the cover

public:

	Maaraz();
	float CalPrice(float factor) const;
	void print()const;

	~Maaraz();
};

