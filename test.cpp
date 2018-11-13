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
	cout << "MAKING A NEW INVESTMENT: 100000 PLN, 5%, 12 MONTHS" << endl;
	addInvestment(100000, 5, 12);
	accountSummary();
	cout << "CHANGING INVESTMENT RATE TO 50%" << endl;
	changeInvRate(50);
	accountSummary();
	cout << "DELETING THE INVESTMENT" << endl;
	deleteInvestment();
	accountSummary();
	cout << "MAKING A NEW INVESTMENT: 1.11 PLN, 7%, 24 MONTHS" << endl;
	addInvestment(1.11, 7, 24);
	accountSummary();
	cout << "MAKING A NEW INVESTMENT: 50 PLN, 3.45%, 40 MONTHS" << endl;
	addInvestment(50, 3.45, 40);
	accountSummary();
	cout << "SWITCHING TO THE FIRST INVESTMENT" << endl;
	chooseInvestment(0);
	accountSummary();
	cout << "Press ENTER to continue..." << endl;
	getchar(); getchar();
	system("cls");
}

void Test::addInvestment(double money, double percent, int months)
{
	//adding new investment
	Investment* tmp = invManager.addInvestment();
	tmp->setMoney(money);
	tmp->setPercent(percent);
	tmp->setMonths(months);
	tmp->setCurrency("PLN");
	tmp->countInvestment();
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
	cout << "Primary amount of money: " << setprecision(2) << invManager.getCurrentInv()->getMoney() << " " << invManager.getCurrentInv()->getCurrName() << endl;
	cout << "An investment rate: " << setprecision(2) << invManager.getCurrentInv()->getPercent() << "%" << endl;
	cout << "Investment period: " << invManager.getCurrentInv()->getMonths() << " months." << endl << endl;
	cout << "Money plus profit: " << setprecision(2) << invManager.getCurrentInv()->getAccountBalance() << " " << invManager.getCurrentInv()->getCurrName() << endl;
	cout << "Profit: " << setprecision(2) << invManager.getCurrentInv()->getProfit() << " " << invManager.getCurrentInv()->getCurrName() << endl << endl;
}

