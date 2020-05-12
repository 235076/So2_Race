#include "Kierowca.h"
#include <random>
#include <iostream>


void Kierowca::race()
{
	int temp = 0;
	while (!exit) {

		if (tor.linie[temp]->m.try_lock()) {
			int part = 5;
			for (int i = 1; i < part; i++) {
				if (exit) {
					return;
				}
				progres_okrazenia = ((double)i / part) * 100;
				std::this_thread::sleep_for(std::chrono::seconds(1));
				std::cout << id << ", okrazenie:" << okrazenia << ", " << progres_okrazenia <<", wybrana linia: "<<tor.linie[temp]->id<< "\n";
			}
			okrazenia++;
			tor.linie[0]->m.unlock();
			temp = 0;
		}
		else {
			temp++;
			std::cout << temp;
		}
	}
}
