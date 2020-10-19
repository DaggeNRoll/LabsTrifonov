#include <iostream>

using namespace std;

int main() {
	setlocale(0, "");

	unsigned int y, c, x;

	cout << "¬ведите год: ";
	cin >> y;

	x = y / 100;
	c = (y % 100 == 0) ? x : x + 1;

	cout << "Ёто " << c << "-й век";

	return 0;
}