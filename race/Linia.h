#include <mutex>

class Linia
{
public:
	int id;
	int min_time;
	int max_time;
	std::mutex m;

	Linia(int id);
};

