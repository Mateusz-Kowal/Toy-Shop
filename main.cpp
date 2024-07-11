#include <iostream>
#include <fstream>
#include "produkt.h"
#include "klocki.h"
#include "lalki.h"
#include "puzzle.h"
#include "gry.h"
#include "maskotki.h"
#include "funkcje.h"

using namespace std;


void zapiszDoPliku(List<Produkt*> &s, string nazwa)									
{																						
	ofstream plik;
	plik.open(nazwa, std::fstream::app);
	for (int i=0; i<s.Capacity(); i++)
	{
		 plik << s.GetAt(i)->getNazwa() << "\t" << s.GetAt(i)->getIlosc() << endl;					
	}
	plik << "KONIEC ZAPISU" << endl << endl;
}


int main()
{ 
	List<Produkt*> sklep;
	

	Klocki* k1 = new Klocki("Klocki Lego", 100.0, "Klockolandia", 0.15, 9, lego);
	sklep.AddLast(k1);
	
	Klocki* k2 = new Klocki("Klocki Duplo", 100.0, "Klockolandia", 0.15, 4, duplo);
	sklep.AddLast(k2);

	Lalki* l = new Lalki("Lalki Barbie", 150.0, "Lalkolandia", 0.5, 7);
	sklep.AddLast(l);

	Puzzle* p = new Puzzle("Puzzle z Kucykami Pony", 55.55, "Kucolandia", 0.75, 15, 500);
	sklep.AddLast(p);

	Gry* g = new Gry("Gry Battlestar Gallactica", 299.0, "Gallactolandia", 1.5, 16, 4, 15);
	sklep.AddLast(g);

	Maskotki* m = new Maskotki("Pluszowa alpaka", 9999.99, "Alpakolandia", 100, 6, 230);
	sklep.AddLast(m);
	
//	sklep->PrintList();
	zapiszDoPliku(sklep, "Stan_sklepu.txt");			//		STAN POCZ¥TKOWY


	int tab1[6]={0, 0, 2, 5, 1, 0};																// tablica z informacj¹, ile rzeczy ka¿dego rodzaju kupi³ klient 1
	int ii = 0;																					// numeruje elementy listy
	for (int i=0; i<sklep.Capacity(); i++)
	{
		for (int j=0; j<tab1[ii]; j++)															// dla ka¿dego elementu listy wykonujemy tyle razy operacjê zakupu, ile jest w tablicy klienta
		{
			sklep.GetAt(i)->zakup();
		}
		ii++;
	}
	
	zapiszDoPliku(sklep, "Stan_sklepu.txt");			//		STAN PO PIERWSZYM KLIENCIE

	
	int tab2[6]={1, 1, 0, 0, 0, 2};																// tablica z informacj¹, ile rzeczy ka¿dego rodzaju kupi³ klient 2
	ii = 0;
	for (int i=0; i<sklep.Capacity(); i++)
	{
		for (int j=0; j<tab2[ii]; j++)			
		{
			sklep.GetAt(i)->zakup();
		}
		ii++;
	}
	zapiszDoPliku(sklep, "Stan_sklepu.txt");			//		STAN PO DRUGIM KLIENCIE


	for (int i=0; i<sklep.Capacity(); i++)
	{
		for (int j=0; j<10; j++)			
		{
			sklep.GetAt(i)->dostawa();
		}
	}
	zapiszDoPliku(sklep, "Stan_sklepu.txt");			//		STAN PO DOSTAWIE
	
	return 0;
} 
