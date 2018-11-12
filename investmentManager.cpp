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

void InvestmentManager::deleteCurrentInvestment()
{
	
	for (int i = 0; i < invTab.size(); i++) {
		if (currentInv == invTab[i]) {
			invTab.erase(invTab.begin() + i);
			invCounter--;

			if (invTab.size() == 0) {
				currentInv = NULL;
				return;
			}
			currentInv = *(invTab.begin());

		}
	}
}

void InvestmentManager::changeCurrentInv(int nr)
{
	currentInv = invTab[nr];
}


std::vector<Investment*>* InvestmentManager::getInvestments()
{
	return &invTab;
}

Investment* InvestmentManager::getCurrentInv()
{
	return currentInv;
}

int InvestmentManager::getInvCounter()
{
	return invCounter;
}
