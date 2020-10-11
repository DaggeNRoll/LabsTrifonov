#include <iostream>
#include <cmath>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
	double Pi = acos(-1);
	
	cout << "введите значение угла в градусах" << endl;
	cout << "a = ";
	
	double a;
	
	cin >> a;
	cout << a << " градусов = " << (a*Pi ) / 180 << " радиан";
	
	return 0;
}