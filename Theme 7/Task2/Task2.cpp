#include <iostream>
#include <cmath>
#include <locale.h>

double const Pi = acos(-1);

using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
	
	cout << "������� �������� ���� � ��������" << endl;
	cout << "a = ";
	
	double a;
	
	cin >> a;
	cout << a << " ������ = " << (a * 180) / Pi << " ��������";
	
	return 0;
}