#include "pch.h"
#include "currency.h"

currency::currency()
{
}

currency::currency(double m_price, std::string m_name)
{
	price = m_price;
	name = m_name;
}


currency::~currency()
{
}

void currency::show()
{
	std::cout << "Currency called " << name << " is worth " << price << " PLN"<<std::endl;
}

double currency::getPrice()
{
	return price;
}

std::string currency::getName()
{
	return name;
}
