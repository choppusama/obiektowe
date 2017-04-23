#include "Demon.h"
#include <iostream>

using namespace std;

void Demon::dane()
{
	cout << "Podaj grzech:" << endl;

	cout << "Podaj imie Demona" << endl;
	
	cout << "Podaj HP" << endl;

}

void Demon::klatwa()
{
	cout << "Demon rzucil klatwe" << endl;
}

void Demon::wyswietl()
{
	cout << "Wiek: " << wiek << endl << "Imie;" << imie << "Bron: " << grzech << endl << "HP : " << hp << endl;
}

void Demon::parametry()
{

}

Demon::Demon(string im, string grz, int wi, int h) : Upiory(wi)
{
	imie = im;
	grzech = grz;
	hp = h;
}