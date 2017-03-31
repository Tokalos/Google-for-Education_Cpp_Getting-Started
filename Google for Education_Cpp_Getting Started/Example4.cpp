#include "Example4.h"
#include <iostream>
#include <cstdlib>
#include <time.h>


Example4::Example4()
	: random(0)
	, guess_random(0)
	, flag(false)
	, number_of_guesses(0)
{
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
	std::cout << "Hello!\n This is a guessing game! Please insert number from 0 to 100\n";
	do {
		if (!(std::cin >> guess_random)) {
			std::cin.clear();
			std::cout << "Non numeric thing";
		}
		else {
			if (guess_random<random)
				std::cout << "The secret number is higher than:" << guess_random << std::endl;
			if (guess_random>random)
				std::cout << "The secret number is lower than:" << guess_random << std::endl;
			if(guess_random==random)
				{
				std::cout << "You have found the secret number:" << random << std::endl;
				flag = true;
				}
			}
		// cout<< "Your random number is: "<<random;
		number_of_guesses++;
	} while (flag == false);
	std::cout << "You tried to guess the number " << number_of_guesses << " times"<<std::endl;
}
