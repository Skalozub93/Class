#include <iostream>
using namespace std;

class Cat
{private:
	
	string name; 
	string color; 
	int age; 
	double weight = 5;
	bool is_hungry; 
	bool eat; 
	int Energy_Reserve;
	bool Cat_Sleep;
	bool Cat_Playing;
	bool hunting;

public:
	void SetName();
	void SetColor();
	void SetAge();
	void SetPlay();
	void SetSleep();
	void SetHunt();
	void SetHungry();
	void SetEat();
	void SetEnergy();
	void SetSpeak();
	void SetPrint();

	/*string GetName() const
	{
		return name;
		
	}
	string GetColor() const
	{
		return color;
	}
	int GetAge() const 
	{
		return age;
	}
	double GetWeight() const
	{
		return weight;
	}
	bool GetIsHungry() const
	{
		return is_hungry;
	}
	bool GetEat() const
	{
		return eat;
	}
	int GetEnergyReserve() const
	{
		return Energy_Reserve;
	}
	bool GetCatSleep() const
	{
		return Cat_Sleep;
	}
	bool GetCatPlaying() const
	{
		return Cat_Playing;
	}
	bool GetHunting() const
	{
		return hunting;
	}*/
};

