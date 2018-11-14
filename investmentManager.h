#pragma once
#include <vector>
#include <iostream>
#include "investment.h"

class InvestmentManager //this class stores all the investments, count them and decide which investment is the current one
{
private:
	std::vector <Investment*> invTab; //a vector stores pointers to the investments which an user made
	Investment* currentInv; //the pointer stores the address to the Investment object, which was chosen as current used
	int invCounter; //it stores the number of investments
public:
	InvestmentManager();
	~InvestmentManager();

	Investment* addInvestment(double m_money, double m_percent, int m_months); //it adds the new Investment object to the vector and set this object as a current investment, returns the pointer to the new investment
	Investment* chooseInvestment(int choice); //it sets the current investment, return pointer to chosen investment. Remember: choice=0 is the first object in investment vector
	void deleteCurrentInvestment(); //delete the current investment and set the first investment as current
		
	std::vector<Investment*>* getInvestments(); //it returns the pointer to investments vector
	Investment* getCurrentInv(); //it returns the pointer to the current investment
	int getInvCounter();
};

