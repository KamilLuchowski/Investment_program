#include "pch.h"
#include "currency.h"

Currency::Currency()
{
}

Currency::Currency(double m_price, std::string m_name)
{
	price = m_price;
	name = m_name;
}

Currency::~Currency()
{
}

void Currency::show()
{
	std::cout << "Currency called " << name << " is worth " << price << " PLN"<<std::endl;
}

double Currency::getPrice()
{
	return price;
}

std::string Currency::getName()
{
	return name;
}
