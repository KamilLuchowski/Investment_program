#pragma once
#include <iostream>
#include "currency.h"
#include <map>
#include <string>

class Investment
{

private:
	double money;
	double moneyPlusProfit;
	double percent;
	int months;
	std::string currName;
	std::map <std::string, std::map <std::string, double> > currTab;

public:
	Investment();
	~Investment();

	Investment(double m_money, double m_percent, int m_months, std::string m_currName);

	void setPercent(double m_percent);
	void setMoney(double m_money);
	void setMonths(int m_months);
	void setCurrency(std::string m_name);

	void changeCurrency(std::string new_name);
	double countInvestment();
	void resetInvestment();

	double getMoney();
	int getMonths();
	double getPercent();
	std::string getCurrName();
	double getAccountBalance();
	double getProfit();


};

