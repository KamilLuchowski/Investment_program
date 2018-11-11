#pragma once
#include <vector>
#include <iostream>
#include "investment.h"

class InvestmentManager
{
private:
	std::vector <Investment*> invTab;
	int invCounter;
public:
	InvestmentManager();
	~InvestmentManager();

	Investment* addInvestment();
	Investment* chooseInvestment(int choice);
	void deleteInvestment(); //usunac z wektora i z pamieci
};

