#pragma once
#include "currency.h"
#include "investment.h"

using namespace std;

class UI
{
private:
	int nr;
	const int MainMenuChoices = 2;
	const int InvestmentMenuChoices = 5;
	const int TestMenuChoices = 2;
	investment *inv;

public:
	UI();
	UI(investment *inv);
	~UI();
	int mainMenu();
	int investmentMenu();
	int testMenu();
	void Menu();
	
	int Choice(int min, int max);
};

