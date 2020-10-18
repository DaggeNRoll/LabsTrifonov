#include <iostream>
#include <cmath>

const double Pi = 3.14;

using namespace std;

int main() {
	setlocale(0, "");
	double a,ans;
	cout << "Введите значение угла в радианах (Число Пи вводите, как 3.14): ";
	cin >> a;

	ans = 180 * a / Pi;
	cout << a << " радиан = " << ans << " градусов";

	return 0;
}