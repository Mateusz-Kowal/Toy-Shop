#ifndef _gry_h_
#define _gry_h_

#include "produkt.h"
#include <iostream>

class Gry : public Produkt
{
	protected:
		int iGraczy;
		int sWiek;
	public:
		Gry(std::string = "", float = 0.0, std::string = "", float = 0.0, int = 0, int =0, int=0);
		virtual void dostawa();
		virtual void zakup();
		virtual void sprawdz();
		virtual int getIlosc();
		virtual std::string getNazwa();
};

#endif
