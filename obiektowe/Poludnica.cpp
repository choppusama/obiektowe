#include "Poludnica.h"
#include <string>
using namespace std;

void Poludnica::wal()
{
	cout << "Wybierz bron" << endl;
	cin >> bron;
	cout << "Podaj HP" << endl;
	cin >> hp;
	ID = indeks;
	indeks++;
}

void Poludnica::atak()
{
	cout << "Poludnica zaatakowala" << endl;
}

void Poludnica::wyswietl()
{
	cout << "Wiek: " << wiek << endl << "Bron: " << bron << endl << "HP: " << hp << endl;
}

Poludnica::Poludnica(string br, int lata, int h) : Upiory(lata)
{
	bron = br;
	hp = h;
}
