#pragma once

class Geom
{
protected: // -> private
	int x, y;
	double rotated;

public: // -> то, как наследуем (у нас public)
	void move(int dx, int dy);
};