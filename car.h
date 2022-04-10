#pragma once
#include <string>
#include "player.h"
#include "tech.h"
#include "Geometry.h"

using namespace std;
class Car : public Tech, public Geom
{
	int wheels;
	class Player* pl;
	int doors;

public:

	Car();
	
	void destroy();
	std::string info() const;
	void move(int dx, int dy);
	void setName(string s);

};