#include "pch.h"
#include "investmentManager.h"

InvestmentManager::InvestmentManager()
{
	currentInv = NULL;
	invCounter = 0;
}


InvestmentManager::~InvestmentManager()
{
}

Investment* InvestmentManager::addInvestment()
{
	Investment *investment = NULL;
	investment = new Investment();
	invTab.push_back(investment);
	currentInv = investment;

	invCounter++;

	return investment;
}

Investment* InvestmentManager::chooseInvestment(int choice)
{
	currentInv = invTab[choice];
	return invTab[choice];
}

Investment* InvestmentManager::getCurrentInv()
{
	return currentInv;
}

int InvestmentManager::getInvCounter()
{
	return invCounter;
}
