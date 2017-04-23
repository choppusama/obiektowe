#include "Upiory.h"
#include <iostream>

using namespace std;

int Upiory::latka()
{
	cout << "podaj wiek upiora" << endl;
	cin >> wiek;
	return wiek;
}



Upiory::Upiory(int lata, int hp)
{
	wiek = lata;
    this->hp = hp;
}
