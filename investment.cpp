#include "pch.h"
#include "investment.h"

investment::investment()
{
	money = 0.00;
	percent = 0.00;
	months = 0;
	currName = "PLN";
	currPrice = 1;
}

investment::~investment()
{
}

investment::investment(double m_money, double m_percent, int m_months, std::string m_currName, double m_currPrice, int m_capitalizations)
{
	money = m_money;
	percent = m_percent;
	months = m_months;
	currName=m_currName;
	currPrice = m_currPrice;
	capitalizations = m_capitalizations;
}

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

void investment::changeCurrency(std::string new_name, double new_price)
{
	double ratio = currPrice / new_price;
	currPrice = new_price;
	currName = new_name;
	money *= ratio;
	countInvestment();
}

void investment::countInvestment() //usunac kapitalizacje??
{
	moneyPlus = money;
	for (int i = 0; i < capitalizations; i++) {
		moneyPlus = (moneyPlus*percent / capitalizations) + moneyPlus;
	}
	
}

double investment::getAccountBalance()
{
	return moneyPlus;
}

double investment::getProfit()
{
	return moneyPlus-money;
}
