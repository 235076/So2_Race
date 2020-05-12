#include <iostream>
#include <vector>
#include "Kierowca.h"

int main() {
	int ile = 2;
	std::vector<Kierowca*> kierowcy;
	std::vector<Bolid> b;
	Tor tor;
	tor.dodajLinie(ile);
	for (int i = 1; i <= ile; i++) {
		Bolid bolid;
		b.push_back(bolid);
	}
	for (int i = 1; i <= ile; i++) {

		Kierowca* k = new Kierowca(i,tor,b[i-1]);
		kierowcy.push_back(k);
	}
	for (auto k : kierowcy) {
		k->t.join();
	}
	return 0;
}

