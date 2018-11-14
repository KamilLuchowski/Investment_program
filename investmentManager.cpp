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

Investment* InvestmentManager::addInvestment(double m_money, double m_percent, int m_months)
{
	Investment *investment = NULL;
	investment = new Investment();

	investment->setMoney(m_money);
	investment->setPercent(m_percent);
	investment->setMonths(m_months);
	investment->setCurrency("PLN");
	investment->countInvestment();

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
		if (currentInv == invTab[i]) { //finding an index of current investment in investments vector
			invTab.erase(invTab.begin() + i);
			invCounter--;

			if (invTab.size() == 0) { //if there is no investments, set current Investment pointer to NULL
				currentInv = NULL;
				return;
			}
			currentInv = *(invTab.begin());

		}
	}
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
