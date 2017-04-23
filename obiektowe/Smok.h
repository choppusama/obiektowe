#pragma once
#include "Drakonid.h"
class Smok : public Drakonid
{
private:
	string kolor;
	int wiek;


public:
	int ID;
	static int indeks;
	
	Smok(string color = "czerwony", int wie = 876, string skrzydla = "duze", int h = 650987);
	void cechy();
	void ogien();
	void wyswietlanie();
};

