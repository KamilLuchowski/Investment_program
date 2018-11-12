#pragma once
#include <iostream>
#include <string>

/*
chyba ca³a klasa do usuniecia, bo wydaje sie ze nie bedzie nigdzie uzyta
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

	void show(); //do usuniecia
	double getPrice();
	std::string getName();
};
