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
	cout << "Welcome to the Investment Simulator v1.0." << endl;
	cout << "Choose an option: " << endl;
	cout << "1.Your investment." << endl;
	cout << "2.Auto-tests." << endl;
	cout << "0.Exit" << endl;
	return Choice(0, MainMenuChoices);
}

int UI::investmentMenu()
{
	cout << "YOUR INVESTMENT MENU" << endl <<endl;
	cout << "Choose an option: " << endl;
	cout << "1.Make an investment." << endl;
	cout << "2.Change an investment rate." << endl;
	cout << "3.Change the currency." << endl;
	cout << "4.Check an account balance." << endl;
	cout << "5.Reset an investment." << endl;
	cout << "0. Back to main menu." << endl;
	return Choice(0, InvestmentMenuChoices);
}

int UI::testMenu()
{
	cout << "TEST MENU" << endl << endl;
	cout << "Choose an option: " << endl;
	cout << "1.Test one" << endl;
	cout << "2.Test two" << endl;
	cout << "0. Back to main menu." << endl;
	return Choice(0, TestMenuChoices);
}

void UI::Menu()
{
	while (1) {
		nr = 1;
		switch (mainMenu())
		{
		case 1: {
			while (nr != 0)
				switch (investmentMenu())
				{
				case 1:
					break;
				case 0:
					nr = 0;
					break;
				default:
					break;
				}
		}
				break;
		case 2: {
			switch (testMenu())
			{
			default:
				break;
			}
		}	break;
		case 0: exit(0);
		default:
			break;
		}
	}
}

int UI::Choice(int min, int max)
{
	cin >> nr;
	while (nr > max || nr < min) {
		cout << "Something went wrong. Try again." << endl;
		cin >> nr;
	}

	return nr;
}
