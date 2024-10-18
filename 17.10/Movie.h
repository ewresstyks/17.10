#pragma once
class Movie
{  // режисер
   // жанр
   // дата
	char* name;
	double time;
	int year;
	char* rezhiser;
	char* zhanr;
	double data;
public:
	Movie();// constructor by def.
	Movie(const char* n, double t, int y, double d, const char* r, const char* z); // constructor by params
	Movie(const Movie & obj); // copy constructor
	~Movie(); // dectructor
	void Print();
	void Input();
};

