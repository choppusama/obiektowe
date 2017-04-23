#pragma once
#include "Potwory.h"
class Wampiry : public Potwory
{
protected:
	int wiek;
	int dane();
	string moc;
	string plec;
	void przemiana();
	static void parametry();
	Wampiry(int lata, string plec, string moc);

};

