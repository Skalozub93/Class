#pragma once
#include <iostream>
#include <ctime>
#include <windows.h>
#include "Cat.h"
using namespace std;


int main()
{
	srand((0));
	Cat cat;
	cat.SetName("Murzik");
	cat.SetColor("Black");
	cat.SetAge(6);
	cat.SetHungry(false);
	cat.SetEat(false);
	cat.SetSleep(true);
	cat.SetPlay(true);
    cat.SetHunt(true);
	cat.SetEnergy(50);
	cat.SetSpeak("MEEOW");
	cat.SetPrint();
	

	
	while (true)
	{
		cat.SetEat(false);
		cat.SetSleep(true);
		cat.SetPlay(true);
		cat.SetHunt(true);
		Sleep(1000);
		system("cls");
	}
	
}