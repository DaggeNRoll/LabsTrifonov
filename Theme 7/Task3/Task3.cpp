#include <iostream>
#include <locale.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUS");
	float x, y, a, c;
	cout << "x=";
	cin >> x;
	cout << "a=";
	cin >> a;
	cout << "y=";
	cin >> y;
	c = a / x;
	cout << "1 �� ������ ����� " << c << " ������" << endl;
	cout << y << " �� ���� ������ �����(��) " << c * y << " ������";
	return 0;
}