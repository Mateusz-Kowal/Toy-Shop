#include "gry.h"

using namespace std;

Gry::Gry(std::string n, float c, std::string p, float w, int d, int i, int s)
{
	nazwa = n;
	cena = c;
	producent = p;
	waga = w;
	dIlosc = d;
	iGraczy = i;
	sWiek = s;
}

void Gry::dostawa()
{
	dIlosc++;
}

void Gry::zakup()
{
	dIlosc--;
}

void Gry::sprawdz()
{
	cout << "Oto " << nazwa << " o cenie " << cena << " od producenta " << producent << ". Wazy " << waga << " i jest ich w sumie dostepnych " << dIlosc << "." << endl;
	cout << "Gra jest przeznaczona dla " << iGraczy << " w wieku " << sWiek << " lat." << endl << endl;
}

int Gry::getIlosc()
{
	return dIlosc;
}

string Gry::getNazwa()
{
	return nazwa;
}