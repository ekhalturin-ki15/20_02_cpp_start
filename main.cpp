#include <iostream>
#include <string>
#include "car.h"
#include "player.h"
#include "hellicopter.h"

using namespace std;


int main()
{
#ifdef _DEBUG
	FILE* IN, * OUT;
	freopen_s(&IN, "input.txt", "r", stdin);
	freopen_s(&OUT, "output.txt", "w", stdout);
#endif

	Player player;

	player.move(1, 2);

	cout << player.info();

	Car lada, ural;
	ural.setName("Ural");

	player.setCar(&lada);

	cout << player.info();

	player.setCar(&ural);

	cout << player.info();

	player.move(10, 20);

	cout <<  ural.info();

	cout << player.info();
	Hellicopter h;
	cout << h.info();

	return 0;
}