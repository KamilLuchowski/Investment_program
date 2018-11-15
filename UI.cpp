#include "pch.h"
#include "UI.h"

UI::UI()
{
}

UI::~UI()
{
}

int UI::mainMenu()
{
	cout << "Welcome to the Investment Simulator v1.0." << endl << "Copyright (c) 2018 Kamil Luchowski" << endl << endl;
	cout << "Choose an option: " << endl;
	cout << "1.Your investment." << endl;
	cout << "2.Auto-tests." << endl;
	cout << "0.Exit" << endl;
	int c = ChoiceInt(0, MainMenuChoices);
	system("cls");
	return c;
}

int UI::investmentMenu()
{
	if (invManager.getInvCounter() == 0) { //if there is no investments, do not get permission to try to modify the investment (it's hard to edit sth which doesn't exist)

		cout << "YOUR INVESTMENT MENU" << endl << endl;
		cout << "You have no investments." << endl;
		cout << "Choose an option: " << endl;
		cout << "1.Make a new investment." << endl;
		cout << "0.Back to main menu." << endl;
		int c = ChoiceInt(0, 1);
		system("cls");
		return c;
	}
	else {
		cout << "YOUR INVESTMENT MENU" << endl << endl;
		cout << "You have " << invManager.getInvCounter() << " investment(s)." << endl;
		cout << "Chosen investment: " << invManager.getCurrentInv()->getMoney() << " " << invManager.getCurrentInv()->getCurrName() << " " << invManager.getCurrentInv()->getPercent() << "%" << endl;
		cout << "Choose an option: " << endl;
		cout << "1.Make a new investment." << endl;
		cout << "2.Change an investment rate." << endl;
		cout << "3.Change the currency." << endl;
		cout << "4.Check an account balance." << endl;
		cout << "5.Delete this investment." << endl;
		cout << "6.Change the investment" << endl;
		cout << "0.Back to main menu." << endl;
		int c = ChoiceInt(0, InvestmentMenuChoices);
		system("cls");
		return c;
	}
}

void UI::Menu()
{
	int nr;
	while (1) { //loop is ended by exit function
		nr = 1; //var necessary to condition to end the loop
		switch (mainMenu())
		{
		case 1: {
			while (nr != 0) {
				switch (investmentMenu())
				{
				case 1:
					addInvestment();
					break;
				case 2:
					changeInvRate();
					break;
				case 3:
					changeCurrency();
					break;
				case 4:
					accountSummary();
					getchar(); getchar(); //wait until user read an investment info and press the button
					break;
				case 5:
					deleteInvestment();
					break;
				case 6:
					changeInvestment();
					break;
				case 0:
					nr = 0; //back to the main menu
					break;
				}
				system("cls");
			}
		}
			break;
		case 2: {
			test.testAll(); //make an auto-test
		}	
			break;
		case 0: 
			exit(0); //leave a program
		}
	}
}

int UI::ChoiceInt(int min, int max)
{
	int i;
	cin.clear();
	cin >> i;
	while (i > max || i < min) {
		cin.clear();
		cin.sync();
		cout << "Something went wrong. Try again." << endl;
		cin >> i;
	}
	return i;
}

double UI::ChoiceDouble(double min, double max)
{
	double i;
	cin.clear();
	cin >> i;
	while (i > max || i < min) {
		cin.clear();
		cin.sync();
		cout << "Something went wrong. Try again." << endl;
		cin >> i;
	}
	return i;
}

void UI::addInvestment()
{
	double money; 
	double percent;
	int months;
	string currName;

	cout << "Enter the amount of money(0-750000): " <<endl;
	money = ChoiceDouble(0, 750000);
	cout << "Enter the investment rate(%)(0-100): " << endl;
	percent = ChoiceDouble(0, 100);
	cout << "Enter the period of time (in months)(1-120): " << endl;
	months = ChoiceInt(1, 120);

	invManager.addInvestment(money, percent, months);
}

void UI::deleteInvestment()
{
	invManager.deleteCurrentInvestment();
}

void UI::changeInvRate()
{
	cout << "Enter a new investment rate(%): " << endl;
	invManager.getCurrentInv()->changePercent(ChoiceDouble(0, 100));
}

void UI::changeCurrency()
{	
	if (invManager.getCurrentInv()->getCurrName() != "PLN") //currency converter works only one way: PLN->other
		return;

	cout << "Enter the currency you want convert to: " << endl;
	cout << "1.EUR" << endl;
	cout << "2.CHF" << endl;
	cout << "3.GBP" << endl;
	cout << "4.USD" << endl;
	cout << "0.Back to menu" << endl;
	int i = ChoiceInt(0, 4);
	if (i == 1)
		invManager.getCurrentInv()->changeCurrency("EUR");
	if (i == 2)
		invManager.getCurrentInv()->changeCurrency("CHF");
	if (i == 3)
		invManager.getCurrentInv()->changeCurrency("GBP");
	if (i == 4)
		invManager.getCurrentInv()->changeCurrency("USD");
	
		return;


}

void UI::changeInvestment()
{
	cout << "Choose an investment: " <<endl;
	vector<Investment*>* tmp = invManager.getInvestments();
	vector <Investment*> invTab = *tmp;
	for (int i = 0; i < (invTab).size(); i++)
		cout << i + 1<<". " << invTab[i]->getMoney() <<" "<<invTab[i]->getCurrName() << endl; //printing out the investments

	invManager.chooseInvestment(ChoiceInt(1, invTab.size())-1);
}

void UI::accountSummary()
{	
	if (invManager.getCurrentInv() == NULL) 
		return;
	cout << fixed;
	cout << "Primary amount of money: " << setprecision(2) << invManager.getCurrentInv()->getMoney() << " " << invManager.getCurrentInv()->getCurrName() << endl;
	cout << "An investment rate: " << setprecision(2) << invManager.getCurrentInv()->getPercent() << "%" << endl;
	cout << "Investment period: " << invManager.getCurrentInv()->getMonths() << " months." << endl << endl;
	cout << "Money plus profit: " <<setprecision(2) <<invManager.getCurrentInv()->getAccountBalance() <<" " << invManager.getCurrentInv()->getCurrName() << endl;
	cout << "Profit: " << setprecision(2) << invManager.getCurrentInv()->getProfit() << " " << invManager.getCurrentInv()->getCurrName() << endl << endl;
	cout << "Press ENTER to continue..." << endl;
}

