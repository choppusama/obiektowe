#include "WampirNizszy.h"
#include <iostream>

using namespace std;


void WampirNizszy::wpisz()
{
	cout << "Podaj plec:" << endl;
	cin >> plec;
	cout << "Podaj rodzaj:" << endl;
	cin >> rodzaj;
	cout << "Podaj moc" << endl;
	cin >> moc;
	ID = indeks;
	indeks++;
}

void WampirNizszy::atak()
{
	przemiana();
	cout << "Wampir wykonal specjalny atak" << endl;
}

void WampirNizszy::wypisz()
{
	cout << "Wiek: " << wiek << endl << "Rodzaj:" << rodzaj << "Moc: " << moc << endl << "Plec: " << plec << endl;
}

WampirNizszy::WampirNizszy(string pl, string im, string m, int wi) :Wampiry(wi)
{
	plec = pl;
	rodzaj = im;
	moc = m;
}