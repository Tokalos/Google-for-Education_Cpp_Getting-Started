#include "Exercise1.h"
#include <iostream>



Exercise1::Exercise1()
{
	chirps = 0;
}


Exercise1::~Exercise1()
{
}


float Exercise1::ReturnTemp()
{
	return (40+chirps)/4.0;
}


void Exercise1::Interface()
{
	std::cout << "Please write the number of chirps you heard:";
	if (!(std::cin >> chirps)) {
		std::cin.clear();
		std::cout << "Non numeric thing";
	}
	else
	{
		std::cout << "Number of chirps: " << chirps << "\n";
		std::cout << "The temperature is: " << ReturnTemp() << " degrees\n";
	}
}
