#pragma once
class GreatestCommonDivisor
{
public:
	GreatestCommonDivisor();
	~GreatestCommonDivisor();
	int a;
	int b;
//	int c;
	int GreatestCDRecursive(int a, int b);
	int GreatestCDNonRecursive(int a, int b);
	void Interface();
};

