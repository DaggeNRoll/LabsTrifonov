#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	double i, x, waste;
	cout << "������� ������ ����� � ������: ";
	cin >> i;
	waste = modf(i / 1024,&x);
	cout << x << " ������(��) �������� �������� ������ ����";
}