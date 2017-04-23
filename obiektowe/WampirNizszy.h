#pragma once
#include "Wampiry.h"
#include <string>

using namespace std;


class WampirNizszy :
	public Wampiry
{
	string rodzaj;
	
public:
	int ID;
	static int indeks;
	void wpisz();
	void atak();

	void wypisz();

	static void parametry();
	WampirNizszy(string pl = "kobieta", string im = "bruxa", string m = "hipnoza", int wi = 543);
};

