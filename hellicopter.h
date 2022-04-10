#pragma once
#include "player.h"
#include "tech.h"
#include "Geometry.h"

using namespace std;
class Hellicopter : public Tech, public Geom
{
	class Player* pl;

public:

	void move(int dx, int dy) ;


	Hellicopter();
	void destroy();
	std::string info() const;

	void setName(string s);

};
