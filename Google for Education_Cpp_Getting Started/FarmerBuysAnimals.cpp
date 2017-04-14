#include "FarmerBuysAnimals.h"
#include <iostream>
//Horses cost $10, pigs cost $3, and rabbits are only $0.50. A farmer buys 100 animals for $100, How many of each animal did he buy?  


FarmerBuysAnimals::FarmerBuysAnimals(float hp, float rp, float pp, int nd) // we can change the inputs of the excercise
{
	horses = 0;
	rabbits = 0;
	pigs = 0;
	horse_price = hp;
	rabbits_price = rp;
	pig_price = pp;
	number_dolars = nd;
	//add number of animals later!
}


FarmerBuysAnimals::~FarmerBuysAnimals()
{
}


void FarmerBuysAnimals::HowManyAnimals()
{
	std::cout << "Current inputed values:\n Horse price: " << horse_price << "\n Pig price:" <<pig_price << "\n Rabbits price: " << rabbits_price << "\n Dolars:" << number_dolars;
	for (horses; horses< 100; horses++) // main loop of horses we know than the number of animals is at least 100
		for (pigs = 0; pigs<100; pigs++) // loop of pigs
			for (rabbits = 0; rabbits<100; rabbits++) // loop of rabbits
				if (horses + pigs + rabbits == 100) { // we check if the number of animals is equal to 100
					if (((horse_price * horses) + (pig_price * pigs) + (rabbits_price*rabbits)) == number_dolars) //check if the sum of all the animal prices is 100
						std::cout << "\nFound :" << horses << " horses, " << pigs << " pigs, " << rabbits << " rabbits.";
				}

}
