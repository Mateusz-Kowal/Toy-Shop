#ifndef _lalki_h_
#define _lalki_h_

#include "produkt.h"
#include <iostream>

class Lalki : public Produkt
{
	public:
		Lalki(std::string = "", float = 0.0, std::string = "", float = 0.0, int = 0);
		virtual void dostawa();
		virtual void zakup();
		virtual void sprawdz();
		virtual int getIlosc();
		virtual std::string getNazwa();
};

#endif
