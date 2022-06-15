#include <iostream>
using namespace std;

class Cat
{
private:

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

	string GetName() const;
	string GetColor() const;
	int GetAge() const;
	double GetWeight() const;
	bool GetIsHungry() const;
	bool GetEat() const;
	int GetEnergyReserve() const;
	bool GetCatSleep() const;
	bool GetCatPlaying() const;
	bool GetHunting() const;

	Cat();
	Cat(string n);
	Cat(string n, string c);
	Cat(string n, string c, int a);
	Cat(string n, string c, int a, bool pl);
};