#include "pch.h"
#include "investment.h"


investment::investment()
{
}


investment::~investment()
{
}

void investment::addMoney(int value)
{	
	if (value > 0)
		money += value;
	else
		std::cout << "Kwota musi by� wi�ksza od zera!" << std::endl;
}
