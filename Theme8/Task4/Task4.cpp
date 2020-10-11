#include <iostream>

using namespace std;

int main() {
	setlocale(0, "");
	int n, x, y;
	
	cout << "Введите двузначное число: ";
	cin >> n;
	
	x = n % 10;
	y = n / 10;
	swap(x, y);
	
	cout << "При перестановки цифр получится число " << y * 10 + x;
	
	return 0;
}