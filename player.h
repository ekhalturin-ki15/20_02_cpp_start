#pragma once
#include <string>
#include <iostream>
#include "car.h"
#include "Geometry.h"
using namespace std;

class Player : public Geom
{
	int hp;
	std::string name;
	int x, y;
	bool isInCar;
	class Car* driving_car; // Не видит 

public:
	Player();
	void move(int dx, int dy);
	std::string info();

	void setCar(class Car* car);
	

};