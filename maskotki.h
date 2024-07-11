#ifndef _maskotki_h_
#define _maskotki_h_

#include "produkt.h"
#include <iostream>

class Maskotki : public Produkt
{
	protected:
		float wysokosc;
	public:
		Maskotki(std::string = "", float = 0.0, std::string = "", float = 0.0, int = 0, float = 0);
		virtual void dostawa();
		virtual void zakup();
		virtual void sprawdz();
		virtual int getIlosc();
		virtual std::string getNazwa();
};

#endif
