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
	string voice;

public:
	void SetName(string n);
	void SetColor(string c);
	void SetAge(int a);
	void SetWeight(double w);
	void SetPlay(bool pl);
	void SetSleep(bool s);
	void SetHunt(bool h);
	void SetHungry(bool hung);
	void SetEat(bool eat);
	void SetEnergy(int energy);
	void SetSpeak(string v);
	void SetPrint();

	string GetName() const
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
	}

	Cat();
	Cat(string n);
	Cat(string n, string c);
	Cat(string n, string c, int a);
	Cat(string n, string c, int a, bool pl);
	Cat(string n, string c, int a, double w, bool pl);
	Cat(string n, string c, int a, double w, bool pl, bool s);
	Cat(string n, string c, int a, double w, bool pl, bool s, bool h);
	Cat(string n, string c, int a, double w, bool pl, bool s, bool h, bool hung);
	Cat(string n, string c, int a, double w, bool pl, bool s, bool h, bool hung, bool eat);
	Cat(string n, string c, int a, double w, bool pl, bool s, bool h, bool hung, bool eat, int energy);
	Cat(string n, string c, int a, double w, bool pl, bool s, bool h, bool hung, bool eat, int energy, string v);
};


