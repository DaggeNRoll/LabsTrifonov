#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUS");
	double Pi = acos(-1);
	cout << "введите значение угла в радианах" << endl;
	cout << "a = ";
	double a;
	cin >> a;
	cout << a << " радиан = " << (a * 180) / Pi << " градусов";
	return 0;
}