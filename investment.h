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
	std::map <std::string, std::map <std::string, double> > currTab; //there are conversions between all available currencies


public:
	Investment();
	~Investment();

	void setMoney(double m_money);
	void setMonths(int m_months);
	void setCurrency(std::string m_name);
	void setPercent(double m_percent);

	void changePercent(double m_percent); //change investment rate and count the amount of money with profit
	void changeCurrency(std::string new_name); //it converts money to the currency you'll give as new_name
	double countInvestment(); //it counts the parameters of the investment
	void resetInvestment(); //it set parameters to 0 and currency name to PLN, method not used in program so far

	double getMoney();
	int getMonths();
	double getPercent();
	std::string getCurrName();
	double getAccountBalance(); //it returns the amount of money with profits
	double getProfit(); //it returns the difference between money with profits and the primary money


};

