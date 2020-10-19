#include <iostream>

using namespace std;

int main() {
	setlocale(0, "");

	int a, b,c;

	cout << "A=";
	cin >> a;
	cout << "B=";
	cin >> b;
	cout << "C=";
	cin >> c;

	cout << (((a < b && b < c) == 1) ? "Высказывание верно" : "Высказывание неверно");

	return 0;
}