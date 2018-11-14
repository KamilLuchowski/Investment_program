#pragma once
#include "investment.h"
#include "investmentManager.h"
#include "test.h"
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

class UI //this class control what do you see in console, and call the funcions which change/switch investments
{
private:
	const int MainMenuChoices = 2; //how many choices are in the main menu
	const int InvestmentMenuChoices = 6; //how many choices are in the Your Investment menu
	InvestmentManager invManager; //this investment manager is used ONLY in Your Investments menu, not by the test class
	Test test; //this Test object is used in the second option in main menu
public:
	UI();
	~UI();
	int mainMenu(); //it returns the number of option the user has chosen in main menu
	int investmentMenu(); //it returns the number of option the user has chosen in Your Investments menu
	void Menu(); //it controls an user interface
	
	int ChoiceInt(int min, int max); //this funcion asks user for a integer number from min to max, and returns it
	double ChoiceDouble(double min, double max); //this funcion asks user for a double number from min to max, and returns it

	void addInvestment(); //it make a new investment and ask user for the parameters of this investment
	void deleteInvestment(); //it delete the current investment
	void changeInvRate(); //it asks user for a new value of investment rate, change it and count changed investment
	void changeCurrency(); //it asks user for a new currency and convert the investment
	void changeInvestment(); //it allow user to choose the investment, chosen one is set as current investment
	void accountSummary(); //it display all the parameters of the investment
};

