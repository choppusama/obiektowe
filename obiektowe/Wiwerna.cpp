#include "Wiwerna.h"
#include <iostream>
#include <string>

using namespace std;

Wiwerna::Wiwerna(string kl, string pl, string skrzydla, int h) : Drakonid(skrzydla)
{
	klasa = kl;
	plec = pl;
	hp = h;
}

void Wiwerna::jad()
{
	cout << "Wiwerna plunela jadem" << endl;
}

void Wiwerna::dane()
{
	cout << "Podaj klase:" << endl;
	cin >> klasa;
	cout << "Podaj plec:" << endl;
	cin >> plec;
	cout << "Podaj hp" << endl;
	cin >> hp;
	ID = indeks;
	indeks++;
}

void Wiwerna::wyswietlanie()
{
	cout << "klasa: " << klasa << endl << "plec: " << plec << endl << "wielkosc skrzydel: " << wielkoscSkrzydel << endl << "hp: " << hp << endl;
}

