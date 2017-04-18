#include "Example7.h"
#include <iostream>



Example7::Example7()
	: WeeklySales(0)
	
{
	PricePerUnit = 225;
	WeeklyWage = 600;
	Salary = 7.0;
	HoursPerWeek = 40;
	Commission2 = 0.1;
	Commission3 = 0.2;
	BonusPerUnit = 20;
}


Example7::~Example7()
{
}


int Example7::GetInput()
{

	std::cout << "Enter number of units sold per week: ";
	if (!(std::cin >> WeeklySales)) {
		std::cout << "Integer Numbers only\n";
		return 0;
	}
	else {
		return WeeklySales; //Is it good???
	}
}


void Example7::CalcMethod1()
{
	std::cout << "Method 1: " << WeeklyWage<<"\n";
}


void Example7::CalcMethod2(int Sales)
{
	double PerHour, TotalPay, Commission;

	PerHour = Salary * HoursPerWeek;
	Commission = (Sales * PricePerUnit) * Commission2;
	TotalPay = PerHour + Commission;
	std::cout << "Method 2: " << TotalPay << "\n";
}


void Example7::CalcMethod3(int Sales)
{
	int Extra;
	double TotalPay, Commission;

	Extra = BonusPerUnit * Sales;
	Commission = (Sales * PricePerUnit) * Commission3;
	TotalPay = Extra + Commission;
	std::cout << "Method 3: " << TotalPay <<"\n";
}


int Example7::Interface()
{
	if (GetInput() == 0)
		return 0;
	CalcMethod1();
	CalcMethod2(WeeklySales);
	CalcMethod3(WeeklySales);
	return 1;

}
