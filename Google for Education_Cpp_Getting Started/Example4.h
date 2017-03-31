#pragma once
// Description: A guessing game where the player guesses the secret number.

class Example4
{
public:
	Example4();
	~Example4();
	// //Random Number Generation
	int GenerateRandomNumber(int range);
	int random;
	int guess_random;
	bool flag;
	void GuessingGame();
};

