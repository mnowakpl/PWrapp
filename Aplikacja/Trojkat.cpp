#include "Trojkat.h"
#include <iostream>

using namespace std;

void Trojkat::parametr()
{
	cout << "Podaj dlugosc podstawy trojkata: ";
	cin >> a;

	cout << "Podaj dlugosc ramienia trojkata: ";
	cin >> b;

	cout << "Podaj dlugosc drugiego ramienia trojkata: ";
	cin >> c;

	cout << "Podaj dlugosc wysokosci trojkata: ";
	cin >> h;
}

void Trojkat::obwod()
{
	int obw = a + b + c;
	cout << "Obwod: " << obw << endl;
}

void Trojkat::pole()
{
	int pole = (a * h) / 2;
	cout << "Pole: " << pole << endl;
}