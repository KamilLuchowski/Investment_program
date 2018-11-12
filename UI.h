#pragma once
#include "currency.h"
#include "investment.h"
#include "investmentManager.h"

using namespace std;

class UI
{
private:
	const int MainMenuChoices = 2;
	const int InvestmentMenuChoices = 5;
	InvestmentManager invManager;
public:
	UI();
	~UI();
	int mainMenu();
	int investmentMenu();
	void Menu();
	
	int ChoiceInt(int min, int max);
	double ChoiceDouble(double min, double max);

	void addInvestment();
	void changeInvRate();
	void changeCurrency();
};

