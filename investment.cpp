#include "pch.h"
#include "investment.h"

Investment::Investment()
{
	money = 0.00;
	percent = 0.00;
	months = 0;
	currName = "PLN";

	//currency rates
	currTab["PLN"]["USD"] = 0.26;
	currTab["PLN"]["EUR"] = 0.23;
	currTab["PLN"]["CHF"] = 0.27;
	currTab["PLN"]["GBP"] = 0.20;
}

Investment::~Investment()
{
}

void Investment::changePercent(double m_percent)
{
	percent = m_percent;
	countInvestment();
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

void Investment::setPercent(double m_percent)
{
	percent = m_percent;
}

void Investment::changeCurrency(std::string new_name)
{
	money = money * currTab[currName][new_name]; 
	currName = new_name;
	countInvestment();
}

double Investment::countInvestment()
{
	return moneyPlusProfit = (money * percent)/100 + money;
}

void Investment::resetInvestment()
{
	money = 0.00;
	percent = 0.00;
	months = 0;
	currName = "PLN";
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

