#pragma once
#include<string>
#include"Products.h"
#include"Farming.h"
#include"Fruit.h"
#include"Vegetable.h"
#include"Maaraz.h"
#include"Milk.h"
#include"DrinkMilk.h"
#include "Yogurt.h"
#include"Cheese.h"
#include "OtherMilk.h"

class Shop
{
	string _shopName;
	float _factor;
	int _numOfProducts;//num of products in the shop
	Products** _productsList;
public:
	Shop();

	void AddProduct();
	void ChangeFactor(float newFactor) { _factor = newFactor; }
	void CalPrice() const;

	void Print() const;

	void Menu();
	~Shop();
};

