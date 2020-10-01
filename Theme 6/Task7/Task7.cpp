#include <iostream>
using namespace std;
int main() {
	float a, b, c;
	cout << "a=";
	cin >> a;
	cout << a;
	b = a * a;
	c = a * b;
	a = b * c;
	b = a * a * a;
	cout << "^15=" << b;
	return 0;
}