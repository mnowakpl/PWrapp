#include "Kwadrat.h"
#include <iostream>

using namespace std;

void Kwadrat::parametr()
{
	cout << "Podaj dlugosc boku kwadratu: ";
	cin >> a;
}

void Kwadrat::obwod()
{
	int obw = a * 4;
	cout << "Obwod: " << obw << endl;
}

void  Kwadrat::pole()
{
	int pole = a * a;
	cout << "Pole: " << pole << endl;
}