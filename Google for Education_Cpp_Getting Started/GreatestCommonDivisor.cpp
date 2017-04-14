#include "GreatestCommonDivisor.h"
#include <iostream>



GreatestCommonDivisor::GreatestCommonDivisor()
	: a(0)
{
	b = 0;
	//  c = 0;
}


GreatestCommonDivisor::~GreatestCommonDivisor()
{
}

int GreatestCommonDivisor::GreatestCDRecursive(int a, int b)
{
	int c;
	c = a % b;
	a = b;
	b = c;
	if (c == 0)
		return a;
	else
	return GreatestCDRecursive(a, b);
}

int GreatestCommonDivisor::GreatestCDNonRecursive(int a, int b)
{
	int c=0;
	do {
		c = a%b;
		a = b;
		b = c;

	} while (c != 0);
	return a;
}


void GreatestCommonDivisor::Interface()
{
	std::cout << "The program inputs are 18 and 9.\nThe first recursive algorythm results:" << GreatestCDRecursive(18, 9) << "\nThe second algorythm: " << GreatestCDNonRecursive(18, 9)<<"\n";
	
}
