#include <iostream>

using namespace std;

int main() {
	setlocale(0, "");

	float x, y;

	cout << "Введите координату по X: ";
	cin >> x;
	cout << "Введите координату по Y: ";
	cin >> y;

	if (x > 0) {
		if (y > 0) {
			cout << "Точка расположена в первой четверти";
		}
		else {
			cout << "Точка расположена во второй четверти";
		}
	}
	else if (y > 0) {
		cout << "Точка расположена в четвёртой четверти";
	}
	else {
		cout << "Точка расположена в третьей четверти";
	}

	return 0;
}