#include "Movie.h"
#include<iostream>
using namespace std;

Movie::Movie()
{
	name = nullptr;
	time = 0.0;
	year = 0;
	rezhiser = nullptr;
	zhanr = nullptr;
	data = 0;
}
Movie::Movie(const char* n, double t, int y, double d, const char* r, const char* z)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1,n);
	rezhiser = new char[strlen(r) + 1];
	strcpy_s(rezhiser, strlen(r) + 1, r);
	zhanr = new char[strlen(z) + 1];
	strcpy_s(zhanr, strlen(z) + 1, z);
	data = d;
	time = t;
	year = y;
}

Movie::Movie(const Movie& obj)
{
	name = new char[strlen(obj.name)+1];
	strcpy_s(name, strlen(obj.name) + 1, obj.name);
	rezhiser = new char[strlen(obj.rezhiser) + 1];
	strcpy_s(rezhiser, strlen(obj.rezhiser) + 1, obj.rezhiser);
	zhanr = new char[strlen(obj.zhanr) + 1];
	strcpy_s(zhanr, strlen(obj.zhanr) + 1, obj.zhanr);
	data = obj.data;
	time = obj.time;
	year = obj.year;
}
Movie::~Movie()
{
	delete[] name;
	delete[]rezhiser;
	delete[]zhanr;
	cout << "destructor\n";
}
void Movie::Print()
{
	cout<< "Name: " << name << "\t"
		<< "Time: " << time << "\t"
		<< "Year: " << year << "\t"
		<< "Zhanr: " << zhanr << "\t"
		<< "Rezhisor: " << rezhiser << "\t"
		<< "Data: " << data << endl;
}

void Movie::Input()
{
	char buff[100]{};
	cout << " write movie name -- ";
	cin.getline(buff, 100);
	if (name != nullptr) {
		delete[]name;
	}
	name = new char[strlen(buff) + 1];
	strcpy_s(name, strlen(buff) + 1, buff);
	cout << " write movie zhanr -- ";
	cin.getline(buff, 100);
	if (zhanr != nullptr) {
		delete[]zhanr;
	}
	zhanr = new char[strlen(buff) + 1];
	strcpy_s(zhanr, strlen(buff) + 1, buff);
	cout << " write movie reshisor -- ";
	cin.getline(buff, 100);
	if (rezhiser != nullptr) {
		delete[]rezhiser;
	}
	rezhiser = new char[strlen(buff) + 1];
	strcpy_s(rezhiser, strlen(buff) + 1, buff);
	cout << "write movie year -- ";
	cin >> year;
	cout << "write movie time -- ";
	cin >> time;
	cout << "write movie data -- ";
	cin >> data;
	cout << endl;
}
