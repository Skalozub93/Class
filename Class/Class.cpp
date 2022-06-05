#include <iostream>
using namespace std;

class Cat
{
public: // модификатор доступа, если не указать public, то будет private, и компоненты класса будут недоступны.
	// поля:
	string name; // кличка кота
	string color; // цвет шёрстки
	int age; // возраст в годах
	double weight = 5; // вес
	bool is_hungry; // голодный или нет?
	bool eat; 
	int energy_Reserve;
	// методы:
	void Play()
	{
		cout << name << " is playing\n";
	}

	void Sleep()
	{
		cout << name << " is sleeping\n";
	}

	void Hunt()
	{
		cout << name << " is hunting\n";
	}

	void Hungry()
	{
		if (is_hungry == false) {
			cout << name << " is hungry\n";
		}
	}

	void Eat()
	{
		if (eat == false)
		{
			weight += 0.5;
		}
		
	}

	void Energy()
	{
		if (energy_Reserve == 0)
		{
			cout << "Cat is dead!!!" << "\n";
		}
		if (energy_Reserve > 100)
		{
			cout << "The cat is full of energy!" << "\n";
		}
	}

	void Speak()
	{
		if (is_hungry == true || eat == false)
		{
			cout << "MEEEEEEOOOOOOOOWW!!!" << "\n";
		}
	}

	void Print()
	{
		cout << "Name cat is :" << name << "\n";
		cout << "Weight cat is :" << weight << "\n";

		if (is_hungry == true)
		{
			cout << "Cat eating" << "\n";
			energy_Reserve += 10;
			cout << energy_Reserve << "\n";
		}
		else 
		{
			cout << "Cat is not a hungry" << "\n";
		}
	}
};

int main()
{
	Cat cat;
	cat.name = "Barsik";
	cat.is_hungry = true;
	cat.eat = false;
	cout << "Please, enter the energy for the cat: " << "\n";
	cin >> cat.energy_Reserve;

	cat.Hungry();
	cat.Eat();
	cat.Print();
	cat.Energy();
	cat.Speak();
}