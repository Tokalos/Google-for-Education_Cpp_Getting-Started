#pragma once
/*
You have just gotten a position as a salesperson for the ExerShoe company, specializing in high-end exercise shoes costing around $225 per pair. Your boss has given you three options for compensation, which you must choose before you begin your first day:
1.Straight salary of $600 per week;
2.A salary of $7.00 per hour plus a 10% commission on sales;
3.No salary, but 20% commissions and $20 for each pair of shoes sold
*/
class Example7
{
public:
	Example7();
	~Example7();

private:
	int PricePerUnit;
	int WeeklyWage;
	double Salary;
	int HoursPerWeek;
	double Commission2;
	double Commission3;
	int BonusPerUnit;
public:
	int GetInput();
	void CalcMethod1();
	void CalcMethod2(int Sales);
	void CalcMethod3(int Sales);
	int Interface();
	// Variable Used to calculate weekly sales and our Salary!
	int WeeklySales;
};

