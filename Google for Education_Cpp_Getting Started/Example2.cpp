#include "Example2.h"
#include <iostream>




Example2::Example2()
{
	input_var = 0;
}


Example2::~Example2()
{
}


void Example2::UseOfCin()
{
	do {
		std::cout << "Please enter numeric value (-1 will make the program quit)" << std::endl;
		if (!(std::cin >> input_var)) // the if is in the loop, everything in the () will run to check the condition
		{
			std::cin.clear();
			std::cin.ignore(10000, '\n');
			std::cout << "oh no! You entered non numeric character :( Try again !  " << std::endl;
		}
		if (input_var != -1 && input_var != 0) // It checks if the value is -1, and if it is not the message appears
		{
			std::cout << "You have entered: " << input_var << std::endl;
		}
	} while (input_var != -1);
	std::cout << "All done." << std::endl;
}
