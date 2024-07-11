#ifndef _produkt_h_
#define _produkt_h_

#include <iostream>

class Produkt
{
	protected:
		std::string nazwa;
		float cena;
		std::string producent;
		float waga;
		int dIlosc;
	public:
		Produkt(std::string = "", float = 0.0, std::string = "", float = 0.0, int = 0);
		virtual ~Produkt() {};
		virtual void dostawa()=0;
		virtual void zakup()=0;
		virtual void sprawdz()=0;
		virtual int getIlosc()=0;
		virtual std::string getNazwa()=0;
};

#endif
