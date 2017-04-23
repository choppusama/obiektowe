#pragma once
#include <string>
#include "Upiory.h"

using namespace std;

class Demon : public Upiory
{
	string grzech;
	string imie;

public:
	int ID;
	static int indeks;
	void dane();
	void klatwa();
	void wyswietl();
	static void parametry();
	Demon(string im = "Lucyfer", string grz = "pycha", int wi = 10000, int h = 5470);
};

