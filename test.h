#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include "investment.h"
#include "investmentManager.h"

using namespace std;

class Test
{
private:
	InvestmentManager invManager;
public:
	Test();
	~Test();

	void testAll();
	void addInvestment(double money, double percent, int months);
	void deleteInvestment();
	void chooseInvestment(int nr);
	void changeInvRate(double percent);
	void changeCurrency(std::string str);
	void accountSummary();
};

