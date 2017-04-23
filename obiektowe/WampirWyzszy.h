#pragma once
#include "Wampiry.h"
#include <string>

using namespace std;


class WampirWyzszy : public Wampiry
{

	string imie;

public:
	int ID;
	static int indeks;
	void wampir();

	void atak();
	void wypisz();
	WampirWyzszy(string pl = "mezczyzna", string im = "Detlaf", string m = "ogluszenie", int wi = 10000);
	
};

