#include "Cat.h"
void Cat::SetName(string n)
{
	if (name == "Vlad")
	{
		cout << "This is incorrect name for your pet!!!" << "\n";
	}
	else
		cout << name << "\n";
}
void Cat::SetColor(string c)
{
	if (color == "Sero-Buro-Malinoviy")
	{
		cout << "You are crazy!!!" << "\n";
	}
	else
		cout << color << "\n";
}
void Cat::SetAge(int a)
{;
	if (age <= 1 || age >= 20)
	{
		cout << "Age invalid" << "\n";
	}
	else
		cout << age << "\n";
}
void Cat::SetWeight(double w)
{
	if (w >= 100)
	{
		cout << "Your cat is dead!!!" << "\n";
	}
}
void Cat::SetPlay(bool pl)
{
	if (is_hungry == false) {
		cout << name << " is playing\n";
	}
	else
	{
		cout << "I`m hungry!!!" << "\n";
	}

}

void Cat::SetSleep(bool s)
{
	is_hungry = true;
	if (Cat_Sleep == true)
	{
		cout << name << " is sleeping\n";
		Energy_Reserve += 100;
	}
	else if (is_hungry == false)
	{
		weight -= 0.100;
	}
}

void Cat::SetHunt(bool h)
{
	//is_hungry = true;
	int probability = rand() % 2;
	if (probability == 1)
	{
		cout << name << " is hunting\n";
		cout << name << "eating mouse" << "\n";
	}
	else
	{
		cout << "Fail!" << "\n";
	}
	if (Energy_Reserve <= 10)
	{
		Cat_Sleep = true;
	}
	if (hunting == true)
	{
		Energy_Reserve -= 10;
	}
}

void Cat::SetHungry(bool hung)
{
	if (is_hungry == false) {
		cout << name << " is hungry\n";
	}
}

void Cat::SetEat(bool eat)
{
	if (eat == false)
	{
		weight += 0.5;
	}

}

void Cat::SetEnergy(int energy)
{
	if (Energy_Reserve == 0)
	{
		cout << "Cat is dead!!!" << "\n";
	}
	if (Energy_Reserve > 100)
	{
		cout << "The cat is full of energy!" << "\n";
	}
}

void Cat::SetSpeak(string v)
{
	if (is_hungry == true || eat == false)
	{
		cout << "MEEEEEEOOOOOOOOWW!!!" << "\n";
	}
}

void Cat::SetPrint()
{
	cout << "Name cat is :" << name << "\n";
	cout << "Weight cat is :" << weight << "\n";

	if (is_hungry == true)
	{
		cout << "Cat eating" << "\n";
		Energy_Reserve += 10;
		cout << Energy_Reserve << "\n";
	}
	else
	{
		cout << "Cat is not a hungry" << "\n";
	}

	if (Cat_Playing == true)
	{
		Energy_Reserve -= 20;
	}
	else if (Cat_Playing == 0)
	{
		cout << "Cat is tired" << "\n";
	}
}


string Cat::GetName() const
{
	return name;

}
string Cat::GetColor() const
{
	return color;
}
int Cat::GetAge() const
{
	return age;
}
double Cat::GetWeight() const
{
	return weight;
}
bool Cat::GetIsHungry() const 
{
	return is_hungry;
}
bool Cat::GetEat() const
{
	return eat;
}
int Cat::GetEnergyReserve()  const
{
	return Energy_Reserve;
}
bool Cat::GetCatSleep() const
{
	return Cat_Sleep;
}
bool Cat::GetCatPlaying() const
{
	return Cat_Playing;
}
bool Cat::GetHunting() const
{
	return hunting;
}

Cat::Cat() :Cat("Murzik"){}
Cat::Cat(string n) :Cat(n,"Black") {}
Cat::Cat(string n, string c) :Cat(n,c,5){}
Cat::Cat(string n, string c, int a) :Cat(n,c,5,true){}
Cat::Cat(string n, string c, int a, bool pl) 
{
	SetName("Bobick");
	SetColor("Purple");
	SetAge(13);
	SetHungry(false);
	SetEat(true);
	SetSleep(false);
	SetPlay(true);
	SetHunt(false);
	SetEnergy(30);
	SetSpeak("MEEOW");
}


