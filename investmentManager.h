#pragma once
#include <vector>
#include <iostream>
#include "investment.h"

class InvestmentManager
{
private:
	std::vector <Investment*> invTab;
	Investment* currentInv;
	int invCounter;
public:
	InvestmentManager();
	~InvestmentManager();

	Investment* addInvestment();
	Investment* chooseInvestment(int choice);
	void deleteCurrentInvestment();
	void changeCurrentInv(int nr);
	
	std::vector<Investment*>* getInvestments();
	Investment* getCurrentInv();
	int getInvCounter();
};

