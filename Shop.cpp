#include "pch.h"
#include "Shop.h"
using namespace std;


Shop::Shop()
{
	cout << "Please enter shop name: " << endl;
	cin >> this->_shopName;


	this->_productsList = NULL;
	this->_numOfProducts = 0;

	cout << "Enter the shop factor: " << endl;
	cin >> this->_factor;
}

void Shop::AddProduct()
{
	bool ok = false;
	int productChoice;
	
	Products** temp = new Products*[this->_numOfProducts + 1];
	for (int i = 0; i < this->_numOfProducts; i++)
		temp[i] = this->_productsList[i];
	delete this->_productsList;

	this->_productsList = temp;

	cout << "choose the product you want to enter: " << endl;
	cout << "1 - fruit" << endl;
	cout << "2 - vegtadle" << endl;
	cout << "3 - cheese " << endl;
	cout << "4 - yogurt" << endl;
	cout << "5 - milk drint" << endl;
	cout << "6 - other milk" << endl;
	cout << "7 - Ma'araz" << endl;

	cin >> productChoice;
	while (!ok) {

		ok = true;
		try {
			switch (productChoice)

			{
			case 1: this->_productsList[this->_numOfProducts] = new Fruit;
				break;
			case 2: this->_productsList[this->_numOfProducts] = new Vegetable;
				break;
			case 3: this->_productsList[this->_numOfProducts] = new Cheese;
				break;
			case 4: this->_productsList[this->_numOfProducts] = new Yogurt;
				break;
			case 5: this->_productsList[this->_numOfProducts] = new DrinkMilk;
				break;
			case 6: this->_productsList[this->_numOfProducts] = new OtherMilk;
				break;
			case 7: this->_productsList[this->_numOfProducts] = new Maaraz;
				break;
			default: cout << "Choice doesn't exist" << endl;
				break;
			}
			this->_numOfProducts++;
		}
		catch (string a) {
			cout << a << endl;
			ok = false;
			cout << "Enter details again" << endl;
			cout << endl;
		}
	}
}

void Shop::CalPrice() const
{
	string s;
	float sum = 0;
	if (this->_numOfProducts == 0) {
		s = "there are no products in the shop";
		throw s;
	}

	for (int i = 0; i < this->_numOfProducts; i++) {
		sum += this->_productsList[i]->calPrice(this->_factor);
	}
	cout << "The global price is: " << sum << endl;
}

void Shop::Print() const
{
	cout << "****************************" << endl;
	cout << "Shop name: " << this->_shopName << endl;
	cout << "Shop factor: " << this->_factor << endl;

	if (this->_numOfProducts == 0) {
		cout<<"Empty products" << endl;
	}

	for (int i = 0; i < this->_numOfProducts; i++) {
		cout << "***************************" << endl;
		this->_productsList[i]->print();
	}
}


void Shop::Menu()
{
	int choice;
	bool ok = false;

	cout << " Wellcom to " << this->_shopName << " shop" << endl;

	while (1)
	{
		cout << "What you would like to do? " << endl;
		cout << endl;
		cout << "1 - add product" << endl;
		cout << "2 - change the 'factor' " << endl;
		cout << "3 - calculate the prices of the products" << endl;
		cout << "4 - print shop detalis" << endl;
		cout << "5 - exist" << endl;

		cin >> choice;
		switch (choice)
		{
		case 1: this->AddProduct();
			break;
		case 2: {
			float newFactor;
			cout << "Enter the new factor: " << endl;
			cin >> newFactor;
			this->ChangeFactor(newFactor);
		}
				break;

		case 3:try {
			this->CalPrice();
		}
			   catch (string s) {
				   cout << s << endl;

			   }
			break;
		case 4:
			this->Print();
			break;
		case 5: return;
		default:
			cout << "try again" << endl;
			break;
		}
	}
}

Shop::~Shop()
{
	for (int i = 0; i < this->_numOfProducts; i++) {
		delete this->_productsList[i];
	}

	delete this->_productsList;
}
