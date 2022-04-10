#include "Geometry.h"

#include <iostream>
#include <fstream>
#include <string>
#include "Global.h"
using namespace std;

void Geom::getter(int new_x, int new_y)
{
	if (new_x < 0)
	{
		x = 0;
		log_error << new_x << " < 0" << "\n"; log_error.close();
	}
	else
		x = new_x;
}