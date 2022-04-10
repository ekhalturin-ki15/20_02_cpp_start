#include "hellicopter.h"


Hellicopter::Hellicopter()
{
	mass = 30000;
	x = 0;
	y = 0;
}


void Hellicopter::setName(string s)
{
	this->name = s;
}


void Hellicopter::destroy()
{
	// sound.play();
}


std::string Hellicopter::info()
{
	string s;
	s += name;
	s += "\n";
	s += to_string(x) + " " + to_string(y);
	s += "\n";
	s += to_string(mass);
	s += "\n";

	return s;
}