#include "Example1.h"
#include <iostream>
#include <iomanip> // Library for setw()
using namespace std;


Example1::Example1()
{
}


Example1::~Example1()
{
}


void Example1::HelloWorld()
{
	// cout <<  setiosflags(ios::left); // additional way to set it to left side
	for (int i = 0; i<6; i++)
	{
		for (int j = 0; j<4; j++)
			cout << setw(17) << std::left << "Hello World! "; // setw(17) - sets the width of hello world! to 17 characters std::left - puts makes the hello world appear on left side of screen 
		cout << endl;
	}
}
