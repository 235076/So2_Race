#include <thread>
#include <vector>
#include "Bolid.h"
#include "Tor.h"
class Kierowca
{
public:
	int id;
	std::thread t;
	Bolid &bolid;
	int okrazenia = 0;
	int progres_okrazenia = 0;
	Tor& tor;
	int akt_linia = NULL;
	bool exit = false;
	Kierowca(int id,Tor &t, Bolid &b) : id(id),tor(t), bolid(b), t(&Kierowca::race, this) {};
	void race();
};

