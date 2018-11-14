#include "pch.h"
#include "test.h"


Test::Test()
{	
}


Test::~Test()
{
}

void Test::testAll()
{
	cout << "MAKING A NEW INVESTMENT: 750000 PLN, 5%, 12 MONTHS" << endl;
	addInvestment(750000, 5, 12);
	accountSummary();
	cout << "CHANGING INVESTMENT RATE TO 99%" << endl;
	changeInvRate(99);
	accountSummary();
	cout << "DELETING THE INVESTMENT" << endl;
	deleteInvestment();
	accountSummary();
	cout << "MAKING A NEW INVESTMENT: 1.11 PLN, 7.98%, 24 MONTHS" << endl;
	addInvestment(1.11, 7.98, 24);
	accountSummary();
	cout << "MAKING A NEW INVESTMENT: 0 PLN, 3.45%, 40 MONTHS" << endl;
	addInvestment(0, 3.45, 40);
	accountSummary();
	cout << "SWITCHING TO THE FIRST INVESTMENT" << endl;
	chooseInvestment(0);
	accountSummary();
	cout << "CHANGING CURRENCY TO USD" << endl;
	changeCurrency("USD");
	accountSummary();
	cout << "CHANGING INVESTMENT RATE TO 0%" << endl;
	changeInvRate(0);
	accountSummary();
	cout << "DELETING THE INVESTMENT" << endl;
	deleteInvestment();
	accountSummary();
	cout << "DELETING THE INVESTMENT" << endl;
	deleteInvestment();
	accountSummary();

	cout << "Press ENTER to continue..." << endl;
	getchar(); getchar();
	system("cls");
}

void Test::addInvestment(double money, double percent, int months)
{
	invManager.addInvestment(money, percent, months);
}

void Test::deleteInvestment()
{
	invManager.deleteCurrentInvestment();
}

void Test::chooseInvestment(int nr)
{
	invManager.chooseInvestment(nr);
}

void Test::changeInvRate(double percent)
{
	invManager.getCurrentInv()->changePercent(percent);
}

void Test::changeCurrency(std::string str)
{
	invManager.getCurrentInv()->changeCurrency(str);
}

void Test::accountSummary()
{
	if (invManager.getCurrentInv() == NULL) {
		cout << "Nothing to see here." << endl <<endl;
		return;
	}
	std::cout << fixed;
	cout << "Money: " << setprecision(2) << invManager.getCurrentInv()->getMoney() << " " << invManager.getCurrentInv()->getCurrName() <<" "
		<< setprecision(2) << invManager.getCurrentInv()->getPercent() << "% "
		<< invManager.getCurrentInv()->getMonths() << " months" << endl 
		<< "Money plus profit: " << setprecision(2) << invManager.getCurrentInv()->getAccountBalance() << " " << invManager.getCurrentInv()->getCurrName()
		<< " Profit: " << setprecision(2) << invManager.getCurrentInv()->getProfit() << " " << invManager.getCurrentInv()->getCurrName() << endl << endl;
}
