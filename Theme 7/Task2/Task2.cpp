#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUS");
	double Pi = acos(-1);
	cout << "������� �������� ���� � ��������" << endl;
	cout << "a = ";
	double a;
	cin >> a;
	cout << a << " ������ = " << (a * 180) / Pi << " ��������";
	return 0;
}