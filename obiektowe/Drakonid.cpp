#include "Drakonid.h"
#include <iostream>
#include <string>

using namespace std;


int Drakonid::rozmiar()
{
	int wybor;
	cout << "wybierz wielkosc skrzydel" << endl;
	cout << "1. Male" << endl << "2. Srednie" << endl << "3. Duze" << endl;
	cin >> wybor;
	return wybor;
}

Drakonid::Drakonid(string wielkosc, int hp)
{
	wielkoscSkrzydel = wielkosc;
	this->hp = hp;
}



void Drakonid::wyswietl()
{
	cout << wielkoscSkrzydel << endl;

}
