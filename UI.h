#pragma once
#include "currency.h"
#include "investment.h"

using namespace std;

class UI
{
private:
	const int MainMenuChoices = 2;
	const int InvestmentMenuChoices = 5;
	const int TestMenuChoices = 2;
	Investment *inv;

public:
	UI();
	UI(Investment *inv);
	~UI();
	int mainMenu();
	int investmentMenu();
	int testMenu();
	void Menu();
	
	int Choice(int min, int max);
};

