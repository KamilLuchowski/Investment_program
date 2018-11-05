#pragma once
#include <iostream>
#include "currency.h"

class investment
{
private:
	double money;
	double percent;
	int months;
	currency curr;
public:
	investment();
	~investment();
	investment(double m_money, double m_percent, int m_months, currency m_curr);
	void addMoney(int value);



};

