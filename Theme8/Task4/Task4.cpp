#include <iostream>

using namespace std;

int main() {
	setlocale(0, "");
	int n, x, y;
	
	cout << "������� ���������� �����: ";
	cin >> n;
	
	x = n % 10;
	y = n / 10;
	swap(x, y);
	
	cout << "��� ������������ ���� ��������� ����� " << y * 10 + x;
	
	return 0;
}