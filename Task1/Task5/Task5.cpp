#include <iostream>
#include <cmath>

using namespace std;

bool div2(int x) {
	return (x % 2 == 0);
}

int sign(int x) {
	if (x > 0) {
		return 1;
	}
	else if (x < 0) {
		return -1;
	}
	else {
		return 0;
	}
}

int main() {
	setlocale(0, "");
	
	int x;

	cout << "Введите целое число:";
	cin >> x;


	if (div2(x)) {
		switch (sign(x)) {
		case -1:
			cout << "Отрицательное чётное число";
			break;

		case 0:
			cout << "Нулевое число";
			break;
		case 1:
			cout << "Положительное чётное число";
			break;
		}
	}
	else {
		switch (sign(x)) {
		case -1:
			cout << "Отрицательное нечётное число";
			break;
		case 1:
			cout << "Положительное нечётное число";
			break;
		}
	}

	return 0;

}