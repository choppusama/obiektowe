#include "Smok.h"
#include <iostream>
#include <string>

using namespace std;

Smok::Smok(string color, int wie, string skrzydla, int h) : Drakonid(skrzydla)
{
	kolor = color;
	wiek = wie;
	hp = h;
}

void Smok::cechy()
{
	cout << "Podaj kolor lusek smoka:" << endl;
	cin >> kolor;
	cout << "Podaj wiek smoka:" << endl;
	cin >> wiek;
	cout << "Podaj hp" << endl;
	cin >> hp;
	ID = indeks;
	indeks++;
}

void Smok::ogien()
{
	cout << "Smok zional ogniem" << endl;
}

void Smok::wyswietlanie()
{
	cout << "Kolor: " << kolor << endl << "Wiek: " << wiek << endl << "Wiekosc skrzydel: " << wielkoscSkrzydel << endl << "HP: " << hp << endl;
}
