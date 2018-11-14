#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include "investment.h"
#include "investmentManager.h"

using namespace std;

class Test //this class test all the functions of the program
{
private:
	InvestmentManager invManager;
public:
	Test();
	~Test();

	void testAll(); //run the whole test
	void addInvestment(double money, double percent, int months);
	void deleteInvestment();
	void chooseInvestment(int nr);
	void changeInvRate(double percent);
	void changeCurrency(std::string str);
	void accountSummary();
};

