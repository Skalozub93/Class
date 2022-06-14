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

Cat::Cat()
{
	SetName("Murzik");
	SetColor("Black");
	SetAge(6);
	SetHungry(false);
	SetEat(false);
	SetSleep(true);
	SetPlay(true);
	SetHunt(true);
	SetEnergy(50);
	SetSpeak("MEEOW");
}
Cat::Cat(string n)
{
	SetName("Murzik");
	SetColor("Black");
	SetAge(6);
	SetHungry(false);
	SetEat(false);
	SetSleep(true);
	SetPlay(true);
	SetHunt(true);
	SetEnergy(50);
	SetSpeak("MEEOW");
}
Cat::Cat(string n, string c)
{
	SetName("Murzik");
	SetColor("Black");
	SetAge(6);
	SetHungry(false);
	SetEat(false);
	SetSleep(true);
	SetPlay(true);
	SetHunt(true);
	SetEnergy(50);
	SetSpeak("MEEOW");
}
Cat::Cat(string n, string c, int a)
{
	SetName("Murzik");
	SetColor("Black");
	SetAge(6);
	SetHungry(false);
	SetEat(false);
	SetSleep(true);
	SetPlay(true);
	SetHunt(true);
	SetEnergy(50);
	SetSpeak("MEEOW");
}
Cat::Cat(string n, string c, int a, bool pl)
{
	SetName("Murzik");
	SetColor("Black");
	SetAge(6);
	SetHungry(false);
	SetEat(false);
	SetSleep(true);
	SetPlay(true);
	SetHunt(true);
	SetEnergy(50);
	SetSpeak("MEEOW");
}
Cat::Cat(string n, string c, int a, double w, bool pl)
{
	SetName("Murzik");
	SetColor("Black");
	SetAge(6);
	SetHungry(false);
	SetEat(false);
	SetSleep(true);
	SetPlay(true);
	SetHunt(true);
	SetEnergy(50);
	SetSpeak("MEEOW");
}
Cat::Cat(string n, string c, int a, double w, bool pl, bool s)
{
	SetName("Murzik");
	SetColor("Black");
	SetAge(6);
	SetHungry(false);
	SetEat(false);
	SetSleep(true);
	SetPlay(true);
	SetHunt(true);
	SetEnergy(50);
	SetSpeak("MEEOW");
}
Cat::Cat(string n, string c, int a, double w, bool pl, bool s, bool h)
{
	SetName("Murzik");
	SetColor("Black");
	SetAge(6);
	SetHungry(false);
	SetEat(false);
	SetSleep(true);
	SetPlay(true);
	SetHunt(true);
	SetEnergy(50);
	SetSpeak("MEEOW");
}
Cat::Cat(string n, string c, int a, double w, bool pl, bool s, bool h, bool hung)
{
	SetName("Murzik");
	SetColor("Black");
	SetAge(6);
	SetHungry(false);
	SetEat(false);
	SetSleep(true);
	SetPlay(true);
	SetHunt(true);
	SetEnergy(50);
	SetSpeak("MEEOW");
}
Cat::Cat(string n, string c, int a, double w, bool pl, bool s, bool h, bool hung, bool eat)
{
	SetName("Murzik");
	SetColor("Black");
	SetAge(6);
	SetHungry(false);
	SetEat(false);
	SetSleep(true);
	SetPlay(true);
	SetHunt(true);
	SetEnergy(50);
	SetSpeak("MEEOW");
}
Cat::Cat(string n, string c, int a, double w, bool pl, bool s, bool h, bool hung, bool eat, int energy)
{
	SetName("Murzik");
	SetColor("Black");
	SetAge(6);
	SetHungry(false);
	SetEat(false);
	SetSleep(true);
	SetPlay(true);
	SetHunt(true);
	SetEnergy(50);
	SetSpeak("MEEOW");
}
Cat::Cat(string n, string c, int a, double w, bool pl, bool s, bool h, bool hung, bool eat, int energy, string v)
{
	SetName("Murzik");
	SetColor("Black");
	SetAge(6);
	SetHungry(false);
	SetEat(false);
	SetSleep(true);
	SetPlay(true);
	SetHunt(true);
	SetEnergy(50);
	SetSpeak("MEEOW");
}

