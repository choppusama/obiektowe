#include "WampirWyzszy.h"
#include <iostream>

using namespace std;

void WampirWyzszy::wampir()
{
	cout << "Podaj plec:" << endl;
	cin >> plec;
	cout << "Podaj imie:" << endl;
	cin >> imie;
	cout << "Podaj moc" << endl;
	cin >> moc;
	ID = indeks;
	indeks++;
}

void WampirWyzszy::atak()
{
	przemiana();
	cout << "Wampir wykonal specjalny atak" << endl;
}

void WampirWyzszy::wypisz()
{
	cout << "Wiek: " << wiek << endl << "Imie;" << imie << "Moc: " << moc << endl << "Plec: " << plec << endl;
}

WampirWyzszy::WampirWyzszy(string pl, string im, string m, int wi) :Wampiry(wi)
{
	plec = pl;
	imie = im;
	moc = m;
}