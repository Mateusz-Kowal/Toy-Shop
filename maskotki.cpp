#include "maskotki.h"

using namespace std;

Maskotki::Maskotki(std::string n, float c, std::string p, float w, int d, float h)
{
	nazwa = n;
	cena = c;
	producent = p;
	waga = w;
	dIlosc = d;
	wysokosc = h;
}

void Maskotki::dostawa()
{
	dIlosc++;
}

void Maskotki::zakup()
{
	dIlosc--;
}

void Maskotki::sprawdz()
{
	cout << "Oto " << nazwa << " o cenie " << cena << " od producenta " << producent << ". Wazy " << waga << " i jest ich w sumie dostepnych " << dIlosc << "." << endl;
	cout << "Maskotka ma " << wysokosc << " wysokosci." << endl << endl;
}

int Maskotki::getIlosc()
{
	return dIlosc;
}

string Maskotki::getNazwa()
{
	return nazwa;
}