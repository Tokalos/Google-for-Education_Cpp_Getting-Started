#include "RecursiveFactorial.h"



RecursiveFactorial::RecursiveFactorial()
	: books(0)
{
}


RecursiveFactorial::~RecursiveFactorial()
{
}


int RecursiveFactorial::Factorial(int in)
{
	int temp;
	if (in == 0)
		return 1;
	temp = in*Factorial(in - 1);
	return temp;
}
