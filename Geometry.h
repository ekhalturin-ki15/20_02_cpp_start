#pragma once

class Geom
{
protected: // -> private
	int x, y;
	double rotated;

public: // -> ��, ��� ��������� (� ��� public)
	virtual void move(int dx, int dy) = 0; // ����� ����������� �����

	void getter(int new_x, int new_y);
};