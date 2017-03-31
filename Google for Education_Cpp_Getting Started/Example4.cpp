#include "Example4.h"
#include <iostream>
#include <cstdlib>
#include <time.h>


Example4::Example4()
	: random(0)
{
	guess_random = 0;
}


Example4::~Example4()
{
}


// //Random Number Generation
int Example4::GenerateRandomNumber(int range)
{
	srand(time(NULL));
	int random_number = rand() % range;
	return random_number;
}


void Example4::GuessingGame()
{
	random = GenerateRandomNumber(100);
	
}
