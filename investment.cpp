#include "pch.h"
#include "investment.h"

investment::investment()
{
	money = 0.00;
	percent = 0.00;
	months = 0;
	currName = "no_name";
	currPrice = 1;
}

investment::~investment()
{
}

investment::investment(double m_money, double m_percent, int m_months, std::string m_currName, double m_currPrice)
{
	money = m_money;
	percent = m_percent;
	months = m_months;
	currName=m_currName;
	currPrice = m_currPrice;
}

/*void investment::addMoney(int value)
{	
	if (value > 0)
		money += value;
	else
		std::cout << "Kwota musi byæ wiêksza od zera!" << std::endl;
}
*/
void investment::setPercent(double m_percent)
{
	percent = m_percent;
}

void investment::setMoney(double m_money)
{
	money = m_money;
}

void investment::setMonths(int m_months)
{
	months = m_months;
}

void investment::setCurrency(std::string m_currName, double m_currPrice)
{
	currName = m_currName;
	currPrice = m_currPrice;
}

void investment::show()
{	
	std::cout << "The value of your investment: " << money << " " <<currName <<std::endl;
}

double investment::getAccountBalance()
{
	return moneyPlus;
}

double investment::getProfit()
{
	return moneyPlus-money;
}
