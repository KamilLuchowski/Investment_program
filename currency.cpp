#include "pch.h"
#include "currency.h"

using namespace std;
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
	cout << "Currency called " << name << " is worth " << price << " PLN"<<endl;
}
