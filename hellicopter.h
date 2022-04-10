#pragma once
#include "player.h"
#include "tech.h"
#include "Geometry.h"

using namespace std;
class Hellicopter : public Tech, public Geom
{
	class Player* pl;

public:

	Hellicopter();
	void destroy();
	std::string info();

	void setName(string s);

};
