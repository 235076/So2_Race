#include "Linia.h"

Linia::Linia(int id)
{
	this->id = id;
	this->max_time = 10 + id;
	this->min_time = 10 - id;
}
