#include "Kolo.h"
#include <iostream>

using namespace std;

void Kolo::parametr()
{
	cout << "Podaj dlugosc promienia kola: ";
	cin >> r;
}

void Kolo::obwod()
{
	double obw = 2 * r * (3.14);
	cout << "Obwod: " << obw << endl;
}

void Kolo::pole()
{
	double pole = r * r * 3.14;
	cout << "Pole: " << pole << endl;
}