#pragma once
class FarmerBuysAnimals
{
public:

	FarmerBuysAnimals(float hp, float rp, float pp, int nd);
	~FarmerBuysAnimals();
	int horses;
	int rabbits;
	int pigs;
	float horse_price;
	float rabbits_price;
	float pig_price;
	int number_dolars;
	void HowManyAnimals();
};

