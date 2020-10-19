#include <iostream>

using namespace std;

int main() {
	setlocale(0, "");

	int a, b;
	
	cout << "A=";
	cin >> a;
	cout << "B=";
	cin >> b;

	cout << (((a > 2 && b <= 3) == 1) ? "Высказывание верно" : "Высказывание неверно");

	return 0;
}