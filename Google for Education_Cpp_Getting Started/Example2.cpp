#include "Example2.h"
#include <iostream>

using namespace std;


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
		cout << "Please enter numeric value (-1 will make the program quit)" << endl;
		if (!(cin >> input_var)) // the if is in the loop, everything in the () will run to check the condition
		{
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "oh no! You entered non numeric character :( Try again !  " << endl;
		}
		if (input_var != -1 && input_var != 0) // It checks if the value is -1, and if it is not the message appears
		{
			cout << "You have entered: " << input_var << endl;
		}
	} while (input_var != -1);
	cout << "All done." << endl;
}
