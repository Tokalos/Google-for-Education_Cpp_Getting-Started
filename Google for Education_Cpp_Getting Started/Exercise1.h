#pragma once

/*The common field cricket chirps in direct proportion to the current temperature. 
Adding 40 to the number of time a cricket chirps in a minute, then dividing that value by 4 gives us the temperature. 
Write a program that takes as input the number of chirps in a minute and prints the current temperature. */

class Exercise1
{
public:
	Exercise1();
	~Exercise1();
	int chirps;
	float ReturnTemp();
	void Interface();
};

