#include <iostream>
#include <ctime>
#include <windows.h>
#include "Cat.h"
using namespace std;


int main()
{
	srand((0));
	Cat cat;
	cat.SetName();
	cat.SetColor();
	cat.SetAge();
	cat.SetHungry();
	cat.SetEat();
	cat.SetSleep();
	cat.SetPlay();
    cat.SetHunt();
	cat.SetEnergy();
	cat.SetSpeak();
	cat.SetPrint();
	

	
	while (true)
	{
		cat.SetEat();
		cat.SetSleep();
		cat.SetPlay();
		cat.SetHunt();
		Sleep(1000);
		system("cls");
	}
	
}