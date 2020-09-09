#pragma once
#include <string>
#include <iostream>
using namespace std;

class Products
{
private:
	long int _id; // serial numder
	char* _place = new char[2]; // product loction {line (A-Z), shelf(1-5)}
	int _amount; // what to do whith pack???
	int _area; // which area the pruduct is. (3 - exposure, 1 - not exposure)
	

protected:
	int _kind;// 1 - farming, 2 - milk, 3 - ma'araz
	
	
public:
	static int _countId ;
	Products();

	virtual float calPrice  (float factor) const;
	virtual void print() const;
	void setAmount(int newAmount);

	int getId() { return _id; }
	int getAmount() { return _amount; }

	virtual ~Products();
};

