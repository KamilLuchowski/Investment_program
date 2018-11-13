//investment.h

#pragma once
#include <iostream>
#include "currency.h"
#include <map>
#include <string>

class Investment //Investment class control the parametres of an investment, it allow to set parameters, change currency
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

	void changePercent(double m_percent);
	void setMoney(double m_money);
	void setMonths(int m_months);
	void setCurrency(std::string m_name);
	void setPercent(double m_percent);

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

