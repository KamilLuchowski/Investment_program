#include "pch.h"
#include "UI.h"


UI::UI()
{
}

UI::UI(Investment *m_inv) //do usuniecia??
{
	inv = m_inv;
}


UI::~UI()
{
}

int UI::mainMenu()
{
	cout << "Welcome to the Investment Simulator v1.0." << endl <<endl;
	cout << "Choose an option: " << endl;
	cout << "1.Your investment." << endl;
	cout << "2.Auto-tests." << endl;
	cout << "0.Exit" << endl;
	int c = Choice(0, MainMenuChoices);
	system("cls");
	return c;
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
	int c = Choice(0, InvestmentMenuChoices);
	system("cls");
	return c;
}

int UI::testMenu()
{
	cout << "TEST MENU" << endl << endl;
	cout << "Choose an option: " << endl;
	cout << "1.Test one" << endl;
	cout << "2.Test two" << endl;
	cout << "0. Back to main menu." << endl;
	int c =  Choice(0, TestMenuChoices);
	system("cls");
	return c;
}

void UI::Menu()
{
	int nr;
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
				case 2:
					break;
				case 3:
					break;
				case 4:
					break;
				case 5:
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
				case 1:
					break;
				case 2:
					break;
				default:
					break;
				}
		}	
				break;

		case 0: 
			exit(0);
		default:
			break;
		}
	}
}

int UI::Choice(int min, int max)
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

