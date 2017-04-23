#pragma once
#include "Potwory.h"
#include <iostream>
using namespace std;

class Drakonid : public virtual Potwory
{
protected:
	int hp;
	string wielkoscSkrzydel;
	int rozmiar();
	Drakonid(string wielkosc, int hp);

private:
	void wyswietl();

};

