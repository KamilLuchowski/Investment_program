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
	
	int Choice(int min, int max);
};

