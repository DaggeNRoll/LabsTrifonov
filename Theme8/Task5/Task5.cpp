#include <iostream>

using namespace std;

int main() {
	setlocale(0, "");

	int n, x, y;
	cout << "������� ���������� �����: ";
	cin >> n;

	x = n / 100;
	y = n % 100;

	cout << "��� ������������ ������ ����� � ������������ � ������ ��������� ����� " << y * 10 + x;
	
	return 0;
}