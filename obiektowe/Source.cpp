#include<iostream>
#include<string>
#include <vector>
#include<map>
#include "Smok.h"
#include "Wiwerna.h"
#include "Poludnica.h"
#include "Demon.h"
#include "WampirNizszy.h"
#include "WampirWyzszy.h"

using namespace std;


string menu()
{
	string rozkaz;
	cout << "1.dodawanie obiektu" << endl << "2.usuwanie obiektu" << endl << "3. Modyfikacja obiektu" << endl;
	cout << "4. lista obiektow" << endl << "5.pokaz obiekt" << endl << "6. zabisz do pliku" << endl << "7.Odczytaj z Pliku" << endl;
	cin >> rozkaz;
	return rozkaz;
}


int main()
{
	int k;

	map<string, Smok*>lista;
	map<string, Wiwerna*>listaWiwern;
	map<string, Poludnica*>listaPolodnic;
	map<string, Demon*>listaDemonow;
	map<string, WampirNizszy*>listaWampirow;
	map<string, WampirWyzszy*>listaWampirowW;
	map<string, Potwory*> potwory;
	string rozkaz;
	
	Smok smoczek("Zloty", 346, "male", 18897);
	//listasmokow.push_back(smoczek);
	Smok smoczek2("czerwony", 3466, "duze", 986775);
	//listasmokow.push_back(smoczek2);
	Wiwerna wiwa("Krolewska", "samica", "duze", 200394);
	//listawiwern.push_back(wiwa);
	Wiwerna wiwa2;
	//listawiwern.push_back(wiwa2);
	Wiwerna wiwa3;
	//listawiwern.push_back(wiwa3);
	Poludnica pole("Miecz", 347, 23524);
	//listapoludnic.push_back(pole);
	Poludnica pole2;
	//listapoludnic.push_back(pole2);
	Poludnica pole3("luk", 45, 8765);
	//listapoludnic.push_back(pole3);
	Poludnica pole4;
	//listapoludnic.push_back(pole4);
	Demon demonik("Azazel", "pycha", 234552, 462266);
	//listademonow.push_back(demonik);
	Demon demonik2;
	//listademonow.push_back(demonik2);
	WampirNizszy bruxa("Kobieta", "bruxa", "ogluszenie", 23445);
	//listawampirownizszych.push_back(bruxa);
	WampirNizszy bruxa2;
	//listawampirownizszych.push_back(bruxa2);
	WampirNizszy alp("kobieta", "alp", "krzyk", 9876);
	//listawampirownizszych.push_back(alp);
	WampirNizszy alp2("mezczyzna", "alp", "pazury", 54398);
	//listawampirownizszych.push_back(alp2);
	WampirWyzszy wamo("Mezczyzna", "Regis", "Mgla", 2345453);
	//listawampirowwyzszych.push_back(wamo);
	WampirWyzszy wamp;
	//listawampirowwyzszych.push_back(wamp);
	string nazwaKlasy = "Potwory";

	bool sprawdz = true;
	bool prawda = true;
	while (prawda)
	{
		rozkaz = menu();

		if (rozkaz == "MO")
		{
			string ID;
			cin >> ID;
			if (nazwaKlasy == "WampirNizszy")
			{
				WampirNizszy *wampirNizszy = new WampirNizszy();
				potwory.insert(pair<string, Potwory*>(ID, wampirNizszy));
			}
			if (nazwaKlasy == "WampirWyzszy")
			{
				WampirWyzszy *wampirWyzszy = new WampirWyzszy();
				potwory.insert(pair<string, Potwory*>(ID, wampirWyzszy));
			}
			if (nazwaKlasy == "Poludnica")
			{
				Poludnica *poludnica = new Poludnica();
				potwory.insert(pair<string, Potwory*>(ID, poludnica));
			}
			if (nazwaKlasy == "Smok")
			{
				Smok *smok = new Smok;
				potwory.insert(pair<string, Potwory*>(ID, smok));
			}
			if (nazwaKlasy == "Demon")
			{
				Demon *demon = new Demon;
				potwory.insert(pair<string, Potwory*>(ID, demon));
			}
			if (nazwaKlasy == "Wiwerna")
			{
				Wiwerna *wiwerna = new Wiwerna;
				potwory.insert(pair<string, Potwory*>(ID, wiwerna));
			}
			else
			{
				cout << "Musisz byc w lisciu by dodac nowy obiekt" << endl;
		}
	system("pause");

	return 0;

}