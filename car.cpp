#include "car.h"


Car::Car()
{
	x = 0;
	y = 0;
	//mass = 2000;
}


void Car::setName(string s)
{
	this->name = s;
}

void Car::move(int dx, int dy)
{
	x += dx;
	y += dy;
}

void Car::destroy()
{
	// sound.play();
}


std::string Car::info() const
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