#include <iostream>
#include <cmath>
#include <locale.h>

double const Pi = acos(-1);

using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
	
	cout << "введите значение угла в радианах" << endl;
	cout << "a = ";
	
	double a;
	
	cin >> a;
	cout << a << " радиан = " << (a * 180) / Pi << " градусов";
	
	return 0;
}