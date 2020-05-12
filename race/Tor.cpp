#include "Tor.h"
#include<iostream>
Tor::Tor()
{
}

void Tor::dodajLinie(int ile)
{
	for (int i = 0; i < ile; i++) {
		Linia* linia = new Linia(i);
		linie.push_back(linia);
	}
}
