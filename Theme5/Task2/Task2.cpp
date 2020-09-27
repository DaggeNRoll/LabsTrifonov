#include <iostream>
#include <cmath>
using namespace std;
int main() {
	float a, b, c, ac, bc;
	cout << "A=";
	cin >> a;
	cout << "B=";
	cin >> b;
	cout << "C=";
	cin >> c;
	ac = fabsf(a - c);
	bc = fabsf(b - c);
	cout << "AC=" << ac << endl;
	cout << "BC=" << bc << endl;
	cout << "AC + BC = " << ac + bc;
	return 0;
}