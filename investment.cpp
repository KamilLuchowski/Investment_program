#include "pch.h"
#include "investment.h"


investment::investment()
{
}


investment::~investment()
{
}

investment::investment(double m_money, double m_percent, int m_months, currency m_curr)
{
	money = m_money;
	percent = m_percent;
	months = m_months;
	curr = m_curr;
}

void investment::addMoney(int value)
{	
	if (value > 0)
		money += value;
	else
		std::cout << "Kwota musi byæ wiêksza od zera!" << std::endl;
}
