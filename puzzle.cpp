#include "puzzle.h"

using namespace std;

Puzzle::Puzzle(std::string n, float c, std::string p, float w, int d, int i)
{
	nazwa = n;
	cena = c;
	producent = p;
	waga = w;
	dIlosc = d;
	iElementow = i;
}

void Puzzle::dostawa()
{
	dIlosc++;
}

void Puzzle::zakup()
{
	dIlosc--;
}

void Puzzle::sprawdz()
{
	cout << "Oto " << nazwa << " o cenie " << cena << " od producenta " << producent << ". Wazy " << waga << " i jest ich w sumie dostepnych " << dIlosc << "." << endl;
	cout << "Puzzle te maja " << iElementow << " elementow." << endl << endl;
}

int Puzzle::getIlosc()
{
	return dIlosc;
}

string Puzzle::getNazwa()
{
	return nazwa;
}