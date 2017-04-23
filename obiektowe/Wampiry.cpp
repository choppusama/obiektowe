#include "Wampiry.h"
#include <iostream>

using namespace std;


int Wampiry::dane()
{
	cout << "podaj wiek wampira" << endl;
	cin >> wiek;
	return wiek;
}

void Wampiry::przemiana()
{
	cout << "wampir przemienil sie w krwiorzercza bestie" << endl;
}

void Wampiry::parametry()
{
	cout << "podaj wiek wampira" << endl;
}

Wampiry::Wampiry(int lata, string plec, string moc)
{
	this->plec = plec;
	this->moc = moc;
	wiek = lata;
}
