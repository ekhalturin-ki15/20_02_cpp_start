#include "player.h"


Player::Player()
{
	x = 0; y = 0;
	name = "Ivan";
	isInCar = false;
	driving_car = nullptr; // Не видит 
}

void Player::move(int dx, int dy)
{
	if (isInCar)
	{
		driving_car->move(dx, dy);
	}
	x += dx;
	y += dy;
}

std::string Player::info()
{
	std::string s;
	s += name; s += "\n";
	s += to_string(x); s += " "; s += to_string(y); s+= "\n";

	if (isInCar)
	{
		s += driving_car->info();
		s += "\n";
	}
	s += "\n";
	return s;
}

void Player::setCar(class Car* car)
{
	this->isInCar = true;
	this->driving_car = car;
}