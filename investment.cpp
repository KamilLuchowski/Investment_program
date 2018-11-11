#include "pch.h"
#include "investment.h"

Investment::Investment()
{
	money = 0.00;
	percent = 0.00;
	months = 0;
	currName = "PLN";
}

Investment::~Investment()
{
}

Investment::Investment(double m_money, double m_percent, int m_months, std::string m_currName)
{
	money = m_money;
	moneyPlusProfit = m_money;
	percent = m_percent;
	months = m_months;
	currName = m_currName;

	//currency rates
	currTab["PLN"]["USD"] = 3.78;
	currTab["PLN"]["EUR"] = 4.29;
	currTab["PLN"]["CHF"] = 3.76;
	currTab["PLN"]["GBP"] = 4.91;
}

void Investment::setPercent(double m_percent)
{
	percent = m_percent;
}

void Investment::setMoney(double m_money)
{
	money = m_money;
}

void Investment::setMonths(int m_months)
{
	months = m_months;
}

void Investment::setCurrency(std::string m_currName)
{
	currName = m_currName;
}

void Investment::changeCurrency(std::string new_name)
{
	currName = new_name;
	money = money * currTab[currName][new_name];
	countInvestment();
}

double Investment::countInvestment()
{
	return moneyPlusProfit = money * percent;
}

double Investment::getMoney()
{
	return money;
}

int Investment::getMonths()
{
	return months;
}

double Investment::getPercent()
{
	return percent;
}

std::string Investment::getCurrName()
{
	return currName;
}

double Investment::getAccountBalance()
{
	return moneyPlusProfit;
}

double Investment::getProfit()
{
	return moneyPlusProfit-money;
}

