#include <iostream>
#include <math.h>
using namespace std;
int main() {
	double x;
	cout << "x=";
	cin >> x;
	cout << "y=" << 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
	return 0;
}