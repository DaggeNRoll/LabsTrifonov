#include <iostream>

using namespace std;

int main() {
	setlocale(0, "");

	int n, x, y;
	cout << "Введите трёхзначное число: ";
	cin >> n;

	x = n / 100;
	y = n % 100;

	cout << "При зачёркивании первой цифры и приписывании её справа получится число " << y * 10 + x;
	
	return 0;
}