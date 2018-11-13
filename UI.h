#pragma once
#include "currency.h"
#include "investment.h"
#include "investmentManager.h"
#include "test.h"
#include <iomanip>

using namespace std;

class UI
{
private:
	const int MainMenuChoices = 2;
	const int InvestmentMenuChoices = 6;
	InvestmentManager invManager;
	Test test;
public:
	UI();
	~UI();
	int mainMenu();
	int investmentMenu();
	void Menu();
	
	int ChoiceInt(int min, int max);
	double ChoiceDouble(double min, double max);

	void addInvestment();
	void deleteInvestment();
	void changeInvRate();
	void changeCurrency();
	void changeInvestment();
	void accountSummary();
};

