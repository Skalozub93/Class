#include "Cat.h"

void Cat::SetName()
{
	if (name == "Vlad")
	{
		cout << "This is incorrect name for your pet!!!" << "\n";
	}
	else
		cout << name << "\n";
}
void Cat::SetColor()
{
	if (color == "Sero-Buro-Malinoviy")
	{
		cout << "You are crazy!!!" << "\n";
	}
	else
		cout << color << "\n";
}
void Cat::SetAge()
{
	int agez;
	if (agez <= 1 || agez >= 20)
	{
		cout << "Age invalid" << "\n";
	}
	else
		cout << agez << "\n";
}
void Cat::SetPlay()
{
	if (is_hungry == false) {
		cout << name << " is playing\n";
	}
	else
	{
		cout << "I`m hungry!!!" << "\n";
	}

}

void Cat::SetSleep()
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

void Cat::SetHunt()
{
	//is_hungry = true;
	int probability = rand() % 2;
	if (probability == 1)
	{
		cout << name << " is hunting\n";
		cout << "Cat eating mouse" << "\n";
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

void Cat::SetHungry()
{
	if (is_hungry == false) {
		cout << name << " is hungry\n";
	}
}

void Cat::SetEat()
{
	if (eat == false)
	{
		weight += 0.5;
	}

}

void Cat::SetEnergy()
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

void Cat::SetSpeak()
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

