#include "klocki.h"

using namespace std;

Klocki::Klocki(std::string n, float c, std::string p, float w, int d, enum Rodzaje r)
{
	nazwa = n;
	cena = c;
	producent = p;
	waga = w;
	dIlosc = d;
	rodzaj = r;
}

void Klocki::dostawa()
{
	dIlosc++;
}

void Klocki::zakup()
{
	dIlosc--;
}

void Klocki::sprawdz()
{
	cout << "Oto " << nazwa << " o cenie " << cena << " od producenta " << producent << ". Wazy " << waga << " i jest ich w sumie dostepnych " << dIlosc << "." << endl;
	switch (rodzaj)
	{
		case 1:
		{
			cout << "Sa to klocki duplo." << endl << endl; 
			break;
		}
		case 2:
		{
			cout << "Sa to klocki drewniane." << endl << endl;
			break;
		}
		default:
		{
			cout << "Sa to klocki lego." << endl << endl;
		}
	}
}

int Klocki::getIlosc()
{
	return dIlosc;
}

string Klocki::getNazwa()
{
	return nazwa;
}