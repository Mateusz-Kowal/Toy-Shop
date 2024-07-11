#include "produkt.h"

using namespace std;

Produkt::Produkt(std::string n, float c, std::string p, float w, int d)
{
	nazwa = n;
	cena = c;
	producent = p;
	waga = w;
	dIlosc = d;
}

void Produkt::dostawa()
{
	
}

void Produkt::zakup()
{

}

void Produkt::sprawdz()
{

}

int Produkt::getIlosc()
{
	return -1;
}

string Produkt::getNazwa()
{
	return "";
}