#pragma once

class Geom
{
protected: // -> private
	int x, y;
	double rotated;

public: // -> то, как наследуем (у нас public)
	virtual void move(int dx, int dy) = 0; // Чисто абстрактный метод

	void getter(int new_x, int new_y);
};