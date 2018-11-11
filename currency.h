#pragma once
#include <iostream>
#include <string>

/*

*/
class Currency
{
private:
	double price;
	std::string name;
public:
	Currency();
	Currency(double m_price, std::string m_name);
	~Currency();

	void show();
	double getPrice();
	std::string getName();
};
