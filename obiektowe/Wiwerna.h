#pragma once
#include "Drakonid.h"
class Wiwerna :
	public Drakonid
{
	string klasa;
	string plec;

public:
	int ID;
	static int indeks;

	Wiwerna(string kl = "krolewska", string pl = "samica", string skrzydla = "srednie", int h = 8765);
	void jad();
	void dane();
	void wyswietlanie();
};

