#pragma once

class Geom
{
protected: // -> private
	int x, y;
	double rotated;

public: // -> ��, ��� ��������� (� ��� public)
	void move(int dx, int dy);
};