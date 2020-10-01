#include <iostream>
#include <math.h>
using namespace std;
int main() {
	double x;
	cout << "x=";
	cin >> x;
	cout << "y=" << 4*pow((x-3),6) - 7*pow(x-3,3) + 2;
	return 0;
}