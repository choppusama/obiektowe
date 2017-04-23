#pragma once
#include <iostream>
#include "Upiory.h"

using namespace std;

class Poludnica : public Upiory
{
	string bron;
	int hp;
public:
	int ID;
	static int indeks;
	void wal();

	void atak();

	void wyswietl();

	Poludnica(string br = "pazury", int lata = 56, int h = 9086);

};

