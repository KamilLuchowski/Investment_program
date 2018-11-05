#pragma once
#include <iostream>
class investment
{
private:
	double money;
	double percent;
	int months;
public:
	investment();
	~investment();
	investment(double m_money, double m_percent, int m_months);
	void addMoney(int value);



};

