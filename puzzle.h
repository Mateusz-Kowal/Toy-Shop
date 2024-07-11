#ifndef _puzzle_h_
#define _puzzle_h_

#include "produkt.h"
#include <iostream>

class Puzzle : public Produkt
{
	protected:
	int iElementow;
	public:
		Puzzle(std::string = "", float = 0.0, std::string = "", float = 0.0, int = 0, int = 0);
		virtual void dostawa();
		virtual void zakup();
		virtual void sprawdz();
		virtual int getIlosc();
		virtual std::string getNazwa();
};

#endif
