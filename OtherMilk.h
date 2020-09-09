#pragma once
#include"Milk.h"

class OtherMilk: public Milk
{
private:
	int _sumOfIngredients;
	string* _ingredientsList;

public:
	OtherMilk();

	float CalPrice(float factor) const;
	void print();

	~OtherMilk();
};

