#ifndef _klocki_h_
#define _klocki_h_

#include "produkt.h"
#include <iostream>

enum Rodzaje{lego=0, duplo, drewniane};

class Klocki : public Produkt
{
	protected:
		enum Rodzaje rodzaj;
	public:
		Klocki(std::string = "", float = 0.0, std::string = "", float = 0.0, int = 0, Rodzaje = lego);
		virtual void dostawa();
		virtual void zakup();
		virtual void sprawdz();
		virtual int getIlosc();
		virtual std::string getNazwa();
};

#endif
