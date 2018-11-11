#include "pch.h"
#include "investmentManager.h"

InvestmentManager::InvestmentManager()
{
}


InvestmentManager::~InvestmentManager()
{
}

Investment* InvestmentManager::addInvestment()
{
	Investment *investment = NULL;
	investment = new Investment();
	invTab.push_back(investment);

	invCounter++;

	return investment;
}

Investment* InvestmentManager::chooseInvestment(int choice)
{
	return invTab[choice];
}
