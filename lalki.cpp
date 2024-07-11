#include "lalki.h"

using namespace std;

Lalki::Lalki(std::string n, float c, std::string p, float w, int d)
{
	nazwa = n;
	cena = c;
	producent = p;
	waga = w;
	dIlosc = d;
}

void Lalki::sprawdz()
{
	cout << "Oto " << nazwa << " o cenie " << cena << " od producenta " << producent << ". Wazy " << waga << " i jest ich w sumie dostepnych " << dIlosc << "." << endl << endl;
}

void Lalki::dostawa()
{
	dIlosc++;
}

void Lalki::zakup()
{
	dIlosc--;
}

int Lalki::getIlosc()
{
	return dIlosc;
}

string Lalki::getNazwa()
{
	return nazwa;
}