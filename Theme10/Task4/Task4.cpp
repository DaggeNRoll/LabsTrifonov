#include <iostream>

using namespace std;

int main() {
	setlocale(0, "");

	int a, b, c,n;

	cout << "Введите трёхзначное число:";
	cin >> n;

	a = n % 10;
	b = (n / 10) % 10;
	c = n / 100;

	cout << (((a < b&& b < c) == 1)||((c < b&& b < a) == 1) ? "Высказывание верно" : "Высказывание неверно");

	return 0;
}