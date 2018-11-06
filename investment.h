#pragma once
#include <iostream>
#include "currency.h"

class investment
{
private:
	double money;
	double moneyPlus;
	double percent;
	int months;
	std::string currName;
	double currPrice;
public:
	investment();
	~investment();

	investment(double m_money, double m_percent, int m_months, std::string m_currName, double m_currPrice);
	//void addMoney(int value);
	void setPercent(double m_percent);
	void setMoney(double m_money);
	void setMonths(int m_months);
	void setCurrency(std::string m_name, double m_currPrice);

	void show();
	double getAccountBalance();
	double getProfit();


};

