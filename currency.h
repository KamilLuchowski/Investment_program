#pragma once
#include <iostream>
#include <string>

class currency
{
private:
	double price;
	std::string name;
public:
	currency();
	currency(double m_price, std::string m_name);
	~currency();

	void show();
};

