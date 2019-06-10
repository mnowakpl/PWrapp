#include <iostream>
#include <fstream>
#include <string>
#include "Kwadrat.h"
#include "Trojkat.h"
#include "Kolo.h"

using namespace std;

int instrukcja(int liczba)
{
	cout << "Wybierz figure:" << endl;
	cout << "1 - kwadrat" << endl;
	cout << "2 - trojkat" << endl;
	cout << "3 - kolo" << endl;

	cin >> liczba;

	return liczba;
}

void kwadrat()
{
	Kwadrat k;
	k.parametr();
	k.obwod();
	k.pole();
}

void trojkat()
{
	Trojkat t;
	t.parametr();
	t.obwod();
	t.pole();
}

void kolo()
{
	Kolo k;
	k.parametr();
	k.obwod();
	k.pole();
}

void zapis(string figura)
{
	ofstream fout;
	fout.open("\Figura.txt");
	fout << "Wybrano figurę: " << figura << endl;
	fout.close();
}

void brak()
{
	cout << "Nie wybrano zadnej figury!" << endl;
}

int main()
{
	int wybor = 0;
	string figura;

	wybor = instrukcja(wybor);
	switch (wybor)
	{
	case 1:
		figura = "kwadrat";
		kwadrat();
		zapis(figura);
		break;

	case 2: 
		figura = "trójkąt";
		trojkat(); 
		zapis(figura);
		break;

	case 3: 
		figura = "koło";
		kolo(); 
		zapis(figura);
		break;

	default: brak();
		break;
	}

	return 0;
}